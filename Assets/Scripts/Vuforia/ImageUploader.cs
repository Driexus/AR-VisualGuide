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
        var cor1 = VuforiaTest.CreateImageTarget(imageAccess.texture, (string targetId) =>
        {
            if (targetId != null)
            {
                var cor2 = TryGetRating(targetId, (int rating) => Debug.Log(rating));
                StartCoroutine(cor2);
            }
        });

        StartCoroutine(cor1);
    }

    private IEnumerator TryGetRating(string targetId, Action<int> callback)
    {
        int imageRating = -2;
        int tries = 0;

        while (imageRating == -2 && tries < maxTries)
        {
            yield return VuforiaTest.GetImageTargetRating(targetId, (int rating) =>
            {
                imageRating = rating;
                tries++;
            });
            yield return new WaitForSeconds(waitTime);
        }
        callback(imageRating);
    }
}