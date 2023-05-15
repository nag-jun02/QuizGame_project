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

    public QuestionandAnswers qandA;

    public int correctCount = 0;
    public int wrongCount = 0;
    public static int totalScore;

    private void Start()
    {
        GneraleQuestion();
        SoundManager.instance.Sound(SoundManager.BGM.Game);
    }

    //���␶��
    public void Correct()
    {
        correctCount += 100;

        QandA.RemoveAt(currentQuestion);
        GneraleQuestion();
    }

    public void Wrong()
    {
        wrongCount -= 20;

        //int qWrong = qandA.Question.qrowget(); //CSV�t�@�C���̍s�����擾
        //PlayerPrefs.SetInt("missrow" + qrow.ToString(), qWrong); //�s�����L�[�ɂ��ĊԈႦ���s�����i�[
        //PlayerPrefs.Save(); //�ۑ�

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
            currentQuestion = Random.Range(0, QandA.Count);

            //���݂̎��₪�ɂイ��傭�����
            Qtxt.text = QandA[currentQuestion].Question;

            SetAnswers();
            totalScore = correctCount + wrongCount;
        }
        else
        {
            
            Debug.Log("Out");
        }

    }

    //�X�R�A�̌v�Z���ʂ�Ԃ�
    public static int GetTotalScore()
    {
        return totalScore;
    }
}
