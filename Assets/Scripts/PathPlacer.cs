using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Vuforia;

public class PathPlacer : MonoBehaviour
{
    public DevicePoseBehaviour devicePoseBehaviour;

    public PlaneFinderBehaviour planeFinderBehaviour;

    // Start is called before the first frame update
    void Start()
    {
        //planeFinderBehaviour.
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void LogHitResult(HitTestResult result)
    {
        Debug.Log(result.Position.ToString());
    }

}
