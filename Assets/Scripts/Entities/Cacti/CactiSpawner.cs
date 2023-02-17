using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CactiSpawner : MonoBehaviour
{
    public string tagposition;
    public GameObject fillerelement;
    bool activaterelocation;
    GameObject[] spawnPoints;
    GameObject currentPoint;
    private float counterTime = 1.0f;

    int index;
    // Start is called before the first frame update
    void Start()
    {
        spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
        index = Random.Range (0, spawnPoints.Length);
        firstPositionLocation();
    }

    void Update()
    {
        if (activaterelocation)
        {
            counterTime -= Time.deltaTime;
                if (counterTime <= 0.0f)
                {
                    spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
                    index = Random.Range (0, spawnPoints.Length);
                    PositionLocation();
                }
            }
        }
    // Update is called once per frame
    void PositionLocation()
    {
        currentPoint = spawnPoints[index];
        counterTime = 1.0f;
        activaterelocation = false;
        Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
        Destroy(currentPoint.gameObject);
    }

    void firstPositionLocation()
    {
        for (int i = 0; i < 5; i++) 
        {
            spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
            index = Random.Range (0, spawnPoints.Length);
            currentPoint = spawnPoints[index];
            Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
            Destroy(currentPoint.gameObject);
        }
    }

    public void RecolocateElement()
    {
        activaterelocation = true;
    }
}
