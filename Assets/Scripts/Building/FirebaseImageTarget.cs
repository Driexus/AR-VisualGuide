using UnityEngine;

[System.Serializable]
public class FirebaseImageTarget : ImageTarget, IWorldObject
{
    public float euler_x;
    public float euler_y;
    public float euler_z;
    public float x;
    public float y;
    public float z;

    public Vector3 Position { get { return new Vector3(x, z, y); } }

    public Vector3 Rotation { get { return new Vector3(euler_x, euler_y, euler_z); } }
}