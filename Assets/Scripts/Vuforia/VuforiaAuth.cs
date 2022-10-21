using System;
using System.Security.Cryptography;
using System.Text;
using UnityEngine;

public static class VuforiaAuth
{
    private static string serverAccessKey = "b0a8d1d27636853b119960f0166c852772d22800";
    private static string serverSecretKey = "b7ebd46f82514942244bda0b89e7879d4318b78a";

    private static string empty_MD5 =  "d41d8cd98f00b204e9800998ecf8427e";

    // Returns a VWS Auth String using the format from here https://library.vuforia.com/web-api/vuforia-web-api-authentication
    // Final signature (without the access key) is: Signature = Base64(HMAC-SHA1(server_secret_key, StringToSign));
    public static string GetVWSAuth(string http_verb, string content, string content_type, string date, string requestPath)
    {
        string content_MD5;
        if (content == null || content == "")
            content_MD5 = empty_MD5;
        else
            throw new NotImplementedException(); // TODO: encode to md5

        Debug.Log("Secret: " + serverSecretKey);

        // As stated in the link above
        string stringToSign = http_verb + "\n" + content_MD5 + "\n" + content_type + "\n" + date + "\n" + requestPath;
        Debug.Log("message: " + stringToSign);

        // Encode the message to HMAC-SHA1
        // https://stackoverflow.com/questions/6067751/how-to-generate-hmac-sha1-in-c
        var enc = Encoding.UTF8;
        HMACSHA1 hmac = new HMACSHA1(enc.GetBytes(serverSecretKey));
        byte[] buffer = enc.GetBytes(stringToSign);

        var sha1_string = BitConverter.ToString(hmac.ComputeHash(buffer)).ToLowerInvariant().Replace("-", "");


        Debug.Log("SHA1: " + sha1_string);

        // Convert to base64 (needs UTF8 as input)
        // https://stackoverflow.com/questions/11743160/how-do-i-encode-and-decode-a-base64-string
        var sha1_bytes = enc.GetBytes(sha1_string);
        var signature = Convert.ToBase64String(sha1_bytes);

        Debug.Log("signature: " + signature);

        return "VWS " + serverAccessKey + ":" + signature;
    }
}
