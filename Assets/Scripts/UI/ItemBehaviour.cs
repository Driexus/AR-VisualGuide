using UnityEngine;

public class ItemBehaviour : MonoBehaviour
{
    public GameObject standard;
    public GameObject highlight;
    
    private Item _item;
    public Item Item => _item;

    private DescriptionPanelHandler _descriptionPanel;

    private void Start()
    {
        _descriptionPanel = DescriptionPanelHandler.Instance;
    }

    private void OnMouseDown()
    {
        _descriptionPanel.ShowItem(_item);
    }

    public void SetItem(Item item)
    {
        _item = item;
        gameObject.name = item.title;

    }
}
