using UnityEngine;

[System.Serializable]
public class Wall : IWorldObject
{
    public float x1;
    public float x2;
    public float y1;
    public float y2;

    public float Length { get { return Vector2.Distance(new Vector2(x1, y1), new Vector2(x2, y2)); } }

    public Vector3 Position { get { return new Vector3((x1 + x2)/2, 0, (y1 + y2)/2); } }

    public Vector3 Rotation
    {
        get
        {
            Vector2 aVector = new Vector2(x1, y1) - new Vector2(x2, y2);
            float radians = Mathf.Atan2(aVector.y, aVector.x);
            float y = -radians * Mathf.Rad2Deg;

            return new Vector3(0, y, 0);
        }
    }
}
        
