using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Objectives : MonoBehaviour
{
    public Text scoretext;
    public UnityEngine.Events.UnityEvent m_MyEventscore;
    private int objective = 0;
    public int maxpunctuation;
    private float timerpunctuation;
    private string winner;
    void Update()
    {
        timerpunctuation += Time.deltaTime;
        if(maxpunctuation <= objective)
        {
            EndGame();
        }
    }

    public void UpdateObjective()
    {
        
        objective++;
    }

    public void EndGame()
    {  
        scoretext.text = Mathf.RoundToInt(timerpunctuation).ToString();
        m_MyEventscore.Invoke();
    }
}
