using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOver : MonoBehaviour {

    public static GameOver Instance;
    public GameObject Panel;
    private void Awake()
    {
        Instance = this;
    }
    public void nMouseOver()
    {
        Panel.SetActive(true);
        Time.timeScale = 0.0f;
    }
}
