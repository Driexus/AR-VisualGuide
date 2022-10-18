using UnityEngine;

[System.Serializable]
public struct Item : IWorldObject
{
    public string name;
    public float x;
    public float y;
    public float z;

    public Vector3 Position => new(x, z, y);

    public Vector3 Rotation => new(0, 0, 0);
}