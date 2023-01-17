using System;

public class ItemSelector : DropdownWrapper
{
    public BuildingViewModel buildingVM;
    private Item[] _items;

    protected override void Awake()
    {
        base.Awake();
        buildingVM.CurrentSectionChanged += new EventHandler((object sender, EventArgs args) => RefreshDropdownOptions());
    }

    protected override string[] GetDropdownNames()
    {
        _items = buildingVM.SectionItems.ToArray();
        string[] names = new string[_items.Length];

        for (int i = 0; i < _items.Length; i++)
            names[i] = _items[i].title;

        return names;
    }

    protected override void OnItemSelected(int optionIndex)
    {
        var selectedItem = _items[optionIndex];
        buildingVM.SelectedItem = selectedItem;
    }
}
