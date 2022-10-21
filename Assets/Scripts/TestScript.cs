using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using Vuforia;
using System;

public class TestScript : MonoBehaviour
{
    public Texture2D textureFile;
    public float printedTargetSize;
    public string targetName;

    private bool hasRun = false;
    void Start()
    {
        // Use Vuforia Application to invoke the function after Vuforia Engine is initialized
        //VuforiaApplication.Instance.OnVuforiaStarted += CreateImageTargetFromSideloadedTexture;
        //CreateImageTargetFromSideloadedTexture();
    }

    private void Update()
    {
        if (Time.realtimeSinceStartup >= 12 && !hasRun)
        {
            hasRun = true;
            string url = "https://www.e-shop.gr/images/BKS/BKS.0481156.jpg";
            var cor = RetrieveTextureFromWeb(url);
            StartCoroutine(cor);

            string url2 = "https://production-metabook-covers-4.ams3.digitaloceanspaces.com/files/4e/24/32b5bfd0-f2bb-45fe-bdbf-9bd92568c235.jpg";
            var cor2 = RetrieveTextureFromWeb(url2);
            StartCoroutine(cor2);
        }

    }
    IEnumerator RetrieveTextureFromWeb(string url)
    {
        using (UnityWebRequest uwr = UnityWebRequestTexture.GetTexture(url))
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
        var mTarget = VuforiaBehaviour.Instance.ObserverFactory.CreateImageTarget(
            texture,
            printedTargetSize,
            targetName);
        // add the Default Observer Event Handler to the newly created game object
        mTarget.gameObject.AddComponent<DefaultObserverEventHandler>();
        Debug.Log("Instant Image Target created " + mTarget.TargetName);


        GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        sphere.transform.parent = mTarget.transform;
        sphere.transform.localPosition = new Vector3(0, 0.5f, 0);
        sphere.GetComponent<MeshRenderer>().enabled = true;
    }
}
