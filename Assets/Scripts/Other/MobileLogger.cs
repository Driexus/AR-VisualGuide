using UnityEngine;
using TMPro;

public class MobileLogger : MonoBehaviour
{
    public TMP_Text tmp_text;

    void LogToText(string logString, string stackTrace, LogType type)
    {
        tmp_text.text = logString;
    }

    private void OnEnable()
    {
        Application.logMessageReceived += LogToText;
    }

    private void OnDisable()
    {
        Application.logMessageReceived -= LogToText;
    }
}