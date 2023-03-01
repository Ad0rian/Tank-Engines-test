using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace ObjectiveScene
{
public class ObjectivesScript : MonoBehaviour
{
    public Text scoretext;
    public Text objectivetext;
    public Text timertext;
    public int maxpunctuation;
    public int typeObjective;
    public UnityEngine.Events.UnityEvent m_MyEventscore;
    public UnityEngine.Events.UnityEvent m_MyEventpoints;
    public int tankplayer;
    int objective = 0, objectivemulti1= 0, objectivemulti2 =0; 
    private float timerpunctuation;
    private string winner;
    // Start is called before the first frame update
    void Start()
    {
        timertext = GameObject.FindWithTag("timerScore").GetComponent<Text>();
        Debug.Log(timertext);
        switch(typeObjective)
        {
            case 0:
                
                break;
            case 1:

                break;
        }   
    }



    void Update()
    {
        timerpunctuation += Time.deltaTime;
        timertext.text = Mathf.RoundToInt(timerpunctuation).ToString();
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
            objectivetext.text = objective.ToString();
            if(maxpunctuation > objective)lifes();
            break;

            case 1:
            objectivemulti1 += 1;
            objectivetext.text = objectivemulti1.ToString();
            if(maxpunctuation > objectivemulti1)lifes();
            break;

            case 2:
            objectivemulti2 += 1;
            objectivetext.text = objectivemulti2.ToString();
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
}
