using Unity.AI.Navigation;
using UnityEngine;

[RequireComponent(typeof(NavMeshSurface))]
public class NavBaker : MonoBehaviour
{
    public NavMeshSurface surface;
    public BuildingCreator buildingCreator;

    // Use this for initialization
    void Update()
    {
        buildingCreator.WallsUpdated += new BuildingCreator.WallsUpdatedEventHandler(UpdateNavMesh);
    }

    public void UpdateNavMesh(Wall[] walls)
    {
        surface.BuildNavMesh();
    }
}
