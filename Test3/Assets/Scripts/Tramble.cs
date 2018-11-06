using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tramble : MonoBehaviour {
    public GameObject WastedFoot;
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Saw") {
            SawingManager.Instance.Register(other.gameObject.GetComponent<Transform>(), WastedFoot,this.gameObject);
            Debug.Log("Contact");
        }
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.tag == "Saw")
        {
            HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild temp = other.gameObject.GetComponent<HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild>();
            if (temp != null)
            {
                //TestViberate.Instance.Viberate(temp.my_hand, 1.0f, 1.0f);
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Saw") {
            SawingManager.Instance.Resign();
        }
    }
}
