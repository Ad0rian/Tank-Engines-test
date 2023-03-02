using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace ObjectiveScene
{

public class Objectives : MonoBehaviour
{
    public GameObject score;
    public Text objectivetext;
    public Text objectivetextp2;
    public Text timertext;
    public Animator transition;
    public int maxpunctuation;
    public int typeObjective;
    public UnityEngine.Events.UnityEvent m_MyEventscore;
    public UnityEngine.Events.UnityEvent m_MyEventpoints;
    public int tankplayer;
    int objective = 0, objectivemulti =0; 
    private float timerpunctuation;
    private string winner;

    void Update()
    {
            timerpunctuation += Time.deltaTime;
            timertext.text = Mathf.RoundToInt(timerpunctuation).ToString();
            if(maxpunctuation <= objective || maxpunctuation <= objectivemulti)
            {
                EndGame();
            }
        
    }

    public void UpdateObjective(int playerupdate)
    {
        tankplayer = playerupdate;
        switch(tankplayer)
        {
            case 0:
            objective += 1;
            objectivetext.text = objective.ToString();
            if(maxpunctuation > objective)lifes();
            break;

            case 1:
            objectivemulti += 1;
            objectivetextp2.text = objectivemulti.ToString();
            if(maxpunctuation > objectivemulti)lifes();
            break;
        }
        
        
        

    }

    public void EndGame()
    {  
        score.GetComponentInChildren<Text>().text = Mathf.RoundToInt(timerpunctuation).ToString();
        transition.Play("closedTransition");
        score.SetActive(true);
        m_MyEventscore.Invoke();
    }

    public void lifes()
    {

        if (typeObjective == 1)
        {
            switch(tankplayer)
            {
                case 0:

                break;

                case 1:
                
                break;
            }
        }
        m_MyEventpoints.Invoke();
    }
}
}