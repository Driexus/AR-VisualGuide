using System;
using UnityEngine;

public class BuildingViewModel : SingletonMonoBehaviour<BuildingViewModel>
{
    public FirebaseRepository repository;

    private Building _currentBuilding;
    public Building CurrentBuilding
    {
        get { return _currentBuilding; }
        set 
        { 
            _currentBuilding = value;
            CurrentBuildingChanged?.Invoke(this, null);
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
        });
        repository.BuildingsUpdated += handler;
    }
}