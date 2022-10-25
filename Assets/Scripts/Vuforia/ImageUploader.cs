using System;
using System.Collections;
using UnityEngine;

public class ImageUploader : MonoBehaviour
{
    public CameraImageAccess imageAccess;
    public int maxTries = 20;
    public float waitTime = 0.5f;

    private Texture2D _textureToUpload = null;

    public void CaptureAndUploadImage()
    {
        // If we are on editor grab texture from vuforia ImageAccess script. On android, open the native camera app for better picture quality.
#if UNITY_EDITOR
        _textureToUpload = imageAccess.texture;
        TryUploadTexture();
#elif UNITY_ANDROID
        NativeCamera.Permission permission = NativeCamera.TakePicture((path) =>
        {
            Debug.Log("Image path: " + path);
            if (path != null)
            {
                // Create a Texture2D from the captured image
                _textureToUpload = NativeCamera.LoadImageAtPath(path, markTextureNonReadable: false);
                TryUploadTexture();
            }
        });
#endif
    }

    private void TryUploadTexture()
    {
        if (_textureToUpload != null)
        {
            var cor1 = VuforiaRepository.CreateImageTarget(_textureToUpload, (string targetId) =>
            {
                if (targetId != null)
                {
                    var cor2 = TryGetRating(targetId, (int rating) => Debug.Log(rating));
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