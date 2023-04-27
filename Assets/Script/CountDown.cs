using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CountDown : MonoBehaviour
{
    public int countdownMinutes = 3;
    private float countdownSeconds;
    public TextMeshProUGUI timeUpText;

    private void Start()
    {
        timeUpText = GetComponent<TextMeshProUGUI>();
        countdownSeconds = countdownMinutes * 60;
    }

    void Update()
    {
        countdownSeconds -= Time.deltaTime;
        var span = new TimeSpan(0, 0, (int)countdownSeconds);
        timeUpText.text = span.ToString(@"mm\:ss");

        if (countdownSeconds <= 0)
        {
            // 0•b‚É‚È‚Á‚½‚Æ‚«‚Ìˆ—(‰¼)
            countdownSeconds = 0.0f;
        }
    }
}
