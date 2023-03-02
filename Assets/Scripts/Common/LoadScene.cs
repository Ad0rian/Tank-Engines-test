using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LoadScene : MonoBehaviour
{
    public static int sceneNumber;
    public int scenetoLoad;
    // Start is called before the first frame update

        public void SoloMode()
    {
        sceneNumber = 0;
        LoadGame();
    }

    // Update is called once per frame
    public void MultiMode()
    {
        sceneNumber = 1;
        LoadGame();
    }

    public void QuitTheGame()
    {
        Debug.Log ("The game is closed");
        Application.Quit();
            
    }

    public void LoadGame()
    {
         SceneManager.LoadScene(scenetoLoad);
    }

}
