/* Script taken from here
 * https://stackoverflow.com/questions/36239705/serialize-and-deserialize-json-and-json-array-in-unity
 * */

using UnityEngine;

public static class JsonHelper
{
    public static T[] FromJson<T>(string json)
    {
        Wrapper<T> wrapper = JsonUtility.FromJson<Wrapper<T>>(json);
        return wrapper.Items;
    }

    public static T[] FromServerJson<T>(string serverJson)
    {
        string fixedJson = FixJson(serverJson);
        return FromJson<T>(fixedJson);
    }

    public static string ToJson<T>(T[] array)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return JsonUtility.ToJson(wrapper);
    }

    public static string ToJson<T>(T[] array, bool prettyPrint)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return JsonUtility.ToJson(wrapper, prettyPrint);
    }

    private static string FixJson(string value)
    {
        value = "{\"Items\":" + value + "}";
        return value;
    }

    [System.Serializable]
    private class Wrapper<T>
    {
        public T[] Items;
    }
}