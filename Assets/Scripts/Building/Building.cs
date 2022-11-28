using System.Collections.Generic;

[System.Serializable]
public class Building: DatabaseObject
{
    public Wall[] walls;
    public Dictionary<string, ItemCharacteristics> itemsCharacteristics;
    public ItemCoords[] items_coords;
    public FirebaseImageTarget[] targets;
    public Dictionary<string, ImageTarget> image_targets;
    public string name;

    public Building(string id) : base(id) { }
}