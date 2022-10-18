using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Dropdown))]
public abstract class DropdownWrapper : MonoBehaviour
{
    private TMP_Dropdown dropdown;

    private void Awake()
    {
        gameObject.TryGetComponent(out dropdown);
        UpdateDropdownOptions();
        dropdown.onValueChanged.AddListener(OnItemSelected);
    }

    public void UpdateDropdownOptions()
    {
        dropdown.options = new();

        foreach (string name in GetDropdownNames())
        {
            TMP_Dropdown.OptionData optionData = new TMP_Dropdown.OptionData
            {
                text = name
            };

            dropdown.options.Add(optionData);
        }
    }

    protected abstract void OnItemSelected(int optionIndex);
    protected abstract string[] GetDropdownNames();
}
