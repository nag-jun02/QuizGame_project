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

    public GameObject someUp;


    private void Start()
    {
        GneraleQuestion();
        SoundManager.instance.Sound(SoundManager.BGM.Game);
    }

    public void TimeUp()
    {
        someUp.SetActive(false);
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

            //�e�L�X�g���Ɋ��蓖�Ă�B
            options[i].transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = QandA[currentQuestion].Answers[i];

            //True,False�̊��蓖��
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
            //����������_���ŕ\��
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
