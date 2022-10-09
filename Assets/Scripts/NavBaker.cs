using Unity.AI.Navigation;
using UnityEngine;

public class NavBaker : MonoBehaviour
{
    public NavMeshSurface[] surfaces;

    // Use this for initialization
    void Update()
    {

        for (int i = 0; i < surfaces.Length; i++)
        {
            surfaces[i].BuildNavMesh();
        }
    }

}
