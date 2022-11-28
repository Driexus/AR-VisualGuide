using UnityEngine;

[System.Serializable]
public class FirebaseImageTarget : IWorldObject
{
    public float euler_x;
    public float euler_y;
    public float euler_z;
    public float x;
    public float y;
    public float z;
    public string image_target_id;

    public Vector3 Position => new(x, z, y);
    public Vector3 Rotation => new(euler_x, euler_y, euler_z);
}