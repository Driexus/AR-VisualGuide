using System.Collections.Generic;

[System.Serializable]
public class Building: DatabaseObject
{
    public Wall[] walls;
    public Dictionary<string, ItemCharacteristics> itemsCharacteristics;
    public ItemCoords[] items_coords;
    public ImageTargetCoords[] image_targets_coords;
    public Dictionary<string, ImageTarget> image_targets;
    public string name;
    public string vuforia_access_key;
    public string vuforia_secret_key;

    public Building(string id) : base(id) { }
}