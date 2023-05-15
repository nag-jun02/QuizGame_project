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

    public QuestionandAnswers qandA;

    public int correctCount = 0;
    public int wrongCount = 0;
    public static int totalScore;

    private void Start()
    {
        GneraleQuestion();
        SoundManager.instance.Sound(SoundManager.BGM.Game);
    }

    //質問生成
    public void Correct()
    {
        correctCount += 100;

        QandA.RemoveAt(currentQuestion);
        GneraleQuestion();
    }

    public void Wrong()
    {
        wrongCount -= 20;

        //int qWrong = qandA.Question.qrowget(); //CSVファイルの行数を取得
        //PlayerPrefs.SetInt("missrow" + qrow.ToString(), qWrong); //行数をキーにして間違えた行数を格納
        //PlayerPrefs.Save(); //保存

        QandA.RemoveAt(currentQuestion);
        GneraleQuestion();
    }

    void SetAnswers()
    {
        for (int i = 0; i < options.Length; i++)
        { 

            //テキスト一つ一つに割り当てる。
            options[i].transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = QandA[currentQuestion].Answers[i];

            //True,Falseの割り当て
            if (QandA[currentQuestion].CorrectAnswer == i )
            {
                options[i].GetComponent<AnswerScript>().isCorrect = true;
                
            }
            else
            {
                options[i].GetComponent<AnswerScript>().isCorrect = false;
            }
        }
    }



    void GneraleQuestion()
    {
        if (QandA.Count > 0)
        {
            //質問をランダムで表示
            currentQuestion = Random.Range(0, QandA.Count);

            //現在の質問がにゅうりょくされる
            Qtxt.text = QandA[currentQuestion].Question;

            SetAnswers();
            totalScore = correctCount + wrongCount;
        }
        else
        {
            
            Debug.Log("Out");
        }

    }

    //スコアの計算結果を返す
    public static int GetTotalScore()
    {
        return totalScore;
    }
}
