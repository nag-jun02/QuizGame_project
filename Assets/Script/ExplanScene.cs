using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ExplanScene : MonoBehaviour
{
    public GameObject explanObj;
    public GameObject button;


    public void SwitchExplan()
    {
        explanObj.SetActive(true);
        button.SetActive(true);
    }

    public void SwitchExplan2()
    {
        explanObj.SetActive(false);
        button.SetActive(false);
    }
}
