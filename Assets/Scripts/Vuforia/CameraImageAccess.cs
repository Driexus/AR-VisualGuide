using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class CameraImageAccess : MonoBehaviour
{
    public RawImage rawImage;
    public Texture2D texture;

    #region PRIVATE_MEMBERS

    private PixelFormat mPixelFormat = PixelFormat.RGB888;
    private bool mFormatRegistered = false;

    private int width;
    private int height;
    #endregion // PRIVATE_MEMBERS

    #region MONOBEHAVIOUR_METHODS
    void Start()
    {
        texture = new Texture2D(width, height, TextureFormat.RGB24, false);

        // Register Vuforia life-cycle callbacks:
        VuforiaApplication.Instance.OnVuforiaStarted += RegisterFormat;
        VuforiaApplication.Instance.OnVuforiaPaused += OnPause;
        VuforiaBehaviour.Instance.World.OnStateUpdated += OnVuforiaUpdated;
    }

    void OnDestroy()
    {
        // Unregister Vuforia life-cycle callbacks:
        VuforiaApplication.Instance.OnVuforiaStarted -= RegisterFormat;
        VuforiaApplication.Instance.OnVuforiaPaused -= OnPause;
        VuforiaBehaviour.Instance.World.OnStateUpdated -= OnVuforiaUpdated;
    }
    #endregion // MONOBEHAVIOUR_METHODS

    #region PRIVATE_METHODS
    /// 
    /// Called each time the Vuforia state is updated
    /// 
    void OnVuforiaUpdated()
    {
        if (mFormatRegistered)
        {
            Vuforia.Image image = VuforiaBehaviour.Instance.CameraDevice.GetCameraImage(mPixelFormat);
            image.CopyBufferToTexture(texture);
            texture.Apply();

            if (texture)
            {
                rawImage.texture = texture;
                rawImage.material.mainTexture = texture;
            }
        }
    }
    /// 
    /// Called when app is paused / resumed
    /// 
    void OnPause(bool paused)
    {
        if (paused)
        {
            Debug.Log("App was paused");
            UnregisterFormat();
        }
        else
        {
            Debug.Log("App was resumed");
            RegisterFormat();
        }
    }
    /// 
    /// Register the camera pixel format
    /// 
    void RegisterFormat()
    {
        // Vuforia has started, now register camera image format
        bool success = VuforiaBehaviour.Instance.CameraDevice.SetFrameFormat(mPixelFormat, true);
        if (success)

        {
            Debug.Log("Successfully registered pixel format " + mPixelFormat.ToString());
            mFormatRegistered = true;
        }
        else
        {
            Debug.LogError(
                "Failed to register pixel format " + mPixelFormat.ToString() +
                "\n the format may be unsupported by your device;" +
                "\n consider using a different pixel format.");
            mFormatRegistered = false;
        }
    }
    /// 
    /// Unregister the camera pixel format (e.g. call this when app is paused)
    /// 
    void UnregisterFormat()
    {
        Debug.Log("Unregistering camera pixel format " + mPixelFormat.ToString());
        VuforiaBehaviour.Instance.CameraDevice.SetFrameFormat(mPixelFormat, false);
        mFormatRegistered = false;
    }
    #endregion //PRIVATE_METHODS
}