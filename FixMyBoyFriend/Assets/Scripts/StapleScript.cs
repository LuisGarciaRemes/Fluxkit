using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StapleScript : MonoBehaviour {

	public GameObject objectToStaple;
    private bool canStaple;
	private GameObject staplePoint;
	private AudioSource audioSource;

	// Use this for initialization
	void Start () {
		audioSource = gameObject.GetComponent<AudioSource> ();
	}

	//Checks if stapler is over something that can be stapled
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Wound"))
        {
            canStaple = true;
			staplePoint = other.gameObject;
        }
    }

	//Checks if stapler is not over something that can be stapled
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Wound"))
        {
            canStaple = false;
			staplePoint = null;
        }
    }

    //Sets a staple point to null if you press the staple button
    void Update () {
		
		if((Input.GetButtonDown("CONTROLLER_LEFT_STICK_CLICK") || Input.GetButtonDown("CONTROLLER_RIGHT_STICK_CLICK")))
		{
			if (canStaple && !objectToStaple.GetComponent<SlicingScript>().isActiveAndEnabled) 
			{
				staplePoint.SetActive (false);
			}
			audioSource.Play();
		}
	}
}
