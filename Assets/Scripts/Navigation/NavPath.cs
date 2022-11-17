using UnityEngine.AI;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class NavPath : MonoBehaviour
{
    public Transform player;
    public Transform target;
    private LineRenderer _pathLine;
    private NavMeshPath _path;

    public float refreshTime = 1f;
    private float elapsed = 0f;
    void Start()
    {
        _pathLine = GetComponent<LineRenderer>();
        _path = new NavMeshPath();
    }

    void Update()
    {
        // Update the way to the goal every refresh interval
        elapsed += Time.deltaTime;
        if (elapsed >= refreshTime)
        {
            elapsed -= refreshTime;
            NavMesh.CalculatePath(player.transform.position, target.position, NavMesh.AllAreas, _path);

            // Update the path line positions
            _pathLine.positionCount = _path.corners.Length;
            _pathLine.SetPositions(_path.corners);
        }
    }

    // Instantly refresh the path
    private void OnEnable()
    {
        elapsed = refreshTime;
    }
}
