using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class QuizManager : MonoBehaviour
{
    public List<QuestionandAnswers> QandA;
    public GameObject[] options;
    //����̐�
    public int currentQuestion;

    public TextMeshProUGUI Qtxt;

    private void Start()
    {
        GneraleQuestion();
    }

    //���␶��
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

            //�e�L�X�g���Ɋ��蓖�Ă�B
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
            //0���烊�X�g�ɂ��鎿��̐�
            //currentQuestion = Random.Range(0, QandA.Count);

            //���݂̎��₪�ɂイ��傭�����
            Qtxt.text = QandA[currentQuestion].Question;

            SetAnswers();
        }
        else
        {
            Debug.Log("Out");
        }

    }
}
