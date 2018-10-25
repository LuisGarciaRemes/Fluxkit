using UnityEngine;
using HoloToolkit.Unity.InputModule;

public class TestViberate : MonoBehaviour, IInputHandler
{

    public static TestViberate Instance;
    public InteractionInputSource LeftSource;
    public uint LeftID;
    public bool leftspecified;
    public InteractionInputSource RightSource;
    public uint RightID;
    public bool Rightspecified;
    private void Awake()
    {
        Instance = this;
    }
   public void Viberate(HoloToolkit.Unity.Handedness hand, float intence, float length) {
        if (hand == HoloToolkit.Unity.Handedness.Left)
        {
            LeftSource.StartHaptics(LeftID, intence, length);
        }
        else if (hand == HoloToolkit.Unity.Handedness.Right) {
            RightSource.StartHaptics(RightID, intence, length);
        }
    }
    void IInputHandler.OnInputDown(InputEventData eventData)
    {
        if (!(leftspecified && Rightspecified))
        {
            InteractionInputSource tempSource = eventData.InputSource as InteractionInputSource;
            uint tempID = eventData.SourceId;
            HoloToolkit.Unity.Handedness tempHandness;
            tempSource.TryGetHandedness(tempID, out tempHandness);
            if (tempHandness == HoloToolkit.Unity.Handedness.Left && !leftspecified)
            {
                leftspecified = true;
                LeftSource = tempSource;
                LeftID = tempID;
                LeftSource.StartHaptics(LeftID, 1.0f, 0.5f);
            }
            else if (tempHandness == HoloToolkit.Unity.Handedness.Right && !Rightspecified)
            {
                Rightspecified = true;
                RightID = tempID;
                RightSource = tempSource;
                RightSource.StartHaptics(RightID, 1.0f, 0.5f);
            }
        }
        return;
    }

    void IInputHandler.OnInputUp(InputEventData eventData)
    {
    }

}
