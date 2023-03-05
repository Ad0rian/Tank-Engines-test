using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MainMenuInput : MonoBehaviour
{
    //Set the UI background and event elements.
    public Animator UITank, BGTank,PressedSolo ,PressedMulti ,PressedExit;
    //Set the button elements.
    public GameObject ButtonSolo, ButtonMulti, ButtonExit, selectedButton;
    //Set the variables for the bool animator status.
    private bool solo, multi, exit, soloBG, multiBG, exitBG, pressedactionsolo, pressedactionmulti, pressedactionexit;

    public void Start()
    {
        //Set the button to be selected when game start.

        EventSystem.current.SetSelectedGameObject(selectedButton);
    }

    private void Update()
    {
        //Set the animator bool status to the declared variables.

        BGTank.SetBool("soloBG", soloBG);
        BGTank.SetBool("multiBG", multiBG);
        BGTank.SetBool("exitBG", exitBG);
        UITank.SetBool("solo", solo);
        UITank.SetBool("multi", multi);
        UITank.SetBool("exit", exit);
        PressedSolo.SetBool("pressedaction", pressedactionsolo);
        PressedMulti.SetBool("pressedaction", pressedactionmulti);
        PressedExit.SetBool("pressedaction", pressedactionexit);

        //Set the Solo button animator behaviour.

        if (EventSystem.current.currentSelectedGameObject == ButtonSolo)
        {
            solo = true;
            multi = false;
            exit = false;
            soloBG = true;
            multiBG = false;
            exitBG = false;
            pressedactionsolo = true;
            pressedactionmulti = false;
            pressedactionexit = false;
        }

        //Set the Multi button animator behaviour.

        if (EventSystem.current.currentSelectedGameObject == ButtonMulti)
        {
            solo = false;
            multi = true;
            exit = false;
            soloBG = false;
            multiBG = true;
            exitBG = false;           
            pressedactionsolo = false;
            pressedactionmulti = true;
            pressedactionexit = false;
        }

        //Set the Exit button animator behaviour.
        
        if (EventSystem.current.currentSelectedGameObject == ButtonExit)
        {    
            solo = false;
            multi = false;
            exit = true;
            soloBG = false;
            multiBG = false;
            exitBG = true; 
            pressedactionsolo = false;
            pressedactionmulti = false;
            pressedactionexit = true;
        }
    }
}
