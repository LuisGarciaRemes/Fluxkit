using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutPointScript : MonoBehaviour {

    public GameObject point;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Knife"))
        {
            gameObject.SetActive(false);
        }
    }

 }
