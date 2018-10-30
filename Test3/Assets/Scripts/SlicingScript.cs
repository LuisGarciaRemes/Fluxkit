using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloToolkit.Unity.InputModule.Examples.Grabbables;

public class SlicingScript : MonoBehaviour {

    public GameObject[] points;
    private bool allPointsCut;   

	// Use this for initialization
	void Start () {
        allPointsCut = false;
    }

    // Update is called once per frame
    void Update()
    {
        for (int i = 0; i < points.Length; i++)
        {
            if(points[i].activeSelf)
            {
                allPointsCut = false;
                break;
            }
            else
            {
                allPointsCut = true;
            }
        }

        if(allPointsCut)
        {
            gameObject.GetComponent<GrabbableChild>().enabled = true;
        }
    }
}
