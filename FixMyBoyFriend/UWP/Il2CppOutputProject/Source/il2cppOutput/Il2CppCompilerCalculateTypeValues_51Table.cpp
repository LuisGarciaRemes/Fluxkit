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


// IActivationFactory
struct Il2CppIActivationFactory;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// Windows.ApplicationModel.Core.ICoreApplication
struct ICoreApplication_t1778460144;
// Windows.ApplicationModel.Core.ICoreApplication2
struct ICoreApplication2_t709209101;
// Windows.ApplicationModel.Core.ICoreApplication3
struct ICoreApplication3_t2275293042;
// Windows.ApplicationModel.Core.ICoreApplicationExit
struct ICoreApplicationExit_t3461573293;
// Windows.ApplicationModel.Core.ICoreApplicationUnhandledError
struct ICoreApplicationUnhandledError_t3134926704;
// Windows.ApplicationModel.Core.ICoreApplicationUseCount
struct ICoreApplicationUseCount_t1878483554;
// Windows.ApplicationModel.Core.ICoreImmersiveApplication
struct ICoreImmersiveApplication_t3816774728;
// Windows.ApplicationModel.Core.ICoreImmersiveApplication2
struct ICoreImmersiveApplication2_t4020591688;
// Windows.ApplicationModel.Core.ICoreImmersiveApplication3
struct ICoreImmersiveApplication3_t1681939528;
// Windows.Foundation.IUriEscapeStatics
struct IUriEscapeStatics_t1418340874;
// Windows.Foundation.IUriRuntimeClassFactory
struct IUriRuntimeClassFactory_t1786313621;
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct IWwwFormUrlDecoderRuntimeClassFactory_t1825479388;
// Windows.Media.Capture.IMediaCaptureStatics
struct IMediaCaptureStatics_t830978977;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct IInstalledVoicesStatic_t870565809;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct IInstalledVoicesStatic2_t946760305;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_t566903188;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t4131808966;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t333412554;
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
struct IApplicationViewSwitcherStatics_t2850352759;
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
struct IApplicationViewSwitcherStatics2_t2853629559;
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
struct IApplicationViewSwitcherStatics3_t2853564023;

