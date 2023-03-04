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
    public bool isPlayer = false;
    bool activaterelocation;
    GameObject[] spawnPoints;
    GameObject currentPoint;
    public float assignedTime = 5.0f;
    private float counterTime;
    int index;

    void Start()
    {
        counterTime = assignedTime;
        spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
        index = Random.Range (0, spawnPoints.Length);
        
        if(!isPlayer) PositionLocation();
        if(isEnemy)firstPositionLocation(); 
        
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

    void PositionLocation()
    {
        currentPoint = spawnPoints[index];
        counterTime = assignedTime;
        activaterelocation = false;
        if(isPlayer) 
        {
            fillerelement.GetComponentInChildren<Tank2DShootSystem>().currentAmmo = 10;
            fillerelement.GetComponentInChildren<Tank2DShootSystem>().shieldStatus = false;
            fillerelement.GetComponentInChildren<Tank2DShootSystem>().speedStatus = false;
            fillerelement.GetComponentInChildren<Tank2DShootSystem>().UpdatingHUD();
            fillerelement.transform.position = currentPoint.transform.position;
            fillerelement.transform.rotation = currentPoint.transform.rotation;
        }
        else Instantiate(fillerelement, currentPoint.transform.position, Quaternion.identity);
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