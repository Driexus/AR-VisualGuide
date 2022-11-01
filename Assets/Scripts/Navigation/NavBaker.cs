using System.Collections;
using System.Collections.Generic;
using Unity.AI.Navigation;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(NavMeshSurface))]
public class NavBaker : MonoBehaviour
{
    private NavMeshSurface surface;
    public BuildingCreator buildingCreator;

    public object NavMeshComponents { get; private set; }

    private void Awake()
    {
        surface = GetComponent<NavMeshSurface>();
        buildingCreator.WallsUpdated += new BuildingCreator.WallsUpdatedEventHandler(UpdateNavMesh);
    }

    public void UpdateNavMesh(Wall[] walls)
    {
        var cor = BuildNavMeshCor();
        StartCoroutine(cor);
    }

    private IEnumerator BuildNavMeshCor()
    {
        // Get build settings
        NavMeshBuildSettings buildSettings = surface.GetBuildSettings();

        // Build Sources
        var buildSources = new List<NavMeshBuildSource>();
        var markups = new List<NavMeshBuildMarkup>();
        NavMeshBuilder.CollectSources(surface.transform, surface.layerMask, surface.useGeometry, surface.defaultArea, markups, buildSources);

        // Find bounds
        var bounds = new Bounds(transform.position, new Vector3(1000, 1000, 1000));
        Debug.LogWarning("TODO: find bounds");
        
        // Get nav data async
        NavMeshData data = new();
        AsyncOperation operation = NavMeshBuilder.UpdateNavMeshDataAsync(data, buildSettings, buildSources, bounds);
        Debug.Log("Building nav mesh");
        while (!operation.isDone)
            yield return null;

        // Update the nav data
        NavMesh.RemoveAllNavMeshData();
        NavMesh.AddNavMeshData(data);
        
        Debug.Log("Nav mesh data updated");
        yield return null;
    }
}
