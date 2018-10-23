using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlicingScript : MonoBehaviour {

    public SphereCollider[] points;
    private bool allPointsCut;

	// Use this for initialization
	void Start () {      
	}

    // Update is called once per frame
    void Update()
    {
        allPointsCut = true;
        for (int i = 0; i < points.Length; i++)
        {
            if(points[i].enabled)
            {
                allPointsCut = false;
            }
        }

        if(allPointsCut)
        {
            Destroy(gameObject);
        }
    }
}
