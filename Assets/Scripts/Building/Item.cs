using UnityEngine;

[System.Serializable]
public class Item : ItemCharacteristics, IWorldObject
{
    private Vector3 _position;
    private Vector3 _rotation;

    public Vector3 Position => _position;
    public Vector3 Rotation => _rotation;
    
    public Item(ItemCharacteristics itemCharacteristics, IWorldObject itemCoords)
    {
        description = itemCharacteristics.description;
        exhibition = itemCharacteristics.exhibition;
        showcases = itemCharacteristics.showcases;
        title = itemCharacteristics.title;
        
        _position = itemCoords.Position;
        _rotation = itemCoords.Rotation;
    }
}
