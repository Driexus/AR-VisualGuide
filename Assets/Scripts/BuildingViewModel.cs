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
            CurrentBuildingChanged?.Invoke(value);
        }
    }

    public delegate void CurrentBuildingChangedEventHandler(Building building);
    public event CurrentBuildingChangedEventHandler CurrentBuildingChanged;

    private void Start()
    {
        // Select the first building
        FirebaseTest.BuildingsUpdatedEventHandler handler = null;
        handler = new FirebaseTest.BuildingsUpdatedEventHandler(() => 
        {
            CurrentBuilding = repository.Buildings[0];
            repository.BuildingsUpdated -= handler;
        });
        repository.BuildingsUpdated += handler;
    }
}