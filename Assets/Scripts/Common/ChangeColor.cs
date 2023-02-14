using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColor : MonoBehaviour
{
    public GameObject [] hearts;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
                foreach(GameObject go in hearts) {
            if (go != null)
                {
                   go.GetComponent<SpriteRenderer>().color = new Color(1f, 1f, 1f, 0f);
                } 
        }
    }
}
