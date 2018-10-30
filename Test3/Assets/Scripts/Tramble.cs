using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tramble : MonoBehaviour {
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Saw") {
            SawingManager.Instance.Register(this.transform, this.gameObject);
        }
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.tag == "Saw")
        {
            HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild temp = other.gameObject.GetComponent<HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild>();
            if (temp != null)
            {
                TestViberate.Instance.Viberate(temp.my_hand, 1.0f, 1.0f);
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
