using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SwitchScene : MonoBehaviour
{

	public static void GameSceneSwitch()
	{
		SceneManager.LoadScene("GameScene");
	}

	public static void TitleSceneSwitch()
	{
		SceneManager.LoadScene("Title");
	}
}
