using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gameMode : MonoBehaviour
{
    // Start is called before the first frame update
    
    public void SoloMode()
    {
        mode.gameMode = 0;
    }

    // Update is called once per frame
    public void MultiMode()
    {
        mode.gameMode = 1;
    }


}
