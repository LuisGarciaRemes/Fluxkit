using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootHolder : MonoBehaviour {

    // Use this for initialization
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Foot") {
            HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild component = other.GetComponent<HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild>();
            if (component != null)
            {
                Destroy(component);
            }
            other.transform.parent = this.transform;
            other.transform.position = new Vector3(0, 0, 0);
            other.transform.rotation = Quaternion.identity;
            GameOver.Instance.nMouseOver();
        }
    }
}
