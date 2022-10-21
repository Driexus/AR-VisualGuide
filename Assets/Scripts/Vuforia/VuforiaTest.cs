using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class VuforiaTest : MonoBehaviour
{
    private string targetID = "0904b277d93e49c9835bd32de7e1aaeb";
    private string date;
    private string host = "https://vws.vuforia.com";

    void Start()
    {
        var http_verb = "GET";
        string content = "";
        string requestBody = "";
        var requestPath = "/targets/" + targetID;
        date = string.Format("{0:r}", DateTime.Now.ToUniversalTime());

        Debug.Log("Date: " + date);

        var auth = VuforiaAuth.GetVWSAuth(http_verb, content, requestBody, date, requestPath);

        StartCoroutine(GetRequest(requestPath, auth));
    }

    IEnumerator GetRequest(string requestPath, string auth)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(host + requestPath))
        {
            // This line promts a warning but it is the only way i have found to calculate the auth key,
            // since the date must be known before the request is sent
            webRequest.SetRequestHeader("Date", date);
            webRequest.SetRequestHeader("Authorization", auth);

            yield return webRequest.SendWebRequest();

            Debug.Log(webRequest.responseCode);
            Debug.Log(webRequest.downloadHandler.text);            
        }
    }
}