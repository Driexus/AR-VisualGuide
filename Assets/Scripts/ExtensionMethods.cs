using UnityEngine;

namespace ExtensionMethods
{
    public static class TransormExtensions
    {
        public static void SetPositionAndRotation(this Transform transform, IWorldObject worldObject)
        {
            transform.position = worldObject.Position;
            transform.rotation = Quaternion.Euler(worldObject.Rotation);
        }
    }
}