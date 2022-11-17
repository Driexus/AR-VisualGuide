using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Dropdown))]
public abstract class DropdownWrapper : MonoBehaviour
{
    private TMP_Dropdown dropdown;

    private void Awake()
    {
        gameObject.TryGetComponent(out dropdown);
        RefreshDropdownOptions();
        dropdown.onValueChanged.AddListener(OnItemSelected);
    }

    // Call these function to refresh the names of the dropdowns
    public void RefreshDropdownOptions()
    {
        dropdown.options = new();
        var names = GetDropdownNames();

        foreach (string name in names)
        {
            TMP_Dropdown.OptionData optionData = new TMP_Dropdown.OptionData
            {
                text = name
            };

            dropdown.options.Add(optionData);
        }

        // Select the 1st item and trigger OnItemSelected
        if (names.Length > 0)
        {
            dropdown.value = 0;
            if (triggerItemSelectedOnRefresh)
                OnItemSelected(0);
        }
            
        // Actually show the selected value
        dropdown.RefreshShownValue();
    }

    // If set to true, after refreshing the options, OnItemSelected will be triggered for the first option
    public bool triggerItemSelectedOnRefresh = false;

    protected abstract void OnItemSelected(int optionIndex);
    protected abstract string[] GetDropdownNames();
}
