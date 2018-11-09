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
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// Windows.Foundation.IAsyncAction
struct IAsyncAction_t3072713919;
// Windows.Foundation.Metadata.IApiInformationStatics
struct IApiInformationStatics_t1368946868;
// Windows.Networking.Connectivity.INetworkInformationStatics
struct INetworkInformationStatics_t1568055678;
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct INetworkInformationStatics2_t442609477;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t2985905689;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t664333692;
// Windows.Storage.Streams.IDataReaderFactory
struct IDataReaderFactory_t2217455388;
// Windows.Storage.Streams.IDataReaderStatics
struct IDataReaderStatics_t1343138968;
// Windows.Storage.Streams.IDataWriterFactory
struct IDataWriterFactory_t624500286;
// Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
struct IApplicationViewFullscreenStatics_t2572392975;
// Windows.UI.ViewManagement.IApplicationViewInteropStatics
struct IApplicationViewInteropStatics_t945853279;
// Windows.UI.ViewManagement.IApplicationViewStatics
struct IApplicationViewStatics_t254704670;
// Windows.UI.ViewManagement.IApplicationViewStatics2
struct IApplicationViewStatics2_t253525022;
// Windows.UI.ViewManagement.IApplicationViewStatics3
struct IApplicationViewStatics3_t253459486;

struct DateTime_t1679451545 ;
struct Guid_t ;
struct IApplicationView_t1025170592;
struct IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper;
struct IAsyncAction_t3072713919;
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t1622574100;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t1181249698;
struct IAsyncOperation_1_t3013442981;
struct IBuffer_t541192229;
struct IDataReader_t3392321383;
struct IDataWriter_t1260434628;
struct IHostName_t3179521082;
struct IInputStream_t2821136229;
struct IOutputStream_t2042351338;
struct IVectorView_1_t2228900081;
struct Point_t4164953539 ;
struct Rect_t2695113487 ;
struct Size_t550917638 ;
struct TimeSpan_t881159249 ;



