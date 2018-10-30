using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.InputModule.Examples.Grabbables;

public class OrganSwapScript : MonoBehaviour {

    public string organToPlaceTag;
    public GameObject objectToCut;
    public GameObject organToRemove;
    public GameObject organToPlace;
    private bool organInPlace;
    private bool skinInPlace;

	// Use this for initialization
	void Start () {
        organInPlace = false;
        skinInPlace = true;
	}
	
	// Update is called once per frame
	void Update () {
		if(organInPlace && skinInPlace && objectToCut.GetComponent<SlicingScript>().isStapled)
        {
            Debug.Log("Surgery Complete");
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
            organToPlace.GetComponent<GrabbableChild>().enabled = false;
        }
        else if(other.CompareTag("RemovableSkin"))
        {
            skinInPlace = true;
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
