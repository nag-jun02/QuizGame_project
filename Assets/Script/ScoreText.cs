using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreText : MonoBehaviour
{
    // 1�␳�� +10�_�@// 1��s���� +9�_(10 * 0.9)

    // �X�R�A�v�Z = ���� �~ 10 �~ �s���� �~ 9 �~ ���𐔃{�[�i�X(���� �~ 1.1)


    public TextMeshProUGUI scoreText;
    int totalScore;



    void Start()
    {
        totalScore = QuizManager.GetTotalScore();


        scoreText.text = string.Format("Score /{0}" , totalScore);

    }


}
