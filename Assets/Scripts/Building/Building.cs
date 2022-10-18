[System.Serializable]
public class Building: DatabaseObject
{
    public Wall[] walls;
    public Item[] items;
    public Target[] targets;
    public string name;

    public Building(string id) : base(id) { }
}