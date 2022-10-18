using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Dropdown))]
public class BuildingSelector : MonoBehaviour
{
    public FirebaseTest repository;
    public BuildingViewModel buildingVM;
    private TMP_Dropdown dropdown;

    private void Awake()
    {
        gameObject.TryGetComponent(out dropdown);
        repository.BuildingsUpdated += new FirebaseTest.BuildingsUpdatedEventHandler(PopulateDropdown);

        PopulateDropdown();
        dropdown.onValueChanged.AddListener(OnBuildingSelected);
    }

    private void OnBuildingSelected(int optionIndex)
    {
        buildingVM.CurrentBuilding = repository.Buildings[optionIndex];
    }

    public void PopulateDropdown()
    {
        dropdown.options = new();

        foreach (Building building in repository.Buildings)
        {
            TMP_Dropdown.OptionData optionData = new TMP_Dropdown.OptionData
            {
                text = building.name
            };

            dropdown.options.Add(optionData);
        }
    }
}
