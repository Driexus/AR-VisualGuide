using System;
using UnityEngine;

public class SectionSelector : DropdownWrapper
{
    public BuildingViewModel buildingVM;

    private string[] _sections;

    private void Start()
    {
        triggerItemSelectedOnRefresh = true;
        buildingVM.CurrentBuildingChanged += new EventHandler((object sender, EventArgs args) => RefreshDropdownOptions());
    }
    protected override string[] GetDropdownNames()
    {
        _sections = new string[buildingVM.Sections.Count];
        buildingVM.Sections.CopyTo(_sections);

        return _sections;
    }

    protected override void OnItemSelected(int optionIndex)
    {
        buildingVM.CurrentSection = _sections[optionIndex];
    }
}
