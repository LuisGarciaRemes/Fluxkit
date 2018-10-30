// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

using UnityEngine;
using HoloToolkit.Unity.InputModule;

namespace HoloToolkit.Unity.Tests
{
    [RequireComponent(typeof(SetGlobalListener))]
    public class HapticsTest : MonoBehaviour, IInputHandler
    {
        public bool IsActive = false;
        void Awake() {
            IsActive = false;
        }
        void IInputHandler.OnInputDown(InputEventData eventData)
        {
            if (!IsActive) {
                return;
            }
            InteractionInputSource inputSource = eventData.InputSource as InteractionInputSource;
            if (inputSource != null)
            {
                inputSource.StartHaptics(eventData.SourceId, 1.0f, 1.0f);
                switch (eventData.PressType)
                {
                    case InteractionSourcePressInfo.Grasp:
                        inputSource.StartHaptics(eventData.SourceId, 1.0f);
                        return;
                    case InteractionSourcePressInfo.Menu:
                        inputSource.StartHaptics(eventData.SourceId, 1.0f, 1.0f);
                        return;
                }
            }
        }

        void IInputHandler.OnInputUp(InputEventData eventData)
        {
            if (!IsActive) {
                return;
            }
            InteractionInputSource inputSource = eventData.InputSource as InteractionInputSource;
            if (inputSource != null)
            {
                if (eventData.PressType == InteractionSourcePressInfo.Grasp)
                {
                    inputSource.StopHaptics(eventData.SourceId);
                }
            }
        }
    }
}
