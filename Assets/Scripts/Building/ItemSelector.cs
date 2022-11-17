using UnityEngine;
using System;
using ExtensionMethods;

public class ItemSelector : DropdownWrapper
{
    public BuildingViewModel buildingVM;
    public Transform itemTarget;

    private void Start()
    {
        triggerItemSelectedOnRefresh = true;
        buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => RefreshDropdownOptions());
    }
    protected override string[] GetDropdownNames()
    {
        Item[] items = buildingVM.CurrentBuilding.items;
        string[] names = new string[items.Length];

        for (int i = 0; i < items.Length; i++)
            names[i] = items[i].name;

        return names;
    }

    protected override void OnItemSelected(int optionIndex)
    {
        Item selectedItem = buildingVM.CurrentBuilding.items[optionIndex];
        itemTarget.SetPositionAndRotation(selectedItem);
    }
}
