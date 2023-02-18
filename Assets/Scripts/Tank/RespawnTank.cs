using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RespawnTank : MonoBehaviour
{
    public GameObject Tankcontroller;
    public Tank2DShootSystem tankController;
    GameObject[] spawnPoints;
    GameObject currentPoint;
    public string tagposition;
    int index;


    void Start()
    {
        spawnPoints = GameObject.FindGameObjectsWithTag(tagposition);
        index = Random.Range (0, spawnPoints.Length);
    }

    public void UpdateHUDTankAndPosition()
    {
        index = Random.Range (0, spawnPoints.Length);
        currentPoint = spawnPoints[index];
        tankController.currentAmmo = 10;
        tankController.shieldStatus = false;
        tankController.speedStatus = false;
        tankController.UpdatingHUD();
        Tankcontroller.transform.position = currentPoint.transform.position;
        Tankcontroller.transform.rotation = currentPoint.transform.rotation;

    }


}
