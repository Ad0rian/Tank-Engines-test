using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fillerposition : MonoBehaviour
{

    public string tagposition;
    public GameObject fillerelement;
    bool activaterelocation;
    GameObject[] spawnPoints;
    GameObject currentPoint;
    private float counterTime = 5.0f;

    int index;
    // Start is called before the first frame update
    void Start()
    {
        spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
        index = Random.Range (0, spawnPoints.Length);
        PositionLocation();
    }

    void Update()
    {
        if (activaterelocation)
        {
            counterTime -= Time.deltaTime;
                if (counterTime <= 0.0f)
                {
                    index = Random.Range (0, spawnPoints.Length);
                    PositionLocation();
                }
            }
        }
    // Update is called once per frame
    void PositionLocation()
    {
        currentPoint = spawnPoints[index];
        counterTime = 5.0f;
        activaterelocation = false;
        Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
    }

    public void RecolocateElement()
    {
        activaterelocation = true;
    }
}
