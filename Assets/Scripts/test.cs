using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{
    public Vector3 rot;
    public Vector3 baseRot;
    public Vector4 quatRot;
    public Quaternion endRot;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        /*endRot = Quaternion.AngleAxis(rot.x, Vector3.right) *
            Quaternion.AngleAxis(rot.z, Vector3.forward) *
            Quaternion.AngleAxis(rot.y, Vector3.up);*/

        endRot = Quaternion.Euler(baseRot) * new Quaternion(quatRot.x, -quatRot.y, -quatRot.z, quatRot.w);
       
        transform.rotation = endRot;
    }
}
