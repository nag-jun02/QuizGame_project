using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnswerScript : MonoBehaviour
{
    public bool isCorrect = false;
    public QuizManager quizManager;
    //public int score = 0;

    public void Answer()
    {
        // 1問正解 +10点　// 1問不正解 +9点(10 * 0.9)

        // スコア計算 = 正解数 × 10 × 不正解数 × 9 × 正解数ボーナス(正解数 × 1.1)


        if (isCorrect)
        {

            Debug.Log("Yes");
            quizManager.Correct();
        }
        else 
        {

            Debug.Log("No");
            quizManager.Correct();
        }
    }
}
