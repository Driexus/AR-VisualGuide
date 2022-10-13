using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Dropdown))]
public class BuildingSelector : MonoBehaviour
{
    public FirebaseTest repository;
    TMP_Dropdown dropdown;

    private void Awake()
    {
        gameObject.TryGetComponent(out dropdown);
        repository.BuildingsUpdated += new FirebaseTest.BuildingsUpdatedEventHandler(populateDropdown);
    }

    void Start()
    {
        populateDropdown();
    }

    public void populateDropdown()
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
