using System;
using System.Collections;
using UnityEngine;

public class ImageUploader : MonoBehaviour
{
    public CameraImageAccess imageAccess;
    public int maxTries = 20;
    public float waitTime = 0.5f;

    public void UploadImage()
    {
        var cor1 = VuforiaRepository.CreateImageTarget(imageAccess.texture, (string targetId) =>
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