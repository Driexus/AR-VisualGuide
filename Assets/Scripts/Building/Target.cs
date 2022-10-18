using UnityEngine;

[System.Serializable]
public class Target : IWorldObject
{
    public float orientation;
    public float x;
    public float y;

    public Vector3 Position { get { return new Vector3(x, 0, y); } }

    public Vector3 Rotation { get { return new Vector3(0, orientation, 0); } }
}