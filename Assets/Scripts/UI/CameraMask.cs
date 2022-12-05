using UnityEngine;

// When this object is active changes the camera mask to the enabled mask
// When it gets disabled changes the mask back to the one the main camera had when this behaviour was awakened
public class CameraMask : MonoBehaviour
{
    private Camera mainCamera;
    private LayerMask defaultMask;
    public LayerMask enabledMask;
    private void Awake()
    {
        mainCamera = Camera.main;
        defaultMask = mainCamera.cullingMask;
    }
    private void OnEnable()
    {
        mainCamera.cullingMask = enabledMask;
    }

    private void OnDisable()
    {
        mainCamera.cullingMask = defaultMask;
    }
}
