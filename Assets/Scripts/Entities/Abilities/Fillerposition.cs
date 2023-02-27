using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace FillerpositionSpawn
{
public class Fillerposition : MonoBehaviour
{
    public string tagposition;
    public GameObject fillerelement;
    public bool isEnemy = false;
    bool activaterelocation;
    GameObject[] spawnPoints;
    GameObject currentPoint;
    public float assignedTime = 5.0f;
    private float counterTime;

    int index;
    // Start is called before the first frame update
    void Start()
    {
        counterTime = assignedTime;
        spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
        index = Random.Range (0, spawnPoints.Length);
        if(isEnemy)firstPositionLocation();
        else PositionLocation(); 
        
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
        counterTime = assignedTime;
        activaterelocation = false;
        Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
        if(isEnemy)Destroy(currentPoint.gameObject);
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
}