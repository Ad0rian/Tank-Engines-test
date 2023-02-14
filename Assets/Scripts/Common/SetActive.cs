using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetActive : MonoBehaviour
{
    public GameObject[] objects;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void ActiveObjects()
    {
       foreach(GameObject obj in objects) {
        obj.SetActive(true);
        
        }  
    }
    public void LoadState()
    {
        foreach(GameObject obj in objects) {
        obj.GetComponent<respawnThings>().SavePos();   
        
        }  
       
    }
    public void DeactiveObjects()
    {
       foreach(GameObject obj in objects) {
        obj.GetComponent<respawnThings>().ResetObject();
        }  
    }
}
