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
// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t9239872;
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
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
struct IInstalledVoicesStatic_t870565809;
// Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
struct IInstalledVoicesStatic2_t946760305;
// Windows.Networking.Sockets.IStreamSocketStatics
struct IStreamSocketStatics_t566903188;
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
// Windows.UI.Xaml.IDependencyObjectFactory
struct IDependencyObjectFactory_t1390337327;
// Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
struct INotifyCollectionChangedEventArgsFactory_t1817199772;

struct IApplicationData_t28886227;
struct IAsyncAction_t3072713919;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1918115372;
struct IAsyncOperation_1_t3013442981;
struct IAsyncOperation_1_t943527478;
struct IAudioDeviceController_t3742505345;
struct IBindableIterator_t667386168;
struct IBindableVectorView_t4191940899;
struct IBindableVector_t1801110279;
struct IBuffer_t541192229;
struct IDispatchedHandler_t626468369_ComCallableWrapper;
struct IFrame_t1733009749;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IMediaCaptureInitializationSettings_t2768046102;
struct INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper;
struct IOutputStream_t2042351338;
struct IPerceptionTimestamp_t393505964;
struct ISimpleHapticsController_t3936202477;
struct ISpatialInteractionController_t138196805;
struct ISpatialInteractionManager_t354061063;
struct ISpatialInteractionSource_t2185314266;
struct IStorageFolder_t2414910357;
struct ITypedEventHandler_2_t986724726_ComCallableWrapper;
struct IVectorView_1_t3605269894;
struct IVectorView_1_t554553325;
struct IVoiceInformation_t3111056019;



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
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t326290202 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m649191502() = 0;
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
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped2_get_InputStream_m1126950040() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_get_OutputStream_m2118890306(IOutputStream_t2042351338** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped3_ConnectAsync_m3193160057() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_ConnectAsync_m1123568840(IHostName_t3179521082* ___remoteHostName0, Il2CppHString ___remoteServiceName1, IAsyncAction_t3072713919** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped4_ConnectAsync_m3193193880() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped5_ConnectAsync_m3193100983() = 0;
	virtual il2cpp_hresult_t STDCALL IStreamSocket_U24__Stripped6_UpgradeToSslAsync_m1682793150() = 0;
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
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
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
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3296927652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
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
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic2
	IInstalledVoicesStatic2_t946760305* ____iinstalledVoicesStatic2_t946760305;
	// Cached pointer to Windows.Media.SpeechSynthesis.IInstalledVoicesStatic
	IInstalledVoicesStatic_t870565809* ____iinstalledVoicesStatic_t870565809;

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
// Windows.Perception.IPerceptionTimestampHelperStatics
struct NOVTABLE IPerceptionTimestampHelperStatics_t2092781866 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPerceptionTimestampHelperStatics_FromHistoricalTargetTime_m1803895948(DateTime_t1679451545  ___targetTime0, IPerceptionTimestamp_t393505964** comReturnValue) = 0;
};
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
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1153220809(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5100 = { 0, sizeof(IMediaCaptureInitializationSettings2_t2764769302*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5101 = { 0, sizeof(IMediaCaptureInitializationSettings3_t2764834838*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5102 = { 0, sizeof(IMediaCaptureInitializationSettings4_t2764638230*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5103 = { 0, sizeof(IMediaCaptureInitializationSettings5_t2764703766*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5104 = { 0, sizeof(IMediaCaptureInitializationSettings6_t2764507158*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5105 = { sizeof (MediaCaptureInitializationSettings_t546830356), -1, sizeof(MediaCaptureInitializationSettings_t546830356_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5106 = { 0, sizeof(IMediaCaptureStatics_t830978977*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5107 = { 0, sizeof(IMediaCapture_t2687710539*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5108 = { 0, sizeof(IMediaCapture2_t2891527499*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5109 = { 0, sizeof(IMediaCapture3_t552875339*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5110 = { 0, sizeof(IMediaCapture4_t2509190475*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5111 = { 0, sizeof(IMediaCapture5_t170538315*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5112 = { 0, sizeof(IMediaCapture6_t2126853451*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5113 = { 0, sizeof(IMediaCaptureVideoPreview_t535963051*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5114 = { sizeof (VoiceInformation_t4266404632), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5115 = { 0, sizeof(IVoiceInformation_t3111056019*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5116 = { 0, sizeof(IInstalledVoicesStatic_t870565809*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5117 = { 0, sizeof(IInstalledVoicesStatic2_t946760305*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5118 = { 0, sizeof(ISpeechSynthesisStream_t764091608*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5119 = { sizeof (SpeechSynthesisStream_t2322339758), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5120 = { 0, sizeof(ISpeechSynthesizer_t2734223870*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5121 = { 0, sizeof(ISpeechSynthesizer2_t1865799545*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5122 = { sizeof (SpeechSynthesizer_t2130945875), -1, sizeof(SpeechSynthesizer_t2130945875_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5123 = { 0, sizeof(IMediaDeviceController_t1179508027*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5124 = { 0, sizeof(IAudioDeviceController_t3742505345*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5125 = { sizeof (AudioDeviceController_t936102736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5126 = { 0, sizeof(ITimedMetadataTrackProvider_t1703961418*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5127 = { sizeof (StreamSocket_t121918173), -1, sizeof(StreamSocket_t121918173_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5128 = { 0, sizeof(IStreamSocket_t3338378904*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5129 = { 0, sizeof(IStreamSocket2_t2507586357*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5130 = { 0, sizeof(IStreamSocket3_t2507586356*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5131 = { 0, sizeof(IStreamSocketStatics_t566903188*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5132 = { 0, sizeof(IPerceptionTimestamp_t393505964*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5133 = { sizeof (PerceptionTimestamp_t25754965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5134 = { 0, sizeof(IPerceptionTimestampHelperStatics_t2092781866*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5135 = { sizeof (PerceptionTimestampHelper_t1405177115), -1, sizeof(PerceptionTimestampHelper_t1405177115_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5136 = { 0, sizeof(IApplicationDataStatics_t3792839446*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5137 = { sizeof (ApplicationData_t3489691988), -1, sizeof(ApplicationData_t3489691988_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5138 = { 0, sizeof(IApplicationDataStatics2_t2938905366*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5139 = { 0, sizeof(IApplicationData_t28886227*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5140 = { 0, sizeof(IApplicationData2_t163893929*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5141 = { 0, sizeof(IApplicationData3_t163893930*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5142 = { sizeof (CoreDispatcherPriority_t3632043752)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5142[5] = 
{
	CoreDispatcherPriority_t3632043752::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5143 = { 0, sizeof(ICoreWindowEventArgs_t151143671*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5144 = { 0, sizeof(IVisibilityChangedEventArgs_t497166311*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5145 = { 0, sizeof(ICoreWindow_t287790597*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5146 = { sizeof (CoreDispatcher_t2479646415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5147 = { sizeof (CoreWindow_t2947181662), -1, sizeof(CoreWindow_t2947181662_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5148 = { sizeof (VisibilityChangedEventArgs_t3731408598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5149 = { 0, sizeof(ICoreWindow2_t491607557*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5150 = { 0, sizeof(ICoreWindow3_t2830259717*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5151 = { 0, sizeof(ICoreWindow4_t109270533*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5152 = { 0, sizeof(ICoreWindow5_t2447922693*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5153 = { 0, sizeof(ICoreWindowStatic_t1678315526*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5154 = { sizeof (DispatchedHandler_t626468369), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5155 = { 0, sizeof(ICoreAcceleratorKeys_t931412490*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5156 = { 0, sizeof(ICoreDispatcher_t3246199926*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5157 = { 0, sizeof(ICoreDispatcher2_t2392265846*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5158 = { 0, sizeof(ICoreDispatcherWithTaskPriority_t1942681059*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5159 = { 0, sizeof(ICorePointerRedirector_t64917422*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5160 = { 0, sizeof(ISpatialInteractionSource_t2185314266*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5161 = { 0, sizeof(ISpatialInteractionSource2_t2453383580*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5162 = { sizeof (SpatialInteractionController_t3760917144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5163 = { sizeof (SpatialInteractionSourceState_t1215688063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5164 = { 0, sizeof(ISpatialInteractionSource3_t887299639*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5165 = { 0, sizeof(ISpatialInteractionController_t138196805*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5166 = { 0, sizeof(ISpatialInteractionController2_t3418596785*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5167 = { 0, sizeof(ISpatialInteractionController3_t689713430*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5168 = { sizeof (SpatialInteractionSource_t1043222996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5169 = { 0, sizeof(ISpatialInteractionSourceState_t1358829803*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5170 = { 0, sizeof(ISpatialInteractionSourceState2_t2977437931*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5171 = { 0, sizeof(ISpatialInteractionManager_t354061063*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5172 = { sizeof (SpatialInteractionManager_t208992783), -1, sizeof(SpatialInteractionManager_t208992783_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5173 = { 0, sizeof(ISpatialInteractionManagerStatics_t2291651573*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5174 = { sizeof (NotifyCollectionChangedAction_t378659768)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5174[6] = 
{
	NotifyCollectionChangedAction_t378659768::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5175 = { 0, sizeof(IBindableIterable_t2147255965*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5176 = { 0, sizeof(IBindableVector_t1801110279*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5177 = { 0, sizeof(IBindableVectorView_t4191940899*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5178 = { 0, sizeof(IBindableIterator_t667386168*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5179 = { sizeof (NotifyCollectionChangedEventHandler_t3129157931), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5180 = { sizeof (NotifyCollectionChangedEventArgs_t495045256), -1, sizeof(NotifyCollectionChangedEventArgs_t495045256_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5181 = { 0, sizeof(INavigate_t38993641*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5182 = { 0, sizeof(IContentControl_t2016467381*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5183 = { 0, sizeof(IContentControlOverrides_t1476785288*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5184 = { 0, sizeof(IContentControlStatics_t179784444*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5185 = { 0, sizeof(IContentControlFactory_t368508199*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5186 = { 0, sizeof(IContentControl2_t877166318*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5187 = { 0, sizeof(INotifyCollectionChanged_t3244377239*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5188 = { 0, sizeof(INotifyCollectionChangedEventArgs_t951239883*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5189 = { 0, sizeof(INotifyCollectionChangedEventArgsFactory_t1817199772*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5190 = { 0, sizeof(IFrame_t1733009749*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5191 = { 0, sizeof(IFrameStatics_t1678072084*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5192 = { 0, sizeof(IFrameFactory_t1251236688*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5193 = { 0, sizeof(IFrame2_t1936826709*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5194 = { 0, sizeof(IFrameStatics2_t3481383410*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5195 = { 0, sizeof(IFrame3_t4275478869*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5196 = { 0, sizeof(IFrame4_t3083837781*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5197 = { sizeof (TypeKind_t2273581760)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5197[4] = 
{
	TypeKind_t2273581760::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5198 = { sizeof (TypeName_t4208425108)+ sizeof (RuntimeObject), sizeof(TypeName_t4208425108_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable5198[2] = 
{
	TypeName_t4208425108::get_offset_of_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TypeName_t4208425108::get_offset_of_Kind_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5199 = { sizeof (DependencyObject_t3266284141), -1, sizeof(DependencyObject_t3266284141_StaticFields), 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
