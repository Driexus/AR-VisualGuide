using UnityEngine;

[System.Serializable]
public class ItemCoords : IWorldObject
{
    public float x;
    public float y;
    public float z;
    public string item_id;

    public Vector3 Position => new(x, z, y);
    public Vector3 Rotation => Vector3.zero;
}
