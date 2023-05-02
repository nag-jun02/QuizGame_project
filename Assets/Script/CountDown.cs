using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class CountDown : MonoBehaviour
{
    public QuizManager quizMg;
    public int countdownMinutes = 3;
    private float countdownSeconds;
    public TextMeshProUGUI timeUpText;

    public GameObject quizPanel;
    public GameObject panel;
    int totalScore;

    private void Start()
    {
    
        panel.SetActive(false);
        timeUpText = GetComponent<TextMeshProUGUI>();
        countdownSeconds = countdownMinutes * 60;
    }

    public void TimeUp()
    {
        panel.SetActive(true);
        quizPanel.SetActive(false);
        
    }

    void Update()
    {
        countdownSeconds -= Time.deltaTime;
        var span = new TimeSpan(0, 0, (int)countdownSeconds);
        timeUpText.text = span.ToString(@"mm\:ss");

        if (countdownSeconds <= 0)
        {
            
            //countdownSeconds = 0.0f;
            TimeUp();
            //TotalScore();

            // 0•b‚É‚È‚Á‚½‚Æ‚«‚Ìˆ—(‰¼)
            Invoke("GoToResultScene", 2);
        }
    }

    public void GoToResultScene()
    {
        SceneManager.LoadScene("Result");
    }

}
