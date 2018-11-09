using UnityEngine;
using UnityEngine.XR.WSA.Input;
using HoloToolkit.Unity;

public class InputRumble : MonoBehaviour
{
    private void OnEnable()
    {
        InteractionManager.InteractionSourcePressed += InteractionManager_InteractionSourcePressed;
    }

    private void OnDisable()
    {
        InteractionManager.InteractionSourcePressed -= InteractionManager_InteractionSourcePressed;
    }

    private void InteractionManager_InteractionSourceReleased(InteractionSourceReleasedEventArgs obj)
    {
        // Subtle rumble on release
#if !UNITY_EDITOR
        obj.state.source.StartHaptics(0.25f, 0.25f);
#endif
    }

    private void InteractionManager_InteractionSourcePressed(InteractionSourcePressedEventArgs obj)
    {
        // Intense rumble on press
#if !UNITY_EDITOR
        obj.state.source.StartHaptics(1.0f, 1.0f);
#endif
    }
}