struct IAsyncAction_t3072713919;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1918115372;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t372991836;
struct IAsyncOperation_1_t3901635704;
struct IAsyncOperation_1_t721183771;
struct IAsyncOperation_1_t943527478;
struct IAudioDeviceController_t3742505345;
struct IBuffer_t541192229;
struct ICoreApplicationView_t3448274634;
struct ICoreDispatcher_t3246199926;
struct ICoreWindow_t287790597;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IIterator_1_t817443443;
struct IMediaCaptureInitializationSettings_t2768046102;
struct IOutputStream_t2042351338;
struct IPerceptionTimestamp_t393505964;
struct ISimpleHapticsControllerFeedback_t2199416581;
struct IStreamSocket_t3338378904;
struct ITypedEventHandler_2_t1082390075_ComCallableWrapper;
struct IUriRuntimeClass_t921050115;;
struct IVectorView_1_t252326345;
struct IVectorView_1_t3605269894;
struct IVoiceInformation_t3111056019;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct IWwwFormUrlDecoderRuntimeClass_t497020701;



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
// Windows.ApplicationModel.Core.ICoreApplication
struct NOVTABLE ICoreApplication_t1778460144 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped0_get_Id_m1718516238() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped1_add_Suspending_m1174863645() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped2_remove_Suspending_m4176756178() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped3_add_Resuming_m3626166716() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped4_remove_Resuming_m2931155186() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped5_get_Properties_m2209066723() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_GetCurrentView_m3908883337(ICoreApplicationView_t3448274634** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped6_Run_m4169153247() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication_U24__Stripped7_RunWithActivationFactories_m3657006608() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplication2
struct NOVTABLE ICoreApplication2_t709209101 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped0_add_BackgroundActivated_m316915033() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped1_remove_BackgroundActivated_m2423415796() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped2_add_LeavingBackground_m2173892505() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped3_remove_LeavingBackground_m3584368919() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped4_add_EnteredBackground_m2476422894() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped5_remove_EnteredBackground_m167229890() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication2_U24__Stripped6_EnablePrelaunch_m43767897() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplication3
struct NOVTABLE ICoreApplication3_t2275293042 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplication3_U24__Stripped0_RequestRestartAsync_m2814442() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplication3_U24__Stripped1_RequestRestartForUserAsync_m4173592351() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationExit
struct NOVTABLE ICoreApplicationExit_t3461573293 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationExit_U24__Stripped0_Exit_m3180060440() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationExit_U24__Stripped1_add_Exiting_m2396532075() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationExit_U24__Stripped2_remove_Exiting_m3823679958() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationUnhandledError
struct NOVTABLE ICoreApplicationUnhandledError_t3134926704 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUnhandledError_U24__Stripped0_add_UnhandledErrorDetected_m1729098868() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUnhandledError_U24__Stripped1_remove_UnhandledErrorDetected_m983737010() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationUseCount
struct NOVTABLE ICoreApplicationUseCount_t1878483554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUseCount_U24__Stripped0_IncrementApplicationUseCount_m2457951204() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationUseCount_U24__Stripped1_DecrementApplicationUseCount_m4242504034() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView
struct NOVTABLE ICoreApplicationView_t3448274634 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_get_CoreWindow_m2844557995(ICoreWindow_t287790597** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped0_add_Activated_m4275092646() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped1_remove_Activated_m2000306789() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped2_get_IsMain_m1779394889() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView_U24__Stripped3_get_IsHosted_m514501340() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView2
struct NOVTABLE ICoreApplicationView2_t87912591 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView2_get_Dispatcher_m1256702285(ICoreDispatcher_t3246199926** comReturnValue) = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView3
struct NOVTABLE ICoreApplicationView3_t2816795946 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped0_get_IsComponent_m3170452197() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped1_get_TitleBar_m4010049929() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped2_add_HostedViewClosing_m2552235617() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView3_U24__Stripped3_remove_HostedViewClosing_m1426467461() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView5
struct NOVTABLE ICoreApplicationView5_t3623365000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView5_U24__Stripped0_get_Properties_m197759884() = 0;
};
// Windows.ApplicationModel.Core.ICoreApplicationView6
struct NOVTABLE ICoreApplicationView6_t2057281059 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreApplicationView6_U24__Stripped0_get_DispatcherQueue_m63297605() = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication
struct NOVTABLE ICoreImmersiveApplication_t3816774728 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped0_get_Views_m445013133() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped1_CreateNewView_m1917106940() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication_U24__Stripped2_get_MainView_m1528488903() = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication2
struct NOVTABLE ICoreImmersiveApplication2_t4020591688 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication2_CreateNewView_m1910091696(ICoreApplicationView_t3448274634** comReturnValue) = 0;
};
// Windows.ApplicationModel.Core.ICoreImmersiveApplication3
struct NOVTABLE ICoreImmersiveApplication3_t1681939528 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreImmersiveApplication3_U24__Stripped0_CreateNewView_m1224320064() = 0;
};
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct NOVTABLE ISimpleHapticsControllerFeedback_t2199416581 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_get_Waveform_m1427054036(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_U24__Stripped0_get_Duration_m1134348836() = 0;
};
// Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IIterable_1_t564697430 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m725484364(IIterator_1_t817443443** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t326290202 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m649191502() = 0;
};
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriEscapeStatics
struct NOVTABLE IUriEscapeStatics_t1418340874 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_UnescapeComponent_m4034034788(Il2CppHString ___toUnescape0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_EscapeComponent_m2989309814(Il2CppHString ___toEscape0, Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClass
struct NOVTABLE IUriRuntimeClass_t921050115 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_AbsoluteUri_m1802109736(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_DisplayUri_m486834635(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Domain_m2557921454(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Extension_m3106685299(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Fragment_m2886153123(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Host_m971230776(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Password_m4039608124(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Path_m1403698734(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Query_m49598513(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_QueryParsed_m1061304731(IWwwFormUrlDecoderRuntimeClass_t497020701** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_RawUri_m1303737506(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_SchemeName_m1162666486(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_UserName_m1956155983(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Port_m834193881(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Suspicious_m1231824283(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_Equals_m641048832(IUriRuntimeClass_t921050115* ___pUri0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_CombineUri_m511350015(Il2CppHString ___relativeUri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassFactory
struct NOVTABLE IUriRuntimeClassFactory_t1786313621 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateUri_m1347622952(Il2CppHString ___uri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateWithRelativeUri_m922460588(Il2CppHString ___baseUri0, Il2CppHString ___relativeUri1, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
struct NOVTABLE IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_AbsoluteCanonicalUri_m576710761(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_DisplayIri_m2106498432(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
struct NOVTABLE IWwwFormUrlDecoderRuntimeClass_t497020701 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClass_U24__Stripped0_GetFirstValueByName_m2439676971() = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
struct NOVTABLE IWwwFormUrlDecoderRuntimeClassFactory_t1825479388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderRuntimeClassFactory_U24__Stripped0_CreateWwwFormUrlDecoder_m959935225() = 0;
};
// Windows.Media.Capture.IMediaCapture
struct NOVTABLE IMediaCapture_t2687710539 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped0_InitializeAsync_m2734775711() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_InitializeAsync_m1047720208(IMediaCaptureInitializationSettings_t2768046102* ___mediaCaptureInitializationSettings0, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped1_StartRecordToStorageFileAsync_m2277905929() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped2_StartRecordToStreamAsync_m524428702() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped3_StartRecordToCustomSinkAsync_m1427129835() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped4_StartRecordToCustomSinkAsync_m2149902457() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped5_StopRecordAsync_m2489757986() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped6_CapturePhotoToStorageFileAsync_m2279333691() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped7_CapturePhotoToStreamAsync_m4251918927() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped8_AddEffectAsync_m4061719554() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped9_ClearEffectsAsync_m3638122974() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped10_SetEncoderProperty_m3057842188() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped11_GetEncoderProperty_m231921443() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped12_add_Failed_m1748421629() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped13_remove_Failed_m1371972149() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped14_add_RecordLimitationExceeded_m1035511630() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped15_remove_RecordLimitationExceeded_m3248529578() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped16_get_MediaCaptureSettings_m480135158() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_get_AudioDeviceController_m1759341815(IAudioDeviceController_t3742505345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped17_get_VideoDeviceController_m2351464102() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped18_SetPreviewMirroring_m1115924190() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped19_GetPreviewMirroring_m749697283() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped20_SetPreviewRotation_m2857016971() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped21_GetPreviewRotation_m1335727518() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped22_SetRecordRotation_m3875181064() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture_U24__Stripped23_GetRecordRotation_m151250311() = 0;
};
// Windows.Media.Capture.IMediaCapture2
struct NOVTABLE IMediaCapture2_t2891527499 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped0_PrepareLowLagRecordToStorageFileAsync_m3891579985() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped1_PrepareLowLagRecordToStreamAsync_m3195632863() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped2_PrepareLowLagRecordToCustomSinkAsync_m918601606() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped3_PrepareLowLagRecordToCustomSinkAsync_m1486446897() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped4_PrepareLowLagPhotoCaptureAsync_m3981611872() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped5_PrepareLowLagPhotoSequenceCaptureAsync_m3850302580() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture2_U24__Stripped6_SetEncodingPropertiesAsync_m1607585546() = 0;
};
// Windows.Media.Capture.IMediaCapture3
struct NOVTABLE IMediaCapture3_t552875339 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped0_PrepareVariablePhotoSequenceCaptureAsync_m2112777480() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped1_add_FocusChanged_m1088698208() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped2_remove_FocusChanged_m2897970096() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped3_add_PhotoConfirmationCaptured_m3862535956() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture3_U24__Stripped4_remove_PhotoConfirmationCaptured_m3160395183() = 0;
};
// Windows.Media.Capture.IMediaCapture4
struct NOVTABLE IMediaCapture4_t2509190475 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped0_AddAudioEffectAsync_m44736820() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped1_AddVideoEffectAsync_m3558464885() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped2_PauseRecordAsync_m2583337994() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped3_ResumeRecordAsync_m1534748683() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped4_add_CameraStreamStateChanged_m2069625330() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped5_remove_CameraStreamStateChanged_m3659784376() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped6_get_CameraStreamState_m1106269311() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped7_GetPreviewFrameAsync_m421750520() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped8_GetPreviewFrameAsync_m3826409942() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped9_add_ThermalStatusChanged_m2218568675() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped10_remove_ThermalStatusChanged_m4176170723() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped11_get_ThermalStatus_m18891453() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture4_U24__Stripped12_PrepareAdvancedPhotoCaptureAsync_m1472122776() = 0;
};
// Windows.Media.Capture.IMediaCapture5
struct NOVTABLE IMediaCapture5_t170538315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped0_RemoveEffectAsync_m1401849217() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped1_PauseRecordWithResultAsync_m3906990276() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped2_StopRecordWithResultAsync_m553374532() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped3_get_FrameSources_m3416294620() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped4_CreateFrameReaderAsync_m1184451091() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped5_CreateFrameReaderAsync_m3344563728() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture5_U24__Stripped6_CreateFrameReaderAsync_m3901113522() = 0;
};
// Windows.Media.Capture.IMediaCapture6
struct NOVTABLE IMediaCapture6_t2126853451 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped0_add_CaptureDeviceExclusiveControlStatusChanged_m2901917473() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped1_remove_CaptureDeviceExclusiveControlStatusChanged_m1499551442() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCapture6_U24__Stripped2_CreateMultiSourceFrameReaderAsync_m2850131425() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings3
struct NOVTABLE IMediaCaptureInitializationSettings3_t2764834838 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped0_put_AudioSource_m3678721786() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped1_get_AudioSource_m2123551225() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped2_put_VideoSource_m1784061944() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings3_U24__Stripped3_get_VideoSource_m2090869932() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings4
struct NOVTABLE IMediaCaptureInitializationSettings4_t2764638230 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped0_get_VideoProfile_m1574429902() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped1_put_VideoProfile_m240344775() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped2_get_PreviewMediaDescription_m781334747() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped3_put_PreviewMediaDescription_m2971038979() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped4_get_RecordMediaDescription_m2034719152() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped5_put_RecordMediaDescription_m4149356239() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped6_get_PhotoMediaDescription_m2857032305() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings4_U24__Stripped7_put_PhotoMediaDescription_m3494437117() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings5
struct NOVTABLE IMediaCaptureInitializationSettings5_t2764703766 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped0_get_SourceGroup_m4281738438() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped1_put_SourceGroup_m2003083379() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped2_get_SharingMode_m1293523045() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped3_put_SharingMode_m4028984993() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped4_get_MemoryPreference_m2929589363() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings5_U24__Stripped5_put_MemoryPreference_m1350892701() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings6
struct NOVTABLE IMediaCaptureInitializationSettings6_t2764507158 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings6_U24__Stripped0_get_AlwaysPlaySystemShutterSound_m3454942465() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings6_U24__Stripped1_put_AlwaysPlaySystemShutterSound_m3153148674() = 0;
};
// Windows.Media.Capture.IMediaCaptureStatics
struct NOVTABLE IMediaCaptureStatics_t830978977 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped0_IsVideoProfileSupported_m1052560789() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped1_FindAllVideoProfiles_m358632705() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped2_FindConcurrentProfiles_m2358028342() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureStatics_U24__Stripped3_FindKnownVideoProfiles_m330975184() = 0;
};
// Windows.Media.Capture.IMediaCaptureVideoPreview
struct NOVTABLE IMediaCaptureVideoPreview_t535963051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped0_StartPreviewAsync_m58851148() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped1_StartPreviewToCustomSinkAsync_m762417689() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped2_StartPreviewToCustomSinkAsync_m2890038847() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureVideoPreview_U24__Stripped3_StopPreviewAsync_m4262155444() = 0;
};
// Windows.Media.Core.ITimedMetadataTrackProvider
struct NOVTABLE ITimedMetadataTrackProvider_t1703961418 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITimedMetadataTrackProvider_U24__Stripped0_get_TimedMetadataTracks_m167098999() = 0;
};
// Windows.Media.Devices.IAudioDeviceController
struct NOVTABLE IAudioDeviceController_t3742505345 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped0_put_Muted_m2939917434() = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_get_Muted_m3616316259(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped1_put_VolumePercent_m4060427833() = 0;
	virtual il2cpp_hresult_t STDCALL IAudioDeviceController_U24__Stripped2_get_VolumePercent_m777035121() = 0;
};
// Windows.Media.Devices.IMediaDeviceController
struct NOVTABLE IMediaDeviceController_t1179508027 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped0_GetAvailableMediaStreamProperties_m179567308() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped1_GetMediaStreamProperties_m3028771074() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaDeviceController_U24__Stripped2_SetMediaStreamPropertiesAsync_m2626761744() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct NOVTABLE IInstalledVoicesStatic_t870565809 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_get_AllVoices_m3921392764(IVectorView_1_t3605269894** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic_U24__Stripped0_get_DefaultVoice_m3710717716() = 0;
};
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct NOVTABLE IInstalledVoicesStatic2_t946760305 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInstalledVoicesStatic2_U24__Stripped0_TrySetDefaultVoiceAsync_m4121083203() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
struct NOVTABLE ISpeechSynthesisStream_t764091608 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesisStream_U24__Stripped0_get_Markers_m1331395156() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer
struct NOVTABLE ISpeechSynthesizer_t2734223870 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeTextToStreamAsync_m3255420258(Il2CppHString ___text0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_SynthesizeSsmlToStreamAsync_m781880964(Il2CppHString ___Ssml0, IAsyncOperation_1_t943527478** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_put_Voice_m2158910037(IVoiceInformation_t3111056019* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer_U24__Stripped0_get_Voice_m2158722298() = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
struct NOVTABLE ISpeechSynthesizer2_t1865799545 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesizer2_U24__Stripped0_get_Options_m1005365255() = 0;
};
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct NOVTABLE IVoiceInformation_t3111056019 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_get_DisplayName_m1640391607(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped0_get_Id_m1776229927() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped1_get_Language_m1418474925() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped2_get_Description_m153214867() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped3_get_Gender_m2588825291() = 0;
};
// Windows.Networking.Sockets.IStreamSocket
struct NOVTABLE IStreamSocket_t3338378904 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped0_get_Control_m3042699933() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped1_get_Information_m1242857083() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_InputStream_m1542729860(IInputStream_t2821136229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_OutputStream_m2118890306(IOutputStream_t2042351338** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped2_ConnectAsync_m3193253458() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_ConnectAsync_m1123568840(IHostName_t3179521082* ___remoteHostName0, Il2CppHString ___remoteServiceName1, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped3_ConnectAsync_m3193160057() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped4_ConnectAsync_m3193193880() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped5_UpgradeToSslAsync_m1371843817() = 0;
};
// Windows.Networking.Sockets.IStreamSocket2
struct NOVTABLE IStreamSocket2_t2507586357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket2_U24__Stripped0_ConnectAsync_m4213835381() = 0;
};
// Windows.Networking.Sockets.IStreamSocket3
struct NOVTABLE IStreamSocket3_t2507586356 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped0_CancelIOAsync_m1257382553() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped1_EnableTransferOwnership_m2056414540() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped2_EnableTransferOwnership_m1232450313() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped3_TransferOwnership_m1615596381() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped4_TransferOwnership_m541657236() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket3_U24__Stripped5_TransferOwnership_m4286864110() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListener2
struct NOVTABLE IStreamSocketListener2_t954540666 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener2_U24__Stripped0_BindServiceNameAsync_m3756464595() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener2_U24__Stripped1_BindServiceNameAsync_m3563514078() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListener3
struct NOVTABLE IStreamSocketListener3_t954540667 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped0_CancelIOAsync_m4056594496() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped1_EnableTransferOwnership_m1712201539() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped2_EnableTransferOwnership_m2720451271() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped3_TransferOwnership_m2149010771() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener3_U24__Stripped4_TransferOwnership_m446051482() = 0;
};
// Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
struct NOVTABLE IStreamSocketListenerConnectionReceivedEventArgs_t3129023480 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListenerConnectionReceivedEventArgs_get_Socket_m1753941040(IStreamSocket_t3338378904** comReturnValue) = 0;
};
// Windows.Networking.Sockets.IStreamSocketStatics
struct NOVTABLE IStreamSocketStatics_t566903188 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped0_GetEndpointPairsAsync_m3680219047() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketStatics_U24__Stripped1_GetEndpointPairsAsync_m2379886354() = 0;
};
// Windows.Perception.IPerceptionTimestamp
struct NOVTABLE IPerceptionTimestamp_t393505964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped0_get_TargetTime_m2051237710() = 0;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestamp_U24__Stripped1_get_PredictionAmount_m1234733657() = 0;
};
// Windows.Storage.IStorageFile2
struct NOVTABLE IStorageFile2_t81501002 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped0_OpenAsync_m165645617() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped1_OpenTransactedWriteAsync_m1104539825() = 0;
};
// Windows.Storage.IStorageFilePropertiesWithAvailability
struct NOVTABLE IStorageFilePropertiesWithAvailability_t1554344922 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFilePropertiesWithAvailability_U24__Stripped0_get_IsAvailable_m2026400567() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t4131808966 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromPathAsync_m2841215677() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_GetFileFromApplicationUriAsync_m807305831() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_CreateStreamedFileAsync_m3773394311() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_ReplaceWithStreamedFileAsync_m2701266470() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_CreateStreamedFileFromUriAsync_m2958466004() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped5_ReplaceWithStreamedFileFromUriAsync_m1390089385() = 0;
};
// Windows.Storage.IStorageFolder2
struct NOVTABLE IStorageFolder2_t3506658410 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder2_U24__Stripped0_TryGetItemAsync_m3190903159() = 0;
};
// Windows.Storage.IStorageFolder3
struct NOVTABLE IStorageFolder3_t1940574469 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder3_U24__Stripped0_TryGetChangeTracker_m3453030661() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t333412554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_GetFolderFromPathAsync_m3674878916(Il2CppHString ___path0, IAsyncOperation_1_t3901635704** comReturnValue) = 0;
};
// Windows.Storage.IStorageItem
struct NOVTABLE IStorageItem_t3194585767 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped0_RenameAsync_m1111865988() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped1_RenameAsync_m1111899871() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped2_DeleteAsync_m558316365() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped3_DeleteAsync_m558350056() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped4_GetBasicPropertiesAsync_m2561736561() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped5_get_Name_m3157959696() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_get_Path_m1853866705(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped6_get_Attributes_m2913386339() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped7_get_DateCreated_m1722396674() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped8_IsOfType_m2015695515() = 0;
};
// Windows.Storage.IStorageItem2
struct NOVTABLE IStorageItem2_t2827190580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped0_GetParentAsync_m4237091681() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped1_IsEqual_m1153349944() = 0;
};
// Windows.Storage.IStorageItemProperties
struct NOVTABLE IStorageItemProperties_t2031733036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped0_GetThumbnailAsync_m260624717() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped1_GetThumbnailAsync_m3236220828() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped2_GetThumbnailAsync_m3688217351() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped3_get_DisplayName_m3813510564() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped4_get_DisplayType_m553261029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped5_get_FolderRelativeId_m2825143686() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped6_get_Properties_m1148881838() = 0;
};
// Windows.Storage.IStorageItemProperties2
struct NOVTABLE IStorageItemProperties2_t3993257882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped0_GetScaledImageAsThumbnailAsync_m1311815822() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped1_GetScaledImageAsThumbnailAsync_m3789805793() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped2_GetScaledImageAsThumbnailAsync_m1883939878() = 0;
};
// Windows.Storage.IStorageItemPropertiesWithProvider
struct NOVTABLE IStorageItemPropertiesWithProvider_t3527078644 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemPropertiesWithProvider_U24__Stripped0_get_Provider_m1098238941() = 0;
};
// Windows.Storage.Search.IStorageFolderQueryOperations
struct NOVTABLE IStorageFolderQueryOperations_t91328000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped0_GetIndexedStateAsync_m1002212636() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped1_CreateFileQuery_m2610834360() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped2_CreateFileQuery_m2607550361() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped3_CreateFileQueryWithOptions_m3264920027() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped4_CreateFolderQuery_m562621060() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped5_CreateFolderQuery_m293497691() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped6_CreateFolderQueryWithOptions_m3171464593() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped7_CreateItemQuery_m3471952481() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped8_CreateItemQueryWithOptions_m3157268352() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped9_GetFilesAsync_m2850188463() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped10_GetFilesAsync_m2309390520() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped11_GetFoldersAsync_m3312258101() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped12_GetFoldersAsync_m2029391029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped13_GetItemsAsync_m463088250() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped14_AreQueryOptionsSupported_m2004623827() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped15_IsCommonFolderQuerySupported_m3750205277() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped16_IsCommonFileQuerySupported_m2447375717() = 0;
};
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
};
// Windows.Storage.Streams.IInputStreamReference
struct NOVTABLE IInputStreamReference_t980626503 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStreamReference_U24__Stripped0_OpenSequentialReadAsync_m2665372827() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t2042351338 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m124082296(IBuffer_t541192229* ___buffer0, IAsyncOperationWithProgress_2_t593214123** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m252007188(IAsyncOperation_1_t3013442981** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t2099996051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m3315994282(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_put_Size_m1188903761() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m2841117993(uint64_t ___position0, IInputStream_t2821136229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_GetOutputStreamAt_m2771976110() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3162954653(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m3482800682(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped2_CloneStream_m392898984() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m2334341332(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m1780602347(bool* comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamReference
struct NOVTABLE IRandomAccessStreamReference_t2718546672 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStreamReference_OpenReadAsync_m2508312280(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3296927652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.ViewManagement.IApplicationView
struct NOVTABLE IApplicationView_t1025170592 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped0_get_Orientation_m4212927907() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped1_get_AdjacentToLeftDisplayEdge_m3385506026() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped2_get_AdjacentToRightDisplayEdge_m1859426273() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped3_get_IsFullScreen_m781960278() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped4_get_IsOnLockScreen_m2577111178() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped5_get_IsScreenCaptureEnabled_m160397198() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped6_put_IsScreenCaptureEnabled_m3463127432() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped7_put_Title_m3528190498() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped8_get_Title_m2096123156() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_get_Id_m3306775227(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped9_add_Consolidated_m2934620777() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView_U24__Stripped10_remove_Consolidated_m2974605279() = 0;
};
// Windows.UI.ViewManagement.IApplicationView2
struct NOVTABLE IApplicationView2_t2714993344 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped0_get_SuppressSystemOverlays_m299101081() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped1_put_SuppressSystemOverlays_m2335323331() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped2_get_VisibleBounds_m1589056832() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped3_add_VisibleBoundsChanged_m667833365() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped4_remove_VisibleBoundsChanged_m63371914() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped5_SetDesiredBoundsMode_m3048185578() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView2_U24__Stripped6_get_DesiredBoundsMode_m324249149() = 0;
};
// Windows.UI.ViewManagement.IApplicationView3
struct NOVTABLE IApplicationView3_t1148909403 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped0_get_TitleBar_m1366948381() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped1_get_FullScreenSystemOverlayMode_m3412193568() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped2_put_FullScreenSystemOverlayMode_m389904880() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped3_get_IsFullScreenMode_m3243818408() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped4_TryEnterFullScreenMode_m112148633() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped5_ExitFullScreenMode_m425431989() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped6_ShowStandardSystemOverlays_m1469177567() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped7_TryResizeView_m2604594988() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView3_U24__Stripped8_SetPreferredMinSize_m3988102712() = 0;
};
// Windows.UI.ViewManagement.IApplicationView4
struct NOVTABLE IApplicationView4_t1552193930 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped0_get_ViewMode_m1097226819() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped1_IsViewModeSupported_m2001416882() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped2_TryEnterViewModeAsync_m2664907217() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped3_TryEnterViewModeAsync_m498371045() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationView4_U24__Stripped4_TryConsolidateAsync_m3797710483() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
struct NOVTABLE IApplicationViewFullscreenStatics_t2572392975 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewFullscreenStatics_U24__Stripped0_TryUnsnapToFullscreen_m2354135936() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
struct NOVTABLE IApplicationViewSwitcherStatics_t2850352759 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped0_DisableShowingMainViewOnActivation_m1969265274() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_TryShowAsStandaloneAsync_m394236499(int32_t ___viewId0, IAsyncOperation_1_t3013442981** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped1_TryShowAsStandaloneAsync_m491999923() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped2_TryShowAsStandaloneAsync_m3770708965() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped3_SwitchAsync_m3619046467() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped4_SwitchAsync_m1964459072() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped5_SwitchAsync_m3757589568() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics_U24__Stripped6_PrepareForCustomAnimatedSwitchAsync_m3331554602() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
struct NOVTABLE IApplicationViewSwitcherStatics2_t2853629559 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics2_U24__Stripped0_DisableSystemViewActivationPolicy_m290462612() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
struct NOVTABLE IApplicationViewSwitcherStatics3_t2853564023 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics3_U24__Stripped0_TryShowAsViewModeAsync_m1304638729() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewSwitcherStatics3_U24__Stripped1_TryShowAsViewModeAsync_m3297872625() = 0;
};
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
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
#ifndef COREAPPLICATION_T2329903567_H
#define COREAPPLICATION_T2329903567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.ApplicationModel.Core.CoreApplication
struct  CoreApplication_t2329903567  : public Il2CppComObject
{
public:

public:
};

struct CoreApplication_t2329903567_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationUnhandledError
	ICoreApplicationUnhandledError_t3134926704* ____icoreApplicationUnhandledError_t3134926704;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplication2
	ICoreApplication2_t709209101* ____icoreApplication2_t709209101;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationUseCount
	ICoreApplicationUseCount_t1878483554* ____icoreApplicationUseCount_t1878483554;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplication3
	ICoreApplication3_t2275293042* ____icoreApplication3_t2275293042;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreImmersiveApplication2
	ICoreImmersiveApplication2_t4020591688* ____icoreImmersiveApplication2_t4020591688;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreImmersiveApplication
	ICoreImmersiveApplication_t3816774728* ____icoreImmersiveApplication_t3816774728;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreImmersiveApplication3
	ICoreImmersiveApplication3_t1681939528* ____icoreImmersiveApplication3_t1681939528;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationExit
	ICoreApplicationExit_t3461573293* ____icoreApplicationExit_t3461573293;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplication
	ICoreApplication_t1778460144* ____icoreApplication_t1778460144;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.ApplicationModel.Core.CoreApplication"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ICoreApplicationUnhandledError_t3134926704* get_____icoreApplicationUnhandledError_t3134926704()
	{
		ICoreApplicationUnhandledError_t3134926704* returnValue = ____icoreApplicationUnhandledError_t3134926704;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreApplicationUnhandledError_t3134926704::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationUnhandledError_t3134926704>((&____icoreApplicationUnhandledError_t3134926704), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationUnhandledError_t3134926704;
			}
		}
		return returnValue;
	}

	inline ICoreApplication2_t709209101* get_____icoreApplication2_t709209101()
	{
		ICoreApplication2_t709209101* returnValue = ____icoreApplication2_t709209101;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreApplication2_t709209101::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplication2_t709209101>((&____icoreApplication2_t709209101), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplication2_t709209101;
			}
		}
		return returnValue;
	}

	inline ICoreApplicationUseCount_t1878483554* get_____icoreApplicationUseCount_t1878483554()
	{
		ICoreApplicationUseCount_t1878483554* returnValue = ____icoreApplicationUseCount_t1878483554;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreApplicationUseCount_t1878483554::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationUseCount_t1878483554>((&____icoreApplicationUseCount_t1878483554), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationUseCount_t1878483554;
			}
		}
		return returnValue;
	}

	inline ICoreApplication3_t2275293042* get_____icoreApplication3_t2275293042()
	{
		ICoreApplication3_t2275293042* returnValue = ____icoreApplication3_t2275293042;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreApplication3_t2275293042::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplication3_t2275293042>((&____icoreApplication3_t2275293042), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplication3_t2275293042;
			}
		}
		return returnValue;
	}

	inline ICoreImmersiveApplication2_t4020591688* get_____icoreImmersiveApplication2_t4020591688()
	{
		ICoreImmersiveApplication2_t4020591688* returnValue = ____icoreImmersiveApplication2_t4020591688;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreImmersiveApplication2_t4020591688::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreImmersiveApplication2_t4020591688>((&____icoreImmersiveApplication2_t4020591688), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreImmersiveApplication2_t4020591688;
			}
		}
		return returnValue;
	}

	inline ICoreImmersiveApplication_t3816774728* get_____icoreImmersiveApplication_t3816774728()
	{
		ICoreImmersiveApplication_t3816774728* returnValue = ____icoreImmersiveApplication_t3816774728;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreImmersiveApplication_t3816774728::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreImmersiveApplication_t3816774728>((&____icoreImmersiveApplication_t3816774728), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreImmersiveApplication_t3816774728;
			}
		}
		return returnValue;
	}

	inline ICoreImmersiveApplication3_t1681939528* get_____icoreImmersiveApplication3_t1681939528()
	{
		ICoreImmersiveApplication3_t1681939528* returnValue = ____icoreImmersiveApplication3_t1681939528;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreImmersiveApplication3_t1681939528::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreImmersiveApplication3_t1681939528>((&____icoreImmersiveApplication3_t1681939528), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreImmersiveApplication3_t1681939528;
			}
		}
		return returnValue;
	}

	inline ICoreApplicationExit_t3461573293* get_____icoreApplicationExit_t3461573293()
	{
		ICoreApplicationExit_t3461573293* returnValue = ____icoreApplicationExit_t3461573293;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreApplicationExit_t3461573293::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationExit_t3461573293>((&____icoreApplicationExit_t3461573293), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationExit_t3461573293;
			}
		}
		return returnValue;
	}

	inline ICoreApplication_t1778460144* get_____icoreApplication_t1778460144()
	{
		ICoreApplication_t1778460144* returnValue = ____icoreApplication_t1778460144;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreApplication_t1778460144::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplication_t1778460144>((&____icoreApplication_t1778460144), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplication_t1778460144;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREAPPLICATION_T2329903567_H
#ifndef COREAPPLICATIONVIEW_T1335682569_H
#define COREAPPLICATIONVIEW_T1335682569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.ApplicationModel.Core.CoreApplicationView
struct  CoreApplicationView_t1335682569  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationView
	ICoreApplicationView_t3448274634* ____icoreApplicationView_t3448274634;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationView2
	ICoreApplicationView2_t87912591* ____icoreApplicationView2_t87912591;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationView3
	ICoreApplicationView3_t2816795946* ____icoreApplicationView3_t2816795946;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationView5
	ICoreApplicationView5_t3623365000* ____icoreApplicationView5_t3623365000;
	// Cached pointer to Windows.ApplicationModel.Core.ICoreApplicationView6
	ICoreApplicationView6_t2057281059* ____icoreApplicationView6_t2057281059;

public:
	inline ICoreApplicationView_t3448274634* get_____icoreApplicationView_t3448274634()
	{
		ICoreApplicationView_t3448274634* returnValue = ____icoreApplicationView_t3448274634;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreApplicationView_t3448274634::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationView_t3448274634>((&____icoreApplicationView_t3448274634), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationView_t3448274634;
			}
		}
		return returnValue;
	}

	inline ICoreApplicationView2_t87912591* get_____icoreApplicationView2_t87912591()
	{
		ICoreApplicationView2_t87912591* returnValue = ____icoreApplicationView2_t87912591;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreApplicationView2_t87912591::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationView2_t87912591>((&____icoreApplicationView2_t87912591), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationView2_t87912591;
			}
		}
		return returnValue;
	}

	inline ICoreApplicationView3_t2816795946* get_____icoreApplicationView3_t2816795946()
	{
		ICoreApplicationView3_t2816795946* returnValue = ____icoreApplicationView3_t2816795946;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreApplicationView3_t2816795946::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationView3_t2816795946>((&____icoreApplicationView3_t2816795946), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationView3_t2816795946;
			}
		}
		return returnValue;
	}

	inline ICoreApplicationView5_t3623365000* get_____icoreApplicationView5_t3623365000()
	{
		ICoreApplicationView5_t3623365000* returnValue = ____icoreApplicationView5_t3623365000;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreApplicationView5_t3623365000::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationView5_t3623365000>((&____icoreApplicationView5_t3623365000), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationView5_t3623365000;
			}
		}
		return returnValue;
	}

	inline ICoreApplicationView6_t2057281059* get_____icoreApplicationView6_t2057281059()
	{
		ICoreApplicationView6_t2057281059* returnValue = ____icoreApplicationView6_t2057281059;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ICoreApplicationView6_t2057281059::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ICoreApplicationView6_t2057281059>((&____icoreApplicationView6_t2057281059), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreApplicationView6_t2057281059;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREAPPLICATIONVIEW_T1335682569_H
#ifndef SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#define SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct  SimpleHapticsControllerFeedback_t913461083  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
	ISimpleHapticsControllerFeedback_t2199416581* ____isimpleHapticsControllerFeedback_t2199416581;

public:
	inline ISimpleHapticsControllerFeedback_t2199416581* get_____isimpleHapticsControllerFeedback_t2199416581()
	{
		ISimpleHapticsControllerFeedback_t2199416581* returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsControllerFeedback_t2199416581>((&____isimpleHapticsControllerFeedback_t2199416581), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
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
#ifndef URI_T952691556_H
#define URI_T952691556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Uri
struct  Uri_t952691556  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IUriRuntimeClass
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IUriRuntimeClass_t921050115* get_____iuriRuntimeClass_t921050115()
	{
		IUriRuntimeClass_t921050115* returnValue = ____iuriRuntimeClass_t921050115;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClass_t921050115::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClass_t921050115>((&____iuriRuntimeClass_t921050115), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClass_t921050115;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788()
	{
		IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788>((&____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct Uri_t952691556_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassFactory
	IUriRuntimeClassFactory_t1786313621* ____iuriRuntimeClassFactory_t1786313621;
	// Cached pointer to Windows.Foundation.IUriEscapeStatics
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Uri"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassFactory_t1786313621* get_____iuriRuntimeClassFactory_t1786313621()
	{
		IUriRuntimeClassFactory_t1786313621* returnValue = ____iuriRuntimeClassFactory_t1786313621;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriRuntimeClassFactory_t1786313621::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassFactory_t1786313621>((&____iuriRuntimeClassFactory_t1786313621), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassFactory_t1786313621;
			}
		}
		return returnValue;
	}

	inline IUriEscapeStatics_t1418340874* get_____iuriEscapeStatics_t1418340874()
	{
		IUriEscapeStatics_t1418340874* returnValue = ____iuriEscapeStatics_t1418340874;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriEscapeStatics_t1418340874::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriEscapeStatics_t1418340874>((&____iuriEscapeStatics_t1418340874), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriEscapeStatics_t1418340874;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T952691556_H
#ifndef WWWFORMURLDECODER_T4136411681_H
#define WWWFORMURLDECODER_T4136411681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.WwwFormUrlDecoder
struct  WwwFormUrlDecoder_t4136411681  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClass
	IWwwFormUrlDecoderRuntimeClass_t497020701* ____iwwwFormUrlDecoderRuntimeClass_t497020701;
	// Cached pointer to Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232;
	// Cached pointer to Windows.Foundation.Collections.IIterable`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
	IIterable_1_t564697430* ____iiterable_1_t564697430;

public:
	inline IWwwFormUrlDecoderRuntimeClass_t497020701* get_____iwwwFormUrlDecoderRuntimeClass_t497020701()
	{
		IWwwFormUrlDecoderRuntimeClass_t497020701* returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWwwFormUrlDecoderRuntimeClass_t497020701::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClass_t497020701>((&____iwwwFormUrlDecoderRuntimeClass_t497020701), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClass_t497020701;
			}
		}
		return returnValue;
	}

	inline IVectorView_1_t2282165232* get_____ivectorView_1_t2282165232()
	{
		IVectorView_1_t2282165232* returnValue = ____ivectorView_1_t2282165232;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVectorView_1_t2282165232>((&____ivectorView_1_t2282165232), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivectorView_1_t2282165232;
			}
		}
		return returnValue;
	}

	inline IIterable_1_t564697430* get_____iiterable_1_t564697430()
	{
		IIterable_1_t564697430* returnValue = ____iiterable_1_t564697430;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IIterable_1_t564697430::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IIterable_1_t564697430>((&____iiterable_1_t564697430), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iiterable_1_t564697430;
			}
		}
		return returnValue;
	}
};

struct WwwFormUrlDecoder_t4136411681_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IWwwFormUrlDecoderRuntimeClassFactory
	IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.WwwFormUrlDecoder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* get_____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388()
	{
		IWwwFormUrlDecoderRuntimeClassFactory_t1825479388* returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWwwFormUrlDecoderRuntimeClassFactory_t1825479388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWwwFormUrlDecoderRuntimeClassFactory_t1825479388>((&____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwwwFormUrlDecoderRuntimeClassFactory_t1825479388;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORMURLDECODER_T4136411681_H
#ifndef MEDIACAPTURE_T1516581975_H
#define MEDIACAPTURE_T1516581975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCapture
struct  MediaCapture_t1516581975  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.IMediaCapture
	IMediaCapture_t2687710539* ____imediaCapture_t2687710539;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureVideoPreview
	IMediaCaptureVideoPreview_t535963051* ____imediaCaptureVideoPreview_t535963051;
	// Cached pointer to Windows.Media.Capture.IMediaCapture2
	IMediaCapture2_t2891527499* ____imediaCapture2_t2891527499;
	// Cached pointer to Windows.Media.Capture.IMediaCapture3
	IMediaCapture3_t552875339* ____imediaCapture3_t552875339;
	// Cached pointer to Windows.Media.Capture.IMediaCapture4
	IMediaCapture4_t2509190475* ____imediaCapture4_t2509190475;
	// Cached pointer to Windows.Media.Capture.IMediaCapture5
	IMediaCapture5_t170538315* ____imediaCapture5_t170538315;
	// Cached pointer to Windows.Media.Capture.IMediaCapture6
	IMediaCapture6_t2126853451* ____imediaCapture6_t2126853451;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IMediaCapture_t2687710539* get_____imediaCapture_t2687710539()
	{
		IMediaCapture_t2687710539* returnValue = ____imediaCapture_t2687710539;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture_t2687710539::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture_t2687710539>((&____imediaCapture_t2687710539), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture_t2687710539;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureVideoPreview_t535963051* get_____imediaCaptureVideoPreview_t535963051()
	{
		IMediaCaptureVideoPreview_t535963051* returnValue = ____imediaCaptureVideoPreview_t535963051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureVideoPreview_t535963051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureVideoPreview_t535963051>((&____imediaCaptureVideoPreview_t535963051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureVideoPreview_t535963051;
			}
		}
		return returnValue;
	}

	inline IMediaCapture2_t2891527499* get_____imediaCapture2_t2891527499()
	{
		IMediaCapture2_t2891527499* returnValue = ____imediaCapture2_t2891527499;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture2_t2891527499::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture2_t2891527499>((&____imediaCapture2_t2891527499), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture2_t2891527499;
			}
		}
		return returnValue;
	}

	inline IMediaCapture3_t552875339* get_____imediaCapture3_t552875339()
	{
		IMediaCapture3_t552875339* returnValue = ____imediaCapture3_t552875339;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture3_t552875339::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture3_t552875339>((&____imediaCapture3_t552875339), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture3_t552875339;
			}
		}
		return returnValue;
	}

	inline IMediaCapture4_t2509190475* get_____imediaCapture4_t2509190475()
	{
		IMediaCapture4_t2509190475* returnValue = ____imediaCapture4_t2509190475;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture4_t2509190475::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture4_t2509190475>((&____imediaCapture4_t2509190475), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture4_t2509190475;
			}
		}
		return returnValue;
	}

	inline IMediaCapture5_t170538315* get_____imediaCapture5_t170538315()
	{
		IMediaCapture5_t170538315* returnValue = ____imediaCapture5_t170538315;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture5_t170538315::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture5_t170538315>((&____imediaCapture5_t170538315), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture5_t170538315;
			}
		}
		return returnValue;
	}

	inline IMediaCapture6_t2126853451* get_____imediaCapture6_t2126853451()
	{
		IMediaCapture6_t2126853451* returnValue = ____imediaCapture6_t2126853451;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCapture6_t2126853451::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCapture6_t2126853451>((&____imediaCapture6_t2126853451), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCapture6_t2126853451;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct MediaCapture_t1516581975_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureStatics
	IMediaCaptureStatics_t830978977* ____imediaCaptureStatics_t830978977;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.MediaCapture"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureStatics_t830978977* get_____imediaCaptureStatics_t830978977()
	{
		IMediaCaptureStatics_t830978977* returnValue = ____imediaCaptureStatics_t830978977;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IMediaCaptureStatics_t830978977::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureStatics_t830978977>((&____imediaCaptureStatics_t830978977), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureStatics_t830978977;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTURE_T1516581975_H
#ifndef AUDIODEVICECONTROLLER_T936102736_H
#define AUDIODEVICECONTROLLER_T936102736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Devices.AudioDeviceController
struct  AudioDeviceController_t936102736  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Devices.IAudioDeviceController
	IAudioDeviceController_t3742505345* ____iaudioDeviceController_t3742505345;
	// Cached pointer to Windows.Media.Devices.IMediaDeviceController
	IMediaDeviceController_t1179508027* ____imediaDeviceController_t1179508027;

public:
	inline IAudioDeviceController_t3742505345* get_____iaudioDeviceController_t3742505345()
	{
		IAudioDeviceController_t3742505345* returnValue = ____iaudioDeviceController_t3742505345;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAudioDeviceController_t3742505345::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAudioDeviceController_t3742505345>((&____iaudioDeviceController_t3742505345), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iaudioDeviceController_t3742505345;
			}
		}
		return returnValue;
	}

	inline IMediaDeviceController_t1179508027* get_____imediaDeviceController_t1179508027()
	{
		IMediaDeviceController_t1179508027* returnValue = ____imediaDeviceController_t1179508027;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaDeviceController_t1179508027::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaDeviceController_t1179508027>((&____imediaDeviceController_t1179508027), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaDeviceController_t1179508027;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIODEVICECONTROLLER_T936102736_H
#ifndef SPEECHSYNTHESIZER_T2130945875_H
#define SPEECHSYNTHESIZER_T2130945875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesizer
struct  SpeechSynthesizer_t2130945875  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer
	ISpeechSynthesizer_t2734223870* ____ispeechSynthesizer_t2734223870;
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesizer2
	ISpeechSynthesizer2_t1865799545* ____ispeechSynthesizer2_t1865799545;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesizer_t2734223870* get_____ispeechSynthesizer_t2734223870()
	{
		ISpeechSynthesizer_t2734223870* returnValue = ____ispeechSynthesizer_t2734223870;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer_t2734223870::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer_t2734223870>((&____ispeechSynthesizer_t2734223870), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer_t2734223870;
			}
		}
		return returnValue;
	}

	inline ISpeechSynthesizer2_t1865799545* get_____ispeechSynthesizer2_t1865799545()
	{
		ISpeechSynthesizer2_t1865799545* returnValue = ____ispeechSynthesizer2_t1865799545;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesizer2_t1865799545::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesizer2_t1865799545>((&____ispeechSynthesizer2_t1865799545), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesizer2_t1865799545;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct SpeechSynthesizer_t2130945875_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
	IInstalledVoicesStatic_t870565809* ____iinstalledVoicesStatic_t870565809;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
	IInstalledVoicesStatic2_t946760305* ____iinstalledVoicesStatic2_t946760305;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.SpeechSynthesis.SpeechSynthesizer"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic_t870565809* get_____iinstalledVoicesStatic_t870565809()
	{
		IInstalledVoicesStatic_t870565809* returnValue = ____iinstalledVoicesStatic_t870565809;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic_t870565809::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic_t870565809>((&____iinstalledVoicesStatic_t870565809), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic_t870565809;
			}
		}
		return returnValue;
	}

	inline IInstalledVoicesStatic2_t946760305* get_____iinstalledVoicesStatic2_t946760305()
	{
		IInstalledVoicesStatic2_t946760305* returnValue = ____iinstalledVoicesStatic2_t946760305;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IInstalledVoicesStatic2_t946760305::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInstalledVoicesStatic2_t946760305>((&____iinstalledVoicesStatic2_t946760305), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinstalledVoicesStatic2_t946760305;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESIZER_T2130945875_H
#ifndef VOICEINFORMATION_T4266404632_H
#define VOICEINFORMATION_T4266404632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.VoiceInformation
struct  VoiceInformation_t4266404632  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.IVoiceInformation
	IVoiceInformation_t3111056019* ____ivoiceInformation_t3111056019;

public:
	inline IVoiceInformation_t3111056019* get_____ivoiceInformation_t3111056019()
	{
		IVoiceInformation_t3111056019* returnValue = ____ivoiceInformation_t3111056019;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVoiceInformation_t3111056019>((&____ivoiceInformation_t3111056019), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivoiceInformation_t3111056019;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOICEINFORMATION_T4266404632_H
#ifndef STREAMSOCKET_T121918173_H
#define STREAMSOCKET_T121918173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocket
struct  StreamSocket_t121918173  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket
	IStreamSocket_t3338378904* ____istreamSocket_t3338378904;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket2
	IStreamSocket2_t2507586357* ____istreamSocket2_t2507586357;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocket3
	IStreamSocket3_t2507586356* ____istreamSocket3_t2507586356;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IStreamSocket_t3338378904* get_____istreamSocket_t3338378904()
	{
		IStreamSocket_t3338378904* returnValue = ____istreamSocket_t3338378904;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket_t3338378904::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket_t3338378904>((&____istreamSocket_t3338378904), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket_t3338378904;
			}
		}
		return returnValue;
	}

	inline IStreamSocket2_t2507586357* get_____istreamSocket2_t2507586357()
	{
		IStreamSocket2_t2507586357* returnValue = ____istreamSocket2_t2507586357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket2_t2507586357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket2_t2507586357>((&____istreamSocket2_t2507586357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket2_t2507586357;
			}
		}
		return returnValue;
	}

	inline IStreamSocket3_t2507586356* get_____istreamSocket3_t2507586356()
	{
		IStreamSocket3_t2507586356* returnValue = ____istreamSocket3_t2507586356;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocket3_t2507586356::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocket3_t2507586356>((&____istreamSocket3_t2507586356), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocket3_t2507586356;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct StreamSocket_t121918173_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketStatics
	IStreamSocketStatics_t566903188* ____istreamSocketStatics_t566903188;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocket"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStreamSocketStatics_t566903188* get_____istreamSocketStatics_t566903188()
	{
		IStreamSocketStatics_t566903188* returnValue = ____istreamSocketStatics_t566903188;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStreamSocketStatics_t566903188::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketStatics_t566903188>((&____istreamSocketStatics_t566903188), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketStatics_t566903188;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKET_T121918173_H
#ifndef STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3298683243_H
#define STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3298683243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs
struct  StreamSocketListenerConnectionReceivedEventArgs_t3298683243  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs
	IStreamSocketListenerConnectionReceivedEventArgs_t3129023480* ____istreamSocketListenerConnectionReceivedEventArgs_t3129023480;

public:
	inline IStreamSocketListenerConnectionReceivedEventArgs_t3129023480* get_____istreamSocketListenerConnectionReceivedEventArgs_t3129023480()
	{
		IStreamSocketListenerConnectionReceivedEventArgs_t3129023480* returnValue = ____istreamSocketListenerConnectionReceivedEventArgs_t3129023480;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListenerConnectionReceivedEventArgs_t3129023480::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListenerConnectionReceivedEventArgs_t3129023480>((&____istreamSocketListenerConnectionReceivedEventArgs_t3129023480), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListenerConnectionReceivedEventArgs_t3129023480;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKETLISTENERCONNECTIONRECEIVEDEVENTARGS_T3298683243_H
#ifndef PERCEPTIONTIMESTAMP_T25754965_H
#define PERCEPTIONTIMESTAMP_T25754965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Perception.PerceptionTimestamp
struct  PerceptionTimestamp_t25754965  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Perception.IPerceptionTimestamp
	IPerceptionTimestamp_t393505964* ____iperceptionTimestamp_t393505964;

public:
	inline IPerceptionTimestamp_t393505964* get_____iperceptionTimestamp_t393505964()
	{
		IPerceptionTimestamp_t393505964* returnValue = ____iperceptionTimestamp_t393505964;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IPerceptionTimestamp_t393505964::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IPerceptionTimestamp_t393505964>((&____iperceptionTimestamp_t393505964), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iperceptionTimestamp_t393505964;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERCEPTIONTIMESTAMP_T25754965_H
#ifndef APPLICATIONVIEWSWITCHER_T551440999_H
#define APPLICATIONVIEWSWITCHER_T551440999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.ViewManagement.ApplicationViewSwitcher
struct  ApplicationViewSwitcher_t551440999  : public Il2CppComObject
{
public:

public:
};

struct ApplicationViewSwitcher_t551440999_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2
	IApplicationViewSwitcherStatics2_t2853629559* ____iapplicationViewSwitcherStatics2_t2853629559;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewSwitcherStatics
	IApplicationViewSwitcherStatics_t2850352759* ____iapplicationViewSwitcherStatics_t2850352759;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3
	IApplicationViewSwitcherStatics3_t2853564023* ____iapplicationViewSwitcherStatics3_t2853564023;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.ViewManagement.ApplicationViewSwitcher"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationViewSwitcherStatics2_t2853629559* get_____iapplicationViewSwitcherStatics2_t2853629559()
	{
		IApplicationViewSwitcherStatics2_t2853629559* returnValue = ____iapplicationViewSwitcherStatics2_t2853629559;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewSwitcherStatics2_t2853629559::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewSwitcherStatics2_t2853629559>((&____iapplicationViewSwitcherStatics2_t2853629559), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewSwitcherStatics2_t2853629559;
			}
		}
		return returnValue;
	}

	inline IApplicationViewSwitcherStatics_t2850352759* get_____iapplicationViewSwitcherStatics_t2850352759()
	{
		IApplicationViewSwitcherStatics_t2850352759* returnValue = ____iapplicationViewSwitcherStatics_t2850352759;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewSwitcherStatics_t2850352759::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewSwitcherStatics_t2850352759>((&____iapplicationViewSwitcherStatics_t2850352759), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewSwitcherStatics_t2850352759;
			}
		}
		return returnValue;
	}

	inline IApplicationViewSwitcherStatics3_t2853564023* get_____iapplicationViewSwitcherStatics3_t2853564023()
	{
		IApplicationViewSwitcherStatics3_t2853564023* returnValue = ____iapplicationViewSwitcherStatics3_t2853564023;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewSwitcherStatics3_t2853564023::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewSwitcherStatics3_t2853564023>((&____iapplicationViewSwitcherStatics3_t2853564023), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewSwitcherStatics3_t2853564023;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONVIEWSWITCHER_T551440999_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef MEDIACATEGORY_T3177896276_H
#define MEDIACATEGORY_T3177896276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCategory
struct  MediaCategory_t3177896276 
{
public:
	// System.Int32 Windows.Media.Capture.MediaCategory::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaCategory_t3177896276, ___value___2)); }
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
#endif // MEDIACATEGORY_T3177896276_H
#ifndef STREAMINGCAPTUREMODE_T3911325220_H
#define STREAMINGCAPTUREMODE_T3911325220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.StreamingCaptureMode
struct  StreamingCaptureMode_t3911325220 
{
public:
	// System.Int32 Windows.Media.Capture.StreamingCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingCaptureMode_t3911325220, ___value___2)); }
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
#endif // STREAMINGCAPTUREMODE_T3911325220_H
// Windows.Networking.Sockets.IStreamSocketListener
struct NOVTABLE IStreamSocketListener_t2077125013 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped0_get_Control_m1239981682() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped1_get_Information_m1887021997() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_BindServiceNameAsync_m2190755841(Il2CppHString ___localServiceName0, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_U24__Stripped2_BindEndpointAsync_m3547995344() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_add_ConnectionReceived_m1407582327(ITypedEventHandler_2_t1082390075_ComCallableWrapper* ___eventHandler0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocketListener_remove_ConnectionReceived_m2467183375(EventRegistrationToken_t318890788  ___eventCookie0) = 0;
};
// Windows.Perception.IPerceptionTimestampHelperStatics
struct NOVTABLE IPerceptionTimestampHelperStatics_t2092781866 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m1803895948(DateTime_t1679451545  ___targetTime0, IPerceptionTimestamp_t393505964** comReturnValue) = 0;
};
#ifndef CREATIONCOLLISIONOPTION_T2003156443_H
#define CREATIONCOLLISIONOPTION_T2003156443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.CreationCollisionOption
struct  CreationCollisionOption_t2003156443 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t2003156443, ___value___2)); }
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
#endif // CREATIONCOLLISIONOPTION_T2003156443_H
#ifndef FILEACCESSMODE_T2616835387_H
#define FILEACCESSMODE_T2616835387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.FileAccessMode
struct  FileAccessMode_t2616835387 
{
public:
	// System.Int32 Windows.Storage.FileAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccessMode_t2616835387, ___value___2)); }
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
#endif // FILEACCESSMODE_T2616835387_H
#ifndef INPUTSTREAMOPTIONS_T2901738979_H
#define INPUTSTREAMOPTIONS_T2901738979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t2901738979 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t2901738979, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTREAMOPTIONS_T2901738979_H
// Windows.Devices.Haptics.ISimpleHapticsController
struct NOVTABLE ISimpleHapticsController_t3936202477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped0_get_Id_m3300049499() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_get_SupportedFeedback_m2326199324(IVectorView_1_t252326345** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped1_get_IsIntensitySupported_m991599193() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped2_get_IsPlayCountSupported_m3867764282() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped3_get_IsPlayDurationSupported_m3960541395() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped4_get_IsReplayPauseIntervalSupported_m1218069110() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_StopFeedback_m4220404142() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped5_SendHapticFeedback_m795740151() = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedback_m2591754103(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_SendHapticFeedbackForDuration_m1489257265(ISimpleHapticsControllerFeedback_t2199416581* ___feedback0, double ___intensity1, TimeSpan_t881159249  ___playDuration2) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsController_U24__Stripped6_SendHapticFeedbackForPlayCount_m3357521888() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings
struct NOVTABLE IMediaCaptureInitializationSettings_t2768046102 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped0_put_AudioDeviceId_m1633472098() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped1_get_AudioDeviceId_m2392299102() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped2_put_VideoDeviceId_m513406705() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped3_get_VideoDeviceId_m3504853479() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_put_StreamingCaptureMode_m2829014800(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped4_get_StreamingCaptureMode_m1012735562() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped5_put_PhotoCaptureSource_m1598014571() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings_U24__Stripped6_get_PhotoCaptureSource_m2562435705() = 0;
};
// Windows.Media.Capture.IMediaCaptureInitializationSettings2
struct NOVTABLE IMediaCaptureInitializationSettings2_t2764769302 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_put_MediaCategory_m817377790(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped0_get_MediaCategory_m65547614() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped1_put_AudioProcessing_m1983699196() = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureInitializationSettings2_U24__Stripped2_get_AudioProcessing_m2747368394() = 0;
};
#ifndef STREAMSOCKETLISTENER_T1754929646_H
#define STREAMSOCKETLISTENER_T1754929646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Sockets.StreamSocketListener
struct  StreamSocketListener_t1754929646  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener
	IStreamSocketListener_t2077125013* ____istreamSocketListener_t2077125013;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener2
	IStreamSocketListener2_t954540666* ____istreamSocketListener2_t954540666;
	// Cached pointer to Windows.Networking.Sockets.IStreamSocketListener3
	IStreamSocketListener3_t954540667* ____istreamSocketListener3_t954540667;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IStreamSocketListener_t2077125013* get_____istreamSocketListener_t2077125013()
	{
		IStreamSocketListener_t2077125013* returnValue = ____istreamSocketListener_t2077125013;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener_t2077125013::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener_t2077125013>((&____istreamSocketListener_t2077125013), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener_t2077125013;
			}
		}
		return returnValue;
	}

	inline IStreamSocketListener2_t954540666* get_____istreamSocketListener2_t954540666()
	{
		IStreamSocketListener2_t954540666* returnValue = ____istreamSocketListener2_t954540666;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener2_t954540666::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener2_t954540666>((&____istreamSocketListener2_t954540666), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener2_t954540666;
			}
		}
		return returnValue;
	}

	inline IStreamSocketListener3_t954540667* get_____istreamSocketListener3_t954540667()
	{
		IStreamSocketListener3_t954540667* returnValue = ____istreamSocketListener3_t954540667;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStreamSocketListener3_t954540667::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStreamSocketListener3_t954540667>((&____istreamSocketListener3_t954540667), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istreamSocketListener3_t954540667;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

struct StreamSocketListener_t1754929646_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Sockets.StreamSocketListener"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMSOCKETLISTENER_T1754929646_H
// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t455187485 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m1126212897() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m3676239059() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_OpenAsync_m1037381949(int32_t ___accessMode0, IAsyncOperation_1_t721183771** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenTransactedWriteAsync_m1588569100() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_CopyAsync_m1826427802() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m1826250819() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m1826495320() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAndReplaceAsync_m3545084853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_MoveAsync_m1671606626() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m1671462051() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m1671424532() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAndReplaceAsync_m870303739() = 0;
};
// Windows.Storage.IStorageFolder
struct NOVTABLE IStorageFolder_t2414910357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped0_CreateFileAsync_m3478046114() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_CreateFileAsync_m3292856642(Il2CppHString ___desiredName0, int32_t ___options1, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped1_CreateFolderAsync_m3554080672() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped2_CreateFolderAsync_m413574889() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_GetFileAsync_m859688798(Il2CppHString ___name0, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped3_GetFolderAsync_m377722965() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped4_GetItemAsync_m831988853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped5_GetFilesAsync_m2162686979() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped6_GetFoldersAsync_m139074646() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped7_GetItemsAsync_m4085621006() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1153220809(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
#ifndef SIMPLEHAPTICSCONTROLLER_T4220085256_H
#define SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsController
struct  SimpleHapticsController_t4220085256  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsController
	ISimpleHapticsController_t3936202477* ____isimpleHapticsController_t3936202477;

public:
	inline ISimpleHapticsController_t3936202477* get_____isimpleHapticsController_t3936202477()
	{
		ISimpleHapticsController_t3936202477* returnValue = ____isimpleHapticsController_t3936202477;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsController_t3936202477::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsController_t3936202477>((&____isimpleHapticsController_t3936202477), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsController_t3936202477;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLER_T4220085256_H
#ifndef MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#define MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.Capture.MediaCaptureInitializationSettings
struct  MediaCaptureInitializationSettings_t546830356  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings
	IMediaCaptureInitializationSettings_t2768046102* ____imediaCaptureInitializationSettings_t2768046102;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings2
	IMediaCaptureInitializationSettings2_t2764769302* ____imediaCaptureInitializationSettings2_t2764769302;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings3
	IMediaCaptureInitializationSettings3_t2764834838* ____imediaCaptureInitializationSettings3_t2764834838;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings4
	IMediaCaptureInitializationSettings4_t2764638230* ____imediaCaptureInitializationSettings4_t2764638230;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings5
	IMediaCaptureInitializationSettings5_t2764703766* ____imediaCaptureInitializationSettings5_t2764703766;
	// Cached pointer to Windows.Media.Capture.IMediaCaptureInitializationSettings6
	IMediaCaptureInitializationSettings6_t2764507158* ____imediaCaptureInitializationSettings6_t2764507158;

public:
	inline IMediaCaptureInitializationSettings_t2768046102* get_____imediaCaptureInitializationSettings_t2768046102()
	{
		IMediaCaptureInitializationSettings_t2768046102* returnValue = ____imediaCaptureInitializationSettings_t2768046102;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings_t2768046102::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings_t2768046102>((&____imediaCaptureInitializationSettings_t2768046102), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings_t2768046102;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings2_t2764769302* get_____imediaCaptureInitializationSettings2_t2764769302()
	{
		IMediaCaptureInitializationSettings2_t2764769302* returnValue = ____imediaCaptureInitializationSettings2_t2764769302;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings2_t2764769302::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings2_t2764769302>((&____imediaCaptureInitializationSettings2_t2764769302), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings2_t2764769302;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings3_t2764834838* get_____imediaCaptureInitializationSettings3_t2764834838()
	{
		IMediaCaptureInitializationSettings3_t2764834838* returnValue = ____imediaCaptureInitializationSettings3_t2764834838;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings3_t2764834838::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings3_t2764834838>((&____imediaCaptureInitializationSettings3_t2764834838), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings3_t2764834838;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings4_t2764638230* get_____imediaCaptureInitializationSettings4_t2764638230()
	{
		IMediaCaptureInitializationSettings4_t2764638230* returnValue = ____imediaCaptureInitializationSettings4_t2764638230;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings4_t2764638230::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings4_t2764638230>((&____imediaCaptureInitializationSettings4_t2764638230), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings4_t2764638230;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings5_t2764703766* get_____imediaCaptureInitializationSettings5_t2764703766()
	{
		IMediaCaptureInitializationSettings5_t2764703766* returnValue = ____imediaCaptureInitializationSettings5_t2764703766;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings5_t2764703766::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings5_t2764703766>((&____imediaCaptureInitializationSettings5_t2764703766), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings5_t2764703766;
			}
		}
		return returnValue;
	}

	inline IMediaCaptureInitializationSettings6_t2764507158* get_____imediaCaptureInitializationSettings6_t2764507158()
	{
		IMediaCaptureInitializationSettings6_t2764507158* returnValue = ____imediaCaptureInitializationSettings6_t2764507158;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IMediaCaptureInitializationSettings6_t2764507158::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IMediaCaptureInitializationSettings6_t2764507158>((&____imediaCaptureInitializationSettings6_t2764507158), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____imediaCaptureInitializationSettings6_t2764507158;
			}
		}
		return returnValue;
	}
};

struct MediaCaptureInitializationSettings_t546830356_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Media.Capture.MediaCaptureInitializationSettings"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIACAPTUREINITIALIZATIONSETTINGS_T546830356_H
#ifndef SPEECHSYNTHESISSTREAM_T2322339758_H
#define SPEECHSYNTHESISSTREAM_T2322339758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct  SpeechSynthesisStream_t2322339758  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
	ISpeechSynthesisStream_t764091608* ____ispeechSynthesisStream_t764091608;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamWithContentType
	IRandomAccessStreamWithContentType_t3296927652* ____irandomAccessStreamWithContentType_t3296927652;
	// Cached pointer to Windows.Storage.Streams.IContentTypeProvider
	IContentTypeProvider_t1806097440* ____icontentTypeProvider_t1806097440;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStream
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051;
	// Cached pointer to Windows.Storage.Streams.IOutputStream
	IOutputStream_t2042351338* ____ioutputStream_t2042351338;
	// Cached pointer to Windows.Storage.Streams.IInputStream
	IInputStream_t2821136229* ____iinputStream_t2821136229;
	// Cached pointer to Windows.Media.Core.ITimedMetadataTrackProvider
	ITimedMetadataTrackProvider_t1703961418* ____itimedMetadataTrackProvider_t1703961418;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesisStream_t764091608* get_____ispeechSynthesisStream_t764091608()
	{
		ISpeechSynthesisStream_t764091608* returnValue = ____ispeechSynthesisStream_t764091608;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesisStream_t764091608::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesisStream_t764091608>((&____ispeechSynthesisStream_t764091608), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesisStream_t764091608;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamWithContentType_t3296927652* get_____irandomAccessStreamWithContentType_t3296927652()
	{
		IRandomAccessStreamWithContentType_t3296927652* returnValue = ____irandomAccessStreamWithContentType_t3296927652;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamWithContentType_t3296927652::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamWithContentType_t3296927652>((&____irandomAccessStreamWithContentType_t3296927652), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamWithContentType_t3296927652;
			}
		}
		return returnValue;
	}

	inline IContentTypeProvider_t1806097440* get_____icontentTypeProvider_t1806097440()
	{
		IContentTypeProvider_t1806097440* returnValue = ____icontentTypeProvider_t1806097440;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IContentTypeProvider_t1806097440::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IContentTypeProvider_t1806097440>((&____icontentTypeProvider_t1806097440), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icontentTypeProvider_t1806097440;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStream_t2099996051* get_____irandomAccessStream_t2099996051()
	{
		IRandomAccessStream_t2099996051* returnValue = ____irandomAccessStream_t2099996051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStream_t2099996051>((&____irandomAccessStream_t2099996051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStream_t2099996051;
			}
		}
		return returnValue;
	}

	inline IOutputStream_t2042351338* get_____ioutputStream_t2042351338()
	{
		IOutputStream_t2042351338* returnValue = ____ioutputStream_t2042351338;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IOutputStream_t2042351338>((&____ioutputStream_t2042351338), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ioutputStream_t2042351338;
			}
		}
		return returnValue;
	}

	inline IInputStream_t2821136229* get_____iinputStream_t2821136229()
	{
		IInputStream_t2821136229* returnValue = ____iinputStream_t2821136229;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStream_t2821136229::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStream_t2821136229>((&____iinputStream_t2821136229), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStream_t2821136229;
			}
		}
		return returnValue;
	}

	inline ITimedMetadataTrackProvider_t1703961418* get_____itimedMetadataTrackProvider_t1703961418()
	{
		ITimedMetadataTrackProvider_t1703961418* returnValue = ____itimedMetadataTrackProvider_t1703961418;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ITimedMetadataTrackProvider_t1703961418::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ITimedMetadataTrackProvider_t1703961418>((&____itimedMetadataTrackProvider_t1703961418), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____itimedMetadataTrackProvider_t1703961418;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESISSTREAM_T2322339758_H
#ifndef STORAGEFILE_T1751804116_H
#define STORAGEFILE_T1751804116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFile
struct  StorageFile_t1751804116  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFile
	IStorageFile_t455187485* ____istorageFile_t455187485;
	// Cached pointer to Windows.Storage.Streams.IInputStreamReference
	IInputStreamReference_t980626503* ____iinputStreamReference_t980626503;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamReference
	IRandomAccessStreamReference_t2718546672* ____irandomAccessStreamReference_t2718546672;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFilePropertiesWithAvailability
	IStorageFilePropertiesWithAvailability_t1554344922* ____istorageFilePropertiesWithAvailability_t1554344922;
	// Cached pointer to Windows.Storage.IStorageFile2
	IStorageFile2_t81501002* ____istorageFile2_t81501002;

public:
	inline IStorageFile_t455187485* get_____istorageFile_t455187485()
	{
		IStorageFile_t455187485* returnValue = ____istorageFile_t455187485;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile_t455187485::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile_t455187485>((&____istorageFile_t455187485), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile_t455187485;
			}
		}
		return returnValue;
	}

	inline IInputStreamReference_t980626503* get_____iinputStreamReference_t980626503()
	{
		IInputStreamReference_t980626503* returnValue = ____iinputStreamReference_t980626503;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStreamReference_t980626503::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStreamReference_t980626503>((&____iinputStreamReference_t980626503), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStreamReference_t980626503;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamReference_t2718546672* get_____irandomAccessStreamReference_t2718546672()
	{
		IRandomAccessStreamReference_t2718546672* returnValue = ____irandomAccessStreamReference_t2718546672;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamReference_t2718546672::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamReference_t2718546672>((&____irandomAccessStreamReference_t2718546672), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamReference_t2718546672;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFilePropertiesWithAvailability_t1554344922* get_____istorageFilePropertiesWithAvailability_t1554344922()
	{
		IStorageFilePropertiesWithAvailability_t1554344922* returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFilePropertiesWithAvailability_t1554344922::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFilePropertiesWithAvailability_t1554344922>((&____istorageFilePropertiesWithAvailability_t1554344922), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
			}
		}
		return returnValue;
	}

	inline IStorageFile2_t81501002* get_____istorageFile2_t81501002()
	{
		IStorageFile2_t81501002* returnValue = ____istorageFile2_t81501002;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile2_t81501002::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile2_t81501002>((&____istorageFile2_t81501002), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile2_t81501002;
			}
		}
		return returnValue;
	}
};

struct StorageFile_t1751804116_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t4131808966* ____istorageFileStatics_t4131808966;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t4131808966* get_____istorageFileStatics_t4131808966()
	{
		IStorageFileStatics_t4131808966* returnValue = ____istorageFileStatics_t4131808966;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t4131808966::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFileStatics_t4131808966>((&____istorageFileStatics_t4131808966), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t4131808966;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFILE_T1751804116_H
#ifndef STORAGEFOLDER_T985480688_H
#define STORAGEFOLDER_T985480688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFolder
struct  StorageFolder_t985480688  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFolder
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.Search.IStorageFolderQueryOperations
	IStorageFolderQueryOperations_t91328000* ____istorageFolderQueryOperations_t91328000;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageFolder2
	IStorageFolder2_t3506658410* ____istorageFolder2_t3506658410;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFolder3
	IStorageFolder3_t1940574469* ____istorageFolder3_t1940574469;

public:
	inline IStorageFolder_t2414910357* get_____istorageFolder_t2414910357()
	{
		IStorageFolder_t2414910357* returnValue = ____istorageFolder_t2414910357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder_t2414910357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder_t2414910357>((&____istorageFolder_t2414910357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder_t2414910357;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageFolderQueryOperations_t91328000* get_____istorageFolderQueryOperations_t91328000()
	{
		IStorageFolderQueryOperations_t91328000* returnValue = ____istorageFolderQueryOperations_t91328000;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolderQueryOperations_t91328000::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderQueryOperations_t91328000>((&____istorageFolderQueryOperations_t91328000), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderQueryOperations_t91328000;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageFolder2_t3506658410* get_____istorageFolder2_t3506658410()
	{
		IStorageFolder2_t3506658410* returnValue = ____istorageFolder2_t3506658410;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder2_t3506658410::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder2_t3506658410>((&____istorageFolder2_t3506658410), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder2_t3506658410;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFolder3_t1940574469* get_____istorageFolder3_t1940574469()
	{
		IStorageFolder3_t1940574469* returnValue = ____istorageFolder3_t1940574469;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder3_t1940574469::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder3_t1940574469>((&____istorageFolder3_t1940574469), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder3_t1940574469;
			}
		}
		return returnValue;
	}
};

struct StorageFolder_t985480688_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t333412554* ____istorageFolderStatics_t333412554;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t333412554* get_____istorageFolderStatics_t333412554()
	{
		IStorageFolderStatics_t333412554* returnValue = ____istorageFolderStatics_t333412554;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t333412554::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderStatics_t333412554>((&____istorageFolderStatics_t333412554), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t333412554;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFOLDER_T985480688_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5100 = { 0, sizeof(IApplicationView_t1025170592*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5101 = { 0, sizeof(IApplicationView2_t2714993344*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5102 = { 0, sizeof(IApplicationView3_t1148909403*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5103 = { 0, sizeof(IApplicationViewFullscreenStatics_t2572392975*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5104 = { 0, sizeof(IApplicationView4_t1552193930*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5105 = { sizeof (ApplicationViewSwitcher_t551440999), -1, sizeof(ApplicationViewSwitcher_t551440999_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5106 = { 0, sizeof(IRandomAccessStreamReference_t2718546672*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5107 = { sizeof (StorageFolder_t985480688), -1, sizeof(StorageFolder_t985480688_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5108 = { sizeof (CreationCollisionOption_t2003156443)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5108[5] = 
{
	CreationCollisionOption_t2003156443::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5109 = { sizeof (StorageFile_t1751804116), -1, sizeof(StorageFile_t1751804116_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5110 = { sizeof (FileAccessMode_t2616835387)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5110[3] = 
{
	FileAccessMode_t2616835387::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5111 = { 0, sizeof(IStorageItem_t3194585767*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5112 = { 0, sizeof(IStorageFileStatics_t4131808966*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5113 = { 0, sizeof(IStorageFolder_t2414910357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5114 = { 0, sizeof(IInputStreamReference_t980626503*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5115 = { 0, sizeof(IStorageFile_t455187485*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5116 = { 0, sizeof(IStorageFolderStatics_t333412554*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5117 = { 0, sizeof(IStorageItem2_t2827190580*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5118 = { 0, sizeof(IStorageItemProperties_t2031733036*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5119 = { 0, sizeof(IStorageItemProperties2_t3993257882*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5120 = { 0, sizeof(IStorageItemPropertiesWithProvider_t3527078644*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5121 = { 0, sizeof(IStorageFilePropertiesWithAvailability_t1554344922*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5122 = { 0, sizeof(IStorageFolderQueryOperations_t91328000*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5123 = { 0, sizeof(IStorageFolder2_t3506658410*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5124 = { 0, sizeof(IStorageFolder3_t1940574469*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5125 = { 0, sizeof(IStorageFile2_t81501002*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5126 = { 0, sizeof(IUriRuntimeClass_t921050115*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5127 = { sizeof (WwwFormUrlDecoder_t4136411681), -1, sizeof(WwwFormUrlDecoder_t4136411681_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5128 = { sizeof (Uri_t952691556), -1, sizeof(Uri_t952691556_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5129 = { 0, sizeof(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5130 = { 0, sizeof(IUriEscapeStatics_t1418340874*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5131 = { 0, sizeof(IUriRuntimeClassFactory_t1786313621*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5132 = { 0, sizeof(IWwwFormUrlDecoderEntry_t2943299970*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5133 = { 0, sizeof(IWwwFormUrlDecoderRuntimeClass_t497020701*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5134 = { 0, sizeof(IWwwFormUrlDecoderRuntimeClassFactory_t1825479388*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5135 = { sizeof (CoreApplication_t2329903567), -1, sizeof(CoreApplication_t2329903567_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5136 = { sizeof (CoreApplicationView_t1335682569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5137 = { 0, sizeof(ICoreApplication_t1778460144*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5138 = { 0, sizeof(ICoreApplicationUseCount_t1878483554*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5139 = { 0, sizeof(ICoreApplicationExit_t3461573293*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5140 = { 0, sizeof(ICoreApplication2_t709209101*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5141 = { 0, sizeof(ICoreApplication3_t2275293042*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5142 = { 0, sizeof(ICoreImmersiveApplication_t3816774728*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5143 = { 0, sizeof(ICoreImmersiveApplication2_t4020591688*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5144 = { 0, sizeof(ICoreImmersiveApplication3_t1681939528*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5145 = { 0, sizeof(ICoreApplicationUnhandledError_t3134926704*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5146 = { 0, sizeof(ICoreApplicationView_t3448274634*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5147 = { 0, sizeof(ICoreApplicationView2_t87912591*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5148 = { 0, sizeof(ICoreApplicationView3_t2816795946*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5149 = { 0, sizeof(ICoreApplicationView5_t3623365000*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5150 = { 0, sizeof(ICoreApplicationView6_t2057281059*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5151 = { 0, sizeof(ISimpleHapticsControllerFeedback_t2199416581*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5152 = { 0, sizeof(ISimpleHapticsController_t3936202477*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5153 = { sizeof (SimpleHapticsControllerFeedback_t913461083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5154 = { sizeof (SimpleHapticsController_t4220085256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5155 = { sizeof (MediaCategory_t3177896276)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5155[6] = 
{
	MediaCategory_t3177896276::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5156 = { sizeof (StreamingCaptureMode_t3911325220)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5156[4] = 
{
	StreamingCaptureMode_t3911325220::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5157 = { sizeof (MediaCapture_t1516581975), -1, sizeof(MediaCapture_t1516581975_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5158 = { 0, sizeof(IMediaCaptureInitializationSettings_t2768046102*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5159 = { 0, sizeof(IMediaCaptureInitializationSettings2_t2764769302*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5160 = { 0, sizeof(IMediaCaptureInitializationSettings3_t2764834838*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5161 = { 0, sizeof(IMediaCaptureInitializationSettings4_t2764638230*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5162 = { 0, sizeof(IMediaCaptureInitializationSettings5_t2764703766*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5163 = { 0, sizeof(IMediaCaptureInitializationSettings6_t2764507158*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5164 = { sizeof (MediaCaptureInitializationSettings_t546830356), -1, sizeof(MediaCaptureInitializationSettings_t546830356_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5165 = { 0, sizeof(IMediaCaptureStatics_t830978977*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5166 = { 0, sizeof(IMediaCapture_t2687710539*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5167 = { 0, sizeof(IMediaCapture2_t2891527499*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5168 = { 0, sizeof(IMediaCapture3_t552875339*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5169 = { 0, sizeof(IMediaCapture4_t2509190475*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5170 = { 0, sizeof(IMediaCapture5_t170538315*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5171 = { 0, sizeof(IMediaCapture6_t2126853451*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5172 = { 0, sizeof(IMediaCaptureVideoPreview_t535963051*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5173 = { sizeof (VoiceInformation_t4266404632), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5174 = { 0, sizeof(IVoiceInformation_t3111056019*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5175 = { 0, sizeof(IInstalledVoicesStatic_t870565809*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5176 = { 0, sizeof(IInstalledVoicesStatic2_t946760305*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5177 = { 0, sizeof(ISpeechSynthesisStream_t764091608*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5178 = { sizeof (SpeechSynthesisStream_t2322339758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5179 = { 0, sizeof(ISpeechSynthesizer_t2734223870*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5180 = { 0, sizeof(ISpeechSynthesizer2_t1865799545*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5181 = { sizeof (SpeechSynthesizer_t2130945875), -1, sizeof(SpeechSynthesizer_t2130945875_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5182 = { 0, sizeof(IMediaDeviceController_t1179508027*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5183 = { 0, sizeof(IAudioDeviceController_t3742505345*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5184 = { sizeof (AudioDeviceController_t936102736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5185 = { 0, sizeof(ITimedMetadataTrackProvider_t1703961418*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5186 = { sizeof (StreamSocket_t121918173), -1, sizeof(StreamSocket_t121918173_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5187 = { sizeof (StreamSocketListener_t1754929646), -1, sizeof(StreamSocketListener_t1754929646_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5188 = { 0, sizeof(IStreamSocket_t3338378904*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5189 = { 0, sizeof(IStreamSocket2_t2507586357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5190 = { 0, sizeof(IStreamSocket3_t2507586356*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5191 = { 0, sizeof(IStreamSocketStatics_t566903188*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5192 = { 0, sizeof(IStreamSocketListenerConnectionReceivedEventArgs_t3129023480*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5193 = { 0, sizeof(IStreamSocketListener_t2077125013*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5194 = { sizeof (StreamSocketListenerConnectionReceivedEventArgs_t3298683243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5195 = { 0, sizeof(IStreamSocketListener2_t954540666*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5196 = { 0, sizeof(IStreamSocketListener3_t954540667*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5197 = { 0, sizeof(IPerceptionTimestamp_t393505964*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5198 = { sizeof (PerceptionTimestamp_t25754965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5199 = { 0, sizeof(IPerceptionTimestampHelperStatics_t2092781866*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
