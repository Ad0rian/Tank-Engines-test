using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace ObjectiveScene
{
    public class Objectives : MonoBehaviour
    {
        //Set objectives and objects to the objectivedata.
        public GameObject score;
        //Set objective p1 text.
        public Text objectivetext;
        //Set objective p2 text.
        public Text objectivetextp2;
        //Set timer value.
        public Text timertext;
        //Set transition animator.
        public Animator transition;
        //Set the maxim punctuaction to end the game.
        public int maxpunctuation;
        //Set if is solomode or multimode.
        public int typeObjective;
        //Set the events of the EndGame.
        public UnityEngine.Events.UnityEvent m_MyEventscore;
        //Set the events when objective update in multiMode.
        public UnityEngine.Events.UnityEvent m_MyEventpoints;
        //Set the player 1 or player 2.
        public int tankplayer;
        //Set the objectives number.
        int objective = 0, objectivemulti =0; 
        //Set the result timer in the final score.
        private float timerpunctuation;

        void Update()
        {
            //Update timer and score.
            
            timerpunctuation += Time.deltaTime;
            timertext.text = Mathf.RoundToInt(timerpunctuation).ToString();
            if(maxpunctuation <= objective || maxpunctuation <= objectivemulti)
            {
                EndGame();
            }
            
        }

        public void UpdateObjective(int playerupdate)
        {
            //Update score depending of the player.

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
            //End game.
            
            score.GetComponentInChildren<Text>().text = Mathf.RoundToInt(timerpunctuation).ToString();
            transition.Play("closedTransition");
            score.SetActive(true);
            
            //If is solo mode or multi mode.

            if (typeObjective == 1)
            {
                switch(tankplayer)
                {
                case 0:
                    score.gameObject.transform.GetChild(2).gameObject.SetActive(false);
                    break;

                case 1:
                    score.gameObject.transform.GetChild(1).gameObject.SetActive(false);
                    break;
                }
            }
            m_MyEventscore.Invoke();
        }

        public void lifes()
        {
            //Update players lifes.

            m_MyEventpoints.Invoke();
        }
    }
}