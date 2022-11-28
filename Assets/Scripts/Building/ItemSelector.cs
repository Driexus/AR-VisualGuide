using UnityEngine;
using System;
using ExtensionMethods;
using System.Collections.Generic;

public class ItemSelector : DropdownWrapper
{
    public BuildingViewModel buildingVM;
    public Transform itemTarget;

    private List<ItemCoords> _optionItemsCoords = new();

    private void Start()
    {
        triggerItemSelectedOnRefresh = true;
        buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => RefreshDropdownOptions());
    }
    protected override string[] GetDropdownNames()
    {
        var items = buildingVM.Items;
        string[] names = new string[items.Count];

        for (int i = 0; i < items.Count; i++)
            names[i] = items[i].title;

        return names;
    }

    protected override void OnItemSelected(int optionIndex)
    {
        ItemCoords selectedItemCoords = _optionItemsCoords[optionIndex];
        itemTarget.SetPositionAndRotation(selectedItemCoords);
    }
}
