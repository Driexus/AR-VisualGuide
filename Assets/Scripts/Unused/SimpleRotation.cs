using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleRotation : MonoBehaviour
{
    public Vector3 rotSpeed = Vector3.zero;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    private void Update()
    {
        Vector3 timeRot = new Vector3(Time.realtimeSinceStartup, Time.realtimeSinceStartup, Time.realtimeSinceStartup);
        Vector3 finalRot = Vector3.Scale(timeRot, rotSpeed);
        gameObject.transform.localRotation = Quaternion.Euler(finalRot);
    }
}