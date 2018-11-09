#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t9239872;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t3313059048;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// Windows.Perception.IPerceptionTimestampHelperStatics
struct IPerceptionTimestampHelperStatics_t2092781866;
// Windows.Storage.IApplicationDataStatics
struct IApplicationDataStatics_t3792839446;
// Windows.Storage.IApplicationDataStatics2
struct IApplicationDataStatics2_t2938905366;
// Windows.UI.Core.ICoreWindowStatic
struct ICoreWindowStatic_t1678315526;
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct ISpatialInteractionManagerStatics_t2291651573;
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct IPropertyChangedEventArgsFactory_t4178285917;
// Windows.UI.Xaml.IDependencyObjectFactory
struct IDependencyObjectFactory_t1390337327;
// Windows.UI.Xaml.IUIElementFactory
struct IUIElementFactory_t520894359;
// Windows.UI.Xaml.IUIElementStatics
struct IUIElementStatics_t2851391452;
// Windows.UI.Xaml.IUIElementStatics2
struct IUIElementStatics2_t2850211804;
// Windows.UI.Xaml.IUIElementStatics3
struct IUIElementStatics3_t2850277340;
// Windows.UI.Xaml.IUIElementStatics4
struct IUIElementStatics4_t2850080732;
// Windows.UI.Xaml.IUIElementStatics5
struct IUIElementStatics5_t2850146268;
// Windows.UI.Xaml.IUIElementStatics6
struct IUIElementStatics6_t2849949660;
// Windows.UI.Xaml.IUIElementStatics7
struct IUIElementStatics7_t2850015196;
// Windows.UI.Xaml.IUIElementStatics8
struct IUIElementStatics8_t2849818588;
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
struct INotifyCollectionChangedEventArgsFactory_t1817199772;

