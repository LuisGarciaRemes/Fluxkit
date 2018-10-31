using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayMetalDingScript : MonoBehaviour {

	private AudioSource audioSource;

	// Use this for initialization
	void Start () {
		audioSource = gameObject.GetComponent<AudioSource> ();
	}

	private void OnCollisionEnter(Collision other)
	{
		if (other.collider.CompareTag("Knife") || other.collider.CompareTag("Stapler"))
		{
			audioSource.Play();
		}
	}
}
