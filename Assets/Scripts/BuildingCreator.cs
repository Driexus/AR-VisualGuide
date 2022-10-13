using UnityEngine;
using static System.Math;

public class BuildingCreator : MonoBehaviour
{
    public delegate void WallsUpdatedEventHandler(Wall[] walls);
    public event WallsUpdatedEventHandler WallsUpdated;    

    private Wall[] _walls;
    public Wall[] Walls
    {
        get { return _walls; }
        set
        {
            _walls = value;
            DestroyChildren();
            CreateWalls();
            CreateFloor();
            WallsUpdated(_walls);
        }
    }
    public float wallWidth;
    public float wallHeight;

    private void CreateWalls()
    {
        for (int i = 0; i < _walls.Length; i++)
        {
            GameObject wall = GameObject.CreatePrimitive(PrimitiveType.Cube);
            wall.transform.parent = transform;
            wall.name = "Wall (" + (i + 1).ToString() + ")";

            wall.transform.localScale = new Vector3(_walls[i].Length, wallHeight, wallWidth);

            wall.transform.position = new Vector3(_walls[i].MiddlePoint.x, wallHeight / 2, _walls[i].MiddlePoint.y);

            wall.transform.localRotation = Quaternion.Euler(new Vector3(0, _walls[i].Angle, 0));

            wall.gameObject.layer = LayerMask.NameToLayer("Geometry");
        }
    }

    private void DestroyChildren()
    {
        foreach (Transform child in transform)
            Destroy(child.gameObject);
    }

    private void CreateFloor()
    {
        float maxX = 0;
        float minX = 0;
        float maxY = 0;
        float minY = 0;

        for (int i = 0; i < _walls.Length; i++)
        {
            Wall wall = _walls[i];

            if (i == 0)
            {
                maxX = Max(wall.x1, wall.x2);
                minX = Min(wall.x1, wall.x2);
                maxY = Max(wall.y1, wall.y2);
                minY = Min(wall.y1, wall.y2);
            }
            else
            {
                maxX = MaxOfThree(maxX, wall.x1, wall.x2);
                minX = MinOfThree(minX, wall.x1, wall.x2);
                maxY = MaxOfThree(maxY, wall.y1, wall.y2);
                minY = MinOfThree(minY, wall.y1, wall.y2);
            }
        }

        GameObject floor = GameObject.CreatePrimitive(PrimitiveType.Plane);
        floor.gameObject.name = "Floor";
        floor.transform.parent = transform;
        floor.transform.position = new Vector3((maxX + minX) / 2, 0, (maxY + minY) / 2);

        // A plane is 10* scaled compared to the rest of unity primitives so we need to divide by 10
        // https://forum.unity.com/threads/really-dumb-question-scale-of-plane-compared-to-cube.33835/
        floor.transform.localScale = new Vector3(Abs(maxX - minX) / 10, 0, Abs(maxY - minY) / 10);

        floor.gameObject.layer = LayerMask.NameToLayer("Geometry");
    }

    private float MaxOfThree(float a, float b, float c)
    {
        float result = a;
        result = Max(result, b);
        result = Max(result, c);
        return result;
    }

    private float MinOfThree(float a, float b, float c)
    {
        float result = a;
        result = Min(result, b);
        result = Min(result, c);
        return result;
    }
}