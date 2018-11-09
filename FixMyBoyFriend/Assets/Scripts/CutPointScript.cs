using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutPointScript : MonoBehaviour {

	private AudioSource audioSource;

	void Start () {
		audioSource = gameObject.transform.parent.GetComponent<AudioSource>();
	}

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Knife"))
        {
			//plays whenever knife touches a cutting point
			audioSource.Play();

			//makes sure it only lets you cut during the cutting stage
			if (gameObject.transform.parent.GetComponent<SlicingScript> ().isActiveAndEnabled) {
				gameObject.SetActive (false);
			}
        }
    }

 }
