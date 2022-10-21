using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using System.Net.Http;
using System.Net.Http.Headers;

public class VuforiaTest : MonoBehaviour
{
    private string targetID = "0904b277d93e49c9835bd32de7e1aaeb";
    private string date;
    private string host = "https://vws.vuforia.com";

    // Start is called before the first frame update
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
            webRequest.SetRequestHeader("Date", date);
            webRequest.SetRequestHeader("Authorization", auth);

            // Request and wait for the desired page.
            yield return webRequest.SendWebRequest();

            Debug.Log(webRequest.error);
            Debug.Log(webRequest.result);
        }
    }

    /*    private async void HttpTest()
    {
        HttpClient httpClient = new();

        using (var requestMessage = new HttpRequestMessage(HttpMethod.Get, "https://your.site.com"))
        {
            requestMessage.Headers.Authorization = new AuthenticationHeaderValue("Bearer", your_token);
            requestMessage.Headers.Date = date;

            await httpClient.SendAsync(requestMessage);
        }
    }*/

    /* private byte[] requestBytesArray;

     public void CallPostTarget()
     {
         StartCoroutine(PostNewTarget());
     }

     IEnumerator PostNewTarget()
     {

         string requestPath = "/targets";
         string serviceURI = url + requestPath;
         string httpAction = "POST";
         string contentType = "application/json";
         string date = string.Format("{0:r}", DateTime.Now.ToUniversalTime());

         Debug.Log(date);


         var headers = form.headers;
         byte[] rawData = form.data;
         headers["host"] = url;
         headers["date"] = date;
         headers["Content-Type"] = contentType;

         HttpWebRequest httpWReq = (HttpWebRequest)HttpWebRequest.Create(serviceURI);

         MD5 md5 = MD5.Create();
         var contentMD5bytes = md5.ComputeHash(System.Text.Encoding.ASCII.GetBytes(requestBody));
         System.Text.StringBuilder sb = new System.Text.StringBuilder();
         for (int i = 0; i < contentMD5bytes.Length; i++)
         {
             sb.Append(contentMD5bytes[i].ToString("x2"));
         }

         string contentMD5 = sb.ToString();

         string stringToSign = string.Format("{0}\n{1}\n{2}\n{3}\n{4}", httpAction, contentMD5, contentType, date, requestPath);

         HMACSHA1 sha1 = new HMACSHA1(System.Text.Encoding.ASCII.GetBytes(secret_key));
         byte[] sha1Bytes = System.Text.Encoding.ASCII.GetBytes(stringToSign);
         MemoryStream stream = new MemoryStream(sha1Bytes);
         byte[] sha1Hash = sha1.ComputeHash(stream);
         string signature = System.Convert.ToBase64String(sha1Hash);

         headers["Authorization"] = string.Format("VWS {0}:{1}", access_key, signature);

         Debug.Log("<color=green>Signature: " + signature + "</color>");

         WWW request = new WWW(serviceURI, System.Text.Encoding.UTF8.GetBytes(JsonUtility.ToJson(model)), headers);
         yield return request;

         if (request.error != null)
         {
             Debug.Log("request error: " + request.error);
         }
         else
         {
             Debug.Log("request success");
             Debug.Log("returned data" + request.text);
         }
     }*/
}