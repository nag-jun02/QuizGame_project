using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TitleAudio : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        SoundManager.instance.Sound(SoundManager.BGM.Title);
    }

}
