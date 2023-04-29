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
        // 1�␳�� +10�_�@// 1��s���� +9�_(10 * 0.9)

        // �X�R�A�v�Z = ���� �~ 10 �~ �s���� �~ 9 �~ ���𐔃{�[�i�X(���� �~ 1.1)


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
