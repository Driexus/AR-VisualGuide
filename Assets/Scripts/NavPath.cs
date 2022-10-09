using UnityEngine.AI;
using UnityEngine;

public class NavPath : MonoBehaviour
{
    public Transform target;
    public LineRenderer pathLine;
    private NavMeshPath path;

    public float refreshTime = 1f;
    private float elapsed = 0.0f;
    void Start()
    {
        path = new NavMeshPath();
        elapsed = 0.0f;
    }

    void Update()
    {
        // Update the way to the goal every refresh interval
        elapsed += Time.deltaTime;
        if (elapsed > refreshTime)
        {
            elapsed -= refreshTime;
            NavMesh.CalculatePath(transform.position, target.position, NavMesh.AllAreas, path);

            // Update the path line positions
            pathLine.positionCount = path.corners.Length;
            pathLine.SetPositions(path.corners);
        }
    }
}
