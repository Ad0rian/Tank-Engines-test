using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LoadScene : MonoBehaviour
{
    public static int sceneNumber;
    public int scenetoLoad;

    public void SoloMode()
    {
        sceneNumber = 0;
        LoadGame();
    }

    public void MultiMode()
    {
        sceneNumber = 1;
        LoadGame();
    }

    public void QuitTheGame()
    {
        Application.Quit();     
    }

    public void LoadGame()
    {
         SceneManager.LoadScene(scenetoLoad);
    }

}
