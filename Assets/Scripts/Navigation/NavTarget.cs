using System;
using UnityEngine;
using UnityEngine.AI;

public class NavTarget : MonoBehaviour
{
    BuildingViewModel buildingViewModel;
    public float recalculationDistance;

    private void Start()
    {
        buildingViewModel = BuildingViewModel.Instance;
        buildingViewModel.SelectedItemChanged += new EventHandler((object sender, EventArgs args) => SetPosition());
    }

    // Set the target position in the position of the currently selected item.
    // If the item is not within the navMesh it moves the target to the nearest position inside the navMesh.
    public void SetPosition()
    {
        var position = buildingViewModel.SelectedItem.Position;
        if (NavMesh.SamplePosition(position, out NavMeshHit hit, recalculationDistance, NavMesh.AllAreas))
            transform.position = hit.position;           
        else
            transform.position = position;
    }
}