using UnityEngine;
using System;
using ExtensionMethods;
using System.Collections.Generic;

public class ItemSelector : DropdownWrapper
{
    public BuildingViewModel buildingVM;
    public Transform itemTarget;

    private Item[] _items;

    private void Start()
    {
        triggerItemSelectedOnRefresh = true;
        buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => RefreshDropdownOptions());
    }
    protected override string[] GetDropdownNames()
    {
        _items = buildingVM.Items.ToArray();
        string[] names = new string[_items.Length];

        for (int i = 0; i < _items.Length; i++)
            names[i] = _items[i].title;

        return names;
    }

    protected override void OnItemSelected(int optionIndex)
    {
        var selectedItem = _items[optionIndex];
        itemTarget.SetPositionAndRotation(selectedItem);
    }
}
