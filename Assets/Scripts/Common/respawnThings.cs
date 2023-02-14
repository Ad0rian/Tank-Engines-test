using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class respawnThings : MonoBehaviour
{
    Vector3 refPos;
    Vector3 originalPos;
    // Start is called before the first frame update
    void Start()
    {
    originalPos = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void SavePos()
    {
        refPos = originalPos;
        gameObject.transform.position = refPos;
    }
    public void ResetObject(){
        gameObject.transform.position = originalPos;
        gameObject.SetActive(false);
    }
}
