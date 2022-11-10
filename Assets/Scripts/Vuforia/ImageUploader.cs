using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ImageUploader : MonoBehaviour
{
    public FirebaseRepository firebaseRepo;
    public CameraImageAccess imageAccess;
    public int maxTries = 20;
    public float waitTime = 0.5f;

    private Texture2D _textureToUpload = null;

    public void CaptureAndUploadImage()
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
                var tex = NativeCamera.LoadImageAtPath(path, maxSize: 1000, markTextureNonReadable: false);
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
                        Debug.Log(rating);
                        if (rating >= 3)
                        {
                            var cor3 = firebaseRepo.UploadImageTarget("home", target);
                            StartCoroutine(cor3);
                        }
                            
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
}