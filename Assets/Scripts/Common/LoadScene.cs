using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class LoadScene : MonoBehaviour
{
    public int sceneNumber;
    // Start is called before the first frame update
    public void LoadGame()
    {
         SceneManager.LoadScene(sceneNumber);
    }

}
