using System.Collections.Generic;

[System.Serializable]
public class Building: DatabaseObject
{
    public Wall[] walls;
    public Item[] items;
    public FirebaseImageTarget[] targets;
    public Dictionary<string, ImageTarget> image_targets;
    public string name;

    public Building(string id) : base(id) { }
}