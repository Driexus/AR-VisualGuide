using System;
using System.Collections.Generic;

public class BuildingViewModel : SingletonMonoBehaviour<BuildingViewModel>
{
    public FirebaseRepository repository;

    // Building events and variables
    private Building _currentBuilding;
    public Building CurrentBuilding
    {
        get { return _currentBuilding; }
        set 
        { 
            _currentBuilding = value;
            RepopulateItems();
            UpdateSections();
            CurrentBuildingChanged?.Invoke(this, null);
        }
    }

    public event EventHandler CurrentBuildingChanged;

    private List<Item> _items = new();
    public List<Item> Items => _items;


    // Section events and variables
    private string _currentSection;
    public string CurrentSection
    {
        get { return _currentSection; }
        set
        {
            _currentSection = value;
            UpdateSectionItems();
            CurrentSectionChanged?.Invoke(this, null);
        }
    }

    public event EventHandler CurrentSectionChanged;

    private HashSet<string> _sections = new();
    public HashSet<string> Sections => _sections;

    private List<Item> _sectionItems = new();
    public List<Item> SectionItems => _sectionItems;

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

    // Clears the _sections set and populates it with the sections found in _items list.
    // Items must have already been updated when calling this function.
    private void UpdateSections()
    {
        _sections.Clear();
        foreach (Item item in _items)
            _sections.Add(item.section);
    }

    // Clears the _sectionItems list and populates it only with the items of that particular section.
    // Items must have already been updated when calling this function.
    private void UpdateSectionItems()
    {
        _sectionItems.Clear();
        foreach (Item item in _items)
        {
            if (item.section == _currentSection)
                _sectionItems.Add(item);
        }
    }
}