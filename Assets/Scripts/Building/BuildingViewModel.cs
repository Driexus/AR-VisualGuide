using System;
using System.Collections.Generic;

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
            RepopulateItems();
            CurrentBuildingChanged?.Invoke(this, null);
        }
    }

    public event EventHandler CurrentBuildingChanged;

    private List<Item> _items = new();
    public List<Item> Items => _items;

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

    // Clears the _items list and populates it only with the items for which both the coordinates and the characteristics can be found
    private void RepopulateItems()
    {
        _items.Clear();
        var itemsCharacteristics = _currentBuilding.itemsCharacteristics;
        foreach (ItemCoords itemCoords in _currentBuilding.items_coords)
        {
            // Check if the corresponding itemCharacteristics object exists for the specific itemId
            var itemId = itemCoords.item_id;
            if (itemId != null && itemsCharacteristics.TryGetValue(itemId, out ItemCharacteristics itemCharacteristics))
            {
                var item = new Item(itemCharacteristics, itemCoords);
                _items.Add(item);
            }
        }
    }
}