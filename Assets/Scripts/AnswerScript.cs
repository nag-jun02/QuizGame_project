using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnswerScript : MonoBehaviour
{
    public bool isCorrect = false;
    public QuizManager quizManager;

    [SerializeField] GameObject maru, batsu;

    public void Answer()
    {
        if (isCorrect)
        {
            maru.SetActive(true);
            
            quizManager.Correct();
            StartCoroutine("SetText");
        }
        else 
        {
            batsu.SetActive(true);
            
            quizManager.Wrong();
            StartCoroutine("SetText2");
        }
    }

    //Correct
    IEnumerator SetText()
    {
        yield return new WaitForSeconds(0.2f);
        maru.SetActive(false);
    }

    //Wrong
    IEnumerator SetText2()
    {
        yield return new WaitForSeconds(0.2f);
        batsu.SetActive(false);
    }
}
