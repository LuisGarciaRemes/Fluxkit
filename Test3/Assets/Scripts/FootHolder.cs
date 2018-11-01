using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootHolder : MonoBehaviour {
    private Collider other = null;
   
    // Use this for initialization
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Foot") {
            HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild component = other.GetComponent<HoloToolkit.Unity.InputModule.Examples.Grabbables.GrabbableChild>();
            if (component != null)
            {
                Destroy(component);
            }
            this.other = other;
            other.transform.position = new Vector3(0, 0, 0);
            other.transform.localScale = new Vector3(.05f, 0.05f, 5f);
            other.transform.rotation = Quaternion.identity;
            other.transform.Rotate(90f, 0f,0f);
            other.transform.parent = this.transform;
            GameOver.Instance.nMouseOver();
        }
    }
  
}
