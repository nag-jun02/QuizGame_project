using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    [SerializeField] AudioSource audioSource = default;
    [SerializeField] AudioClip[] audioClips = default;

    public enum BGM
    {
        Title,
        Game,
        Result
    }

    //ƒVƒ“ƒOƒ‹ƒgƒ“
    public static SoundManager instance;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    public void Sound(BGM bgm)
    {
        audioSource.clip = audioClips[(int)bgm];
        audioSource.Play();
    }
}
