using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExitGame : MonoBehaviour
{

    public void QuitTheGame()
    {
            Debug.Log ("The game is closed");
            Application.Quit();
            
    }
}
