using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Objectives : MonoBehaviour
{
    public Text scoretext;
    public int maxpunctuation;
    public UnityEngine.Events.UnityEvent m_MyEventscore;
    public UnityEngine.Events.UnityEvent m_MyEventpoints;
    public int tankplayer;
    int objective = 0, objectivemulti1= 0, objectivemulti2 =0; 
    private float timerpunctuation;
    private string winner;
    void Update()
    {
        timerpunctuation += Time.deltaTime;
        if(maxpunctuation <= objective || maxpunctuation <= objectivemulti1 || maxpunctuation <= objectivemulti2)
        {
            EndGame();
        }
    }

    public void UpdateObjective()
    {

        switch(tankplayer)
        {
            case 0:
            objective += 1;
            if(maxpunctuation > objective)lifes();
            break;

            case 1:
            objectivemulti1 += 1;
            if(maxpunctuation > objectivemulti1)lifes();
            break;

            case 2:
            objectivemulti2 += 1;
            if(maxpunctuation > objectivemulti2)lifes();
            break;


        }
        
        
        

    }

    public void EndGame()
    {  
        scoretext.text = Mathf.RoundToInt(timerpunctuation).ToString();
        m_MyEventscore.Invoke();
    }

    public void lifes()
    {
        m_MyEventpoints.Invoke();
    }
}