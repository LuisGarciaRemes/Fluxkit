using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CutPointScript : MonoBehaviour {

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Knife"))
        {
            gameObject.SetActive(false);
        }
    }

 }
