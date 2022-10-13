public abstract class DatabaseObject
{
    protected string _id;
    public string Id { get { return _id;  } }

    public DatabaseObject(string id)
    {
        _id = id;
    }
}