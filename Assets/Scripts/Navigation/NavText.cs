using UnityEngine;
using TMPro;

[RequireComponent(typeof(TMP_Text))]
public class NavText : MonoBehaviour
{
    public LineRenderer line;
    private float _totalDistance;
    private TMP_Text _tmpText;

    private void Start()
    {
        _tmpText = GetComponent<TMP_Text>();
    }

    private void Update()
    {
        var positions = new Vector3[line.positionCount];
        line.GetPositions(positions);

        _totalDistance = 0f;
        for (int i = 0; i < positions.Length - 1; i++)
            _totalDistance += Vector3.Distance(positions[i], positions[i + 1]);

        _tmpText.text = _totalDistance.ToString("N2") + "m";
    }
}
