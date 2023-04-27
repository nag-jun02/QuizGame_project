using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SwitchScene : MonoBehaviour
{
	public static string gameScene = "GameScene";

	public static void SceneSwitch()
	{
		SceneManager.LoadScene(gameScene);
	}
}
