using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using Vuforia;
using System;

public class TestInstantTargetResolution : MonoBehaviour
{
    public float printedTargetSize;
    public string targetName;
    public string imageURL;

    public Texture2D gloabalTexture;

    void Start()
    {
        // Use Vuforia Application to invoke the function after Vuforia Engine is initialized
        VuforiaApplication.Instance.OnVuforiaStarted += () => StartCoroutine(RetrieveTextureFromWeb());
    }

    IEnumerator RetrieveTextureFromWeb()
    {
        using (UnityWebRequest uwr = UnityWebRequestTexture.GetTexture(imageURL))
        {
            yield return uwr.SendWebRequest();
            if (uwr.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(uwr.error);
            }
            else
            {
                // Get downloaded texture once the web request completes
                var texture = DownloadHandlerTexture.GetContent(uwr);
                Debug.Log("Image downloaded " + uwr);
                CreateImageTargetFromTexture(texture);
            }
        }
    }

    void CreateImageTargetFromTexture(Texture2D texture)
    {
        gloabalTexture = texture;
        var mTarget = VuforiaBehaviour.Instance.ObserverFactory.CreateImageTarget(
            texture,
            printedTargetSize,
            targetName);
        // add the Default Observer Event Handler to the newly created game object
        mTarget.gameObject.AddComponent<DefaultObserverEventHandler>();
        mTarget.transform.parent = transform;
        Debug.Log("Instant Image Target created " + mTarget.TargetName);
    }
}
