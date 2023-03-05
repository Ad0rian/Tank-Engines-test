using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadScene : MonoBehaviour
{
    //Declare the static scene number.
    public static int sceneNumber;
    //Declare the scene to be load.
    public int scenetoLoad;

    public void SoloMode()
    {
        //Set soloMode.

        sceneNumber = 0;
        LoadGame();
    }

    public void MultiMode()
    {
        //Set multiMode.

        sceneNumber = 1;
        LoadGame();
    }

    public void QuitTheGame()
    {
        //Exit the game.

        Application.Quit();     
    }

    public void LoadGame()
    {
        //Load Mode.

        SceneManager.LoadScene(scenetoLoad);
    }

}
