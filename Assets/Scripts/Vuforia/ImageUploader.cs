using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ImageUploader : SingletonMonoBehaviour<ImageUploader>
{
    public FirebaseRepository firebaseRepo;
    public CameraImageAccess imageAccess;
    public int maxTries = 20;
    public float waitTime = 0.5f;

    private Texture2D _textureToUpload = null;

    public UnityEvent<VuforiaTargetResult> onRatingFetched = new();

    public void CaptureAndCropImage()
    {
        // If we are on editor grab texture from vuforia ImageAccess script. On android, open the native camera app for better picture quality.
#if UNITY_EDITOR
        // Copy the texture
        var tex = new Texture2D(imageAccess.texture.width, imageAccess.texture.height);
        var pixels = imageAccess.texture.GetPixels();
        tex.SetPixels(pixels);
        tex.Apply();

        CropAndUpload(tex);
       
#elif UNITY_ANDROID
        NativeCamera.Permission permission = NativeCamera.TakePicture((path) =>
        {
            Debug.Log("Image path: " + path);
            if (path != null)
            {
                // Create a Texture2D from the captured image
                var tex = NativeCamera.LoadImageAtPath(path, maxSize: 2048, markTextureNonReadable: false);
                CropAndUpload(tex);
            }
        });
#endif
    }

    // Crop the image and upload it
    private void CropAndUpload(Texture2D tex)
    {
        ImageCropper.Settings settings = new()
        {
            markTextureNonReadable = false
        };
        ImageCropper.Instance.Show(tex, OnCrop, settings);
    }

    // If we cropped successfully, upload the texture to vuforia
    private void OnCrop(bool result, Texture originalImage, Texture2D croppedImage)
    {
        if (result)
        {
            _textureToUpload = croppedImage;
            TryUploadTexture();
        }
    }

    // Try to upload the texture to vuforia. If successful show option to upload it to firebase or delete it permanently
    private void TryUploadTexture()
    {
        if (_textureToUpload != null)
        {
            var cor1 = VuforiaRepository.CreateImageTarget(_textureToUpload, (KeyValuePair<String, ImageTarget> target) =>
            {
                if (!target.Equals(default(KeyValuePair<String, ImageTarget>)))
                {
                    var cor2 = TryGetRating(target.Key, (int rating) =>
                    {
                        var result = new VuforiaTargetResult
                        {
                            target = target,
                            rating = rating,
                            texture = _textureToUpload
                        };
                        onRatingFetched?.Invoke(result);                            
                    });
                    StartCoroutine(cor2);
                }
                else
                    Debug.Log("Upload failed");
            });

            StartCoroutine(cor1);
        }
        else
            Debug.Log("Upload texture is null");        
    }

    private IEnumerator TryGetRating(string targetId, Action<int> callback)
    {
        int imageRating = -1;
        int tries = 0;

        while (imageRating == -1 && tries < maxTries)
        {
            yield return VuforiaRepository.GetImageTargetRating(targetId, (int rating) =>
            {
                imageRating = rating;
                tries++;
            });
            yield return new WaitForSeconds(waitTime);
        }
        callback(imageRating);
    }

    // Upload the image target on Firebase and update its width on vufoira database
    public void UploadImageTarget(KeyValuePair<String, ImageTarget> target)
    {
        var currentBuildingId = BuildingViewModel.instance.CurrentBuilding.Id;
        var cor = firebaseRepo.UploadImageTarget(currentBuildingId, target);
        StartCoroutine(cor);

        var cor2 = UpdateWidth(target, 20);
        StartCoroutine(cor2);
    }

    // Delete the target from the vuforia database
    public void DiscardImageTarget(KeyValuePair<String, ImageTarget> target)
    {
        var cor = DeleteTarget(target, 20);
        StartCoroutine(cor);
    }

    private IEnumerator UpdateWidth(KeyValuePair<String, ImageTarget> target, int maxAttempts)
    {
        bool isCompleted = false;
        int attempts = 0;
        while (!isCompleted && attempts < maxAttempts)
        {
            yield return VuforiaRepository.UpdateImageTargetDimensions(target.Key, target.Value.width, (bool success) => isCompleted = success);
            yield return new WaitForSeconds(5);
            attempts++;
        }            
    }

    private IEnumerator DeleteTarget(KeyValuePair<String, ImageTarget> target, int maxAttempts)
    {
        bool isCompleted = false;
        int attempts = 0;
        while (!isCompleted && attempts < maxAttempts)
        {
            yield return VuforiaRepository.DeleteImageTarget(target.Key, (bool success) => isCompleted = success);
            yield return new WaitForSeconds(5);
            attempts++;
        }
    }

    public struct VuforiaTargetResult
    {
        public KeyValuePair<String, ImageTarget> target;
        public int rating;
        public Texture2D texture;
    }
}