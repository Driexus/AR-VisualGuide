using UnityEngine;

namespace ExtensionMethods
{
    public static class TransformExtensions
    { 
        public static void SetThisTransformAsParent(this Transform transform, Transform anotherTransform)
        {
            anotherTransform.SetParent(transform);
        }
    }
}