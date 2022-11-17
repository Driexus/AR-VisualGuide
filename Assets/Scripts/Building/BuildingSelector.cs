using System;

public class BuildingSelector : DropdownWrapper
{
    public FirebaseRepository repository;
    public BuildingViewModel buildingVM;

    private void Start()
    {
        repository.BuildingsUpdated += new EventHandler((object sender, EventArgs args) => RefreshDropdownOptions());
    }

    protected override void OnItemSelected(int optionIndex)
    {
        buildingVM.CurrentBuilding = repository.Buildings[optionIndex];
    }

    protected override string[] GetDropdownNames()
    {
        Building[] buildings = repository.Buildings;
        string[] names = new string[buildings.Length];

        for (int i = 0; i < buildings.Length; i++)
            names[i] = buildings[i].name;

        return names;
    }
}