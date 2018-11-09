using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.InputModule.Examples.Grabbables;

public class OrganSwapScript : MonoBehaviour {

    public string organToPlaceTag;
	public GameObject checkMark;
    public GameObject objectToCut;
    public GameObject organToRemove;
    public GameObject organToPlace;
	public GameObject[] pointsToStaple;
	private bool allPointsStapled;
    private bool organInPlace;
    private bool skinInPlace;
	private bool canStaple;
	private bool isStapled;

	// Use this for initialization
	void Start () {
        organInPlace = false;
        skinInPlace = true;
		canStaple = true;
		allPointsStapled = false;
		isStapled = false;
	}
	
	// Update is called once per frame
	void Update () {
		if (isStapled) {
			checkMark.SetActive (true);
			organToPlace.GetComponent<GrabbableChild> ().enabled = false;
			objectToCut.GetComponent<GrabbableChild> ().enabled = false;
		}

        if(skinInPlace)
        {
            organToRemove.GetComponent<GrabbableChild>().enabled = false;
        }
        else
        {
            organToRemove.GetComponent<GrabbableChild>().enabled = true;
        }

		if (!canStaple) {
			for (int i = 0; i < pointsToStaple.Length; i++) {
				if (pointsToStaple [i].activeSelf) {
					allPointsStapled = false;
					break;
				} else {
					allPointsStapled = true;
				}
			}

			if(allPointsStapled)
			{
				objectToCut.GetComponent<GrabbableChild>().enabled = false;
				isStapled = true;
			}

		}

	}

    private void OnTriggerStay(Collider other)
    {
        if (other.CompareTag(organToPlaceTag))
        {
            organToPlace.transform.position = new Vector3(.221f, .817f, .8234f);
        }
        else if (other.CompareTag("RemovableSkin") && organInPlace)
        {
            objectToCut.transform.position = new Vector3(.2186f, .818f, .8255f);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(organToPlaceTag))
        {
            organInPlace = true;
            organToPlace.GetComponent<GrabbableChild>().enabled = false;
        }
        else if(other.CompareTag("RemovableSkin"))
        {
            skinInPlace = true;
        }

		if (organInPlace && skinInPlace && !isStapled && canStaple) {
			for (int i = 0; i < pointsToStaple.Length; i++) {
				pointsToStaple [i].SetActive (true);
			}
			canStaple = false;
		}
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(organToPlaceTag))
        {
            organInPlace = false;           
        }
        else if (other.CompareTag("RemovableSkin"))
        {
            skinInPlace = false;
            organToPlace.GetComponent<GrabbableChild>().enabled = true;
        }
    }
}