#ifndef U3CMODULEU3E_T692745585_H
#define U3CMODULEU3E_T692745585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745585 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745585_H
#ifndef U3CMODULEU3E_T692745586_H
#define U3CMODULEU3E_T692745586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745586 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745586_H
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
// Windows.Foundation.IAsyncAction
struct NOVTABLE IAsyncAction_t3072713919 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_put_Completed_m1173868328(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_get_Completed_m1835005524(IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncAction_GetResults_m1540137877() = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_t1181249698 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1437779878(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2736054029(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2010780058(uint32_t* comReturnValue) = 0;
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
// Windows.Foundation.Metadata.IApiInformationStatics
struct NOVTABLE IApiInformationStatics_t1368946868 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped0_IsTypePresent_m2300622423() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped1_IsMethodPresent_m93280429() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped2_IsMethodPresent_m1995582324() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped3_IsEventPresent_m3065413644() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped4_IsPropertyPresent_m1181033700() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped5_IsReadOnlyPropertyPresent_m2334894360() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped6_IsWriteablePropertyPresent_m2319983192() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped7_IsEnumNamedValuePresent_m2322865717() = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_IsApiContractPresent_m681551510(Il2CppHString ___contractName0, uint16_t ___majorVersion1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApiInformationStatics_U24__Stripped8_IsApiContractPresent_m284209059() = 0;
};
// Windows.Networking.Connectivity.INetworkInformationStatics
struct NOVTABLE INetworkInformationStatics_t1568055678 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped0_GetConnectionProfiles_m2758217575() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped1_GetInternetConnectionProfile_m2864415643() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped2_GetLanIdentifiers_m3418372237() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_GetHostNames_m3950255330(IVectorView_1_t2228900081** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped3_GetProxyConfigurationAsync_m4095711725() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped4_GetSortedEndpointPairs_m4007171019() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped5_add_NetworkStatusChanged_m1100623864() = 0;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics_U24__Stripped6_remove_NetworkStatusChanged_m1031248726() = 0;
};
// Windows.Networking.Connectivity.INetworkInformationStatics2
struct NOVTABLE INetworkInformationStatics2_t442609477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL INetworkInformationStatics2_U24__Stripped0_FindConnectionProfilesAsync_m80412135() = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t2985905689 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m4168667700(Il2CppHString ___hostName0, IHostName_t3179521082** comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_t664333692 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m3120053299() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t541192229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m406059298(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m2796848087(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m1827843137(uint32_t ___value0) = 0;
};
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
};
// Windows.Storage.Streams.IDataReader
struct NOVTABLE IDataReader_t3392321383 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped0_get_UnconsumedBufferLength_m16229785() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped1_get_UnicodeEncoding_m2494153260() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped2_put_UnicodeEncoding_m418317483() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped3_get_ByteOrder_m2032789439() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped4_put_ByteOrder_m671273445() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped5_get_InputStreamOptions_m1340555748() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped6_put_InputStreamOptions_m4180354519() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped7_ReadByte_m4257467755() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_ReadBytes_m3117293785(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped8_ReadBuffer_m1072057890() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped9_ReadBoolean_m3250790026() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped10_ReadGuid_m2368726480() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped11_ReadInt16_m2758551764() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_ReadInt32_m961857721(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped12_ReadInt64_m3927659623() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped13_ReadUInt16_m4143494020() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped14_ReadUInt32_m2215972141() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped15_ReadUInt64_m2603716585() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped16_ReadSingle_m1085044512() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped17_ReadDouble_m1657770505() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped18_ReadString_m2482390996() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped19_ReadDateTime_m3777412375() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped20_ReadTimeSpan_m1355012196() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_LoadAsync_m90647872(uint32_t ___count0, IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped21_DetachBuffer_m2943817099() = 0;
	virtual il2cpp_hresult_t STDCALL IDataReader_U24__Stripped22_DetachStream_m3061459159() = 0;
};
// Windows.Storage.Streams.IDataReaderFactory
struct NOVTABLE IDataReaderFactory_t2217455388 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderFactory_CreateDataReader_m3942767827(IInputStream_t2821136229* ___inputStream0, IDataReader_t3392321383** comReturnValue) = 0;
};
// Windows.Storage.Streams.IDataReaderStatics
struct NOVTABLE IDataReaderStatics_t1343138968 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataReaderStatics_U24__Stripped0_FromBuffer_m362330522() = 0;
};
// Windows.Storage.Streams.IDataWriter
struct NOVTABLE IDataWriter_t1260434628 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped0_get_UnstoredBufferLength_m4047016447() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped1_get_UnicodeEncoding_m1051599545() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped2_put_UnicodeEncoding_m860257975() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped3_get_ByteOrder_m3417022626() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped4_put_ByteOrder_m2232773923() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped5_WriteByte_m1325520711() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteBytes_m1463346676(uint32_t ___value0ArraySize, uint8_t* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped6_WriteBuffer_m3625982827() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped7_WriteBuffer_m1947313872() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped8_WriteBoolean_m4206148776() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped9_WriteGuid_m2424249642() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped10_WriteInt16_m1218706367() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_WriteInt32_m3302687114(int32_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped11_WriteInt64_m76875145() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped12_WriteUInt16_m3417848222() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped13_WriteUInt32_m3149825281() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped14_WriteUInt64_m3824854378() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped15_WriteSingle_m4290768671() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped16_WriteDouble_m2734993046() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped17_WriteDateTime_m2945296003() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped18_WriteTimeSpan_m4140056822() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped19_WriteString_m605557536() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped20_MeasureString_m2837992914() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_StoreAsync_m1501074270(IAsyncOperation_1_t1181249698** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_FlushAsync_m2274314570(IAsyncOperation_1_t3013442981** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped21_DetachBuffer_m1116280139() = 0;
	virtual il2cpp_hresult_t STDCALL IDataWriter_U24__Stripped22_DetachStream_m502536555() = 0;
};
// Windows.Storage.Streams.IDataWriterFactory
struct NOVTABLE IDataWriterFactory_t624500286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDataWriterFactory_CreateDataWriter_m3380054010(IOutputStream_t2042351338* ___outputStream0, IDataWriter_t1260434628** comReturnValue) = 0;
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
// Windows.UI.ViewManagement.IApplicationViewInteropStatics
struct NOVTABLE IApplicationViewInteropStatics_t945853279 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewInteropStatics_U24__Stripped0_GetApplicationViewIdForWindow_m808195773() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewStatics
struct NOVTABLE IApplicationViewStatics_t254704670 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics_U24__Stripped0_get_Value_m2177191036() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics_U24__Stripped1_TryUnsnap_m3176766015() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewStatics2
struct NOVTABLE IApplicationViewStatics2_t253525022 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics2_GetForCurrentView_m110374255(IApplicationView_t1025170592** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics2_U24__Stripped0_get_TerminateAppOnFinalViewClose_m4294585108() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics2_U24__Stripped1_put_TerminateAppOnFinalViewClose_m211892866() = 0;
};
// Windows.UI.ViewManagement.IApplicationViewStatics3
struct NOVTABLE IApplicationViewStatics3_t253459486 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped0_get_PreferredLaunchWindowingMode_m3720918806() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped1_put_PreferredLaunchWindowingMode_m378258116() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped2_get_PreferredLaunchViewSize_m4149141959() = 0;
	virtual il2cpp_hresult_t STDCALL IApplicationViewStatics3_U24__Stripped3_put_PreferredLaunchViewSize_m2184768989() = 0;
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
#ifndef __STATICARRAYINITTYPESIZEU3D24_T3517759982_H
#define __STATICARRAYINITTYPESIZEU3D24_T3517759982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t3517759982 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3517759982__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D24_T3517759982_H
#ifndef __STATICARRAYINITTYPESIZEU3D28_T1904621873_H
#define __STATICARRAYINITTYPESIZEU3D28_T1904621873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct  __StaticArrayInitTypeSizeU3D28_t1904621873 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t1904621873__padding[28];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D28_T1904621873_H
#ifndef __STATICARRAYINITTYPESIZEU3D40_T1547998297_H
#define __STATICARRAYINITTYPESIZEU3D40_T1547998297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct  __StaticArrayInitTypeSizeU3D40_t1547998297 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1547998297__padding[40];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D40_T1547998297_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366766_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366766 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366766__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366766_H
#ifndef __STATICARRAYINITTYPESIZEU3D52_T2710732174_H
#define __STATICARRAYINITTYPESIZEU3D52_T2710732174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct  __StaticArrayInitTypeSizeU3D52_t2710732174 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t2710732174__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D52_T2710732174_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef EVENTREGISTRATIONTOKEN_T3152277946_H
#define EVENTREGISTRATIONTOKEN_T3152277946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.EventRegistrationToken
struct  EventRegistrationToken_t3152277946 
{
public:
	// System.Int64 Windows.Foundation.EventRegistrationToken::Value
	int64_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t3152277946, ___Value_0)); }
	inline int64_t get_Value_0() const { return ___Value_0; }
	inline int64_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int64_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T3152277946_H
#ifndef FOUNDATIONCONTRACT_T3651383009_H
#define FOUNDATIONCONTRACT_T3651383009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.FoundationContract
struct  FoundationContract_t3651383009 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOUNDATIONCONTRACT_T3651383009_H
#ifndef HRESULT_T3073183193_H
#define HRESULT_T3073183193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.HResult
struct  HResult_t3073183193 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_t3073183193, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HRESULT_T3073183193_H
#ifndef ACTIVATABLEATTRIBUTE_T4098936231_H
#define ACTIVATABLEATTRIBUTE_T4098936231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ActivatableAttribute
struct  ActivatableAttribute_t4098936231  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATABLEATTRIBUTE_T4098936231_H
#ifndef ALLOWMULTIPLEATTRIBUTE_T3314144467_H
#define ALLOWMULTIPLEATTRIBUTE_T3314144467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AllowMultipleAttribute
struct  AllowMultipleAttribute_t3314144467  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWMULTIPLEATTRIBUTE_T3314144467_H
#ifndef APICONTRACTATTRIBUTE_T3160257459_H
#define APICONTRACTATTRIBUTE_T3160257459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ApiContractAttribute
struct  ApiContractAttribute_t3160257459  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APICONTRACTATTRIBUTE_T3160257459_H
#ifndef APIINFORMATION_T812843232_H
#define APIINFORMATION_T812843232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ApiInformation
struct  ApiInformation_t812843232  : public Il2CppComObject
{
public:

public:
};

struct ApiInformation_t812843232_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.Metadata.IApiInformationStatics
	IApiInformationStatics_t1368946868* ____iapiInformationStatics_t1368946868;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Metadata.ApiInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApiInformationStatics_t1368946868* get_____iapiInformationStatics_t1368946868()
	{
		IApiInformationStatics_t1368946868* returnValue = ____iapiInformationStatics_t1368946868;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApiInformationStatics_t1368946868::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApiInformationStatics_t1368946868>((&____iapiInformationStatics_t1368946868), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapiInformationStatics_t1368946868;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APIINFORMATION_T812843232_H
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T1422441135_H
#define ATTRIBUTEUSAGEATTRIBUTE_T1422441135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeUsageAttribute
struct  AttributeUsageAttribute_t1422441135  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T1422441135_H
#ifndef COMPOSABLEATTRIBUTE_T2299833422_H
#define COMPOSABLEATTRIBUTE_T2299833422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ComposableAttribute
struct  ComposableAttribute_t2299833422  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSABLEATTRIBUTE_T2299833422_H
#ifndef CONTRACTVERSIONATTRIBUTE_T1666784187_H
#define CONTRACTVERSIONATTRIBUTE_T1666784187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ContractVersionAttribute
struct  ContractVersionAttribute_t1666784187  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTRACTVERSIONATTRIBUTE_T1666784187_H
#ifndef DEFAULTATTRIBUTE_T1509828399_H
#define DEFAULTATTRIBUTE_T1509828399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DefaultAttribute
struct  DefaultAttribute_t1509828399  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTATTRIBUTE_T1509828399_H
#ifndef DEFAULTOVERLOADATTRIBUTE_T2513707992_H
#define DEFAULTOVERLOADATTRIBUTE_T2513707992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DefaultOverloadAttribute
struct  DefaultOverloadAttribute_t2513707992  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTOVERLOADATTRIBUTE_T2513707992_H
#ifndef DEPRECATEDATTRIBUTE_T3646164936_H
#define DEPRECATEDATTRIBUTE_T3646164936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DeprecatedAttribute
struct  DeprecatedAttribute_t3646164936  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPRECATEDATTRIBUTE_T3646164936_H
#ifndef DUALAPIPARTITIONATTRIBUTE_T1301304994_H
#define DUALAPIPARTITIONATTRIBUTE_T1301304994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DualApiPartitionAttribute
struct  DualApiPartitionAttribute_t1301304994  : public Attribute_t861562559
{
public:
	// System.UInt32 Windows.Foundation.Metadata.DualApiPartitionAttribute::version
	uint32_t ___version_0;

public:
	inline static int32_t get_offset_of_version_0() { return static_cast<int32_t>(offsetof(DualApiPartitionAttribute_t1301304994, ___version_0)); }
	inline uint32_t get_version_0() const { return ___version_0; }
	inline uint32_t* get_address_of_version_0() { return &___version_0; }
	inline void set_version_0(uint32_t value)
	{
		___version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUALAPIPARTITIONATTRIBUTE_T1301304994_H
#ifndef EXCLUSIVETOATTRIBUTE_T3124418018_H
#define EXCLUSIVETOATTRIBUTE_T3124418018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ExclusiveToAttribute
struct  ExclusiveToAttribute_t3124418018  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUSIVETOATTRIBUTE_T3124418018_H
#ifndef GUIDATTRIBUTE_T2682955351_H
#define GUIDATTRIBUTE_T2682955351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.GuidAttribute
struct  GuidAttribute_t2682955351  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T2682955351_H
#ifndef LENGTHISATTRIBUTE_T613149204_H
#define LENGTHISATTRIBUTE_T613149204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.LengthIsAttribute
struct  LengthIsAttribute_t613149204  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LENGTHISATTRIBUTE_T613149204_H
#ifndef MARSHALINGBEHAVIORATTRIBUTE_T570737848_H
#define MARSHALINGBEHAVIORATTRIBUTE_T570737848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingBehaviorAttribute
struct  MarshalingBehaviorAttribute_t570737848  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALINGBEHAVIORATTRIBUTE_T570737848_H
#ifndef MUSEATTRIBUTE_T3401286167_H
#define MUSEATTRIBUTE_T3401286167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MuseAttribute
struct  MuseAttribute_t3401286167  : public Attribute_t861562559
{
public:
	// System.UInt32 Windows.Foundation.Metadata.MuseAttribute::Version
	uint32_t ___Version_0;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(MuseAttribute_t3401286167, ___Version_0)); }
	inline uint32_t get_Version_0() const { return ___Version_0; }
	inline uint32_t* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(uint32_t value)
	{
		___Version_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUSEATTRIBUTE_T3401286167_H
#ifndef OVERLOADATTRIBUTE_T2178303703_H
#define OVERLOADATTRIBUTE_T2178303703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.OverloadAttribute
struct  OverloadAttribute_t2178303703  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERLOADATTRIBUTE_T2178303703_H
#ifndef OVERRIDABLEATTRIBUTE_T203117044_H
#define OVERRIDABLEATTRIBUTE_T203117044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.OverridableAttribute
struct  OverridableAttribute_t203117044  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERRIDABLEATTRIBUTE_T203117044_H
#ifndef PROTECTEDATTRIBUTE_T3736820420_H
#define PROTECTEDATTRIBUTE_T3736820420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ProtectedAttribute
struct  ProtectedAttribute_t3736820420  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTECTEDATTRIBUTE_T3736820420_H
#ifndef REMOTEASYNCATTRIBUTE_T33115854_H
#define REMOTEASYNCATTRIBUTE_T33115854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.RemoteAsyncAttribute
struct  RemoteAsyncAttribute_t33115854  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTEASYNCATTRIBUTE_T33115854_H
#ifndef STATICATTRIBUTE_T2174868556_H
#define STATICATTRIBUTE_T2174868556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.StaticAttribute
struct  StaticAttribute_t2174868556  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICATTRIBUTE_T2174868556_H
#ifndef THREADINGATTRIBUTE_T685453408_H
#define THREADINGATTRIBUTE_T685453408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingAttribute
struct  ThreadingAttribute_t685453408  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINGATTRIBUTE_T685453408_H
#ifndef WEBHOSTHIDDENATTRIBUTE_T2021537596_H
#define WEBHOSTHIDDENATTRIBUTE_T2021537596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.WebHostHiddenAttribute
struct  WebHostHiddenAttribute_t2021537596  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBHOSTHIDDENATTRIBUTE_T2021537596_H
#ifndef POINT_T4164953540_H
#define POINT_T4164953540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953540 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953540_H
#ifndef POINT_T4164953539_H
#define POINT_T4164953539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953539 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953539_H
#ifndef RECT_T2695113488_H
#define RECT_T2695113488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113488 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113488_H
#ifndef RECT_T2695113487_H
#define RECT_T2695113487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113487 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113487_H
#ifndef SIZE_T550917638_H
#define SIZE_T550917638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917638 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_t550917638, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_t550917638, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917638_H
#ifndef SIZE_T550917639_H
#define SIZE_T550917639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917639 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917639_H
#ifndef TIMESPAN_T1755640982_H
#define TIMESPAN_T1755640982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TimeSpan
struct  TimeSpan_t1755640982 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1755640982, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1755640982_H
#ifndef UNIVERSALAPICONTRACT_T3367004861_H
#define UNIVERSALAPICONTRACT_T3367004861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t3367004861 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T3367004861_H
#ifndef NETWORKINFORMATION_T482159730_H
#define NETWORKINFORMATION_T482159730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.Connectivity.NetworkInformation
struct  NetworkInformation_t482159730  : public Il2CppComObject
{
public:

public:
};

struct NetworkInformation_t482159730_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics
	INetworkInformationStatics_t1568055678* ____inetworkInformationStatics_t1568055678;
	// Cached pointer to Windows.Networking.Connectivity.INetworkInformationStatics2
	INetworkInformationStatics2_t442609477* ____inetworkInformationStatics2_t442609477;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.Connectivity.NetworkInformation"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics_t1568055678* get_____inetworkInformationStatics_t1568055678()
	{
		INetworkInformationStatics_t1568055678* returnValue = ____inetworkInformationStatics_t1568055678;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics_t1568055678::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INetworkInformationStatics_t1568055678>((&____inetworkInformationStatics_t1568055678), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics_t1568055678;
			}
		}
		return returnValue;
	}

	inline INetworkInformationStatics2_t442609477* get_____inetworkInformationStatics2_t442609477()
	{
		INetworkInformationStatics2_t442609477* returnValue = ____inetworkInformationStatics2_t442609477;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(INetworkInformationStatics2_t442609477::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<INetworkInformationStatics2_t442609477>((&____inetworkInformationStatics2_t442609477), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____inetworkInformationStatics2_t442609477;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINFORMATION_T482159730_H
#ifndef DATAREADER_T2381813649_H
#define DATAREADER_T2381813649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReader
struct  DataReader_t2381813649  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataReader
	IDataReader_t3392321383* ____idataReader_t3392321383;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataReader_t3392321383* get_____idataReader_t3392321383()
	{
		IDataReader_t3392321383* returnValue = ____idataReader_t3392321383;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataReader_t3392321383::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReader_t3392321383>((&____idataReader_t3392321383), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReader_t3392321383;
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

struct DataReader_t2381813649_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.Streams.IDataReaderFactory
	IDataReaderFactory_t2217455388* ____idataReaderFactory_t2217455388;
	// Cached pointer to Windows.Storage.Streams.IDataReaderStatics
	IDataReaderStatics_t1343138968* ____idataReaderStatics_t1343138968;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataReader"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDataReaderFactory_t2217455388* get_____idataReaderFactory_t2217455388()
	{
		IDataReaderFactory_t2217455388* returnValue = ____idataReaderFactory_t2217455388;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderFactory_t2217455388::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderFactory_t2217455388>((&____idataReaderFactory_t2217455388), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderFactory_t2217455388;
			}
		}
		return returnValue;
	}

	inline IDataReaderStatics_t1343138968* get_____idataReaderStatics_t1343138968()
	{
		IDataReaderStatics_t1343138968* returnValue = ____idataReaderStatics_t1343138968;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataReaderStatics_t1343138968::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataReaderStatics_t1343138968>((&____idataReaderStatics_t1343138968), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataReaderStatics_t1343138968;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADER_T2381813649_H
#ifndef DATAWRITER_T841151054_H
#define DATAWRITER_T841151054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriter
struct  DataWriter_t841151054  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataWriter
	IDataWriter_t1260434628* ____idataWriter_t1260434628;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline IDataWriter_t1260434628* get_____idataWriter_t1260434628()
	{
		IDataWriter_t1260434628* returnValue = ____idataWriter_t1260434628;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDataWriter_t1260434628::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriter_t1260434628>((&____idataWriter_t1260434628), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriter_t1260434628;
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

struct DataWriter_t841151054_StaticFields
{
public:
	// Cached pointer to Windows.Storage.Streams.IDataWriterFactory
	IDataWriterFactory_t624500286* ____idataWriterFactory_t624500286;
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;

public:
	inline IDataWriterFactory_t624500286* get_____idataWriterFactory_t624500286()
	{
		IDataWriterFactory_t624500286* returnValue = ____idataWriterFactory_t624500286;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDataWriterFactory_t624500286::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDataWriterFactory_t624500286>((&____idataWriterFactory_t624500286), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idataWriterFactory_t624500286;
			}
		}
		return returnValue;
	}

	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.Streams.DataWriter"));
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
#endif // DATAWRITER_T841151054_H
#ifndef APPLICATIONVIEW_T3708261754_H
#define APPLICATIONVIEW_T3708261754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.ViewManagement.ApplicationView
struct  ApplicationView_t3708261754  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView
	IApplicationView_t1025170592* ____iapplicationView_t1025170592;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView2
	IApplicationView2_t2714993344* ____iapplicationView2_t2714993344;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView3
	IApplicationView3_t1148909403* ____iapplicationView3_t1148909403;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationView4
	IApplicationView4_t1552193930* ____iapplicationView4_t1552193930;

public:
	inline IApplicationView_t1025170592* get_____iapplicationView_t1025170592()
	{
		IApplicationView_t1025170592* returnValue = ____iapplicationView_t1025170592;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView_t1025170592::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView_t1025170592>((&____iapplicationView_t1025170592), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView_t1025170592;
			}
		}
		return returnValue;
	}

	inline IApplicationView2_t2714993344* get_____iapplicationView2_t2714993344()
	{
		IApplicationView2_t2714993344* returnValue = ____iapplicationView2_t2714993344;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView2_t2714993344::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView2_t2714993344>((&____iapplicationView2_t2714993344), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView2_t2714993344;
			}
		}
		return returnValue;
	}

	inline IApplicationView3_t1148909403* get_____iapplicationView3_t1148909403()
	{
		IApplicationView3_t1148909403* returnValue = ____iapplicationView3_t1148909403;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView3_t1148909403::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView3_t1148909403>((&____iapplicationView3_t1148909403), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView3_t1148909403;
			}
		}
		return returnValue;
	}

	inline IApplicationView4_t1552193930* get_____iapplicationView4_t1552193930()
	{
		IApplicationView4_t1552193930* returnValue = ____iapplicationView4_t1552193930;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IApplicationView4_t1552193930::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationView4_t1552193930>((&____iapplicationView4_t1552193930), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationView4_t1552193930;
			}
		}
		return returnValue;
	}
};

struct ApplicationView_t3708261754_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewStatics
	IApplicationViewStatics_t254704670* ____iapplicationViewStatics_t254704670;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewStatics3
	IApplicationViewStatics3_t253459486* ____iapplicationViewStatics3_t253459486;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewStatics2
	IApplicationViewStatics2_t253525022* ____iapplicationViewStatics2_t253525022;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewFullscreenStatics
	IApplicationViewFullscreenStatics_t2572392975* ____iapplicationViewFullscreenStatics_t2572392975;
	// Cached pointer to Windows.UI.ViewManagement.IApplicationViewInteropStatics
	IApplicationViewInteropStatics_t945853279* ____iapplicationViewInteropStatics_t945853279;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.ViewManagement.ApplicationView"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IApplicationViewStatics_t254704670* get_____iapplicationViewStatics_t254704670()
	{
		IApplicationViewStatics_t254704670* returnValue = ____iapplicationViewStatics_t254704670;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewStatics_t254704670::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewStatics_t254704670>((&____iapplicationViewStatics_t254704670), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewStatics_t254704670;
			}
		}
		return returnValue;
	}

	inline IApplicationViewStatics3_t253459486* get_____iapplicationViewStatics3_t253459486()
	{
		IApplicationViewStatics3_t253459486* returnValue = ____iapplicationViewStatics3_t253459486;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewStatics3_t253459486::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewStatics3_t253459486>((&____iapplicationViewStatics3_t253459486), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewStatics3_t253459486;
			}
		}
		return returnValue;
	}

	inline IApplicationViewStatics2_t253525022* get_____iapplicationViewStatics2_t253525022()
	{
		IApplicationViewStatics2_t253525022* returnValue = ____iapplicationViewStatics2_t253525022;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewStatics2_t253525022::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewStatics2_t253525022>((&____iapplicationViewStatics2_t253525022), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewStatics2_t253525022;
			}
		}
		return returnValue;
	}

	inline IApplicationViewFullscreenStatics_t2572392975* get_____iapplicationViewFullscreenStatics_t2572392975()
	{
		IApplicationViewFullscreenStatics_t2572392975* returnValue = ____iapplicationViewFullscreenStatics_t2572392975;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewFullscreenStatics_t2572392975::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewFullscreenStatics_t2572392975>((&____iapplicationViewFullscreenStatics_t2572392975), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewFullscreenStatics_t2572392975;
			}
		}
		return returnValue;
	}

	inline IApplicationViewInteropStatics_t945853279* get_____iapplicationViewInteropStatics_t945853279()
	{
		IApplicationViewInteropStatics_t945853279* returnValue = ____iapplicationViewInteropStatics_t945853279;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IApplicationViewInteropStatics_t945853279::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IApplicationViewInteropStatics_t945853279>((&____iapplicationViewInteropStatics_t945853279), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iapplicationViewInteropStatics_t945853279;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONVIEW_T3708261754_H
#ifndef ATTRIBUTETARGETS_T1784037988_H
#define ATTRIBUTETARGETS_T1784037988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t1784037988 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t1784037988, ___value___2)); }
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
#endif // ATTRIBUTETARGETS_T1784037988_H
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
#ifndef ASYNCSTATUS_T2150485874_H
#define ASYNCSTATUS_T2150485874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncStatus
struct  AsyncStatus_t2150485874 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t2150485874, ___value___2)); }
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
#endif // ASYNCSTATUS_T2150485874_H
#ifndef COMPOSITIONTYPE_T2620517455_H
#define COMPOSITIONTYPE_T2620517455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.CompositionType
struct  CompositionType_t2620517455 
{
public:
	// System.Int32 Windows.Foundation.Metadata.CompositionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompositionType_t2620517455, ___value___2)); }
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
#endif // COMPOSITIONTYPE_T2620517455_H
#ifndef DEPRECATIONTYPE_T4182238482_H
#define DEPRECATIONTYPE_T4182238482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DeprecationType
struct  DeprecationType_t4182238482 
{
public:
	// System.Int32 Windows.Foundation.Metadata.DeprecationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeprecationType_t4182238482, ___value___2)); }
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
#endif // DEPRECATIONTYPE_T4182238482_H
#ifndef MARSHALINGTYPE_T3556196393_H
#define MARSHALINGTYPE_T3556196393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingType
struct  MarshalingType_t3556196393 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_t3556196393, ___value___2)); }
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
#endif // MARSHALINGTYPE_T3556196393_H
#ifndef THREADINGMODEL_T2838021473_H
#define THREADINGMODEL_T2838021473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingModel
struct  ThreadingModel_t2838021473 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_t2838021473, ___value___2)); }
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
#endif // THREADINGMODEL_T2838021473_H
#ifndef PROPERTYTYPE_T3031428354_H
#define PROPERTYTYPE_T3031428354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.PropertyType
struct  PropertyType_t3031428354 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_t3031428354, ___value___2)); }
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
#endif // PROPERTYTYPE_T3031428354_H
#ifndef HOSTNAMETYPE_T4170768079_H
#define HOSTNAMETYPE_T4170768079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostNameType
struct  HostNameType_t4170768079 
{
public:
	// System.Int32 Windows.Networking.HostNameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostNameType_t4170768079, ___value___2)); }
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
#endif // HOSTNAMETYPE_T4170768079_H
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
// Windows.Foundation.IAsyncInfo
struct NOVTABLE IAsyncInfo_t2425795444 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Id_m488151110(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_Status_m774826579(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_get_ErrorCode_m1014534200(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Cancel_m959568370() = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncInfo_Close_m1968429586() = 0;
};
// Windows.Foundation.IPropertyValue
struct NOVTABLE IPropertyValue_t3169763779 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_Type_m1307170434(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_get_IsNumericScalar_m907101182(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8_m2421114344(uint8_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16_m4200981392(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16_m4219279933(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32_m408686053(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32_m3159865478(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64_m4226135288(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64_m3309170715(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingle_m4273073505(float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDouble_m1492351774(double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16_m3066416085(Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBoolean_m3854624799(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetString_m2457071959(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuid_m2989795186(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTime_m4147484372(DateTime_t1679451545 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpan_m3208245299(TimeSpan_t881159249 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPoint_m2770216139(Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSize_m1871300471(Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRect_m3170973200(Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt8Array_m1198332942(uint32_t* ___value0ArraySize, uint8_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt16Array_m99541304(uint32_t* ___value0ArraySize, int16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt16Array_m1856918684(uint32_t* ___value0ArraySize, uint16_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt32Array_m3011037886(uint32_t* ___value0ArraySize, int32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt32Array_m3306404924(uint32_t* ___value0ArraySize, uint32_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInt64Array_m16819376(uint32_t* ___value0ArraySize, int64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetUInt64Array_m966722754(uint32_t* ___value0ArraySize, uint64_t** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSingleArray_m4042538522(uint32_t* ___value0ArraySize, float** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDoubleArray_m2983062062(uint32_t* ___value0ArraySize, double** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetChar16Array_m3043815358(uint32_t* ___value0ArraySize, Il2CppChar** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetBooleanArray_m2519679727(uint32_t* ___value0ArraySize, bool** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetStringArray_m31925364(uint32_t* ___value0ArraySize, Il2CppHString** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetInspectableArray_m2438646989(uint32_t* ___value0ArraySize, Il2CppIInspectable*** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetGuidArray_m3262947336(uint32_t* ___value0ArraySize, Guid_t ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetDateTimeArray_m2328955250(uint32_t* ___value0ArraySize, DateTime_t1679451545 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetTimeSpanArray_m3967818403(uint32_t* ___value0ArraySize, TimeSpan_t881159249 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetPointArray_m2823350989(uint32_t* ___value0ArraySize, Point_t4164953539 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetSizeArray_m1001766604(uint32_t* ___value0ArraySize, Size_t550917638 ** ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IPropertyValue_GetRectArray_m3897171591(uint32_t* ___value0ArraySize, Rect_t2695113487 ** ___value0) = 0;
};
#ifndef ATTRIBUTETARGETS_T2460853228_H
#define ATTRIBUTETARGETS_T2460853228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeTargets
struct  AttributeTargets_t2460853228 
{
public:
	// System.UInt32 Windows.Foundation.Metadata.AttributeTargets::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t2460853228, ___value___2)); }
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
#endif // ATTRIBUTETARGETS_T2460853228_H
// Windows.Networking.IHostName
struct NOVTABLE IHostName_t3179521082 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped0_get_IPInformation_m2521739025() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped1_get_RawName_m106347642() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_DisplayName_m3568158889(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped2_get_CanonicalName_m2488148993() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_Type_m2074874122(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped3_IsEqual_m2387026067() = 0;
};
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1153220809(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
#ifndef ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#define ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncActionCompletedHandler
struct  AsyncActionCompletedHandler_t4142409509  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncActionCompletedHandler
struct IAsyncActionCompletedHandler_t4142409509_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncAction_t3072713919* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCACTIONCOMPLETEDHANDLER_T4142409509_H
#ifndef HOSTNAME_T2890034819_H
#define HOSTNAME_T2890034819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostName
struct  HostName_t2890034819  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.IHostName
	IHostName_t3179521082* ____ihostName_t3179521082;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IHostName_t3179521082* get_____ihostName_t3179521082()
	{
		IHostName_t3179521082* returnValue = ____ihostName_t3179521082;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostName_t3179521082>((&____ihostName_t3179521082), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostName_t3179521082;
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

struct HostName_t2890034819_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t2985905689* ____ihostNameFactory_t2985905689;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_t664333692* ____ihostNameStatics_t664333692;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t2985905689* get_____ihostNameFactory_t2985905689()
	{
		IHostNameFactory_t2985905689* returnValue = ____ihostNameFactory_t2985905689;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t2985905689::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameFactory_t2985905689>((&____ihostNameFactory_t2985905689), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t2985905689;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_t664333692* get_____ihostNameStatics_t664333692()
	{
		IHostNameStatics_t664333692* returnValue = ____ihostNameStatics_t664333692;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_t664333692::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameStatics_t664333692>((&____ihostNameStatics_t664333692), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_t664333692;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTNAME_T2890034819_H
#ifndef DATAREADERLOADOPERATION_T4248924386_H
#define DATAREADERLOADOPERATION_T4248924386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataReaderLoadOperation
struct  DataReaderLoadOperation_t4248924386  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREADERLOADOPERATION_T4248924386_H
#ifndef DATAWRITERSTOREOPERATION_T1087990177_H
#define DATAWRITERSTOREOPERATION_T1087990177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.DataWriterStoreOperation
struct  DataWriterStoreOperation_t1087990177  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IAsyncOperation`1<System.UInt32>
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698;
	// Cached pointer to Windows.Foundation.IAsyncInfo
	IAsyncInfo_t2425795444* ____iasyncInfo_t2425795444;

public:
	inline IAsyncOperation_1_t1181249698* get_____iasyncOperation_1_t1181249698()
	{
		IAsyncOperation_1_t1181249698* returnValue = ____iasyncOperation_1_t1181249698;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncOperation_1_t1181249698>((&____iasyncOperation_1_t1181249698), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncOperation_1_t1181249698;
			}
		}
		return returnValue;
	}

	inline IAsyncInfo_t2425795444* get_____iasyncInfo_t2425795444()
	{
		IAsyncInfo_t2425795444* returnValue = ____iasyncInfo_t2425795444;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IAsyncInfo_t2425795444::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IAsyncInfo_t2425795444>((&____iasyncInfo_t2425795444), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iasyncInfo_t2425795444;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAWRITERSTOREOPERATION_T1087990177_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5000 = { sizeof (__StaticArrayInitTypeSizeU3D24_t3517759982)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D24_t3517759982 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5001 = { sizeof (__StaticArrayInitTypeSizeU3D28_t1904621873)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D28_t1904621873 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5002 = { sizeof (__StaticArrayInitTypeSizeU3D40_t1547998297)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D40_t1547998297 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5003 = { sizeof (__StaticArrayInitTypeSizeU3D44_t3517366766)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t3517366766 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5004 = { sizeof (__StaticArrayInitTypeSizeU3D52_t2710732174)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D52_t2710732174 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5005 = { sizeof (U3CModuleU3E_t692745585), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5006 = { sizeof (U3CModuleU3E_t692745586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5007 = { 0, sizeof(IClosable_t326290202*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5008 = { sizeof (WebHostHiddenAttribute_t2021537596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5009 = { sizeof (DualApiPartitionAttribute_t1301304994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5009[1] = 
{
	DualApiPartitionAttribute_t1301304994::get_offset_of_version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5010 = { sizeof (MuseAttribute_t3401286167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5010[1] = 
{
	MuseAttribute_t3401286167::get_offset_of_Version_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5011 = { sizeof (PropertyType_t3031428354)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5011[42] = 
{
	PropertyType_t3031428354::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5012 = { sizeof (Point_t4164953540)+ sizeof (RuntimeObject), sizeof(Point_t4164953540 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5012[2] = 
{
	Point_t4164953540::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Point_t4164953540::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5013 = { sizeof (Size_t550917639)+ sizeof (RuntimeObject), sizeof(Size_t550917639 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5013[2] = 
{
	Size_t550917639::get_offset_of_Width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Size_t550917639::get_offset_of_Height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5014 = { sizeof (Rect_t2695113488)+ sizeof (RuntimeObject), sizeof(Rect_t2695113488 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5014[4] = 
{
	Rect_t2695113488::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113488::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113488::get_offset_of_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2695113488::get_offset_of_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5015 = { sizeof (DateTime_t1679451545)+ sizeof (RuntimeObject), sizeof(DateTime_t1679451545 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5015[1] = 
{
	DateTime_t1679451545::get_offset_of_UniversalTime_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5016 = { sizeof (TimeSpan_t1755640982)+ sizeof (RuntimeObject), sizeof(TimeSpan_t1755640982 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5016[1] = 
{
	TimeSpan_t1755640982::get_offset_of_Duration_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5017 = { 0, sizeof(IPropertyValue_t3169763779*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5018 = { 0, sizeof(IStringable_t1634798504*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5019 = { sizeof (AsyncActionCompletedHandler_t4142409509), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5020 = { 0, sizeof(IApiInformationStatics_t1368946868*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5021 = { sizeof (ApiInformation_t812843232), -1, sizeof(ApiInformation_t812843232_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5022 = { sizeof (ActivatableAttribute_t4098936231), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5023 = { sizeof (ContractVersionAttribute_t1666784187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5024 = { sizeof (AllowMultipleAttribute_t3314144467), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5025 = { sizeof (AttributeUsageAttribute_t1422441135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5026 = { sizeof (AttributeTargets_t2460853228)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5026[14] = 
{
	AttributeTargets_t2460853228::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5027 = { sizeof (DefaultOverloadAttribute_t2513707992), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5028 = { sizeof (DefaultAttribute_t1509828399), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5029 = { sizeof (GuidAttribute_t2682955351), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5030 = { sizeof (ComposableAttribute_t2299833422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5031 = { sizeof (CompositionType_t2620517455)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5031[3] = 
{
	CompositionType_t2620517455::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5032 = { sizeof (OverloadAttribute_t2178303703), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5033 = { sizeof (ApiContractAttribute_t3160257459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5034 = { sizeof (StaticAttribute_t2174868556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5035 = { sizeof (OverridableAttribute_t203117044), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5036 = { sizeof (ProtectedAttribute_t3736820420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5037 = { sizeof (ThreadingAttribute_t685453408), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5038 = { sizeof (ThreadingModel_t2838021473)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5038[5] = 
{
	ThreadingModel_t2838021473::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5039 = { sizeof (MarshalingBehaviorAttribute_t570737848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5040 = { sizeof (MarshalingType_t3556196393)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5040[5] = 
{
	MarshalingType_t3556196393::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5041 = { sizeof (DeprecatedAttribute_t3646164936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5042 = { sizeof (DeprecationType_t4182238482)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5042[3] = 
{
	DeprecationType_t4182238482::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5043 = { sizeof (ExclusiveToAttribute_t3124418018), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5044 = { sizeof (LengthIsAttribute_t613149204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5045 = { sizeof (AsyncStatus_t2150485874)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5045[5] = 
{
	AsyncStatus_t2150485874::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5046 = { sizeof (EventRegistrationToken_t3152277946)+ sizeof (RuntimeObject), sizeof(EventRegistrationToken_t3152277946 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5046[1] = 
{
	EventRegistrationToken_t3152277946::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5047 = { sizeof (HResult_t3073183193)+ sizeof (RuntimeObject), sizeof(HResult_t3073183193 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5047[1] = 
{
	HResult_t3073183193::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5048 = { sizeof (RemoteAsyncAttribute_t33115854), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5049 = { 0, sizeof(IAsyncInfo_t2425795444*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5050 = { 0, sizeof(IAsyncAction_t3072713919*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5051 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5052 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5053 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5054 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5055 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5056 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5057 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5058 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5059 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5060 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5061 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5062 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5063 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5064 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5065 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5066 = { sizeof (FoundationContract_t3651383009)+ sizeof (RuntimeObject), sizeof(FoundationContract_t3651383009 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5067 = { sizeof (DataReaderLoadOperation_t4248924386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5068 = { 0, sizeof(IDataReader_t3392321383*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5069 = { 0, sizeof(IDataReaderFactory_t2217455388*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5070 = { sizeof (DataReader_t2381813649), -1, sizeof(DataReader_t2381813649_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5071 = { 0, sizeof(IDataReaderStatics_t1343138968*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5072 = { sizeof (DataWriterStoreOperation_t1087990177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5073 = { 0, sizeof(IDataWriter_t1260434628*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5074 = { 0, sizeof(IDataWriterFactory_t624500286*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5075 = { sizeof (DataWriter_t841151054), -1, sizeof(DataWriter_t841151054_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5076 = { 0, sizeof(IBuffer_t541192229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5077 = { sizeof (InputStreamOptions_t2901738979)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5077[4] = 
{
	InputStreamOptions_t2901738979::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5078 = { 0, sizeof(IContentTypeProvider_t1806097440*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5079 = { 0, sizeof(IInputStream_t2821136229*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5080 = { 0, sizeof(IOutputStream_t2042351338*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5081 = { 0, sizeof(IRandomAccessStream_t2099996051*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5082 = { 0, sizeof(IRandomAccessStreamWithContentType_t3296927652*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5083 = { sizeof (HostNameType_t4170768079)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5083[5] = 
{
	HostNameType_t4170768079::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5084 = { 0, sizeof(IHostNameStatics_t664333692*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5085 = { 0, sizeof(IHostName_t3179521082*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5086 = { sizeof (HostName_t2890034819), -1, sizeof(HostName_t2890034819_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5087 = { 0, sizeof(IHostNameFactory_t2985905689*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5088 = { 0, sizeof(INetworkInformationStatics_t1568055678*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5089 = { 0, sizeof(INetworkInformationStatics2_t442609477*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5090 = { sizeof (NetworkInformation_t482159730), -1, sizeof(NetworkInformation_t482159730_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5091 = { sizeof (UniversalApiContract_t3367004861)+ sizeof (RuntimeObject), sizeof(UniversalApiContract_t3367004861 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5092 = { 0, sizeof(IApplicationViewSwitcherStatics_t2850352759*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5093 = { 0, sizeof(IApplicationViewSwitcherStatics2_t2853629559*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5094 = { 0, sizeof(IApplicationViewSwitcherStatics3_t2853564023*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5095 = { 0, sizeof(IApplicationViewInteropStatics_t945853279*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5096 = { 0, sizeof(IApplicationViewStatics_t254704670*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5097 = { 0, sizeof(IApplicationViewStatics2_t253525022*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5098 = { sizeof (ApplicationView_t3708261754), -1, sizeof(ApplicationView_t3708261754_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5099 = { 0, sizeof(IApplicationViewStatics3_t253459486*), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
