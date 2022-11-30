using UnityEngine;
using TMPro;

public class DescriptionPanel : SingletonMonoBehaviour<DescriptionPanel>
{
    public TMP_Text title;
    public TMP_Text description;

    public void ShowItem(Item item)
    {
        title.text = item.title;
        description.text = item.description;
        description.rectTransform.localPosition = Vector3.zero;
        gameObject.SetActive(true);
    }
}
