using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StapleScript : MonoBehaviour {

    private bool canStaple;

	// Use this for initialization
	void Start () {
		
	}

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Wound"))
        {
            canStaple = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Wound"))
        {
            canStaple = false;
        }
    }

    // Update is called once per frame
    void Update () {
		if(canStaple &&(Input.GetButtonDown("CONTROLLER_LEFT_STICK_CLICK") || Input.GetButtonDown("CONTROLLER_RIGHT_STICK_CLICK")))
        {
           
        }
	}
}
