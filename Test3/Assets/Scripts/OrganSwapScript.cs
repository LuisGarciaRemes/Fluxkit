using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.InputModule.Examples.Grabbables;

public class OrganSwapScript : MonoBehaviour {

    public string organToPlaceTag;
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
		if(organInPlace && skinInPlace && isStapled)
        {
            Debug.Log("Surgery Complete");
            organToPlace.GetComponent<GrabbableChild>().enabled = false;
            objectToCut.GetComponent<GrabbableChild>().enabled = false;
        }

        if(skinInPlace)
        {
            organToRemove.GetComponent<GrabbableChild>().enabled = false;
        }
        else
        {
            organToRemove.GetComponent<GrabbableChild>().enabled = true;
        }


	}

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(organToPlaceTag))
        {
            organInPlace = true;
            organToPlace.transform.position = new Vector3(.221f, .817f, .8234f);
            //organToPlace.transform.rotation = new Quaternion(90f, 0f, -90f, 0f);
            organToPlace.GetComponent<GrabbableChild>().enabled = false;
        }
        else if(other.CompareTag("RemovableSkin"))
        {
            skinInPlace = true;
            objectToCut.transform.position = new Vector3(.2186f, .8175f, .8255f);
            //objectToCut.transform.rotation = new Quaternion(0f, -90f, 0f, 0f);
        }

		if (organInPlace && skinInPlace && !isStapled && canStaple) {
			for (int i = 0; i < pointsToStaple.Length; i++) {
				pointsToStaple [i].SetActive (true);
			}
			canStaple = false;
		}

		if (!canStaple) {
			for (int i = 0; i < pointsToStaple.Length; i++) {
				if (pointsToStaple [i].activeSelf) {
					allPointsStapled = false;
					break;
				} else {
					allPointsStapled = true;
					isStapled = true;
				}
			}

		if(allPointsStapled)
		{
			objectToCut.GetComponent<GrabbableChild>().enabled = false;
			isStapled = true;
		}
			
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
