using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreText : MonoBehaviour
{
    public TextMeshProUGUI scoreText;
    int totalScore;

    void Start()
    {
        totalScore = QuizManager.GetTotalScore();

        scoreText.text = string.Format("Score /{0}" , totalScore);

    }


}
