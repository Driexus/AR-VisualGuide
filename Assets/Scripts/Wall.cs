using UnityEngine;

[System.Serializable]
public class Wall
{
    public Vector2 start;
    public Vector2 end;

    public Wall(Vector2 start, Vector2 end)
    {
        this.start = start;
        this.end = end;
    }

    public float Length { get { return Vector2.Distance(start, end); } }
    public Vector2 MiddlePoint { get { return (start + end) / 2 ;} }

    public float Angle 
    {
        get 
        {
            Vector2 aVector = end - start;
            float radians = Mathf.Atan2(aVector.y, aVector.x);            
            return  - radians * Mathf.Rad2Deg;
        }
    }
}
        
