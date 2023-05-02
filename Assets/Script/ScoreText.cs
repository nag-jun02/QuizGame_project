using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreText : MonoBehaviour
{
    // 1問正解 +10点　// 1問不正解 +9点(10 * 0.9)

    // スコア計算 = 正解数 × 10 × 不正解数 × 9 × 正解数ボーナス(正解数 × 1.1)


    public TextMeshProUGUI scoreText;
    int totalScore;



    void Start()
    {
        totalScore = QuizManager.GetTotalScore();


        scoreText.text = string.Format("Score /{0}" , totalScore);

    }


}
