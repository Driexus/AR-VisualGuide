using System;
using System.Security.Cryptography;
using System.Text;

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
            throw new NotImplementedException("TODO: encode to md5"); // TODO: encode to md5

        // As stated in the link above
        string stringToSign = string.Format("{0}\n{1}\n{2}\n{3}\n{4}", http_verb, content_MD5, content_type, date, requestPath);

        // Encode the message to HMAC-SHA1
        // https://stackoverflow.com/questions/6067751/how-to-generate-hmac-sha1-in-c
        var enc = Encoding.UTF8;
        HMACSHA1 hmac = new HMACSHA1(enc.GetBytes(serverSecretKey));
        byte[] stringToSignBytes = enc.GetBytes(stringToSign);
        var sha1Hash = hmac.ComputeHash(stringToSignBytes);

        // Convert to base64 
        var signature = Convert.ToBase64String(sha1Hash);

        return "VWS " + serverAccessKey + ":" + signature;
    }
}