struct IApplicationData_t28886227;
struct IAsyncAction_t3072713919;
struct IAsyncOperation_1_t1918115372;
struct IBindableIterator_t667386168;
struct IBindableVectorView_t4191940899;
struct IBindableVector_t1801110279;
struct IDispatchedHandler_t626468369_ComCallableWrapper;
struct IFrame_t1733009749;
struct INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper;
struct IPerceptionTimestamp_t393505964;
struct ISimpleHapticsController_t3936202477;
struct ISpatialInteractionController_t138196805;
struct ISpatialInteractionManager_t354061063;
struct ISpatialInteractionSource_t2185314266;
struct IStorageFolder_t2414910357;
struct ITypedEventHandler_2_t986724726_ComCallableWrapper;
struct IVectorView_1_t554553325;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Storage.IApplicationData
struct NOVTABLE IApplicationData_t28886227 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped0_get_Version_m3464523458() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped1_SetVersionAsync_m2657783601() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped2_ClearAsync_m3547980218() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped3_ClearAsync_m3548227419() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped4_get_LocalSettings_m3007367750() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped5_get_RoamingSettings_m907061657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped6_get_LocalFolder_m864445652() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_get_RoamingFolder_m1109609965(IStorageFolder_t2414910357** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped7_get_TemporaryFolder_m3729894556() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped8_add_DataChanged_m2266976657() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped9_remove_DataChanged_m2367811666() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped10_SignalDataChanged_m3679481841() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData_U24__Stripped11_get_RoamingStorageQuota_m423759995() = 0;
};
// Windows.Storage.IApplicationData2
struct NOVTABLE IApplicationData2_t163893929 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData2_U24__Stripped0_get_LocalCacheFolder_m693950201() = 0;
};
// Windows.Storage.IApplicationData3
struct NOVTABLE IApplicationData3_t163893930 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped0_GetPublisherCacheFolder_m4135038805() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped1_ClearPublisherCacheFolderAsync_m842510329() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationData3_U24__Stripped2_get_SharedLocalFolder_m775779766() = 0;
};
// Windows.Storage.IApplicationDataStatics
struct NOVTABLE IApplicationDataStatics_t3792839446 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics_get_Current_m1299656078(IApplicationData_t28886227** comReturnValue) = 0;
};
// Windows.Storage.IApplicationDataStatics2
struct NOVTABLE IApplicationDataStatics2_t2938905366 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationDataStatics2_U24__Stripped0_GetForUserAsync_m2306898698() = 0;
};
// Windows.UI.Core.ICoreAcceleratorKeys
struct NOVTABLE ICoreAcceleratorKeys_t931412490 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreAcceleratorKeys_U24__Stripped0_add_AcceleratorKeyActivated_m3735084724() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreAcceleratorKeys_U24__Stripped1_remove_AcceleratorKeyActivated_m3209733897() = 0;
};
// Windows.UI.Core.ICoreDispatcher2
struct NOVTABLE ICoreDispatcher2_t2392265846 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher2_U24__Stripped0_TryRunAsync_m4275648049() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher2_U24__Stripped1_TryRunIdleAsync_m2875242297() = 0;
};
// Windows.UI.Core.ICoreDispatcherWithTaskPriority
struct NOVTABLE ICoreDispatcherWithTaskPriority_t1942681059 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped0_get_CurrentPriority_m360744912() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped1_put_CurrentPriority_m3352827531() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped2_ShouldYield_m657205659() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped3_ShouldYield_m2796747783() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcherWithTaskPriority_U24__Stripped4_StopProcessEvents_m2790281737() = 0;
};
// Windows.UI.Core.ICorePointerRedirector
struct NOVTABLE ICorePointerRedirector_t64917422 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped0_add_PointerRoutedAway_m1203158329() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped1_remove_PointerRoutedAway_m3428045678() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped2_add_PointerRoutedTo_m3926024979() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped3_remove_PointerRoutedTo_m2735950669() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped4_add_PointerRoutedReleased_m1378821237() = 0;
	virtual il2cpp_hresult_t STDCALL ICorePointerRedirector_U24__Stripped5_remove_PointerRoutedReleased_m2328258553() = 0;
};
// Windows.UI.Core.ICoreWindow2
struct NOVTABLE ICoreWindow2_t491607557 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow2_U24__Stripped0_put_PointerPosition_m1560567044() = 0;
};
// Windows.UI.Core.ICoreWindow3
struct NOVTABLE ICoreWindow3_t2830259717 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped0_add_ClosestInteractiveBoundsRequested_m2441516162() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped1_remove_ClosestInteractiveBoundsRequested_m2995678219() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow3_U24__Stripped2_GetCurrentKeyEventDeviceId_m2296197743() = 0;
};
// Windows.UI.Core.ICoreWindow4
struct NOVTABLE ICoreWindow4_t109270533 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped0_add_ResizeStarted_m1040937597() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped1_remove_ResizeStarted_m2417551533() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped2_add_ResizeCompleted_m81633379() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow4_U24__Stripped3_remove_ResizeCompleted_m3583907526() = 0;
};
// Windows.UI.Core.ICoreWindow5
struct NOVTABLE ICoreWindow5_t2447922693 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow5_U24__Stripped0_get_DispatcherQueue_m3451668560() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow5_U24__Stripped1_get_ActivationMode_m1814850626() = 0;
};
// Windows.UI.Core.ICoreWindowEventArgs
struct NOVTABLE ICoreWindowEventArgs_t151143671 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindowEventArgs_U24__Stripped0_get_Handled_m2824967326() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindowEventArgs_U24__Stripped1_put_Handled_m1369740630() = 0;
};
// Windows.UI.Core.ICoreWindowStatic
struct NOVTABLE ICoreWindowStatic_t1678315526 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindowStatic_U24__Stripped0_GetForCurrentThread_m3665873366() = 0;
};
// Windows.UI.Core.IVisibilityChangedEventArgs
struct NOVTABLE IVisibilityChangedEventArgs_t497166311 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVisibilityChangedEventArgs_get_Visible_m1739340696(bool* comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController
struct NOVTABLE ISpatialInteractionController_t138196805 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped0_get_HasTouchpad_m2630947096() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped1_get_HasThumbstick_m627908187() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_get_SimpleHapticsController_m1735849567(ISimpleHapticsController_t3936202477** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped2_get_VendorId_m3678312071() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped3_get_ProductId_m1677934416() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController_U24__Stripped4_get_Version_m2531622161() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController2
struct NOVTABLE ISpatialInteractionController2_t3418596785 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController2_TryGetRenderableModelAsync_m2032660185(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionController3
struct NOVTABLE ISpatialInteractionController3_t689713430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionController3_U24__Stripped0_TryGetBatteryReport_m2923472422() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManager
struct NOVTABLE ISpatialInteractionManager_t354061063 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped0_add_SourceDetected_m1164816237() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped1_remove_SourceDetected_m2245090769() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped2_add_SourceLost_m3002472675() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped3_remove_SourceLost_m3408947156() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped4_add_SourceUpdated_m2106248377() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped5_remove_SourceUpdated_m2599047237() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped6_add_SourcePressed_m1288155835() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped7_remove_SourcePressed_m598107626() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped8_add_SourceReleased_m3272587475() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped9_remove_SourceReleased_m2897080590() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped10_add_InteractionDetected_m3770431277() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_U24__Stripped11_remove_InteractionDetected_m1175695482() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManager_GetDetectedSourcesAtTimestamp_m3746477042(IPerceptionTimestamp_t393505964* ___timeStamp0, IVectorView_1_t554553325** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
struct NOVTABLE ISpatialInteractionManagerStatics_t2291651573 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionManagerStatics_GetForCurrentView_m3067930004(ISpatialInteractionManager_t354061063** comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource
struct NOVTABLE ISpatialInteractionSource_t2185314266 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_get_Id_m2383602496(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource_U24__Stripped0_get_Kind_m3686833464() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource2
struct NOVTABLE ISpatialInteractionSource2_t2453383580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped0_get_IsPointingSupported_m1454104212() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped1_get_IsMenuSupported_m3484143573() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped2_get_IsGraspSupported_m1550180598() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_get_Controller_m1434681608(ISpatialInteractionController_t138196805** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource2_U24__Stripped3_TryGetStateAtTimestamp_m569091676() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSource3
struct NOVTABLE ISpatialInteractionSource3_t887299639 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSource3_U24__Stripped0_get_Handedness_m3941985797() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct NOVTABLE ISpatialInteractionSourceState_t1358829803 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_get_Source_m2883277112(ISpatialInteractionSource_t2185314266** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped0_get_Properties_m1189053370() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped1_get_IsPressed_m546887925() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped2_get_Timestamp_m1483989895() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped3_TryGetPointerPose_m837462904() = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct NOVTABLE ISpatialInteractionSourceState2_t2977437931 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped0_get_IsSelectPressed_m1462024929() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped1_get_IsMenuPressed_m2884506468() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped2_get_IsGrasped_m2033866613() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped3_get_SelectPressedValue_m3876541456() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped4_get_ControllerProperties_m1166340460() = 0;
};
// Windows.UI.Xaml.Controls.IContentControl
struct NOVTABLE IContentControl_t2016467381 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped0_get_Content_m2638658612() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped1_put_Content_m2938028135() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped2_get_ContentTemplate_m3627628604() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped3_put_ContentTemplate_m579768954() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped4_get_ContentTemplateSelector_m1527648251() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped5_put_ContentTemplateSelector_m2252024363() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped6_get_ContentTransitions_m1863497080() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControl_U24__Stripped7_put_ContentTransitions_m2011752048() = 0;
};
// Windows.UI.Xaml.Controls.IContentControl2
struct NOVTABLE IContentControl2_t877166318 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControl2_U24__Stripped0_get_ContentTemplateRoot_m552124535() = 0;
};
// Windows.UI.Xaml.Controls.IContentControlFactory
struct NOVTABLE IContentControlFactory_t368508199 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControlFactory_U24__Stripped0_CreateInstance_m1519343961() = 0;
};
// Windows.UI.Xaml.Controls.IContentControlOverrides
struct NOVTABLE IContentControlOverrides_t1476785288 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControlOverrides_U24__Stripped0_OnContentChanged_m3023563670() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlOverrides_U24__Stripped1_OnContentTemplateChanged_m3341869204() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlOverrides_U24__Stripped2_OnContentTemplateSelectorChanged_m560699260() = 0;
};
// Windows.UI.Xaml.Controls.IContentControlStatics
struct NOVTABLE IContentControlStatics_t179784444 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped0_get_ContentProperty_m1743225381() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped1_get_ContentTemplateProperty_m3807612186() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped2_get_ContentTemplateSelectorProperty_m1496306695() = 0;
	virtual il2cpp_hresult_t STDCALL IContentControlStatics_U24__Stripped3_get_ContentTransitionsProperty_m309893014() = 0;
};
// Windows.UI.Xaml.Controls.IFrame2
struct NOVTABLE IFrame2_t1936826709 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame2_U24__Stripped0_get_BackStack_m1693900448() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame2_U24__Stripped1_get_ForwardStack_m2593649221() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame2_U24__Stripped2_Navigate_m1900297754() = 0;
};
// Windows.UI.Xaml.Controls.IFrame3
struct NOVTABLE IFrame3_t4275478869 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame3_U24__Stripped0_GoBack_m606164099() = 0;
};
// Windows.UI.Xaml.Controls.IFrame4
struct NOVTABLE IFrame4_t3083837781 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame4_U24__Stripped0_SetNavigationState_m2758284236() = 0;
};
// Windows.UI.Xaml.Controls.IFrameFactory
struct NOVTABLE IFrameFactory_t1251236688 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameFactory_CreateInstance_m2927150047(Il2CppIInspectable* ___outer0, Il2CppIInspectable** ___inner1, IFrame_t1733009749** comReturnValue) = 0;
};
// Windows.UI.Xaml.Controls.IFrameStatics
struct NOVTABLE IFrameStatics_t1678072084 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped0_get_CacheSizeProperty_m3618277407() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped1_get_CanGoBackProperty_m3729138792() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped2_get_CanGoForwardProperty_m2599856054() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped3_get_CurrentSourcePageTypeProperty_m1211365699() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped4_get_SourcePageTypeProperty_m4266162276() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics_U24__Stripped5_get_BackStackDepthProperty_m2696637478() = 0;
};
// Windows.UI.Xaml.Controls.IFrameStatics2
struct NOVTABLE IFrameStatics2_t3481383410 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameStatics2_U24__Stripped0_get_BackStackProperty_m2738266397() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameStatics2_U24__Stripped1_get_ForwardStackProperty_m305090598() = 0;
};
// Windows.UI.Xaml.Controls.INavigate
struct NOVTABLE INavigate_t38993641 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INavigate_U24__Stripped0_Navigate_m2732946620() = 0;
};
// Windows.UI.Xaml.Data.IPropertyChangedEventArgs
struct NOVTABLE IPropertyChangedEventArgs_t1404159462 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgs_get_PropertyName_m2977473784(Il2CppHString* comReturnValue) = 0;
};
// Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
struct NOVTABLE IPropertyChangedEventArgsFactory_t4178285917 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyChangedEventArgsFactory_CreateInstance_m601787316(Il2CppHString ___name0, Il2CppIInspectable* ___outer1, Il2CppIInspectable** ___inner2, PropertyChangedEventArgs_t3313059048 ** comReturnValue) = 0;
};
// Windows.UI.Xaml.IDependencyObject
struct NOVTABLE IDependencyObject_t3468341335 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped0_GetValue_m1957740890() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped1_SetValue_m1035023860() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped2_ClearValue_m1609098810() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped3_ReadLocalValue_m4161021806() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped4_GetAnimationBaseValue_m182226023() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped5_get_Dispatcher_m187262419() = 0;
};
// Windows.UI.Xaml.IDependencyObject2
struct NOVTABLE IDependencyObject2_t3465326679 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped0_RegisterPropertyChangedCallback_m1182027682() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped1_UnregisterPropertyChangedCallback_m2683655511() = 0;
};
// Windows.UI.Xaml.IDependencyObjectFactory
struct NOVTABLE IDependencyObjectFactory_t1390337327 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObjectFactory_U24__Stripped0_CreateInstance_m2528011140() = 0;
};
// Windows.UI.Xaml.IFrameworkElement
struct NOVTABLE IFrameworkElement_t1727772090 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped0_get_Triggers_m2129127559() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped1_get_Resources_m3712382430() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped2_put_Resources_m4247577134() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped3_get_Tag_m3795506638() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped4_put_Tag_m551378723() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped5_get_Language_m2230307011() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped6_put_Language_m4173221482() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped7_get_ActualWidth_m3765714704() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped8_get_ActualHeight_m201001695() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped9_get_Width_m2346933531() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped10_put_Width_m1338708800() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped11_get_Height_m3715553494() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped12_put_Height_m1917330615() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped13_get_MinWidth_m3494115106() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped14_put_MinWidth_m2521453182() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped15_get_MaxWidth_m2172988018() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped16_put_MaxWidth_m134233646() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped17_get_MinHeight_m3893731516() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped18_put_MinHeight_m997829124() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped19_get_MaxHeight_m4225681284() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped20_put_MaxHeight_m998894222() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped21_get_HorizontalAlignment_m123677769() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped22_put_HorizontalAlignment_m3385509983() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped23_get_VerticalAlignment_m84644216() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped24_put_VerticalAlignment_m269641103() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped25_get_Margin_m1415178701() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped26_put_Margin_m1314781863() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped27_get_Name_m3408387619() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped28_put_Name_m3915720599() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped29_get_BaseUri_m679790422() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped30_get_DataContext_m2374058149() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped31_put_DataContext_m904272743() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped32_get_Style_m621839791() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped33_put_Style_m364093169() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped34_get_Parent_m3829461513() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped35_get_FlowDirection_m1427072720() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped36_put_FlowDirection_m1138271303() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped37_add_Loaded_m2657256288() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped38_remove_Loaded_m14380143() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped39_add_Unloaded_m1953142752() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped40_remove_Unloaded_m1789237915() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped41_add_SizeChanged_m789174205() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped42_remove_SizeChanged_m3909578422() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped43_add_LayoutUpdated_m1795117806() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped44_remove_LayoutUpdated_m518034917() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped45_FindName_m773720809() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement_U24__Stripped46_SetBinding_m43048985() = 0;
};
// Windows.UI.Xaml.IFrameworkElement2
struct NOVTABLE IFrameworkElement2_t1731048890 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped0_get_RequestedTheme_m3859230078() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped1_put_RequestedTheme_m2095923211() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped2_add_DataContextChanged_m3076707601() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped3_remove_DataContextChanged_m1211015717() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement2_U24__Stripped4_GetBindingExpression_m3511170676() = 0;
};
// Windows.UI.Xaml.IFrameworkElement3
struct NOVTABLE IFrameworkElement3_t1731114426 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement3_U24__Stripped0_add_Loading_m2675988050() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement3_U24__Stripped1_remove_Loading_m3302000958() = 0;
};
// Windows.UI.Xaml.IFrameworkElement4
struct NOVTABLE IFrameworkElement4_t1730655674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped0_get_AllowFocusOnInteraction_m2955994786() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped1_put_AllowFocusOnInteraction_m3170054187() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped2_get_FocusVisualMargin_m3514792131() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped3_put_FocusVisualMargin_m2465948341() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped4_get_FocusVisualSecondaryThickness_m4213645990() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped5_put_FocusVisualSecondaryThickness_m1809404551() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped6_get_FocusVisualPrimaryThickness_m286791734() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped7_put_FocusVisualPrimaryThickness_m3777400658() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped8_get_FocusVisualSecondaryBrush_m1971297289() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped9_put_FocusVisualSecondaryBrush_m2315253874() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped10_get_FocusVisualPrimaryBrush_m1701143622() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped11_put_FocusVisualPrimaryBrush_m3451370254() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped12_get_AllowFocusWhenDisabled_m2219643453() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElement4_U24__Stripped13_put_AllowFocusWhenDisabled_m4097462109() = 0;
};
// Windows.UI.Xaml.IFrameworkElementFactory
struct NOVTABLE IFrameworkElementFactory_t2131831971 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementFactory_U24__Stripped0_CreateInstance_m2649571597() = 0;
};
// Windows.UI.Xaml.IFrameworkElementOverrides
struct NOVTABLE IFrameworkElementOverrides_t1842747390 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides_U24__Stripped0_MeasureOverride_m266561459() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides_U24__Stripped1_ArrangeOverride_m1618214695() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides_U24__Stripped2_OnApplyTemplate_m2376117007() = 0;
};
// Windows.UI.Xaml.IFrameworkElementOverrides2
struct NOVTABLE IFrameworkElementOverrides2_t2903822428 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementOverrides2_U24__Stripped0_GoToElementStateCore_m4059249501() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics
struct NOVTABLE IFrameworkElementStatics_t685079279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped0_get_TagProperty_m1304495473() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped1_get_LanguageProperty_m3474246373() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped2_get_ActualWidthProperty_m2698354757() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped3_get_ActualHeightProperty_m2149038307() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped4_get_WidthProperty_m399335040() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped5_get_HeightProperty_m2289665979() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped6_get_MinWidthProperty_m2109388824() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped7_get_MaxWidthProperty_m2529820592() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped8_get_MinHeightProperty_m685742670() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped9_get_MaxHeightProperty_m2909682419() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped10_get_HorizontalAlignmentProperty_m442132297() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped11_get_VerticalAlignmentProperty_m4142230850() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped12_get_MarginProperty_m4284158343() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped13_get_NameProperty_m473028578() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped14_get_DataContextProperty_m3877514259() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped15_get_StyleProperty_m2101848247() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped16_get_FlowDirectionProperty_m3045417150() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics2
struct NOVTABLE IFrameworkElementStatics2_t2563243859 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics2_U24__Stripped0_get_RequestedThemeProperty_m4062911476() = 0;
};
// Windows.UI.Xaml.IUIElement
struct NOVTABLE IUIElement_t3288794271 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped0_get_DesiredSize_m709505871() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped1_get_AllowDrop_m3041840487() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped2_put_AllowDrop_m1914749527() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped3_get_Opacity_m1283699049() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped4_put_Opacity_m1763390924() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped5_get_Clip_m2019843943() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped6_put_Clip_m2265905608() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped7_get_RenderTransform_m3490464697() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped8_put_RenderTransform_m898491632() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped9_get_Projection_m1464130521() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped10_put_Projection_m616859082() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped11_get_RenderTransformOrigin_m3594412852() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped12_put_RenderTransformOrigin_m4070130220() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped13_get_IsHitTestVisible_m1599923731() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped14_put_IsHitTestVisible_m1467555182() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped15_get_Visibility_m1485712346() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped16_put_Visibility_m519271095() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped17_get_RenderSize_m2451352256() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped18_get_UseLayoutRounding_m3341743904() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped19_put_UseLayoutRounding_m3125512970() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped20_get_Transitions_m2849948766() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped21_put_Transitions_m292681833() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped22_get_CacheMode_m3654219909() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped23_put_CacheMode_m2632895200() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped24_get_IsTapEnabled_m3278885581() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped25_put_IsTapEnabled_m1608082586() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped26_get_IsDoubleTapEnabled_m3126845406() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped27_put_IsDoubleTapEnabled_m2925086161() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped28_get_IsRightTapEnabled_m316417938() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped29_put_IsRightTapEnabled_m1518143830() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped30_get_IsHoldingEnabled_m3760226653() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped31_put_IsHoldingEnabled_m1861642174() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped32_get_ManipulationMode_m1557223318() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped33_put_ManipulationMode_m3366924177() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped34_get_PointerCaptures_m3724483891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped35_add_KeyUp_m200859880() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped36_remove_KeyUp_m119276464() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped37_add_KeyDown_m1840932757() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped38_remove_KeyDown_m3053191285() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped39_add_GotFocus_m746626947() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped40_remove_GotFocus_m2480174581() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped41_add_LostFocus_m1266493993() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped42_remove_LostFocus_m2240699806() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped43_add_DragEnter_m1980480137() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped44_remove_DragEnter_m2374587345() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped45_add_DragLeave_m1764869820() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped46_remove_DragLeave_m1996947567() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped47_add_DragOver_m2971783047() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped48_remove_DragOver_m181087868() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped49_add_Drop_m3309253802() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped50_remove_Drop_m140032712() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped51_add_PointerPressed_m3652816380() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped52_remove_PointerPressed_m2925169172() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped53_add_PointerMoved_m1570630938() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped54_remove_PointerMoved_m3082380070() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped55_add_PointerReleased_m1626534899() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped56_remove_PointerReleased_m1933810421() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped57_add_PointerEntered_m3246226754() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped58_remove_PointerEntered_m3267619821() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped59_add_PointerExited_m1189440032() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped60_remove_PointerExited_m4240502376() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped61_add_PointerCaptureLost_m1281635200() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped62_remove_PointerCaptureLost_m1928036220() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped63_add_PointerCanceled_m1556729753() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped64_remove_PointerCanceled_m1735245720() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped65_add_PointerWheelChanged_m1013600326() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped66_remove_PointerWheelChanged_m1863361210() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped67_add_Tapped_m3601874654() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped68_remove_Tapped_m3911463356() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped69_add_DoubleTapped_m328664637() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped70_remove_DoubleTapped_m1570413593() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped71_add_Holding_m4020918841() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped72_remove_Holding_m1467099910() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped73_add_RightTapped_m935484686() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped74_remove_RightTapped_m3756107077() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped75_add_ManipulationStarting_m750061822() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped76_remove_ManipulationStarting_m3485797370() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped77_add_ManipulationInertiaStarting_m1232703763() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped78_remove_ManipulationInertiaStarting_m1085187474() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped79_add_ManipulationStarted_m1202855073() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped80_remove_ManipulationStarted_m3160566381() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped81_add_ManipulationDelta_m3829629683() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped82_remove_ManipulationDelta_m2594433141() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped83_add_ManipulationCompleted_m1390324433() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped84_remove_ManipulationCompleted_m2373650716() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped85_Measure_m2553385115() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped86_Arrange_m1454536553() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped87_CapturePointer_m1568653454() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped88_ReleasePointerCapture_m2759647656() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped89_ReleasePointerCaptures_m3581341934() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped90_AddHandler_m786959478() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped91_RemoveHandler_m36482523() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped92_TransformToVisual_m3151024488() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped93_InvalidateMeasure_m2862264214() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped94_InvalidateArrange_m1939028230() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped95_UpdateLayout_m615574013() = 0;
};
// Windows.UI.Xaml.IUIElement2
struct NOVTABLE IUIElement2_t1568362829 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped0_get_CompositeMode_m2320528698() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped1_put_CompositeMode_m2387925255() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped2_CancelDirectManipulations_m927747193() = 0;
};
// Windows.UI.Xaml.IUIElement3
struct NOVTABLE IUIElement3_t3134446770 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped0_get_Transform3D_m934841580() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped1_put_Transform3D_m638506349() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped2_get_CanDrag_m520210759() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped3_put_CanDrag_m3560492036() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped4_add_DragStarting_m2694354441() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped5_remove_DragStarting_m2454540868() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped6_add_DropCompleted_m1175786039() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped7_remove_DropCompleted_m611253450() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped8_StartDragAsync_m2459046213() = 0;
};
// Windows.UI.Xaml.IUIElement4
struct NOVTABLE IUIElement4_t761793775 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped0_get_ContextFlyout_m2253164546() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped1_put_ContextFlyout_m3007812933() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped2_get_ExitDisplayModeOnAccessKeyInvoked_m842823807() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped3_put_ExitDisplayModeOnAccessKeyInvoked_m2535379857() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped4_get_IsAccessKeyScope_m3950109518() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped5_put_IsAccessKeyScope_m2750740659() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped6_get_AccessKeyScopeOwner_m2732354747() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped7_put_AccessKeyScopeOwner_m3207032609() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped8_get_AccessKey_m802488922() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped9_put_AccessKey_m687120149() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped10_add_ContextRequested_m2385230748() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped11_remove_ContextRequested_m1248239922() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped12_add_ContextCanceled_m2065709033() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped13_remove_ContextCanceled_m3874277537() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped14_add_AccessKeyDisplayRequested_m3815559356() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped15_remove_AccessKeyDisplayRequested_m567478217() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped16_add_AccessKeyDisplayDismissed_m999452147() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped17_remove_AccessKeyDisplayDismissed_m3269864802() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped18_add_AccessKeyInvoked_m3234915069() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped19_remove_AccessKeyInvoked_m3497140154() = 0;
};
// Windows.UI.Xaml.IUIElement5
struct NOVTABLE IUIElement5_t2327877716 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped0_get_Lights_m3852189642() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped1_get_KeyTipPlacementMode_m3518358736() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped2_put_KeyTipPlacementMode_m4085063995() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped3_get_KeyTipHorizontalOffset_m1041374737() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped4_put_KeyTipHorizontalOffset_m1053336967() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped5_get_KeyTipVerticalOffset_m242791772() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped6_put_KeyTipVerticalOffset_m4275497207() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped7_get_XYFocusKeyboardNavigation_m1413502891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped8_put_XYFocusKeyboardNavigation_m2278532605() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped9_get_XYFocusUpNavigationStrategy_m736030916() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped10_put_XYFocusUpNavigationStrategy_m4003263365() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped11_get_XYFocusDownNavigationStrategy_m130943138() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped12_put_XYFocusDownNavigationStrategy_m4218571923() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped13_get_XYFocusLeftNavigationStrategy_m2044067174() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped14_put_XYFocusLeftNavigationStrategy_m3083452028() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped15_get_XYFocusRightNavigationStrategy_m2694847801() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped16_put_XYFocusRightNavigationStrategy_m2397921798() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped17_get_HighContrastAdjustment_m459726645() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped18_put_HighContrastAdjustment_m4227084072() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped19_get_TabFocusNavigation_m3111587259() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped20_put_TabFocusNavigation_m938136106() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped21_add_GettingFocus_m1116968056() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped22_remove_GettingFocus_m3837629682() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped23_add_LosingFocus_m253118518() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped24_remove_LosingFocus_m1486763130() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped25_add_NoFocusCandidateFound_m4234253717() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped26_remove_NoFocusCandidateFound_m4022790968() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped27_StartBringIntoView_m3875079692() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped28_StartBringIntoView_m145204572() = 0;
};
// Windows.UI.Xaml.IUIElement7
struct NOVTABLE IUIElement7_t1165078302 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped0_get_KeyboardAccelerators_m314738730() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped1_add_CharacterReceived_m3366474890() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped2_remove_CharacterReceived_m3990213188() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped3_add_ProcessKeyboardAccelerators_m393671582() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped4_remove_ProcessKeyboardAccelerators_m583944176() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped5_add_PreviewKeyDown_m3683785448() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped6_remove_PreviewKeyDown_m1586689604() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped7_add_PreviewKeyUp_m169946256() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped8_remove_PreviewKeyUp_m2860320783() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped9_TryInvokeKeyboardAccelerator_m928627232() = 0;
};
// Windows.UI.Xaml.IUIElement8
struct NOVTABLE IUIElement8_t2374931883 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped0_get_KeyTipTarget_m1722824891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped1_put_KeyTipTarget_m955880836() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped2_get_KeyboardAcceleratorPlacementTarget_m3293357750() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped3_put_KeyboardAcceleratorPlacementTarget_m423403693() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped4_get_KeyboardAcceleratorPlacementMode_m816856528() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped5_put_KeyboardAcceleratorPlacementMode_m2830594714() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped6_add_BringIntoViewRequested_m4147617655() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped7_remove_BringIntoViewRequested_m1561917121() = 0;
};
// Windows.UI.Xaml.IUIElementFactory
struct NOVTABLE IUIElementFactory_t520894359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.IUIElementOverrides
struct NOVTABLE IUIElementOverrides_t2453769578 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped0_OnCreateAutomationPeer_m4180009883() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped1_OnDisconnectVisualChildren_m2912367149() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped2_FindSubElementsForTouchTargeting_m2501103066() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides7
struct NOVTABLE IUIElementOverrides7_t2026802538 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides7_U24__Stripped0_GetChildrenInTabFocusOrder_m2438105784() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides7_U24__Stripped1_OnProcessKeyboardAccelerators_m3389550628() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides8
struct NOVTABLE IUIElementOverrides8_t3983117674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides8_U24__Stripped0_OnKeyboardAcceleratorInvoked_m579114990() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides8_U24__Stripped1_OnBringIntoViewRequested_m2077379998() = 0;
};
// Windows.UI.Xaml.IUIElementStatics
struct NOVTABLE IUIElementStatics_t2851391452 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped0_get_KeyDownEvent_m3282640798() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped1_get_KeyUpEvent_m2430006508() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped2_get_PointerEnteredEvent_m706886339() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped3_get_PointerPressedEvent_m1604554080() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped4_get_PointerMovedEvent_m1720155775() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped5_get_PointerReleasedEvent_m1544992601() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped6_get_PointerExitedEvent_m2286235842() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped7_get_PointerCaptureLostEvent_m2216822275() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped8_get_PointerCanceledEvent_m3727711221() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped9_get_PointerWheelChangedEvent_m1234194674() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped10_get_TappedEvent_m457097512() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped11_get_DoubleTappedEvent_m2036555176() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped12_get_HoldingEvent_m4187082037() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped13_get_RightTappedEvent_m2020476792() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped14_get_ManipulationStartingEvent_m2779776069() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped15_get_ManipulationInertiaStartingEvent_m1734054308() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped16_get_ManipulationStartedEvent_m2167151048() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped17_get_ManipulationDeltaEvent_m1802581843() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped18_get_ManipulationCompletedEvent_m3264411539() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped19_get_DragEnterEvent_m2373691178() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped20_get_DragLeaveEvent_m1839505660() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped21_get_DragOverEvent_m559253999() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped22_get_DropEvent_m2352208043() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped23_get_AllowDropProperty_m993570433() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped24_get_OpacityProperty_m740386576() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped25_get_ClipProperty_m3943830253() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped26_get_RenderTransformProperty_m2507760255() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped27_get_ProjectionProperty_m3076524370() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped28_get_RenderTransformOriginProperty_m4294828757() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped29_get_IsHitTestVisibleProperty_m1476920693() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped30_get_VisibilityProperty_m2327890703() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped31_get_UseLayoutRoundingProperty_m3937161119() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped32_get_TransitionsProperty_m891434974() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped33_get_CacheModeProperty_m374930607() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped34_get_IsTapEnabledProperty_m1165183625() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped35_get_IsDoubleTapEnabledProperty_m1523951021() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped36_get_IsRightTapEnabledProperty_m680050134() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped37_get_IsHoldingEnabledProperty_m3582174128() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped38_get_ManipulationModeProperty_m729018583() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped39_get_PointerCapturesProperty_m3889929875() = 0;
};
// Windows.UI.Xaml.IUIElementStatics2
struct NOVTABLE IUIElementStatics2_t2850211804 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics2_U24__Stripped0_get_CompositeModeProperty_m348935177() = 0;
};
// Windows.UI.Xaml.IUIElementStatics3
struct NOVTABLE IUIElementStatics3_t2850277340 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped0_get_Transform3DProperty_m80143119() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped1_get_CanDragProperty_m2972085764() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped2_TryStartDirectManipulation_m2962009957() = 0;
};
// Windows.UI.Xaml.IUIElementStatics4
struct NOVTABLE IUIElementStatics4_t2850080732 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped0_get_ContextFlyoutProperty_m3337258647() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped1_get_ExitDisplayModeOnAccessKeyInvokedProperty_m957145381() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped2_get_IsAccessKeyScopeProperty_m1588787071() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped3_get_AccessKeyScopeOwnerProperty_m1259683738() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped4_get_AccessKeyProperty_m96307873() = 0;
};
// Windows.UI.Xaml.IUIElementStatics5
struct NOVTABLE IUIElementStatics5_t2850146268 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped0_get_LightsProperty_m2261138472() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped1_get_KeyTipPlacementModeProperty_m987709722() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped2_get_KeyTipHorizontalOffsetProperty_m2917931878() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped3_get_KeyTipVerticalOffsetProperty_m1467972288() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped4_get_XYFocusKeyboardNavigationProperty_m2709596147() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped5_get_XYFocusUpNavigationStrategyProperty_m904536377() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped6_get_XYFocusDownNavigationStrategyProperty_m124140899() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped7_get_XYFocusLeftNavigationStrategyProperty_m1791013667() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped8_get_XYFocusRightNavigationStrategyProperty_m255940994() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped9_get_HighContrastAdjustmentProperty_m554935372() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped10_get_TabFocusNavigationProperty_m1958710776() = 0;
};
// Windows.UI.Xaml.IUIElementStatics6
struct NOVTABLE IUIElementStatics6_t2849949660 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped0_get_GettingFocusEvent_m235841184() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped1_get_LosingFocusEvent_m3992675556() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped2_get_NoFocusCandidateFoundEvent_m4026140250() = 0;
};
// Windows.UI.Xaml.IUIElementStatics7
struct NOVTABLE IUIElementStatics7_t2850015196 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped0_get_PreviewKeyDownEvent_m1717309932() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped1_get_CharacterReceivedEvent_m149088619() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped2_get_PreviewKeyUpEvent_m586550763() = 0;
};
// Windows.UI.Xaml.IUIElementStatics8
struct NOVTABLE IUIElementStatics8_t2849818588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped0_get_BringIntoViewRequestedEvent_m3557629462() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped1_get_ContextRequestedEvent_m3564525032() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped2_get_KeyTipTargetProperty_m495934429() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped3_get_KeyboardAcceleratorPlacementTargetProperty_m3470991248() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped4_get_KeyboardAcceleratorPlacementModeProperty_m2034484522() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped5_RegisterAsScrollPort_m3289950510() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t2147255965 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m3188154520(IBindableIterator_t667386168** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterator
struct NOVTABLE IBindableIterator_t667386168 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_Current_m3059254492(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_get_HasCurrent_m3082354642(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableIterator_MoveNext_m550148855(bool* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_t1801110279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m2354796153(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m151438974(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m1491544680(IBindableVectorView_t4191940899** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m627110519(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m1920883433(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m450046008(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m3479961725(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m2201043447(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m2914381745() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_m717217363() = 0;
};
// Windows.UI.Xaml.Interop.IBindableVectorView
struct NOVTABLE IBindableVectorView_t4191940899 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_GetAt_m2042489765(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_get_Size_m2561144479(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVectorView_IndexOf_m2936101316(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
};
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef EVENTREGISTRATIONTOKEN_T318890788_H
#define EVENTREGISTRATIONTOKEN_T318890788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t318890788 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t318890788, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T318890788_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef DATETIME_T1679451545_H
#define DATETIME_T1679451545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t1679451545 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t1679451545, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1679451545_H
#ifndef APPLICATIONDATA_T3489691988_H
#define APPLICATIONDATA_T3489691988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.ApplicationData
struct  ApplicationData_t3489691988  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IApplicationData
	IApplicationData_t28886227* ____iapplicationData_t28886227;
	// Cached pointer to Windows.Storage.IApplicationData2
	IApplicationData2_t163893929* ____iapplicationData2_t163893929;
	// Cached pointer to Windows.Storage.IApplicationData3
	IApplicationData3_t163893930* ____iapplicationData3_t163893930;

public:
	inline IApplicationData_t28886227* get_____iapplicationData_t28886227()
	{
		IApplicationData_t28886227* returnValue = ____iapplicationData_t28886227;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData_t28886227::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData_t28886227>((&____iapplicationData_t28886227), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData_t28886227;
			}
		}
		return returnValue;
	}

	inline IApplicationData2_t163893929* get_____iapplicationData2_t163893929()
	{
		IApplicationData2_t163893929* returnValue = ____iapplicationData2_t163893929;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData2_t163893929::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData2_t163893929>((&____iapplicationData2_t163893929), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData2_t163893929;
			}
		}
		return returnValue;
	}

	inline IApplicationData3_t163893930* get_____iapplicationData3_t163893930()
	{
		IApplicationData3_t163893930* returnValue = ____iapplicationData3_t163893930;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationData3_t163893930::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationData3_t163893930>((&____iapplicationData3_t163893930), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationData3_t163893930;
			}
		}
		return returnValue;
	}
};

struct ApplicationData_t3489691988_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IApplicationDataStatics
	IApplicationDataStatics_t3792839446* ____iapplicationDataStatics_t3792839446;
	// Cached pointer to Windows.Storage.IApplicationDataStatics2
	IApplicationDataStatics2_t2938905366* ____iapplicationDataStatics2_t2938905366;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.ApplicationData"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics_t3792839446* get_____iapplicationDataStatics_t3792839446()
	{
		IApplicationDataStatics_t3792839446* returnValue = ____iapplicationDataStatics_t3792839446;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics_t3792839446::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics_t3792839446>((&____iapplicationDataStatics_t3792839446), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics_t3792839446;
			}
		}
		return returnValue;
	}

	inline IApplicationDataStatics2_t2938905366* get_____iapplicationDataStatics2_t2938905366()
	{
		IApplicationDataStatics2_t2938905366* returnValue = ____iapplicationDataStatics2_t2938905366;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationDataStatics2_t2938905366::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationDataStatics2_t2938905366>((&____iapplicationDataStatics2_t2938905366), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationDataStatics2_t2938905366;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONDATA_T3489691988_H
#ifndef VISIBILITYCHANGEDEVENTARGS_T3731408598_H
#define VISIBILITYCHANGEDEVENTARGS_T3731408598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.VisibilityChangedEventArgs
struct  VisibilityChangedEventArgs_t3731408598  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.IVisibilityChangedEventArgs
	IVisibilityChangedEventArgs_t497166311* ____ivisibilityChangedEventArgs_t497166311;
	// Cached pointer to Windows.UI.Core.ICoreWindowEventArgs
	ICoreWindowEventArgs_t151143671* ____icoreWindowEventArgs_t151143671;

public:
	inline IVisibilityChangedEventArgs_t497166311* get_____ivisibilityChangedEventArgs_t497166311()
	{
		IVisibilityChangedEventArgs_t497166311* returnValue = ____ivisibilityChangedEventArgs_t497166311;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVisibilityChangedEventArgs_t497166311::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVisibilityChangedEventArgs_t497166311>((&____ivisibilityChangedEventArgs_t497166311), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivisibilityChangedEventArgs_t497166311;
			}
		}
		return returnValue;
	}

	inline ICoreWindowEventArgs_t151143671* get_____icoreWindowEventArgs_t151143671()
	{
		ICoreWindowEventArgs_t151143671* returnValue = ____icoreWindowEventArgs_t151143671;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindowEventArgs_t151143671::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindowEventArgs_t151143671>((&____icoreWindowEventArgs_t151143671), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindowEventArgs_t151143671;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBILITYCHANGEDEVENTARGS_T3731408598_H
#ifndef SPATIALINTERACTIONCONTROLLER_T3760917144_H
#define SPATIALINTERACTIONCONTROLLER_T3760917144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionController
struct  SpatialInteractionController_t3760917144  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController
	ISpatialInteractionController_t138196805* ____ispatialInteractionController_t138196805;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController2
	ISpatialInteractionController2_t3418596785* ____ispatialInteractionController2_t3418596785;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionController3
	ISpatialInteractionController3_t689713430* ____ispatialInteractionController3_t689713430;

public:
	inline ISpatialInteractionController_t138196805* get_____ispatialInteractionController_t138196805()
	{
		ISpatialInteractionController_t138196805* returnValue = ____ispatialInteractionController_t138196805;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController_t138196805::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController_t138196805>((&____ispatialInteractionController_t138196805), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController_t138196805;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionController2_t3418596785* get_____ispatialInteractionController2_t3418596785()
	{
		ISpatialInteractionController2_t3418596785* returnValue = ____ispatialInteractionController2_t3418596785;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController2_t3418596785::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController2_t3418596785>((&____ispatialInteractionController2_t3418596785), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController2_t3418596785;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionController3_t689713430* get_____ispatialInteractionController3_t689713430()
	{
		ISpatialInteractionController3_t689713430* returnValue = ____ispatialInteractionController3_t689713430;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionController3_t689713430::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionController3_t689713430>((&____ispatialInteractionController3_t689713430), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionController3_t689713430;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONCONTROLLER_T3760917144_H
#ifndef SPATIALINTERACTIONMANAGER_T208992783_H
#define SPATIALINTERACTIONMANAGER_T208992783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionManager
struct  SpatialInteractionManager_t208992783  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManager
	ISpatialInteractionManager_t354061063* ____ispatialInteractionManager_t354061063;

public:
	inline ISpatialInteractionManager_t354061063* get_____ispatialInteractionManager_t354061063()
	{
		ISpatialInteractionManager_t354061063* returnValue = ____ispatialInteractionManager_t354061063;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionManager_t354061063::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManager_t354061063>((&____ispatialInteractionManager_t354061063), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManager_t354061063;
			}
		}
		return returnValue;
	}
};

struct SpatialInteractionManager_t208992783_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics
	ISpatialInteractionManagerStatics_t2291651573* ____ispatialInteractionManagerStatics_t2291651573;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Input.Spatial.SpatialInteractionManager"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionManagerStatics_t2291651573* get_____ispatialInteractionManagerStatics_t2291651573()
	{
		ISpatialInteractionManagerStatics_t2291651573* returnValue = ____ispatialInteractionManagerStatics_t2291651573;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ISpatialInteractionManagerStatics_t2291651573::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionManagerStatics_t2291651573>((&____ispatialInteractionManagerStatics_t2291651573), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionManagerStatics_t2291651573;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONMANAGER_T208992783_H
#ifndef SPATIALINTERACTIONSOURCE_T1043222996_H
#define SPATIALINTERACTIONSOURCE_T1043222996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSource
struct  SpatialInteractionSource_t1043222996  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource
	ISpatialInteractionSource_t2185314266* ____ispatialInteractionSource_t2185314266;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource2
	ISpatialInteractionSource2_t2453383580* ____ispatialInteractionSource2_t2453383580;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSource3
	ISpatialInteractionSource3_t887299639* ____ispatialInteractionSource3_t887299639;

public:
	inline ISpatialInteractionSource_t2185314266* get_____ispatialInteractionSource_t2185314266()
	{
		ISpatialInteractionSource_t2185314266* returnValue = ____ispatialInteractionSource_t2185314266;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource_t2185314266::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource_t2185314266>((&____ispatialInteractionSource_t2185314266), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource_t2185314266;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource2_t2453383580* get_____ispatialInteractionSource2_t2453383580()
	{
		ISpatialInteractionSource2_t2453383580* returnValue = ____ispatialInteractionSource2_t2453383580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource2_t2453383580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource2_t2453383580>((&____ispatialInteractionSource2_t2453383580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource2_t2453383580;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSource3_t887299639* get_____ispatialInteractionSource3_t887299639()
	{
		ISpatialInteractionSource3_t887299639* returnValue = ____ispatialInteractionSource3_t887299639;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSource3_t887299639::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSource3_t887299639>((&____ispatialInteractionSource3_t887299639), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSource3_t887299639;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCE_T1043222996_H
#ifndef SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#define SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_t1215688063  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState
	ISpatialInteractionSourceState_t1358829803* ____ispatialInteractionSourceState_t1358829803;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
	ISpatialInteractionSourceState2_t2977437931* ____ispatialInteractionSourceState2_t2977437931;

public:
	inline ISpatialInteractionSourceState_t1358829803* get_____ispatialInteractionSourceState_t1358829803()
	{
		ISpatialInteractionSourceState_t1358829803* returnValue = ____ispatialInteractionSourceState_t1358829803;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState_t1358829803>((&____ispatialInteractionSourceState_t1358829803), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState_t1358829803;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSourceState2_t2977437931* get_____ispatialInteractionSourceState2_t2977437931()
	{
		ISpatialInteractionSourceState2_t2977437931* returnValue = ____ispatialInteractionSourceState2_t2977437931;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState2_t2977437931>((&____ispatialInteractionSourceState2_t2977437931), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState2_t2977437931;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifndef PROPERTYCHANGEDEVENTARGS_T1492749306_H
#define PROPERTYCHANGEDEVENTARGS_T1492749306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Data.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t1492749306  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgs
	IPropertyChangedEventArgs_t1404159462* ____ipropertyChangedEventArgs_t1404159462;

public:
	inline IPropertyChangedEventArgs_t1404159462* get_____ipropertyChangedEventArgs_t1404159462()
	{
		IPropertyChangedEventArgs_t1404159462* returnValue = ____ipropertyChangedEventArgs_t1404159462;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPropertyChangedEventArgs_t1404159462::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgs_t1404159462>((&____ipropertyChangedEventArgs_t1404159462), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgs_t1404159462;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct PropertyChangedEventArgs_t1492749306_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Data.IPropertyChangedEventArgsFactory
	IPropertyChangedEventArgsFactory_t4178285917* ____ipropertyChangedEventArgsFactory_t4178285917;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Data.PropertyChangedEventArgs"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPropertyChangedEventArgsFactory_t4178285917* get_____ipropertyChangedEventArgsFactory_t4178285917()
	{
		IPropertyChangedEventArgsFactory_t4178285917* returnValue = ____ipropertyChangedEventArgsFactory_t4178285917;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPropertyChangedEventArgsFactory_t4178285917::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPropertyChangedEventArgsFactory_t4178285917>((&____ipropertyChangedEventArgsFactory_t4178285917), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipropertyChangedEventArgsFactory_t4178285917;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T1492749306_H
#ifndef DEPENDENCYOBJECT_T3266284141_H
#define DEPENDENCYOBJECT_T3266284141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.DependencyObject
struct  DependencyObject_t3266284141  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.IDependencyObject
	IDependencyObject_t3468341335* ____idependencyObject_t3468341335;
	// Cached pointer to Windows.UI.Xaml.IDependencyObject2
	IDependencyObject2_t3465326679* ____idependencyObject2_t3465326679;

public:
	inline IDependencyObject_t3468341335* get_____idependencyObject_t3468341335()
	{
		IDependencyObject_t3468341335* returnValue = ____idependencyObject_t3468341335;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject_t3468341335::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject_t3468341335>((&____idependencyObject_t3468341335), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject_t3468341335;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IDependencyObject2_t3465326679* get_____idependencyObject2_t3465326679()
	{
		IDependencyObject2_t3465326679* returnValue = ____idependencyObject2_t3465326679;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject2_t3465326679::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject2_t3465326679>((&____idependencyObject2_t3465326679), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject2_t3465326679;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct DependencyObject_t3266284141_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IDependencyObjectFactory
	IDependencyObjectFactory_t1390337327* ____idependencyObjectFactory_t1390337327;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.DependencyObject"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDependencyObjectFactory_t1390337327* get_____idependencyObjectFactory_t1390337327()
	{
		IDependencyObjectFactory_t1390337327* returnValue = ____idependencyObjectFactory_t1390337327;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDependencyObjectFactory_t1390337327::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObjectFactory_t1390337327>((&____idependencyObjectFactory_t1390337327), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObjectFactory_t1390337327;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPENDENCYOBJECT_T3266284141_H
#ifndef CONTENTPROPERTYATTRIBUTE_T1871920044_H
#define CONTENTPROPERTYATTRIBUTE_T1871920044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Markup.ContentPropertyAttribute
struct  ContentPropertyAttribute_t1871920044  : public Attribute_t861562559
{
public:
	// System.String Windows.UI.Xaml.Markup.ContentPropertyAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ContentPropertyAttribute_t1871920044, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTPROPERTYATTRIBUTE_T1871920044_H
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t1056453382 
{
public:
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t1056453382, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T1056453382_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
// Windows.Perception.IPerceptionTimestampHelperStatics
struct NOVTABLE IPerceptionTimestampHelperStatics_t2092781866 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m1803895948(DateTime_t1679451545  ___targetTime0, IPerceptionTimestamp_t393505964** comReturnValue) = 0;
};
#ifndef COREDISPATCHERPRIORITY_T3632043752_H
#define COREDISPATCHERPRIORITY_T3632043752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcherPriority
struct  CoreDispatcherPriority_t3632043752 
{
public:
	// System.Int32 Windows.UI.Core.CoreDispatcherPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoreDispatcherPriority_t3632043752, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREDISPATCHERPRIORITY_T3632043752_H
// Windows.UI.Core.ICoreWindow
struct NOVTABLE ICoreWindow_t287790597 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped0_get_AutomationHostProvider_m534412341() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped1_get_Bounds_m3578051586() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped2_get_CustomProperties_m750425525() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped3_get_Dispatcher_m2917912710() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped4_get_FlowDirection_m2151066422() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped5_put_FlowDirection_m3172854940() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped6_get_IsInputEnabled_m89968884() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped7_put_IsInputEnabled_m106803782() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped8_get_PointerCursor_m2045827685() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped9_put_PointerCursor_m514208720() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped10_get_PointerPosition_m2667249884() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped11_get_Visible_m3702752999() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped12_Activate_m3655424459() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_Close_m1700493688() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped13_GetAsyncKeyState_m385534424() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped14_GetKeyState_m1193130708() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped15_ReleasePointerCapture_m1743203614() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped16_SetPointerCapture_m404668421() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped17_add_Activated_m455796433() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped18_remove_Activated_m3330834222() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped19_add_AutomationProviderRequested_m2531656904() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped20_remove_AutomationProviderRequested_m1761633799() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped21_add_CharacterReceived_m4191492827() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped22_remove_CharacterReceived_m2562092747() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped23_add_Closed_m1767746568() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped24_remove_Closed_m3027770075() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped25_add_InputEnabled_m239871435() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped26_remove_InputEnabled_m128037670() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped27_add_KeyDown_m3969295651() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped28_remove_KeyDown_m782620710() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped29_add_KeyUp_m1713140250() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped30_remove_KeyUp_m1681659367() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped31_add_PointerCaptureLost_m3546171445() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped32_remove_PointerCaptureLost_m2100532330() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped33_add_PointerEntered_m2245386589() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped34_remove_PointerEntered_m1577997019() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped35_add_PointerExited_m3931126742() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped36_remove_PointerExited_m641502693() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped37_add_PointerMoved_m3051739682() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped38_remove_PointerMoved_m516410003() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped39_add_PointerPressed_m1845199676() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped40_remove_PointerPressed_m1947821892() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped41_add_PointerReleased_m4265394067() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped42_remove_PointerReleased_m110794933() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped43_add_TouchHitTesting_m2127298576() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped44_remove_TouchHitTesting_m996594404() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped45_add_PointerWheelChanged_m2457090262() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped46_remove_PointerWheelChanged_m2934035795() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped47_add_SizeChanged_m1275806859() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped48_remove_SizeChanged_m1114454316() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_add_VisibilityChanged_m3937792719(ITypedEventHandler_2_t986724726_ComCallableWrapper* ___handler0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_remove_VisibilityChanged_m224140673(EventRegistrationToken_t318890788  ___cookie0) = 0;
};
// Windows.UI.Xaml.Interop.INotifyCollectionChanged
struct NOVTABLE INotifyCollectionChanged_t3244377239 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChanged_add_CollectionChanged_m1116549919(INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper* ___value0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChanged_remove_CollectionChanged_m1364461162(EventRegistrationToken_t318890788  ___token0) = 0;
};
#ifndef TYPEKIND_T2273581760_H
#define TYPEKIND_T2273581760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_t2273581760 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t2273581760, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEKIND_T2273581760_H
#ifndef UIELEMENT_T285774554_H
#define UIELEMENT_T285774554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.UIElement
struct  UIElement_t285774554  : public DependencyObject_t3266284141
{
public:
	// Cached pointer to Windows.UI.Xaml.IUIElement
	IUIElement_t3288794271* ____iuIElement_t3288794271;
	// Cached pointer to Windows.UI.Xaml.IUIElementOverrides
	IUIElementOverrides_t2453769578* ____iuIElementOverrides_t2453769578;
	// Cached pointer to Windows.UI.Xaml.IUIElement2
	IUIElement2_t1568362829* ____iuIElement2_t1568362829;
	// Cached pointer to Windows.UI.Xaml.IUIElement3
	IUIElement3_t3134446770* ____iuIElement3_t3134446770;
	// Cached pointer to Windows.UI.Xaml.IUIElement4
	IUIElement4_t761793775* ____iuIElement4_t761793775;
	// Cached pointer to Windows.UI.Xaml.IUIElement5
	IUIElement5_t2327877716* ____iuIElement5_t2327877716;
	// Cached pointer to Windows.UI.Xaml.IUIElement7
	IUIElement7_t1165078302* ____iuIElement7_t1165078302;
	// Cached pointer to Windows.UI.Xaml.IUIElementOverrides7
	IUIElementOverrides7_t2026802538* ____iuIElementOverrides7_t2026802538;
	// Cached pointer to Windows.UI.Xaml.IUIElement8
	IUIElement8_t2374931883* ____iuIElement8_t2374931883;
	// Cached pointer to Windows.UI.Xaml.IUIElementOverrides8
	IUIElementOverrides8_t3983117674* ____iuIElementOverrides8_t3983117674;

public:
	inline IUIElement_t3288794271* get_____iuIElement_t3288794271()
	{
		IUIElement_t3288794271* returnValue = ____iuIElement_t3288794271;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement_t3288794271::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement_t3288794271>((&____iuIElement_t3288794271), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement_t3288794271;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElementOverrides_t2453769578* get_____iuIElementOverrides_t2453769578()
	{
		IUIElementOverrides_t2453769578* returnValue = ____iuIElementOverrides_t2453769578;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElementOverrides_t2453769578::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementOverrides_t2453769578>((&____iuIElementOverrides_t2453769578), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementOverrides_t2453769578;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement2_t1568362829* get_____iuIElement2_t1568362829()
	{
		IUIElement2_t1568362829* returnValue = ____iuIElement2_t1568362829;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement2_t1568362829::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement2_t1568362829>((&____iuIElement2_t1568362829), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement2_t1568362829;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement3_t3134446770* get_____iuIElement3_t3134446770()
	{
		IUIElement3_t3134446770* returnValue = ____iuIElement3_t3134446770;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement3_t3134446770::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement3_t3134446770>((&____iuIElement3_t3134446770), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement3_t3134446770;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement4_t761793775* get_____iuIElement4_t761793775()
	{
		IUIElement4_t761793775* returnValue = ____iuIElement4_t761793775;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement4_t761793775::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement4_t761793775>((&____iuIElement4_t761793775), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement4_t761793775;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement5_t2327877716* get_____iuIElement5_t2327877716()
	{
		IUIElement5_t2327877716* returnValue = ____iuIElement5_t2327877716;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement5_t2327877716::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement5_t2327877716>((&____iuIElement5_t2327877716), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement5_t2327877716;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement7_t1165078302* get_____iuIElement7_t1165078302()
	{
		IUIElement7_t1165078302* returnValue = ____iuIElement7_t1165078302;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement7_t1165078302::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement7_t1165078302>((&____iuIElement7_t1165078302), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement7_t1165078302;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElementOverrides7_t2026802538* get_____iuIElementOverrides7_t2026802538()
	{
		IUIElementOverrides7_t2026802538* returnValue = ____iuIElementOverrides7_t2026802538;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElementOverrides7_t2026802538::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementOverrides7_t2026802538>((&____iuIElementOverrides7_t2026802538), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementOverrides7_t2026802538;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement8_t2374931883* get_____iuIElement8_t2374931883()
	{
		IUIElement8_t2374931883* returnValue = ____iuIElement8_t2374931883;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement8_t2374931883::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement8_t2374931883>((&____iuIElement8_t2374931883), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement8_t2374931883;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElementOverrides8_t3983117674* get_____iuIElementOverrides8_t3983117674()
	{
		IUIElementOverrides8_t3983117674* returnValue = ____iuIElementOverrides8_t3983117674;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElementOverrides8_t3983117674::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementOverrides8_t3983117674>((&____iuIElementOverrides8_t3983117674), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementOverrides8_t3983117674;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct UIElement_t285774554_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IUIElementFactory
	IUIElementFactory_t520894359* ____iuIElementFactory_t520894359;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics8
	IUIElementStatics8_t2849818588* ____iuIElementStatics8_t2849818588;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics4
	IUIElementStatics4_t2850080732* ____iuIElementStatics4_t2850080732;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics6
	IUIElementStatics6_t2849949660* ____iuIElementStatics6_t2849949660;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics
	IUIElementStatics_t2851391452* ____iuIElementStatics_t2851391452;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics7
	IUIElementStatics7_t2850015196* ____iuIElementStatics7_t2850015196;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics2
	IUIElementStatics2_t2850211804* ____iuIElementStatics2_t2850211804;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics3
	IUIElementStatics3_t2850277340* ____iuIElementStatics3_t2850277340;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics5
	IUIElementStatics5_t2850146268* ____iuIElementStatics5_t2850146268;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.UIElement"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUIElementFactory_t520894359* get_____iuIElementFactory_t520894359()
	{
		IUIElementFactory_t520894359* returnValue = ____iuIElementFactory_t520894359;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementFactory_t520894359::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementFactory_t520894359>((&____iuIElementFactory_t520894359), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementFactory_t520894359;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics8_t2849818588* get_____iuIElementStatics8_t2849818588()
	{
		IUIElementStatics8_t2849818588* returnValue = ____iuIElementStatics8_t2849818588;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics8_t2849818588::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics8_t2849818588>((&____iuIElementStatics8_t2849818588), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics8_t2849818588;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics4_t2850080732* get_____iuIElementStatics4_t2850080732()
	{
		IUIElementStatics4_t2850080732* returnValue = ____iuIElementStatics4_t2850080732;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics4_t2850080732::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics4_t2850080732>((&____iuIElementStatics4_t2850080732), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics4_t2850080732;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics6_t2849949660* get_____iuIElementStatics6_t2849949660()
	{
		IUIElementStatics6_t2849949660* returnValue = ____iuIElementStatics6_t2849949660;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics6_t2849949660::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics6_t2849949660>((&____iuIElementStatics6_t2849949660), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics6_t2849949660;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics_t2851391452* get_____iuIElementStatics_t2851391452()
	{
		IUIElementStatics_t2851391452* returnValue = ____iuIElementStatics_t2851391452;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics_t2851391452::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics_t2851391452>((&____iuIElementStatics_t2851391452), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics_t2851391452;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics7_t2850015196* get_____iuIElementStatics7_t2850015196()
	{
		IUIElementStatics7_t2850015196* returnValue = ____iuIElementStatics7_t2850015196;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics7_t2850015196::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics7_t2850015196>((&____iuIElementStatics7_t2850015196), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics7_t2850015196;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics2_t2850211804* get_____iuIElementStatics2_t2850211804()
	{
		IUIElementStatics2_t2850211804* returnValue = ____iuIElementStatics2_t2850211804;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics2_t2850211804::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics2_t2850211804>((&____iuIElementStatics2_t2850211804), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics2_t2850211804;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics3_t2850277340* get_____iuIElementStatics3_t2850277340()
	{
		IUIElementStatics3_t2850277340* returnValue = ____iuIElementStatics3_t2850277340;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics3_t2850277340::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics3_t2850277340>((&____iuIElementStatics3_t2850277340), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics3_t2850277340;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics5_t2850146268* get_____iuIElementStatics5_t2850146268()
	{
		IUIElementStatics5_t2850146268* returnValue = ____iuIElementStatics5_t2850146268;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics5_t2850146268::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics5_t2850146268>((&____iuIElementStatics5_t2850146268), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics5_t2850146268;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIELEMENT_T285774554_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#define PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestampHelper
struct  PerceptionTimestampHelper_t1405177115  : public Il2CppComObject
{
public:

public:
};

struct PerceptionTimestampHelper_t1405177115_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Perception.IPerceptionTimestampHelperStatics
	IPerceptionTimestampHelperStatics_t2092781866* ____iperceptionTimestampHelperStatics_t2092781866;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Perception.PerceptionTimestampHelper"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IPerceptionTimestampHelperStatics_t2092781866* get_____iperceptionTimestampHelperStatics_t2092781866()
	{
		IPerceptionTimestampHelperStatics_t2092781866* returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IPerceptionTimestampHelperStatics_t2092781866::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestampHelperStatics_t2092781866>((&____iperceptionTimestampHelperStatics_t2092781866), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestampHelperStatics_t2092781866;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMPHELPER_T1405177115_H
#ifndef COREWINDOW_T2947181662_H
#define COREWINDOW_T2947181662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreWindow
struct  CoreWindow_t2947181662  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.ICoreWindow
	ICoreWindow_t287790597* ____icoreWindow_t287790597;
	// Cached pointer to Windows.UI.Core.ICoreWindow2
	ICoreWindow2_t491607557* ____icoreWindow2_t491607557;
	// Cached pointer to Windows.UI.Core.ICorePointerRedirector
	ICorePointerRedirector_t64917422* ____icorePointerRedirector_t64917422;
	// Cached pointer to Windows.UI.Core.ICoreWindow3
	ICoreWindow3_t2830259717* ____icoreWindow3_t2830259717;
	// Cached pointer to Windows.UI.Core.ICoreWindow4
	ICoreWindow4_t109270533* ____icoreWindow4_t109270533;
	// Cached pointer to Windows.UI.Core.ICoreWindow5
	ICoreWindow5_t2447922693* ____icoreWindow5_t2447922693;

public:
	inline ICoreWindow_t287790597* get_____icoreWindow_t287790597()
	{
		ICoreWindow_t287790597* returnValue = ____icoreWindow_t287790597;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow_t287790597::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow_t287790597>((&____icoreWindow_t287790597), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow_t287790597;
			}
		}
		return returnValue;
	}

	inline ICoreWindow2_t491607557* get_____icoreWindow2_t491607557()
	{
		ICoreWindow2_t491607557* returnValue = ____icoreWindow2_t491607557;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow2_t491607557::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow2_t491607557>((&____icoreWindow2_t491607557), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow2_t491607557;
			}
		}
		return returnValue;
	}

	inline ICorePointerRedirector_t64917422* get_____icorePointerRedirector_t64917422()
	{
		ICorePointerRedirector_t64917422* returnValue = ____icorePointerRedirector_t64917422;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICorePointerRedirector_t64917422::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICorePointerRedirector_t64917422>((&____icorePointerRedirector_t64917422), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icorePointerRedirector_t64917422;
			}
		}
		return returnValue;
	}

	inline ICoreWindow3_t2830259717* get_____icoreWindow3_t2830259717()
	{
		ICoreWindow3_t2830259717* returnValue = ____icoreWindow3_t2830259717;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow3_t2830259717::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow3_t2830259717>((&____icoreWindow3_t2830259717), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow3_t2830259717;
			}
		}
		return returnValue;
	}

	inline ICoreWindow4_t109270533* get_____icoreWindow4_t109270533()
	{
		ICoreWindow4_t109270533* returnValue = ____icoreWindow4_t109270533;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow4_t109270533::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow4_t109270533>((&____icoreWindow4_t109270533), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow4_t109270533;
			}
		}
		return returnValue;
	}

	inline ICoreWindow5_t2447922693* get_____icoreWindow5_t2447922693()
	{
		ICoreWindow5_t2447922693* returnValue = ____icoreWindow5_t2447922693;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreWindow5_t2447922693::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindow5_t2447922693>((&____icoreWindow5_t2447922693), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindow5_t2447922693;
			}
		}
		return returnValue;
	}
};

struct CoreWindow_t2947181662_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Core.ICoreWindowStatic
	ICoreWindowStatic_t1678315526* ____icoreWindowStatic_t1678315526;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Core.CoreWindow"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ICoreWindowStatic_t1678315526* get_____icoreWindowStatic_t1678315526()
	{
		ICoreWindowStatic_t1678315526* returnValue = ____icoreWindowStatic_t1678315526;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreWindowStatic_t1678315526::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreWindowStatic_t1678315526>((&____icoreWindowStatic_t1678315526), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindowStatic_t1678315526;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREWINDOW_T2947181662_H
// Windows.UI.Core.ICoreDispatcher
struct NOVTABLE ICoreDispatcher_t3246199926 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped0_get_HasThreadAccess_m161580841() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped1_ProcessEvents_m1437305262() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_RunAsync_m2899900497(int32_t ___priority0, IDispatchedHandler_t626468369_ComCallableWrapper* ___agileCallback1, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreDispatcher_U24__Stripped2_RunIdleAsync_m3142972481() = 0;
};
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
struct NOVTABLE INotifyCollectionChangedEventArgs_t951239883 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_Action_m131830108(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_NewItems_m4174321480(IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_OldItems_m3291453603(IBindableVector_t1801110279** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_NewStartingIndex_m3677161728(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgs_get_OldStartingIndex_m820494605(int32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
struct NOVTABLE INotifyCollectionChangedEventArgsFactory_t1817199772 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INotifyCollectionChangedEventArgsFactory_CreateInstanceWithAllParameters_m430772519(int32_t ___action0, IBindableVector_t1801110279* ___newItems1, IBindableVector_t1801110279* ___oldItems2, int32_t ___newIndex3, int32_t ___oldIndex4, Il2CppIInspectable* ___outer5, Il2CppIInspectable** ___inner6, NotifyCollectionChangedEventArgs_t9239872 ** comReturnValue) = 0;
};
#ifndef NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#define NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t378659768 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t378659768, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDACTION_T378659768_H
#ifndef TYPENAME_T4208425108_H
#define TYPENAME_T4208425108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t4208425108 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T4208425108_H
#ifndef COREDISPATCHER_T2479646415_H
#define COREDISPATCHER_T2479646415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcher
struct  CoreDispatcher_t2479646415  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Core.ICoreDispatcher
	ICoreDispatcher_t3246199926* ____icoreDispatcher_t3246199926;
	// Cached pointer to Windows.UI.Core.ICoreAcceleratorKeys
	ICoreAcceleratorKeys_t931412490* ____icoreAcceleratorKeys_t931412490;
	// Cached pointer to Windows.UI.Core.ICoreDispatcherWithTaskPriority
	ICoreDispatcherWithTaskPriority_t1942681059* ____icoreDispatcherWithTaskPriority_t1942681059;
	// Cached pointer to Windows.UI.Core.ICoreDispatcher2
	ICoreDispatcher2_t2392265846* ____icoreDispatcher2_t2392265846;

public:
	inline ICoreDispatcher_t3246199926* get_____icoreDispatcher_t3246199926()
	{
		ICoreDispatcher_t3246199926* returnValue = ____icoreDispatcher_t3246199926;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcher_t3246199926::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcher_t3246199926>((&____icoreDispatcher_t3246199926), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcher_t3246199926;
			}
		}
		return returnValue;
	}

	inline ICoreAcceleratorKeys_t931412490* get_____icoreAcceleratorKeys_t931412490()
	{
		ICoreAcceleratorKeys_t931412490* returnValue = ____icoreAcceleratorKeys_t931412490;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreAcceleratorKeys_t931412490::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreAcceleratorKeys_t931412490>((&____icoreAcceleratorKeys_t931412490), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreAcceleratorKeys_t931412490;
			}
		}
		return returnValue;
	}

	inline ICoreDispatcherWithTaskPriority_t1942681059* get_____icoreDispatcherWithTaskPriority_t1942681059()
	{
		ICoreDispatcherWithTaskPriority_t1942681059* returnValue = ____icoreDispatcherWithTaskPriority_t1942681059;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcherWithTaskPriority_t1942681059::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcherWithTaskPriority_t1942681059>((&____icoreDispatcherWithTaskPriority_t1942681059), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcherWithTaskPriority_t1942681059;
			}
		}
		return returnValue;
	}

	inline ICoreDispatcher2_t2392265846* get_____icoreDispatcher2_t2392265846()
	{
		ICoreDispatcher2_t2392265846* returnValue = ____icoreDispatcher2_t2392265846;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreDispatcher2_t2392265846::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreDispatcher2_t2392265846>((&____icoreDispatcher2_t2392265846), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreDispatcher2_t2392265846;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREDISPATCHER_T2479646415_H
#ifndef DISPATCHEDHANDLER_T626468369_H
#define DISPATCHEDHANDLER_T626468369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.DispatchedHandler
struct  DispatchedHandler_t626468369  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Core.DispatchedHandler
struct IDispatchedHandler_t626468369_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke() = 0;
};

#endif // DISPATCHEDHANDLER_T626468369_H
// Windows.UI.Xaml.Controls.IFrame
struct NOVTABLE IFrame_t1733009749 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped0_get_CacheSize_m389611208() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped1_put_CacheSize_m1134720223() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped2_get_CanGoBack_m3405415914() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped3_get_CanGoForward_m1812204498() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped4_get_CurrentSourcePageType_m1902407583() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped5_get_SourcePageType_m625385819() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped6_put_SourcePageType_m3121703199() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped7_get_BackStackDepth_m4202332670() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped8_add_Navigated_m2826495629() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped9_remove_Navigated_m1897746214() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped10_add_Navigating_m3415332556() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped11_remove_Navigating_m1625318471() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped12_add_NavigationFailed_m3274930729() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped13_remove_NavigationFailed_m1880395028() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped14_add_NavigationStopped_m1077310191() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped15_remove_NavigationStopped_m2035823672() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped16_GoBack_m3612561896() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped17_GoForward_m3762274904() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_Navigate_m594615768(Il2CppWindowsRuntimeTypeName ___sourcePageType0, Il2CppIInspectable* ___parameter1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped18_GetNavigationState_m1326970735() = 0;
	virtual il2cpp_hresult_t STDCALL IFrame_U24__Stripped19_SetNavigationState_m1237439040() = 0;
};
#ifndef PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#define PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct  PropertyChangedEventHandler_t3818875368  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Xaml.Data.PropertyChangedEventHandler
struct IPropertyChangedEventHandler_t3818875368_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, PropertyChangedEventArgs_t3313059048 * ___e1) = 0;
};

#endif // PROPERTYCHANGEDEVENTHANDLER_T3818875368_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t495045256  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
	INotifyCollectionChangedEventArgs_t951239883* ____inotifyCollectionChangedEventArgs_t951239883;

public:
	inline INotifyCollectionChangedEventArgs_t951239883* get_____inotifyCollectionChangedEventArgs_t951239883()
	{
		INotifyCollectionChangedEventArgs_t951239883* returnValue = ____inotifyCollectionChangedEventArgs_t951239883;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(INotifyCollectionChangedEventArgs_t951239883::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INotifyCollectionChangedEventArgs_t951239883>((&____inotifyCollectionChangedEventArgs_t951239883), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inotifyCollectionChangedEventArgs_t951239883;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct NotifyCollectionChangedEventArgs_t495045256_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
	INotifyCollectionChangedEventArgsFactory_t1817199772* ____inotifyCollectionChangedEventArgsFactory_t1817199772;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline INotifyCollectionChangedEventArgsFactory_t1817199772* get_____inotifyCollectionChangedEventArgsFactory_t1817199772()
	{
		INotifyCollectionChangedEventArgsFactory_t1817199772* returnValue = ____inotifyCollectionChangedEventArgsFactory_t1817199772;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INotifyCollectionChangedEventArgsFactory_t1817199772::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INotifyCollectionChangedEventArgsFactory_t1817199772>((&____inotifyCollectionChangedEventArgsFactory_t1817199772), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inotifyCollectionChangedEventArgsFactory_t1817199772;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T495045256_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t3129157931  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
struct INotifyCollectionChangedEventHandler_t3129157931_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1) = 0;
};

#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T3129157931_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5200 = { sizeof (PerceptionTimestampHelper_t1405177115), -1, sizeof(PerceptionTimestampHelper_t1405177115_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5201 = { 0, sizeof(IApplicationDataStatics_t3792839446*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5202 = { sizeof (ApplicationData_t3489691988), -1, sizeof(ApplicationData_t3489691988_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5203 = { 0, sizeof(IApplicationDataStatics2_t2938905366*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5204 = { 0, sizeof(IApplicationData_t28886227*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5205 = { 0, sizeof(IApplicationData2_t163893929*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5206 = { 0, sizeof(IApplicationData3_t163893930*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5207 = { sizeof (CoreDispatcherPriority_t3632043752)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5207[5] = 
{
	CoreDispatcherPriority_t3632043752::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5208 = { 0, sizeof(ICoreWindowEventArgs_t151143671*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5209 = { 0, sizeof(IVisibilityChangedEventArgs_t497166311*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5210 = { 0, sizeof(ICoreWindow_t287790597*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5211 = { sizeof (CoreDispatcher_t2479646415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5212 = { sizeof (CoreWindow_t2947181662), -1, sizeof(CoreWindow_t2947181662_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5213 = { sizeof (VisibilityChangedEventArgs_t3731408598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5214 = { 0, sizeof(ICoreWindow2_t491607557*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5215 = { 0, sizeof(ICoreWindow3_t2830259717*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5216 = { 0, sizeof(ICoreWindow4_t109270533*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5217 = { 0, sizeof(ICoreWindow5_t2447922693*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5218 = { 0, sizeof(ICoreWindowStatic_t1678315526*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5219 = { sizeof (DispatchedHandler_t626468369), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5220 = { 0, sizeof(ICoreAcceleratorKeys_t931412490*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5221 = { 0, sizeof(ICoreDispatcher_t3246199926*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5222 = { 0, sizeof(ICoreDispatcher2_t2392265846*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5223 = { 0, sizeof(ICoreDispatcherWithTaskPriority_t1942681059*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5224 = { 0, sizeof(ICorePointerRedirector_t64917422*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5225 = { 0, sizeof(ISpatialInteractionSource_t2185314266*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5226 = { 0, sizeof(ISpatialInteractionSource2_t2453383580*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5227 = { sizeof (SpatialInteractionController_t3760917144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5228 = { sizeof (SpatialInteractionSourceState_t1215688063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5229 = { 0, sizeof(ISpatialInteractionSource3_t887299639*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5230 = { 0, sizeof(ISpatialInteractionController_t138196805*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5231 = { 0, sizeof(ISpatialInteractionController2_t3418596785*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5232 = { 0, sizeof(ISpatialInteractionController3_t689713430*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5233 = { sizeof (SpatialInteractionSource_t1043222996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5234 = { 0, sizeof(ISpatialInteractionSourceState_t1358829803*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5235 = { 0, sizeof(ISpatialInteractionSourceState2_t2977437931*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5236 = { 0, sizeof(ISpatialInteractionManager_t354061063*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5237 = { sizeof (SpatialInteractionManager_t208992783), -1, sizeof(SpatialInteractionManager_t208992783_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5238 = { 0, sizeof(ISpatialInteractionManagerStatics_t2291651573*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5239 = { sizeof (NotifyCollectionChangedAction_t378659768)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5239[6] = 
{
	NotifyCollectionChangedAction_t378659768::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5240 = { 0, sizeof(IBindableIterable_t2147255965*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5241 = { 0, sizeof(IBindableVector_t1801110279*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5242 = { 0, sizeof(IBindableVectorView_t4191940899*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5243 = { 0, sizeof(IBindableIterator_t667386168*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5244 = { sizeof (NotifyCollectionChangedEventHandler_t3129157931), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5245 = { sizeof (NotifyCollectionChangedEventArgs_t495045256), -1, sizeof(NotifyCollectionChangedEventArgs_t495045256_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5246 = { 0, sizeof(INavigate_t38993641*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5247 = { 0, sizeof(IContentControl_t2016467381*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5248 = { 0, sizeof(IContentControlOverrides_t1476785288*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5249 = { 0, sizeof(IContentControlStatics_t179784444*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5250 = { 0, sizeof(IContentControlFactory_t368508199*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5251 = { 0, sizeof(IContentControl2_t877166318*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5252 = { 0, sizeof(INotifyCollectionChanged_t3244377239*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5253 = { 0, sizeof(INotifyCollectionChangedEventArgs_t951239883*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5254 = { 0, sizeof(INotifyCollectionChangedEventArgsFactory_t1817199772*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5255 = { 0, sizeof(IFrame_t1733009749*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5256 = { 0, sizeof(IFrameStatics_t1678072084*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5257 = { 0, sizeof(IFrameFactory_t1251236688*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5258 = { 0, sizeof(IFrame2_t1936826709*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5259 = { 0, sizeof(IFrameStatics2_t3481383410*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5260 = { 0, sizeof(IFrame3_t4275478869*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5261 = { 0, sizeof(IFrame4_t3083837781*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5262 = { sizeof (TypeKind_t2273581760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5262[4] = 
{
	TypeKind_t2273581760::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5263 = { sizeof (TypeName_t4208425108)+ sizeof (RuntimeObject), sizeof(TypeName_t4208425108_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable5263[2] = 
{
	TypeName_t4208425108::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypeName_t4208425108::get_offset_of_Kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5264 = { sizeof (DependencyObject_t3266284141), -1, sizeof(DependencyObject_t3266284141_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5265 = { sizeof (PropertyChangedEventHandler_t3818875368), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5266 = { sizeof (PropertyChangedEventArgs_t1492749306), -1, sizeof(PropertyChangedEventArgs_t1492749306_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5267 = { sizeof (ContentPropertyAttribute_t1871920044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5267[1] = 
{
	ContentPropertyAttribute_t1871920044::get_offset_of_Name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5268 = { 0, sizeof(IDependencyObject_t3468341335*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5269 = { 0, sizeof(IDependencyObjectFactory_t1390337327*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5270 = { 0, sizeof(IDependencyObject2_t3465326679*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5271 = { 0, sizeof(IUIElement_t3288794271*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5272 = { 0, sizeof(IUIElementOverrides_t2453769578*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5273 = { 0, sizeof(IUIElementStatics_t2851391452*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5274 = { 0, sizeof(IUIElementFactory_t520894359*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5275 = { 0, sizeof(IUIElement2_t1568362829*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5276 = { 0, sizeof(IUIElementStatics2_t2850211804*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5277 = { 0, sizeof(IUIElement3_t3134446770*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5278 = { 0, sizeof(IUIElementStatics3_t2850277340*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5279 = { 0, sizeof(IUIElement4_t761793775*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5280 = { 0, sizeof(IUIElementStatics4_t2850080732*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5281 = { 0, sizeof(IUIElement5_t2327877716*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5282 = { 0, sizeof(IUIElementStatics5_t2850146268*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5283 = { 0, sizeof(IUIElementStatics6_t2849949660*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5284 = { 0, sizeof(IUIElement7_t1165078302*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5285 = { 0, sizeof(IUIElementOverrides7_t2026802538*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5286 = { 0, sizeof(IUIElementStatics7_t2850015196*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5287 = { 0, sizeof(IUIElement8_t2374931883*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5288 = { 0, sizeof(IUIElementOverrides8_t3983117674*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5289 = { 0, sizeof(IUIElementStatics8_t2849818588*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5290 = { sizeof (UIElement_t285774554), -1, sizeof(UIElement_t285774554_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5291 = { 0, sizeof(IFrameworkElement_t1727772090*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5292 = { 0, sizeof(IFrameworkElementOverrides_t1842747390*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5293 = { 0, sizeof(IFrameworkElementStatics_t685079279*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5294 = { 0, sizeof(IFrameworkElementFactory_t2131831971*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5295 = { 0, sizeof(IFrameworkElement2_t1731048890*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5296 = { 0, sizeof(IFrameworkElementOverrides2_t2903822428*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5297 = { 0, sizeof(IFrameworkElementStatics2_t2563243859*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5298 = { 0, sizeof(IFrameworkElement3_t1731114426*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5299 = { 0, sizeof(IFrameworkElement4_t1730655674*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
