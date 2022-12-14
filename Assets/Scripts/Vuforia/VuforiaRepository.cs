using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using Random = UnityEngine.Random;

public static class VuforiaRepository
{
    private const string host = "https://vws.vuforia.com";

    public static IEnumerator UpdateImageTargetDimensions(string targetId, float width, Action<bool> callback)
    {
        var target = new PatchImageTarget()
        {
            width = width
        };

        var http_verb = "PUT";
        string content = JsonUtility.ToJson(target);
        string contentType = "application/json";
        var requestPath = "/targets/" + targetId; // Documentation says that the request path is "/targets", which is wrong...
        var date = GetDateNow();
        var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);

        var contentBytes = Encoding.UTF8.GetBytes(content);

        using (UnityWebRequest webRequest = UnityWebRequest.Put(host + requestPath, contentBytes))
        {
            // This line promts a warning but it is the only way i have found to calculate the auth key,
            // since the date must be known before the request is sent
            webRequest.SetRequestHeader("Date", date);
            webRequest.SetRequestHeader("Authorization", auth);

            // Setting the uploadHandler.contentType property does not work properly
            webRequest.SetRequestHeader("Content-Type", "application/json");

            yield return webRequest.SendWebRequest();
            Debug.Log(webRequest.downloadHandler.text);

            // Trigger callback
            if (callback != null)
            { 
                if (webRequest.responseCode == 200)
                    callback(true);
                else
                    callback(false);
            }
        }
    }

    public static IEnumerator DeleteImageTarget(string targetId, Action<bool> callback)
    {
        var http_verb = "DELETE";
        string content = "";
        string contentType = "";
        var requestPath = "/targets/" + targetId;
        var date = GetDateNow();
        var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);

        using (UnityWebRequest webRequest = UnityWebRequest.Delete(host + requestPath))
        {
            // This line promts a warning but it is the only way i have found to calculate the auth key,
            // since the date must be known before the request is sent
            webRequest.SetRequestHeader("Date", date);
            webRequest.SetRequestHeader("Authorization", auth);

            yield return webRequest.SendWebRequest();
            Debug.Log("Delete request response code: " + webRequest.responseCode);

            // Trigger callback
            if (callback != null)
            {
                if (webRequest.responseCode == 200)
                    callback(true);
                else
                    callback(false);
            }            
        }
    }

    // Returns the image target rating (0-5) in the callback, -1 if the rating is being processed (server value), or -2 if the request failed
    public static IEnumerator GetImageTargetRating(string targetId, Action<int> callback)
    {
        var http_verb = "GET";
        string content = "";
        string contentType = "";
        var requestPath = "/targets/" + targetId;
        var date = GetDateNow();
        var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);

        using (UnityWebRequest webRequest = UnityWebRequest.Get(host + requestPath))
        {
            // This line promts a warning but it is the only way i have found to calculate the auth key,
            // since the date must be known before the request is sent
            webRequest.SetRequestHeader("Date", date);
            webRequest.SetRequestHeader("Authorization", auth);

            yield return webRequest.SendWebRequest();
            Debug.Log(webRequest.downloadHandler.text);

            // Trigger callback
            if (callback != null)
            {
                if (webRequest.responseCode == 200)
                {
                    var json = JObject.Parse(webRequest.downloadHandler.text);
                    var trackingRating = json["target_record"]["tracking_rating"].ToObject<int>();
                    callback(trackingRating);
                }
                else
                    callback(-2);
            }
        }
    }

    // Attempts to create an image target in the vuforia cloud. Callback returns the id of the target or null if the operation failed.
    public static IEnumerator CreateImageTarget(Texture2D texture, Action<KeyValuePair<String, ImageTarget>> callback)
    {
        // Convert the texture to RGB24 format
        var tex24 = new Texture2D(texture.width, texture.height, TextureFormat.RGB24, false);
        tex24.SetPixels(texture.GetPixels());
        tex24.Apply();

        // Get the base64 representation of a jpg image based on the RGB24 texture
        var imageBytes = tex24.EncodeToJPG();
        var imageString = Convert.ToBase64String(imageBytes);

        // Create a new ImageTarget with default values
        var target = new ImageTarget()
        {
            // Name must be unique in database according to vuforia docs
            name = GetRandomString(60),
            image = imageString,
            width = 1
        };

        var http_verb = "POST";
        string content = JsonUtility.ToJson(target);
        string contentType = "application/json";
        var requestPath = "/targets";
        var date = GetDateNow();
        var auth = GetVWSAuth(http_verb, content, contentType, date, requestPath);

        using (UnityWebRequest webRequest = UnityWebRequest.Post(host + requestPath, new WWWForm()))
        {
            // Set the message body of the post request
            var contentBytes = Encoding.UTF8.GetBytes(content);
            webRequest.uploadHandler = new UploadHandlerRaw(contentBytes);

            // This line promts a warning but it is the only way i have found to calculate the auth key,
            // since the date must be known before the request is sent
            webRequest.SetRequestHeader("Date", date);
            webRequest.SetRequestHeader("Authorization", auth);

            // Setting the uploadHandler.contentType property does not work properly
            webRequest.SetRequestHeader("Content-Type", "application/json");

            yield return webRequest.SendWebRequest();
            Debug.Log(webRequest.downloadHandler.text);

            // Trigger callback
            if (callback != null)
            {
                if (webRequest.responseCode == 201)
                {
                    var json = JObject.Parse(webRequest.downloadHandler.text);
                    var targetId = json["target_id"];

                    if (targetId.Type is JTokenType.String)
                        callback(new KeyValuePair<String, ImageTarget>(targetId.ToObject<string>(), target));
                    else
                        callback(new KeyValuePair<String, ImageTarget>());
                }
                else
                    callback(new KeyValuePair<String, ImageTarget>());
            }
        }
    }

    // Returns a random string of custom length containing letters (both upper and lower) and numbers
    private static string GetRandomString(int length)
    {
        const string glyphs = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string randomString = "";
        for (int i = 0; i < length; i++)
            randomString += glyphs[Random.Range(0, glyphs.Length)];

        return randomString;
    }

    // Returns the current date formatted in rfc1123
    private static string GetDateNow()
    {
        return string.Format("{0:r}", DateTime.Now.ToUniversalTime());
    }

    // Returns a VWS Auth String using the format from here https://library.vuforia.com/web-api/vuforia-web-api-authentication
    // Final signature (without the access key) is: Signature = Base64(HMAC-SHA1(server_secret_key, StringToSign));
    private static string GetVWSAuth(string http_verb, string content, string content_type, string date, string requestPath)
    {
        // Get vuforia keys
        string serverAccessKey = BuildingViewModel.Instance.CurrentBuilding.vuforia_access_key;
        string serverSecretKey = BuildingViewModel.Instance.CurrentBuilding.vuforia_secret_key;

        if (serverAccessKey == null || serverSecretKey == null)
            throw new Exception("Could not find vuforia keys.");

        var enc = Encoding.UTF8;

        // Calculate the MD5 hash of the content string. If null then replace with the empty md5 hash.
        string content_MD5;
        if (content == null)
            content_MD5 = "d41d8cd98f00b204e9800998ecf8427e"; // Empty MD5
        else
        {
            MD5 md5 = MD5.Create();
            byte[] inputBytes = enc.GetBytes(content);
            byte[] hash = md5.ComputeHash(inputBytes);
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < hash.Length; i++)
            {
                sb.Append(hash[i].ToString("X2"));
            }
            content_MD5 = sb.ToString().ToLowerInvariant();
        }

        // As stated in the link above
        string stringToSign = string.Format("{0}\n{1}\n{2}\n{3}\n{4}", http_verb, content_MD5, content_type, date, requestPath);

        // Encode the message to HMAC-SHA1
        // https://stackoverflow.com/questions/6067751/how-to-generate-hmac-sha1-in-c
        HMACSHA1 hmac = new HMACSHA1(enc.GetBytes(serverSecretKey));
        byte[] stringToSignBytes = enc.GetBytes(stringToSign);
        var sha1Hash = hmac.ComputeHash(stringToSignBytes);

        // Convert to base64 
        var signature = Convert.ToBase64String(sha1Hash);

        return "VWS " + serverAccessKey + ":" + signature;
    }
}