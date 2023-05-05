using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreText : MonoBehaviour
{
    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI highScoreText;
    int totalScore;
    int highScore = 0;
    

    void Start()
    {
        totalScore = QuizManager.GetTotalScore();
        highScore = PlayerPrefs.GetInt("SCORE", 0);

        scoreText.text = string.Format("{0}" , totalScore);

        if(highScore < totalScore)
        {
            highScore = totalScore;
        }

        PlayerPrefs.SetInt("SCORE", highScore);
        PlayerPrefs.Save();//ディスクへの書き込み

        highScoreText.text = string.Format("{0}", highScore);

    }


}
