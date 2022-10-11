using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildingCreator : MonoBehaviour
{
    public Wall[] walls;
    public float wallWidth;
    public float wallHeight;
    void Start()
    {
        for (int i = 0; i < walls.Length; i++)
        {
            GameObject wall = GameObject.CreatePrimitive(PrimitiveType.Cube);
            wall.transform.parent = transform;
            wall.name = "Wall (" + (i + 1).ToString() + ")";

            wall.transform.localScale = new Vector3(walls[i].Length, wallHeight, wallWidth);

            wall.transform.position = new Vector3(walls[i].MiddlePoint.x, wallHeight/2, walls[i].MiddlePoint.y);

            wall.transform.localRotation = Quaternion.Euler(new Vector3(0, walls[i].Angle, 0));
        }        
    }
}