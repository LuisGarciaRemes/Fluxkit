using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tramble : MonoBehaviour {
    private void OnTriggerStay(Collider other)
    {
        HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild temp = other.gameObject.GetComponent<HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild>();
        if (temp != null) {
           // TestViberate.Instance.Viberate(temp.my_hand, 1.0f, 1.0f);
        }
    }
}
