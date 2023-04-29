using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QuizManager : MonoBehaviour
{
    public List<QuestionandAnswers> QandA;
    public GameObject[] options;
    //質問の数
    public int currentQuestion;

    public TextMeshProUGUI Qtxt;

    private void Start()
    {
        GneraleQuestion();
    }

    //質問生成
    public void Correct()
    {
        QandA.RemoveAt(currentQuestion);
        GneraleQuestion();
    }

    void SetAnswers()
    {
        for (int i = 0; i < options.Length; i++)
        {
            //options[i].GetComponent<AnswerScript>().isCorrect = false;

            //テキスト一つ一つに割り当てる。
            options[i].transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = QandA[currentQuestion].Answers[i];

            if (QandA[currentQuestion].CorrectAnswer == i )
            {
                options[i].GetComponent<AnswerScript>().isCorrect = true;
            }
        }
    }


    void GneraleQuestion()
    {
        if (QandA.Count > 0)
        {
            //0からリストにある質問の数
            //currentQuestion = Random.Range(0, QandA.Count);

            //現在の質問がにゅうりょくされる
            Qtxt.text = QandA[currentQuestion].Question;

            SetAnswers();
        }
        else
        {
            Debug.Log("Out");
        }

    }
}
