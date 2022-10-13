[System.Serializable]
public class Building: DatabaseObject
{
    public Wall[] walls;
    public string name;

    public Building(string id) : base(id)
    {
    }
}
