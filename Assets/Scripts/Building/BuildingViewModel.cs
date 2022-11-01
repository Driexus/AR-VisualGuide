using System;
using UnityEngine;

public class BuildingViewModel : MonoBehaviour
{
    public FirebaseTest repository;

    private Building _currentBuilding;
    public Building CurrentBuilding
    {
        get { return _currentBuilding; }
        set 
        { 
            _currentBuilding = value;
            CurrentBuildingChanged?.Invoke(this, null);
            Debug.Log(_currentBuilding.targets[0]);
        }
    }

    public event EventHandler CurrentBuildingChanged;

    private void Start()
    {
        // Select the first building
        EventHandler handler = null;
        handler = new EventHandler((object sender, EventArgs args) =>
        {
            CurrentBuilding = repository.Buildings[0];
            repository.BuildingsUpdated -= handler;
            Debug.Log(CurrentBuilding);
        });
        repository.BuildingsUpdated += handler;
    }
}