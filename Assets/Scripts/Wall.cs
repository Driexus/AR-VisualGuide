using UnityEngine;

[System.Serializable]
public class Wall
{
    public float x1;
    public float x2;
    public float y1;
    public float y2;

    // TODO: Use these instead (make x,y properties maybe)
    private Vector2 _start;
    private Vector2 _end;

    public Wall(float x1, float y1, float x2, float y2)
    {
        this.x1 = x1;
        this.x2 = x2;
        this.y1 = y1;
        this.y2 = y2;
    }

    public float Length { get { return Vector2.Distance(new Vector2(x1, y1), new Vector2(x2, y2)); } }
    public Vector2 MiddlePoint { get { return (new Vector2(x1, y1) + new Vector2(x2, y2)) / 2 ;} }

    public float Angle 
    {
        get 
        {
            Vector2 aVector = new Vector2(x1, y1) - new Vector2(x2, y2);
            float radians = Mathf.Atan2(aVector.y, aVector.x);            
            return  - radians * Mathf.Rad2Deg;
        }
    }
}
        
