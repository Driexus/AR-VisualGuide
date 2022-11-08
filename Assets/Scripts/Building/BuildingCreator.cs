using ExtensionMethods;
using UnityEngine;
using static System.Math;
using System;
using Vuforia;
using System.Collections.Generic;

public class BuildingCreator : MonoBehaviour
{
    public BuildingViewModel buildingVM;

    public delegate void WallsUpdatedEventHandler(Wall[] walls);
    public event WallsUpdatedEventHandler WallsUpdated;    

    public float wallWidth;
    public float wallHeight;
    public uint initialWallCount;

    private Wall[] _walls;
    private Dictionary<string, ImageTarget> _imageTargets;

    private GameObject wallObjectPool;
    private GameObject floor;
    private GameObject wallCollection;

    private void Awake()
    {
        InstantiateWallObjectPool();

        // Create floor
        floor = GameObject.CreatePrimitive(PrimitiveType.Plane);
        floor.gameObject.name = "Floor";
        floor.transform.parent = transform;
        floor.layer = LayerMask.NameToLayer("Geometry");

        // Create walls collection
        wallCollection = new GameObject();
        wallCollection.gameObject.name = "Walls";
        wallCollection.transform.parent = transform;

        // Change the walls when the current building changes
        buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => LoadNewBuilding());
    }

    private void LoadNewBuilding()
    {
        _walls = buildingVM.CurrentBuilding.walls;
        _imageTargets = buildingVM.CurrentBuilding.image_targets;
        LoadWalls();
        LoadFloor();
        LoadImageTargets();
        WallsUpdated(_walls);
    }

    private void LoadImageTargets()
    {
        foreach (ImageTarget target in _imageTargets.Values)
        {
            var texture = new Texture2D(new int(), new int(), TextureFormat.RGB24, false);
            var bytes = Convert.FromBase64String(target.image);
            ImageConversion.LoadImage(texture, bytes);
            
            var vuTarget = VuforiaBehaviour.Instance.ObserverFactory.CreateImageTarget(texture, target.width, target.name);
        }
    }

    // Create a pool for unused walls and add some walls to use later
    private void InstantiateWallObjectPool()
    {
        wallObjectPool = new GameObject("Wall Object Pool");
        wallObjectPool.transform.parent = transform;
        wallObjectPool.SetActive(false);

        for (int i = 0; i < initialWallCount; i++)
        {
            CreateWall(wallObjectPool.transform);
        }
    }

    // Load the wall characteristics
    private void LoadWalls()
    {
        int activeWallCount = wallCollection.transform.childCount;

        // If we have more active walls than needed move the extra to the object pool
        if (activeWallCount > _walls.Length)
        {
            for (int i = 0; i < activeWallCount - _walls.Length; i++)
                wallCollection.transform.GetChild(0).parent = wallObjectPool.transform;
        }

        for (int i = 0; i < _walls.Length; i++)
        {
            /* Get a new wall transform to set its characteristics later. The order is:
             * 1) From currently active walls
             * 2) From object pool
             * 3) Create new gameobject
            */
            Transform wallTransform;
            if (i < activeWallCount)
            {
                wallTransform = wallCollection.transform.GetChild(i);
            }                
            else if (wallObjectPool.transform.childCount > 0)
            {
                wallTransform = wallObjectPool.transform.GetChild(0);
                wallTransform.parent = wallCollection.transform;
            }
            else
            {
                wallTransform = CreateWall(wallCollection.transform);
            }

            // Set the characteristics of the wall
            wallTransform.localScale = new Vector3(_walls[i].Length, wallHeight, wallWidth);
            wallTransform.SetPositionAndRotation(_walls[i]);
        }
    }

    // Load the floor characteristics
    private void LoadFloor()
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

        floor.transform.position = new Vector3((maxX + minX) / 2, 0, (maxY + minY) / 2);

        // A plane is 10* scaled compared to the rest of unity primitives so we need to divide by 10
        // https://forum.unity.com/threads/really-dumb-question-scale-of-plane-compared-to-cube.33835/
        floor.transform.localScale = new Vector3(Abs(maxX - minX) / 10, 0, Abs(maxY - minY) / 10);
    }

    // Counts the total created walls
    private int wallCounter = 0;

    // Create a new wall and set its parent
    private Transform CreateWall(Transform parent)
    {
        GameObject wall = GameObject.CreatePrimitive(PrimitiveType.Cube);
        wall.transform.parent = parent;
        wall.name = "Wall (" + wallCounter.ToString() + ")";
        wall.gameObject.layer = LayerMask.NameToLayer("Geometry");

        wallCounter++;

        return wall.transform;
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