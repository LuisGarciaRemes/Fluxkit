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

template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// GLTF.Schema.Asset
struct Asset_t4292491636;
// GLTF.Schema.Buffer
struct Buffer_t869705777;
// GLTF.Schema.BufferId
struct BufferId_t2787902107;
// GLTF.Schema.BufferViewId
struct BufferViewId_t4185270750;
// GLTF.Schema.Buffer[]
struct BufferU5BU5D_t3404391404;
// GLTF.Schema.DefaultExtensionFactory
struct DefaultExtensionFactory_t3535768014;
// GLTF.Schema.ExtTextureTransformExtensionFactory
struct ExtTextureTransformExtensionFactory_t766531290;
// GLTF.Schema.GLTFRoot
struct GLTFRoot_t676886847;
// GLTF.Schema.Image
struct Image_t782620675;
// GLTF.Schema.Image[]
struct ImageU5BU5D_t562016402;
// GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtensionFactory
struct KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945;
// GLTF.Schema.Material
struct Material_t2790518843;
// GLTF.Schema.Material[]
struct MaterialU5BU5D_t1970395258;
// GLTF.Schema.Mesh[]
struct MeshU5BU5D_t1017691824;
// GLTF.Schema.Scene
struct Scene_t1955661005;
// GLTF.Schema.SceneId
struct SceneId_t3402743638;
// GLTF.Schema.Scene[]
struct SceneU5BU5D_t2571818336;
// GLTF.Schema.Texture[]
struct TextureU5BU5D_t1584057798;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t2755812594;
// Newtonsoft.Json.Linq.JToken
struct JToken_t1038539247;
// System.Action
struct Action_t1264377477;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityGLTF.Cache.BufferCacheData>[]
struct EntryU5BU5D_t2783951582;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct KeyCollection_t3483447822;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct ValueCollection_t714849373;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct Dictionary_2_t3293772351;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory>
struct Dictionary_2_t3086455368;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>
struct Dictionary_2_t395211613;
// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>
struct Dictionary_2_t2973298224;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t3068621835;
// System.Collections.Generic.List`1<GLTF.Schema.Accessor>
struct List_1_t3133863255;
// System.Collections.Generic.List`1<GLTF.Schema.Animation>
struct List_1_t2745658046;
// System.Collections.Generic.List`1<GLTF.Schema.Buffer>
struct List_1_t2341780519;
// System.Collections.Generic.List`1<GLTF.Schema.BufferView>
struct List_1_t4122173868;
// System.Collections.Generic.List`1<GLTF.Schema.Camera>
struct List_1_t3496179184;
// System.Collections.Generic.List`1<GLTF.Schema.Image>
struct List_1_t2254695417;
// System.Collections.Generic.List`1<GLTF.Schema.Material>
struct List_1_t4262593585;
// System.Collections.Generic.List`1<GLTF.Schema.Mesh>
struct List_1_t4198337971;
// System.Collections.Generic.List`1<GLTF.Schema.Node>
struct List_1_t1167779375;
// System.Collections.Generic.List`1<GLTF.Schema.NodeId>
struct List_1_t1111139301;
// System.Collections.Generic.List`1<GLTF.Schema.Sampler>
struct List_1_t2951094649;
// System.Collections.Generic.List`1<GLTF.Schema.Scene>
struct List_1_t3427735747;
// System.Collections.Generic.List`1<GLTF.Schema.Skin>
struct List_1_t1143834715;
// System.Collections.Generic.List`1<GLTF.Schema.Texture>
struct List_1_t2284271573;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]>
struct List_1_t695246165;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3365920845;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Capture
struct Capture_t2232016050;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t1927754563;
// System.Text.RegularExpressions.Group
struct Group_t2468205786;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t69770484;
// System.Text.RegularExpressions.Match
struct Match_t3408321083;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_t4293407246;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t51159052;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t2916547576;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.Uri
struct Uri_t100236324;
// System.Void
struct Void_t1185182177;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596;
// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityGLTF.AsyncAction
struct AsyncAction_t3334821446;
// UnityGLTF.Cache.AssetCache
struct AssetCache_t783611398;
// UnityGLTF.Cache.BufferCacheData
struct BufferCacheData_t110091724;
// UnityGLTF.Cache.MaterialCacheData[]
struct MaterialCacheDataU5BU5D_t484490365;
// UnityGLTF.GLTFSceneImporter
struct GLTFSceneImporter_t274320441;
// UnityGLTF.GLTFSceneImporter/<ImportScene>d__22
struct U3CImportSceneU3Ed__22_t599600113;
// UnityGLTF.GLTFSceneImporter/<Load>d__21
struct U3CLoadU3Ed__21_t2072795234;
// UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35
struct U3CLoadBufferU3Ed__35_t2608884095;
// UnityGLTF.GLTFSceneImporter/<LoadImage>d__34
struct U3CLoadImageU3Ed__34_t347840408;
// UnityGLTF.WebRequestException
struct WebRequestException_t1410780468;

extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* AssetCache_t783611398_il2cpp_TypeInfo_var;
extern RuntimeClass* BufferCacheData_t110091724_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* DownloadHandlerTexture_t2149801800_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* LoadType_t225521639_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequestException_t1410780468_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral218779911;
extern String_t* _stringLiteral2758179804;
extern String_t* _stringLiteral3155662446;
extern String_t* _stringLiteral380657706;
extern String_t* _stringLiteral4142678977;
extern const RuntimeMethod* Dictionary_2_get_Item_m1259228363_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m329187123_RuntimeMethod_var;
extern const RuntimeMethod* GLTFSceneImporter_U3CImportSceneU3Eb__22_0_m1839693015_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1059274901_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2233704377_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2917776829_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3096908490_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4192079870_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m430863746_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2012599669_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3831054255_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4240667468_RuntimeMethod_var;
extern const RuntimeMethod* U3CImportSceneU3Ed__22_MoveNext_m4284647012_RuntimeMethod_var;
extern const RuntimeMethod* U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadImageU3Ed__34_MoveNext_m3821244950_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadU3Ed__21_MoveNext_m1636262611_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_RuntimeMethod_var;
extern const uint32_t U3CImportSceneU3Ed__22_MoveNext_m4284647012_MetadataUsageId;
extern const uint32_t U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_MetadataUsageId;
extern const uint32_t U3CLoadBufferU3Ed__35_MoveNext_m1135036225_MetadataUsageId;
extern const uint32_t U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_MetadataUsageId;
extern const uint32_t U3CLoadImageU3Ed__34_MoveNext_m3821244950_MetadataUsageId;
extern const uint32_t U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_MetadataUsageId;
extern const uint32_t U3CLoadU3Ed__21_MoveNext_m1636262611_MetadataUsageId;
extern const uint32_t U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m1100128511_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m2991602755_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m376355303_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m613315964_MetadataUsageId;
struct CertificateHandler_t2739891000_marshaled_com;
struct DownloadHandler_t2937767557_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t463507806_marshaled_com;
struct UnityWebRequest_t463507806_marshaled_pinvoke;
struct UploadHandler_t2993558019_marshaled_com;

struct ByteU5BU5D_t4116647657;
struct ObjectU5BU5D_t2843939325;
struct ColorU5BU5D_t941916413;
struct Texture2DU5BU5D_t149664596;


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
#ifndef GLTFID_1_T1070037637_H
#define GLTFID_1_T1070037637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Buffer>
struct  GLTFId_1_t1070037637  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t1070037637, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t1070037637, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T1070037637_H
#ifndef GLTFID_1_T2850430986_H
#define GLTFID_1_T2850430986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>
struct  GLTFId_1_t2850430986  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t2850430986, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t2850430986, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T2850430986_H
#ifndef GLTFPROPERTY_T1589224293_H
#define GLTFPROPERTY_T1589224293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFProperty
struct  GLTFProperty_t1589224293  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension> GLTF.Schema.GLTFProperty::Extensions
	Dictionary_2_t395211613 * ___Extensions_4;
	// Newtonsoft.Json.Linq.JToken GLTF.Schema.GLTFProperty::Extras
	JToken_t1038539247 * ___Extras_5;

public:
	inline static int32_t get_offset_of_Extensions_4() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293, ___Extensions_4)); }
	inline Dictionary_2_t395211613 * get_Extensions_4() const { return ___Extensions_4; }
	inline Dictionary_2_t395211613 ** get_address_of_Extensions_4() { return &___Extensions_4; }
	inline void set_Extensions_4(Dictionary_2_t395211613 * value)
	{
		___Extensions_4 = value;
		Il2CppCodeGenWriteBarrier((&___Extensions_4), value);
	}

	inline static int32_t get_offset_of_Extras_5() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293, ___Extras_5)); }
	inline JToken_t1038539247 * get_Extras_5() const { return ___Extras_5; }
	inline JToken_t1038539247 ** get_address_of_Extras_5() { return &___Extras_5; }
	inline void set_Extras_5(JToken_t1038539247 * value)
	{
		___Extras_5 = value;
		Il2CppCodeGenWriteBarrier((&___Extras_5), value);
	}
};

struct GLTFProperty_t1589224293_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory> GLTF.Schema.GLTFProperty::_extensionRegistry
	Dictionary_2_t3086455368 * ____extensionRegistry_0;
	// GLTF.Schema.DefaultExtensionFactory GLTF.Schema.GLTFProperty::_defaultExtensionFactory
	DefaultExtensionFactory_t3535768014 * ____defaultExtensionFactory_1;
	// GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtensionFactory GLTF.Schema.GLTFProperty::_KHRExtensionFactory
	KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 * ____KHRExtensionFactory_2;
	// GLTF.Schema.ExtTextureTransformExtensionFactory GLTF.Schema.GLTFProperty::_TexTransformFactory
	ExtTextureTransformExtensionFactory_t766531290 * ____TexTransformFactory_3;

public:
	inline static int32_t get_offset_of__extensionRegistry_0() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____extensionRegistry_0)); }
	inline Dictionary_2_t3086455368 * get__extensionRegistry_0() const { return ____extensionRegistry_0; }
	inline Dictionary_2_t3086455368 ** get_address_of__extensionRegistry_0() { return &____extensionRegistry_0; }
	inline void set__extensionRegistry_0(Dictionary_2_t3086455368 * value)
	{
		____extensionRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((&____extensionRegistry_0), value);
	}

	inline static int32_t get_offset_of__defaultExtensionFactory_1() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____defaultExtensionFactory_1)); }
	inline DefaultExtensionFactory_t3535768014 * get__defaultExtensionFactory_1() const { return ____defaultExtensionFactory_1; }
	inline DefaultExtensionFactory_t3535768014 ** get_address_of__defaultExtensionFactory_1() { return &____defaultExtensionFactory_1; }
	inline void set__defaultExtensionFactory_1(DefaultExtensionFactory_t3535768014 * value)
	{
		____defaultExtensionFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultExtensionFactory_1), value);
	}

	inline static int32_t get_offset_of__KHRExtensionFactory_2() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____KHRExtensionFactory_2)); }
	inline KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 * get__KHRExtensionFactory_2() const { return ____KHRExtensionFactory_2; }
	inline KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 ** get_address_of__KHRExtensionFactory_2() { return &____KHRExtensionFactory_2; }
	inline void set__KHRExtensionFactory_2(KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 * value)
	{
		____KHRExtensionFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&____KHRExtensionFactory_2), value);
	}

	inline static int32_t get_offset_of__TexTransformFactory_3() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____TexTransformFactory_3)); }
	inline ExtTextureTransformExtensionFactory_t766531290 * get__TexTransformFactory_3() const { return ____TexTransformFactory_3; }
	inline ExtTextureTransformExtensionFactory_t766531290 ** get_address_of__TexTransformFactory_3() { return &____TexTransformFactory_3; }
	inline void set__TexTransformFactory_3(ExtTextureTransformExtensionFactory_t766531290 * value)
	{
		____TexTransformFactory_3 = value;
		Il2CppCodeGenWriteBarrier((&____TexTransformFactory_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFPROPERTY_T1589224293_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T3293772351_H
#define DICTIONARY_2_T3293772351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct  Dictionary_2_t3293772351  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2783951582* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3483447822 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t714849373 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___entries_1)); }
	inline EntryU5BU5D_t2783951582* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2783951582** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2783951582* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___keys_7)); }
	inline KeyCollection_t3483447822 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3483447822 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3483447822 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___values_8)); }
	inline ValueCollection_t714849373 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t714849373 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t714849373 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3293772351_H
#ifndef LIST_1_T2341780519_H
#define LIST_1_T2341780519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Buffer>
struct  List_1_t2341780519  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BufferU5BU5D_t3404391404* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____items_1)); }
	inline BufferU5BU5D_t3404391404* get__items_1() const { return ____items_1; }
	inline BufferU5BU5D_t3404391404** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BufferU5BU5D_t3404391404* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2341780519_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BufferU5BU5D_t3404391404* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2341780519_StaticFields, ____emptyArray_5)); }
	inline BufferU5BU5D_t3404391404* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BufferU5BU5D_t3404391404** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BufferU5BU5D_t3404391404* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2341780519_H
#ifndef LIST_1_T2254695417_H
#define LIST_1_T2254695417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Image>
struct  List_1_t2254695417  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImageU5BU5D_t562016402* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____items_1)); }
	inline ImageU5BU5D_t562016402* get__items_1() const { return ____items_1; }
	inline ImageU5BU5D_t562016402** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImageU5BU5D_t562016402* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2254695417_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImageU5BU5D_t562016402* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2254695417_StaticFields, ____emptyArray_5)); }
	inline ImageU5BU5D_t562016402* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImageU5BU5D_t562016402** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImageU5BU5D_t562016402* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2254695417_H
#ifndef LIST_1_T4262593585_H
#define LIST_1_T4262593585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Material>
struct  List_1_t4262593585  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t1970395258* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____items_1)); }
	inline MaterialU5BU5D_t1970395258* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t1970395258** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t1970395258* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4262593585_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t1970395258* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4262593585_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t1970395258* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t1970395258** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t1970395258* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4262593585_H
#ifndef LIST_1_T4198337971_H
#define LIST_1_T4198337971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Mesh>
struct  List_1_t4198337971  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshU5BU5D_t1017691824* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____items_1)); }
	inline MeshU5BU5D_t1017691824* get__items_1() const { return ____items_1; }
	inline MeshU5BU5D_t1017691824** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshU5BU5D_t1017691824* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4198337971_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshU5BU5D_t1017691824* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4198337971_StaticFields, ____emptyArray_5)); }
	inline MeshU5BU5D_t1017691824* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshU5BU5D_t1017691824** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshU5BU5D_t1017691824* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4198337971_H
#ifndef LIST_1_T3427735747_H
#define LIST_1_T3427735747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Scene>
struct  List_1_t3427735747  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneU5BU5D_t2571818336* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____items_1)); }
	inline SceneU5BU5D_t2571818336* get__items_1() const { return ____items_1; }
	inline SceneU5BU5D_t2571818336** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneU5BU5D_t2571818336* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3427735747_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneU5BU5D_t2571818336* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3427735747_StaticFields, ____emptyArray_5)); }
	inline SceneU5BU5D_t2571818336* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneU5BU5D_t2571818336** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneU5BU5D_t2571818336* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3427735747_H
#ifndef LIST_1_T2284271573_H
#define LIST_1_T2284271573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Texture>
struct  List_1_t2284271573  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextureU5BU5D_t1584057798* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____items_1)); }
	inline TextureU5BU5D_t1584057798* get__items_1() const { return ____items_1; }
	inline TextureU5BU5D_t1584057798** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextureU5BU5D_t1584057798* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2284271573_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextureU5BU5D_t1584057798* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2284271573_StaticFields, ____emptyArray_5)); }
	inline TextureU5BU5D_t1584057798* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextureU5BU5D_t1584057798** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextureU5BU5D_t1584057798* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2284271573_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CAPTURE_T2232016050_H
#define CAPTURE_T2232016050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t2232016050  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((&____text_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T2232016050_H
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
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef ASYNCACTION_T3334821446_H
#define ASYNCACTION_T3334821446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.AsyncAction
struct  AsyncAction_t3334821446  : public RuntimeObject
{
public:
	// System.Boolean UnityGLTF.AsyncAction::_workerThreadRunning
	bool ____workerThreadRunning_0;
	// System.Exception UnityGLTF.AsyncAction::_savedException
	Exception_t * ____savedException_1;

public:
	inline static int32_t get_offset_of__workerThreadRunning_0() { return static_cast<int32_t>(offsetof(AsyncAction_t3334821446, ____workerThreadRunning_0)); }
	inline bool get__workerThreadRunning_0() const { return ____workerThreadRunning_0; }
	inline bool* get_address_of__workerThreadRunning_0() { return &____workerThreadRunning_0; }
	inline void set__workerThreadRunning_0(bool value)
	{
		____workerThreadRunning_0 = value;
	}

	inline static int32_t get_offset_of__savedException_1() { return static_cast<int32_t>(offsetof(AsyncAction_t3334821446, ____savedException_1)); }
	inline Exception_t * get__savedException_1() const { return ____savedException_1; }
	inline Exception_t ** get_address_of__savedException_1() { return &____savedException_1; }
	inline void set__savedException_1(Exception_t * value)
	{
		____savedException_1 = value;
		Il2CppCodeGenWriteBarrier((&____savedException_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCACTION_T3334821446_H
#ifndef ASSETCACHE_T783611398_H
#define ASSETCACHE_T783611398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.AssetCache
struct  AssetCache_t783611398  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D[] UnityGLTF.Cache.AssetCache::<ImageCache>k__BackingField
	Texture2DU5BU5D_t149664596* ___U3CImageCacheU3Ek__BackingField_0;
	// UnityEngine.Texture[] UnityGLTF.Cache.AssetCache::<TextureCache>k__BackingField
	TextureU5BU5D_t908295702* ___U3CTextureCacheU3Ek__BackingField_1;
	// UnityGLTF.Cache.MaterialCacheData[] UnityGLTF.Cache.AssetCache::<MaterialCache>k__BackingField
	MaterialCacheDataU5BU5D_t484490365* ___U3CMaterialCacheU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData> UnityGLTF.Cache.AssetCache::<BufferCache>k__BackingField
	Dictionary_2_t3293772351 * ___U3CBufferCacheU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]> UnityGLTF.Cache.AssetCache::<MeshCache>k__BackingField
	List_1_t695246165 * ___U3CMeshCacheU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CImageCacheU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CImageCacheU3Ek__BackingField_0)); }
	inline Texture2DU5BU5D_t149664596* get_U3CImageCacheU3Ek__BackingField_0() const { return ___U3CImageCacheU3Ek__BackingField_0; }
	inline Texture2DU5BU5D_t149664596** get_address_of_U3CImageCacheU3Ek__BackingField_0() { return &___U3CImageCacheU3Ek__BackingField_0; }
	inline void set_U3CImageCacheU3Ek__BackingField_0(Texture2DU5BU5D_t149664596* value)
	{
		___U3CImageCacheU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CImageCacheU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTextureCacheU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CTextureCacheU3Ek__BackingField_1)); }
	inline TextureU5BU5D_t908295702* get_U3CTextureCacheU3Ek__BackingField_1() const { return ___U3CTextureCacheU3Ek__BackingField_1; }
	inline TextureU5BU5D_t908295702** get_address_of_U3CTextureCacheU3Ek__BackingField_1() { return &___U3CTextureCacheU3Ek__BackingField_1; }
	inline void set_U3CTextureCacheU3Ek__BackingField_1(TextureU5BU5D_t908295702* value)
	{
		___U3CTextureCacheU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextureCacheU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CMaterialCacheU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CMaterialCacheU3Ek__BackingField_2)); }
	inline MaterialCacheDataU5BU5D_t484490365* get_U3CMaterialCacheU3Ek__BackingField_2() const { return ___U3CMaterialCacheU3Ek__BackingField_2; }
	inline MaterialCacheDataU5BU5D_t484490365** get_address_of_U3CMaterialCacheU3Ek__BackingField_2() { return &___U3CMaterialCacheU3Ek__BackingField_2; }
	inline void set_U3CMaterialCacheU3Ek__BackingField_2(MaterialCacheDataU5BU5D_t484490365* value)
	{
		___U3CMaterialCacheU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMaterialCacheU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBufferCacheU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CBufferCacheU3Ek__BackingField_3)); }
	inline Dictionary_2_t3293772351 * get_U3CBufferCacheU3Ek__BackingField_3() const { return ___U3CBufferCacheU3Ek__BackingField_3; }
	inline Dictionary_2_t3293772351 ** get_address_of_U3CBufferCacheU3Ek__BackingField_3() { return &___U3CBufferCacheU3Ek__BackingField_3; }
	inline void set_U3CBufferCacheU3Ek__BackingField_3(Dictionary_2_t3293772351 * value)
	{
		___U3CBufferCacheU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBufferCacheU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CMeshCacheU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CMeshCacheU3Ek__BackingField_4)); }
	inline List_1_t695246165 * get_U3CMeshCacheU3Ek__BackingField_4() const { return ___U3CMeshCacheU3Ek__BackingField_4; }
	inline List_1_t695246165 ** get_address_of_U3CMeshCacheU3Ek__BackingField_4() { return &___U3CMeshCacheU3Ek__BackingField_4; }
	inline void set_U3CMeshCacheU3Ek__BackingField_4(List_1_t695246165 * value)
	{
		___U3CMeshCacheU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMeshCacheU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETCACHE_T783611398_H
#ifndef BUFFERCACHEDATA_T110091724_H
#define BUFFERCACHEDATA_T110091724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.BufferCacheData
struct  BufferCacheData_t110091724  : public RuntimeObject
{
public:
	// System.Int64 UnityGLTF.Cache.BufferCacheData::<ChunkOffset>k__BackingField
	int64_t ___U3CChunkOffsetU3Ek__BackingField_0;
	// System.IO.Stream UnityGLTF.Cache.BufferCacheData::<Stream>k__BackingField
	Stream_t1273022909 * ___U3CStreamU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CChunkOffsetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BufferCacheData_t110091724, ___U3CChunkOffsetU3Ek__BackingField_0)); }
	inline int64_t get_U3CChunkOffsetU3Ek__BackingField_0() const { return ___U3CChunkOffsetU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CChunkOffsetU3Ek__BackingField_0() { return &___U3CChunkOffsetU3Ek__BackingField_0; }
	inline void set_U3CChunkOffsetU3Ek__BackingField_0(int64_t value)
	{
		___U3CChunkOffsetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BufferCacheData_t110091724, ___U3CStreamU3Ek__BackingField_1)); }
	inline Stream_t1273022909 * get_U3CStreamU3Ek__BackingField_1() const { return ___U3CStreamU3Ek__BackingField_1; }
	inline Stream_t1273022909 ** get_address_of_U3CStreamU3Ek__BackingField_1() { return &___U3CStreamU3Ek__BackingField_1; }
	inline void set_U3CStreamU3Ek__BackingField_1(Stream_t1273022909 * value)
	{
		___U3CStreamU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStreamU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERCACHEDATA_T110091724_H
#ifndef U3CIMPORTSCENEU3ED__22_T599600113_H
#define U3CIMPORTSCENEU3ED__22_T599600113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<ImportScene>d__22
struct  U3CImportSceneU3Ed__22_t599600113  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::sceneIndex
	int32_t ___sceneIndex_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_3;
	// System.Boolean UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::isMultithreaded
	bool ___isMultithreaded_4;
	// GLTF.Schema.Scene UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<scene>5__2
	Scene_t1955661005 * ___U3CsceneU3E5__2_5;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<i>5__3
	int32_t ___U3CiU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_isMultithreaded_4() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___isMultithreaded_4)); }
	inline bool get_isMultithreaded_4() const { return ___isMultithreaded_4; }
	inline bool* get_address_of_isMultithreaded_4() { return &___isMultithreaded_4; }
	inline void set_isMultithreaded_4(bool value)
	{
		___isMultithreaded_4 = value;
	}

	inline static int32_t get_offset_of_U3CsceneU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CsceneU3E5__2_5)); }
	inline Scene_t1955661005 * get_U3CsceneU3E5__2_5() const { return ___U3CsceneU3E5__2_5; }
	inline Scene_t1955661005 ** get_address_of_U3CsceneU3E5__2_5() { return &___U3CsceneU3E5__2_5; }
	inline void set_U3CsceneU3E5__2_5(Scene_t1955661005 * value)
	{
		___U3CsceneU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsceneU3E5__2_5), value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CiU3E5__3_6)); }
	inline int32_t get_U3CiU3E5__3_6() const { return ___U3CiU3E5__3_6; }
	inline int32_t* get_address_of_U3CiU3E5__3_6() { return &___U3CiU3E5__3_6; }
	inline void set_U3CiU3E5__3_6(int32_t value)
	{
		___U3CiU3E5__3_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIMPORTSCENEU3ED__22_T599600113_H
#ifndef U3CLOADU3ED__21_T2072795234_H
#define U3CLOADU3ED__21_T2072795234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<Load>d__21
struct  U3CLoadU3Ed__21_t2072795234  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<Load>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<Load>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<Load>d__21::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<Load>d__21::sceneIndex
	int32_t ___sceneIndex_3;
	// System.Boolean UnityGLTF.GLTFSceneImporter/<Load>d__21::isMultithreaded
	bool ___isMultithreaded_4;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter/<Load>d__21::<www>5__2
	UnityWebRequest_t463507806 * ___U3CwwwU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_sceneIndex_3() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___sceneIndex_3)); }
	inline int32_t get_sceneIndex_3() const { return ___sceneIndex_3; }
	inline int32_t* get_address_of_sceneIndex_3() { return &___sceneIndex_3; }
	inline void set_sceneIndex_3(int32_t value)
	{
		___sceneIndex_3 = value;
	}

	inline static int32_t get_offset_of_isMultithreaded_4() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___isMultithreaded_4)); }
	inline bool get_isMultithreaded_4() const { return ___isMultithreaded_4; }
	inline bool* get_address_of_isMultithreaded_4() { return &___isMultithreaded_4; }
	inline void set_isMultithreaded_4(bool value)
	{
		___isMultithreaded_4 = value;
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CwwwU3E5__2_5)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E5__2_5() const { return ___U3CwwwU3E5__2_5; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E5__2_5() { return &___U3CwwwU3E5__2_5; }
	inline void set_U3CwwwU3E5__2_5(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__2_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADU3ED__21_T2072795234_H
#ifndef U3CLOADBUFFERU3ED__35_T2608884095_H
#define U3CLOADBUFFERU3ED__35_T2608884095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35
struct  U3CLoadBufferU3Ed__35_t2608884095  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GLTF.Schema.Buffer UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::buffer
	Buffer_t869705777 * ___buffer_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_3;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::sourceUri
	String_t* ___sourceUri_4;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::bufferIndex
	int32_t ___bufferIndex_5;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<uri>5__2
	String_t* ___U3CuriU3E5__2_6;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<www>5__3
	UnityWebRequest_t463507806 * ___U3CwwwU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___buffer_2)); }
	inline Buffer_t869705777 * get_buffer_2() const { return ___buffer_2; }
	inline Buffer_t869705777 ** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(Buffer_t869705777 * value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_sourceUri_4() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___sourceUri_4)); }
	inline String_t* get_sourceUri_4() const { return ___sourceUri_4; }
	inline String_t** get_address_of_sourceUri_4() { return &___sourceUri_4; }
	inline void set_sourceUri_4(String_t* value)
	{
		___sourceUri_4 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_4), value);
	}

	inline static int32_t get_offset_of_bufferIndex_5() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___bufferIndex_5)); }
	inline int32_t get_bufferIndex_5() const { return ___bufferIndex_5; }
	inline int32_t* get_address_of_bufferIndex_5() { return &___bufferIndex_5; }
	inline void set_bufferIndex_5(int32_t value)
	{
		___bufferIndex_5 = value;
	}

	inline static int32_t get_offset_of_U3CuriU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CuriU3E5__2_6)); }
	inline String_t* get_U3CuriU3E5__2_6() const { return ___U3CuriU3E5__2_6; }
	inline String_t** get_address_of_U3CuriU3E5__2_6() { return &___U3CuriU3E5__2_6; }
	inline void set_U3CuriU3E5__2_6(String_t* value)
	{
		___U3CuriU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuriU3E5__2_6), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CwwwU3E5__3_7)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E5__3_7() const { return ___U3CwwwU3E5__3_7; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E5__3_7() { return &___U3CwwwU3E5__3_7; }
	inline void set_U3CwwwU3E5__3_7(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__3_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADBUFFERU3ED__35_T2608884095_H
#ifndef U3CLOADIMAGEU3ED__34_T347840408_H
#define U3CLOADIMAGEU3ED__34_T347840408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<LoadImage>d__34
struct  U3CLoadImageU3Ed__34_t347840408  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::imageID
	int32_t ___imageID_3;
	// GLTF.Schema.Image UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::image
	Image_t782620675 * ___image_4;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::rootPath
	String_t* ___rootPath_5;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<uri>5__2
	String_t* ___U3CuriU3E5__2_6;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<www>5__3
	UnityWebRequest_t463507806 * ___U3CwwwU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_imageID_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___imageID_3)); }
	inline int32_t get_imageID_3() const { return ___imageID_3; }
	inline int32_t* get_address_of_imageID_3() { return &___imageID_3; }
	inline void set_imageID_3(int32_t value)
	{
		___imageID_3 = value;
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___image_4)); }
	inline Image_t782620675 * get_image_4() const { return ___image_4; }
	inline Image_t782620675 ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Image_t782620675 * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((&___image_4), value);
	}

	inline static int32_t get_offset_of_rootPath_5() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___rootPath_5)); }
	inline String_t* get_rootPath_5() const { return ___rootPath_5; }
	inline String_t** get_address_of_rootPath_5() { return &___rootPath_5; }
	inline void set_rootPath_5(String_t* value)
	{
		___rootPath_5 = value;
		Il2CppCodeGenWriteBarrier((&___rootPath_5), value);
	}

	inline static int32_t get_offset_of_U3CuriU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CuriU3E5__2_6)); }
	inline String_t* get_U3CuriU3E5__2_6() const { return ___U3CuriU3E5__2_6; }
	inline String_t** get_address_of_U3CuriU3E5__2_6() { return &___U3CuriU3E5__2_6; }
	inline void set_U3CuriU3E5__2_6(String_t* value)
	{
		___U3CuriU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuriU3E5__2_6), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CwwwU3E5__3_7)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E5__3_7() const { return ___U3CwwwU3E5__3_7; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E5__3_7() { return &___U3CwwwU3E5__3_7; }
	inline void set_U3CwwwU3E5__3_7(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__3_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADIMAGEU3ED__34_T347840408_H
#ifndef BUFFERID_T2787902107_H
#define BUFFERID_T2787902107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferId
struct  BufferId_t2787902107  : public GLTFId_1_t1070037637
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERID_T2787902107_H
#ifndef BUFFERVIEWID_T4185270750_H
#define BUFFERVIEWID_T4185270750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferViewId
struct  BufferViewId_t4185270750  : public GLTFId_1_t2850430986
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEWID_T4185270750_H
#ifndef GLTFCHILDOFROOTPROPERTY_T1666645821_H
#define GLTFCHILDOFROOTPROPERTY_T1666645821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFChildOfRootProperty
struct  GLTFChildOfRootProperty_t1666645821  : public GLTFProperty_t1589224293
{
public:
	// System.String GLTF.Schema.GLTFChildOfRootProperty::Name
	String_t* ___Name_6;

public:
	inline static int32_t get_offset_of_Name_6() { return static_cast<int32_t>(offsetof(GLTFChildOfRootProperty_t1666645821, ___Name_6)); }
	inline String_t* get_Name_6() const { return ___Name_6; }
	inline String_t** get_address_of_Name_6() { return &___Name_6; }
	inline void set_Name_6(String_t* value)
	{
		___Name_6 = value;
		Il2CppCodeGenWriteBarrier((&___Name_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFCHILDOFROOTPROPERTY_T1666645821_H
#ifndef GLTFROOT_T676886847_H
#define GLTFROOT_T676886847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFRoot
struct  GLTFRoot_t676886847  : public GLTFProperty_t1589224293
{
public:
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsUsed
	List_1_t3319525431 * ___ExtensionsUsed_6;
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsRequired
	List_1_t3319525431 * ___ExtensionsRequired_7;
	// System.Collections.Generic.List`1<GLTF.Schema.Accessor> GLTF.Schema.GLTFRoot::Accessors
	List_1_t3133863255 * ___Accessors_8;
	// System.Collections.Generic.List`1<GLTF.Schema.Animation> GLTF.Schema.GLTFRoot::Animations
	List_1_t2745658046 * ___Animations_9;
	// GLTF.Schema.Asset GLTF.Schema.GLTFRoot::Asset
	Asset_t4292491636 * ___Asset_10;
	// System.Collections.Generic.List`1<GLTF.Schema.Buffer> GLTF.Schema.GLTFRoot::Buffers
	List_1_t2341780519 * ___Buffers_11;
	// System.Collections.Generic.List`1<GLTF.Schema.BufferView> GLTF.Schema.GLTFRoot::BufferViews
	List_1_t4122173868 * ___BufferViews_12;
	// System.Collections.Generic.List`1<GLTF.Schema.Camera> GLTF.Schema.GLTFRoot::Cameras
	List_1_t3496179184 * ___Cameras_13;
	// System.Collections.Generic.List`1<GLTF.Schema.Image> GLTF.Schema.GLTFRoot::Images
	List_1_t2254695417 * ___Images_14;
	// System.Collections.Generic.List`1<GLTF.Schema.Material> GLTF.Schema.GLTFRoot::Materials
	List_1_t4262593585 * ___Materials_15;
	// System.Collections.Generic.List`1<GLTF.Schema.Mesh> GLTF.Schema.GLTFRoot::Meshes
	List_1_t4198337971 * ___Meshes_16;
	// System.Collections.Generic.List`1<GLTF.Schema.Node> GLTF.Schema.GLTFRoot::Nodes
	List_1_t1167779375 * ___Nodes_17;
	// System.Collections.Generic.List`1<GLTF.Schema.Sampler> GLTF.Schema.GLTFRoot::Samplers
	List_1_t2951094649 * ___Samplers_18;
	// GLTF.Schema.SceneId GLTF.Schema.GLTFRoot::Scene
	SceneId_t3402743638 * ___Scene_19;
	// System.Collections.Generic.List`1<GLTF.Schema.Scene> GLTF.Schema.GLTFRoot::Scenes
	List_1_t3427735747 * ___Scenes_20;
	// System.Collections.Generic.List`1<GLTF.Schema.Skin> GLTF.Schema.GLTFRoot::Skins
	List_1_t1143834715 * ___Skins_21;
	// System.Collections.Generic.List`1<GLTF.Schema.Texture> GLTF.Schema.GLTFRoot::Textures
	List_1_t2284271573 * ___Textures_22;

public:
	inline static int32_t get_offset_of_ExtensionsUsed_6() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___ExtensionsUsed_6)); }
	inline List_1_t3319525431 * get_ExtensionsUsed_6() const { return ___ExtensionsUsed_6; }
	inline List_1_t3319525431 ** get_address_of_ExtensionsUsed_6() { return &___ExtensionsUsed_6; }
	inline void set_ExtensionsUsed_6(List_1_t3319525431 * value)
	{
		___ExtensionsUsed_6 = value;
		Il2CppCodeGenWriteBarrier((&___ExtensionsUsed_6), value);
	}

	inline static int32_t get_offset_of_ExtensionsRequired_7() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___ExtensionsRequired_7)); }
	inline List_1_t3319525431 * get_ExtensionsRequired_7() const { return ___ExtensionsRequired_7; }
	inline List_1_t3319525431 ** get_address_of_ExtensionsRequired_7() { return &___ExtensionsRequired_7; }
	inline void set_ExtensionsRequired_7(List_1_t3319525431 * value)
	{
		___ExtensionsRequired_7 = value;
		Il2CppCodeGenWriteBarrier((&___ExtensionsRequired_7), value);
	}

	inline static int32_t get_offset_of_Accessors_8() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Accessors_8)); }
	inline List_1_t3133863255 * get_Accessors_8() const { return ___Accessors_8; }
	inline List_1_t3133863255 ** get_address_of_Accessors_8() { return &___Accessors_8; }
	inline void set_Accessors_8(List_1_t3133863255 * value)
	{
		___Accessors_8 = value;
		Il2CppCodeGenWriteBarrier((&___Accessors_8), value);
	}

	inline static int32_t get_offset_of_Animations_9() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Animations_9)); }
	inline List_1_t2745658046 * get_Animations_9() const { return ___Animations_9; }
	inline List_1_t2745658046 ** get_address_of_Animations_9() { return &___Animations_9; }
	inline void set_Animations_9(List_1_t2745658046 * value)
	{
		___Animations_9 = value;
		Il2CppCodeGenWriteBarrier((&___Animations_9), value);
	}

	inline static int32_t get_offset_of_Asset_10() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Asset_10)); }
	inline Asset_t4292491636 * get_Asset_10() const { return ___Asset_10; }
	inline Asset_t4292491636 ** get_address_of_Asset_10() { return &___Asset_10; }
	inline void set_Asset_10(Asset_t4292491636 * value)
	{
		___Asset_10 = value;
		Il2CppCodeGenWriteBarrier((&___Asset_10), value);
	}

	inline static int32_t get_offset_of_Buffers_11() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Buffers_11)); }
	inline List_1_t2341780519 * get_Buffers_11() const { return ___Buffers_11; }
	inline List_1_t2341780519 ** get_address_of_Buffers_11() { return &___Buffers_11; }
	inline void set_Buffers_11(List_1_t2341780519 * value)
	{
		___Buffers_11 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_11), value);
	}

	inline static int32_t get_offset_of_BufferViews_12() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___BufferViews_12)); }
	inline List_1_t4122173868 * get_BufferViews_12() const { return ___BufferViews_12; }
	inline List_1_t4122173868 ** get_address_of_BufferViews_12() { return &___BufferViews_12; }
	inline void set_BufferViews_12(List_1_t4122173868 * value)
	{
		___BufferViews_12 = value;
		Il2CppCodeGenWriteBarrier((&___BufferViews_12), value);
	}

	inline static int32_t get_offset_of_Cameras_13() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Cameras_13)); }
	inline List_1_t3496179184 * get_Cameras_13() const { return ___Cameras_13; }
	inline List_1_t3496179184 ** get_address_of_Cameras_13() { return &___Cameras_13; }
	inline void set_Cameras_13(List_1_t3496179184 * value)
	{
		___Cameras_13 = value;
		Il2CppCodeGenWriteBarrier((&___Cameras_13), value);
	}

	inline static int32_t get_offset_of_Images_14() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Images_14)); }
	inline List_1_t2254695417 * get_Images_14() const { return ___Images_14; }
	inline List_1_t2254695417 ** get_address_of_Images_14() { return &___Images_14; }
	inline void set_Images_14(List_1_t2254695417 * value)
	{
		___Images_14 = value;
		Il2CppCodeGenWriteBarrier((&___Images_14), value);
	}

	inline static int32_t get_offset_of_Materials_15() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Materials_15)); }
	inline List_1_t4262593585 * get_Materials_15() const { return ___Materials_15; }
	inline List_1_t4262593585 ** get_address_of_Materials_15() { return &___Materials_15; }
	inline void set_Materials_15(List_1_t4262593585 * value)
	{
		___Materials_15 = value;
		Il2CppCodeGenWriteBarrier((&___Materials_15), value);
	}

	inline static int32_t get_offset_of_Meshes_16() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Meshes_16)); }
	inline List_1_t4198337971 * get_Meshes_16() const { return ___Meshes_16; }
	inline List_1_t4198337971 ** get_address_of_Meshes_16() { return &___Meshes_16; }
	inline void set_Meshes_16(List_1_t4198337971 * value)
	{
		___Meshes_16 = value;
		Il2CppCodeGenWriteBarrier((&___Meshes_16), value);
	}

	inline static int32_t get_offset_of_Nodes_17() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Nodes_17)); }
	inline List_1_t1167779375 * get_Nodes_17() const { return ___Nodes_17; }
	inline List_1_t1167779375 ** get_address_of_Nodes_17() { return &___Nodes_17; }
	inline void set_Nodes_17(List_1_t1167779375 * value)
	{
		___Nodes_17 = value;
		Il2CppCodeGenWriteBarrier((&___Nodes_17), value);
	}

	inline static int32_t get_offset_of_Samplers_18() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Samplers_18)); }
	inline List_1_t2951094649 * get_Samplers_18() const { return ___Samplers_18; }
	inline List_1_t2951094649 ** get_address_of_Samplers_18() { return &___Samplers_18; }
	inline void set_Samplers_18(List_1_t2951094649 * value)
	{
		___Samplers_18 = value;
		Il2CppCodeGenWriteBarrier((&___Samplers_18), value);
	}

	inline static int32_t get_offset_of_Scene_19() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Scene_19)); }
	inline SceneId_t3402743638 * get_Scene_19() const { return ___Scene_19; }
	inline SceneId_t3402743638 ** get_address_of_Scene_19() { return &___Scene_19; }
	inline void set_Scene_19(SceneId_t3402743638 * value)
	{
		___Scene_19 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_19), value);
	}

	inline static int32_t get_offset_of_Scenes_20() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Scenes_20)); }
	inline List_1_t3427735747 * get_Scenes_20() const { return ___Scenes_20; }
	inline List_1_t3427735747 ** get_address_of_Scenes_20() { return &___Scenes_20; }
	inline void set_Scenes_20(List_1_t3427735747 * value)
	{
		___Scenes_20 = value;
		Il2CppCodeGenWriteBarrier((&___Scenes_20), value);
	}

	inline static int32_t get_offset_of_Skins_21() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Skins_21)); }
	inline List_1_t1143834715 * get_Skins_21() const { return ___Skins_21; }
	inline List_1_t1143834715 ** get_address_of_Skins_21() { return &___Skins_21; }
	inline void set_Skins_21(List_1_t1143834715 * value)
	{
		___Skins_21 = value;
		Il2CppCodeGenWriteBarrier((&___Skins_21), value);
	}

	inline static int32_t get_offset_of_Textures_22() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Textures_22)); }
	inline List_1_t2284271573 * get_Textures_22() const { return ___Textures_22; }
	inline List_1_t2284271573 ** get_address_of_Textures_22() { return &___Textures_22; }
	inline void set_Textures_22(List_1_t2284271573 * value)
	{
		___Textures_22 = value;
		Il2CppCodeGenWriteBarrier((&___Textures_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFROOT_T676886847_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef GROUP_T2468205786_H
#define GROUP_T2468205786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t2468205786  : public Capture_t2232016050
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t385246372* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_t2468205786, ____caps_4)); }
	inline Int32U5BU5D_t385246372* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t385246372** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t385246372* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((&____caps_4), value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_t2468205786, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(Group_t2468205786, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((&____name_6), value);
	}
};

struct Group_t2468205786_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_t2468205786 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_t2468205786_StaticFields, ____emptygroup_3)); }
	inline Group_t2468205786 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_t2468205786 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_t2468205786 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((&____emptygroup_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2468205786_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef GLBSTREAM_T3327861285_H
#define GLBSTREAM_T3327861285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/GLBStream
struct  GLBStream_t3327861285 
{
public:
	// System.IO.Stream UnityGLTF.GLTFSceneImporter/GLBStream::Stream
	Stream_t1273022909 * ___Stream_0;
	// System.Int64 UnityGLTF.GLTFSceneImporter/GLBStream::StartPosition
	int64_t ___StartPosition_1;

public:
	inline static int32_t get_offset_of_Stream_0() { return static_cast<int32_t>(offsetof(GLBStream_t3327861285, ___Stream_0)); }
	inline Stream_t1273022909 * get_Stream_0() const { return ___Stream_0; }
	inline Stream_t1273022909 ** get_address_of_Stream_0() { return &___Stream_0; }
	inline void set_Stream_0(Stream_t1273022909 * value)
	{
		___Stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___Stream_0), value);
	}

	inline static int32_t get_offset_of_StartPosition_1() { return static_cast<int32_t>(offsetof(GLBStream_t3327861285, ___StartPosition_1)); }
	inline int64_t get_StartPosition_1() const { return ___StartPosition_1; }
	inline int64_t* get_address_of_StartPosition_1() { return &___StartPosition_1; }
	inline void set_StartPosition_1(int64_t value)
	{
		___StartPosition_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t3327861285_marshaled_pinvoke
{
	Stream_t1273022909 * ___Stream_0;
	int64_t ___StartPosition_1;
};
// Native definition for COM marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t3327861285_marshaled_com
{
	Stream_t1273022909 * ___Stream_0;
	int64_t ___StartPosition_1;
};
#endif // GLBSTREAM_T3327861285_H
#ifndef WEBREQUESTEXCEPTION_T1410780468_H
#define WEBREQUESTEXCEPTION_T1410780468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.WebRequestException
struct  WebRequestException_t1410780468  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTEXCEPTION_T1410780468_H
#ifndef BUFFER_T869705777_H
#define BUFFER_T869705777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Buffer
struct  Buffer_t869705777  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.String GLTF.Schema.Buffer::Uri
	String_t* ___Uri_7;
	// System.Int32 GLTF.Schema.Buffer::ByteLength
	int32_t ___ByteLength_8;

public:
	inline static int32_t get_offset_of_Uri_7() { return static_cast<int32_t>(offsetof(Buffer_t869705777, ___Uri_7)); }
	inline String_t* get_Uri_7() const { return ___Uri_7; }
	inline String_t** get_address_of_Uri_7() { return &___Uri_7; }
	inline void set_Uri_7(String_t* value)
	{
		___Uri_7 = value;
		Il2CppCodeGenWriteBarrier((&___Uri_7), value);
	}

	inline static int32_t get_offset_of_ByteLength_8() { return static_cast<int32_t>(offsetof(Buffer_t869705777, ___ByteLength_8)); }
	inline int32_t get_ByteLength_8() const { return ___ByteLength_8; }
	inline int32_t* get_address_of_ByteLength_8() { return &___ByteLength_8; }
	inline void set_ByteLength_8(int32_t value)
	{
		___ByteLength_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T869705777_H
#ifndef BUFFERVIEWTARGET_T70817647_H
#define BUFFERVIEWTARGET_T70817647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferViewTarget
struct  BufferViewTarget_t70817647 
{
public:
	// System.Int32 GLTF.Schema.BufferViewTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BufferViewTarget_t70817647, ___value___2)); }
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
#endif // BUFFERVIEWTARGET_T70817647_H
#ifndef IMAGE_T782620675_H
#define IMAGE_T782620675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Image
struct  Image_t782620675  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.String GLTF.Schema.Image::Uri
	String_t* ___Uri_7;
	// System.String GLTF.Schema.Image::MimeType
	String_t* ___MimeType_8;
	// GLTF.Schema.BufferViewId GLTF.Schema.Image::BufferView
	BufferViewId_t4185270750 * ___BufferView_9;

public:
	inline static int32_t get_offset_of_Uri_7() { return static_cast<int32_t>(offsetof(Image_t782620675, ___Uri_7)); }
	inline String_t* get_Uri_7() const { return ___Uri_7; }
	inline String_t** get_address_of_Uri_7() { return &___Uri_7; }
	inline void set_Uri_7(String_t* value)
	{
		___Uri_7 = value;
		Il2CppCodeGenWriteBarrier((&___Uri_7), value);
	}

	inline static int32_t get_offset_of_MimeType_8() { return static_cast<int32_t>(offsetof(Image_t782620675, ___MimeType_8)); }
	inline String_t* get_MimeType_8() const { return ___MimeType_8; }
	inline String_t** get_address_of_MimeType_8() { return &___MimeType_8; }
	inline void set_MimeType_8(String_t* value)
	{
		___MimeType_8 = value;
		Il2CppCodeGenWriteBarrier((&___MimeType_8), value);
	}

	inline static int32_t get_offset_of_BufferView_9() { return static_cast<int32_t>(offsetof(Image_t782620675, ___BufferView_9)); }
	inline BufferViewId_t4185270750 * get_BufferView_9() const { return ___BufferView_9; }
	inline BufferViewId_t4185270750 ** get_address_of_BufferView_9() { return &___BufferView_9; }
	inline void set_BufferView_9(BufferViewId_t4185270750 * value)
	{
		___BufferView_9 = value;
		Il2CppCodeGenWriteBarrier((&___BufferView_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T782620675_H
#ifndef SCENE_T1955661005_H
#define SCENE_T1955661005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Scene
struct  Scene_t1955661005  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.Collections.Generic.List`1<GLTF.Schema.NodeId> GLTF.Schema.Scene::Nodes
	List_1_t1111139301 * ___Nodes_7;

public:
	inline static int32_t get_offset_of_Nodes_7() { return static_cast<int32_t>(offsetof(Scene_t1955661005, ___Nodes_7)); }
	inline List_1_t1111139301 * get_Nodes_7() const { return ___Nodes_7; }
	inline List_1_t1111139301 ** get_address_of_Nodes_7() { return &___Nodes_7; }
	inline void set_Nodes_7(List_1_t1111139301 * value)
	{
		___Nodes_7 = value;
		Il2CppCodeGenWriteBarrier((&___Nodes_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T1955661005_H
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
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___2)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t61518632 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____lastReadTask_13)); }
	inline Task_1_t61518632 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t61518632 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t61518632 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef MATCH_T3408321083_H
#define MATCH_T3408321083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t3408321083  : public Group_t2468205786
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_t69770484 * ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_t3657309853 * ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t3365920845* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t385246372* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;

public:
	inline static int32_t get_offset_of__groupcoll_8() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____groupcoll_8)); }
	inline GroupCollection_t69770484 * get__groupcoll_8() const { return ____groupcoll_8; }
	inline GroupCollection_t69770484 ** get_address_of__groupcoll_8() { return &____groupcoll_8; }
	inline void set__groupcoll_8(GroupCollection_t69770484 * value)
	{
		____groupcoll_8 = value;
		Il2CppCodeGenWriteBarrier((&____groupcoll_8), value);
	}

	inline static int32_t get_offset_of__regex_9() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____regex_9)); }
	inline Regex_t3657309853 * get__regex_9() const { return ____regex_9; }
	inline Regex_t3657309853 ** get_address_of__regex_9() { return &____regex_9; }
	inline void set__regex_9(Regex_t3657309853 * value)
	{
		____regex_9 = value;
		Il2CppCodeGenWriteBarrier((&____regex_9), value);
	}

	inline static int32_t get_offset_of__textbeg_10() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textbeg_10)); }
	inline int32_t get__textbeg_10() const { return ____textbeg_10; }
	inline int32_t* get_address_of__textbeg_10() { return &____textbeg_10; }
	inline void set__textbeg_10(int32_t value)
	{
		____textbeg_10 = value;
	}

	inline static int32_t get_offset_of__textpos_11() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textpos_11)); }
	inline int32_t get__textpos_11() const { return ____textpos_11; }
	inline int32_t* get_address_of__textpos_11() { return &____textpos_11; }
	inline void set__textpos_11(int32_t value)
	{
		____textpos_11 = value;
	}

	inline static int32_t get_offset_of__textend_12() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textend_12)); }
	inline int32_t get__textend_12() const { return ____textend_12; }
	inline int32_t* get_address_of__textend_12() { return &____textend_12; }
	inline void set__textend_12(int32_t value)
	{
		____textend_12 = value;
	}

	inline static int32_t get_offset_of__textstart_13() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textstart_13)); }
	inline int32_t get__textstart_13() const { return ____textstart_13; }
	inline int32_t* get_address_of__textstart_13() { return &____textstart_13; }
	inline void set__textstart_13(int32_t value)
	{
		____textstart_13 = value;
	}

	inline static int32_t get_offset_of__matches_14() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____matches_14)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get__matches_14() const { return ____matches_14; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of__matches_14() { return &____matches_14; }
	inline void set__matches_14(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		____matches_14 = value;
		Il2CppCodeGenWriteBarrier((&____matches_14), value);
	}

	inline static int32_t get_offset_of__matchcount_15() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____matchcount_15)); }
	inline Int32U5BU5D_t385246372* get__matchcount_15() const { return ____matchcount_15; }
	inline Int32U5BU5D_t385246372** get_address_of__matchcount_15() { return &____matchcount_15; }
	inline void set__matchcount_15(Int32U5BU5D_t385246372* value)
	{
		____matchcount_15 = value;
		Il2CppCodeGenWriteBarrier((&____matchcount_15), value);
	}

	inline static int32_t get_offset_of__balancing_16() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____balancing_16)); }
	inline bool get__balancing_16() const { return ____balancing_16; }
	inline bool* get_address_of__balancing_16() { return &____balancing_16; }
	inline void set__balancing_16(bool value)
	{
		____balancing_16 = value;
	}
};

struct Match_t3408321083_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_t3408321083 * ____empty_7;

public:
	inline static int32_t get_offset_of__empty_7() { return static_cast<int32_t>(offsetof(Match_t3408321083_StaticFields, ____empty_7)); }
	inline Match_t3408321083 * get__empty_7() const { return ____empty_7; }
	inline Match_t3408321083 ** get_address_of__empty_7() { return &____empty_7; }
	inline void set__empty_7(Match_t3408321083 * value)
	{
		____empty_7 = value;
		Il2CppCodeGenWriteBarrier((&____empty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T3408321083_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___2)); }
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
#endif // REGEXOPTIONS_T92845595_H
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
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___2)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef LOADTYPE_T225521639_H
#define LOADTYPE_T225521639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/LoadType
struct  LoadType_t225521639 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/LoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadType_t225521639, ___value___2)); }
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
#endif // LOADTYPE_T225521639_H
#ifndef MATERIALTYPE_T597773032_H
#define MATERIALTYPE_T597773032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/MaterialType
struct  MaterialType_t597773032 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/MaterialType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaterialType_t597773032, ___value___2)); }
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
#endif // MATERIALTYPE_T597773032_H
#ifndef BUFFERVIEW_T2650099126_H
#define BUFFERVIEW_T2650099126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferView
struct  BufferView_t2650099126  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// GLTF.Schema.BufferId GLTF.Schema.BufferView::Buffer
	BufferId_t2787902107 * ___Buffer_7;
	// System.Int32 GLTF.Schema.BufferView::ByteOffset
	int32_t ___ByteOffset_8;
	// System.Int32 GLTF.Schema.BufferView::ByteLength
	int32_t ___ByteLength_9;
	// System.Int32 GLTF.Schema.BufferView::ByteStride
	int32_t ___ByteStride_10;
	// GLTF.Schema.BufferViewTarget GLTF.Schema.BufferView::Target
	int32_t ___Target_11;

public:
	inline static int32_t get_offset_of_Buffer_7() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___Buffer_7)); }
	inline BufferId_t2787902107 * get_Buffer_7() const { return ___Buffer_7; }
	inline BufferId_t2787902107 ** get_address_of_Buffer_7() { return &___Buffer_7; }
	inline void set_Buffer_7(BufferId_t2787902107 * value)
	{
		___Buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_7), value);
	}

	inline static int32_t get_offset_of_ByteOffset_8() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___ByteOffset_8)); }
	inline int32_t get_ByteOffset_8() const { return ___ByteOffset_8; }
	inline int32_t* get_address_of_ByteOffset_8() { return &___ByteOffset_8; }
	inline void set_ByteOffset_8(int32_t value)
	{
		___ByteOffset_8 = value;
	}

	inline static int32_t get_offset_of_ByteLength_9() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___ByteLength_9)); }
	inline int32_t get_ByteLength_9() const { return ___ByteLength_9; }
	inline int32_t* get_address_of_ByteLength_9() { return &___ByteLength_9; }
	inline void set_ByteLength_9(int32_t value)
	{
		___ByteLength_9 = value;
	}

	inline static int32_t get_offset_of_ByteStride_10() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___ByteStride_10)); }
	inline int32_t get_ByteStride_10() const { return ___ByteStride_10; }
	inline int32_t* get_address_of_ByteStride_10() { return &___ByteStride_10; }
	inline void set_ByteStride_10(int32_t value)
	{
		___ByteStride_10 = value;
	}

	inline static int32_t get_offset_of_Target_11() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___Target_11)); }
	inline int32_t get_Target_11() const { return ___Target_11; }
	inline int32_t* get_address_of_Target_11() { return &___Target_11; }
	inline void set_Target_11(int32_t value)
	{
		___Target_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEW_T2650099126_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t2755812594 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_6)); }
	inline ByteU5BU5D_t4116647657* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_t4116647657* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___buf_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___safeHandle_8)); }
	inline SafeFileHandle_t2755812594 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_t2755812594 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_t2755812594 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((&___safeHandle_8), value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t4292183065_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_t4116647657* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_t4116647657* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_t4116647657* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_4), value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
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
#ifndef REGEX_T3657309853_H
#define REGEX_T3657309853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t3657309853  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t51159052 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t881159249  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t1853889766 * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t1853889766 * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t1281789340* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t1927754563 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t2916547576 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_t4293407246 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___factory_1)); }
	inline RegexRunnerFactory_t51159052 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_t51159052 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_t51159052 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((&___factory_1), value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___internalMatchTimeout_5)); }
	inline TimeSpan_t881159249  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t881159249 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t881159249  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___caps_8)); }
	inline Hashtable_t1853889766 * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t1853889766 ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t1853889766 * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((&___caps_8), value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capnames_9)); }
	inline Hashtable_t1853889766 * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t1853889766 ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t1853889766 * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_9), value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capslist_10)); }
	inline StringU5BU5D_t1281789340* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_t1281789340** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_t1281789340* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_10), value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___runnerref_12)); }
	inline ExclusiveReference_t1927754563 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t1927754563 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t1927754563 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((&___runnerref_12), value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___replref_13)); }
	inline SharedReference_t2916547576 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t2916547576 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t2916547576 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((&___replref_13), value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___code_14)); }
	inline RegexCode_t4293407246 * get_code_14() const { return ___code_14; }
	inline RegexCode_t4293407246 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_t4293407246 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((&___code_14), value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t3657309853_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t881159249  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t881159249  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t881159249  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t881159249  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t3068621835 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t881159249  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t881159249 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t881159249  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t881159249  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t881159249 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t881159249  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t881159249  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t881159249 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t881159249  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t881159249  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t881159249 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t881159249  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t3068621835 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t3068621835 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t3068621835 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((&___livecode_16), value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T3657309853_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef DOWNLOADHANDLERTEXTURE_T2149801800_H
#define DOWNLOADHANDLERTEXTURE_T2149801800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerTexture
struct  DownloadHandlerTexture_t2149801800  : public DownloadHandler_t2937767557
{
public:
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_t3840446185 * ___mTexture_1;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_3;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mTexture_1)); }
	inline Texture2D_t3840446185 * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_t3840446185 ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_t3840446185 * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_1), value);
	}

	inline static int32_t get_offset_of_mHasTexture_2() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mHasTexture_2)); }
	inline bool get_mHasTexture_2() const { return ___mHasTexture_2; }
	inline bool* get_address_of_mHasTexture_2() { return &___mHasTexture_2; }
	inline void set_mHasTexture_2(bool value)
	{
		___mHasTexture_2 = value;
	}

	inline static int32_t get_offset_of_mNonReadable_3() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mNonReadable_3)); }
	inline bool get_mNonReadable_3() const { return ___mNonReadable_3; }
	inline bool* get_address_of_mNonReadable_3() { return &___mNonReadable_3; }
	inline void set_mNonReadable_3(bool value)
	{
		___mNonReadable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800_marshaled_pinvoke : public DownloadHandler_t2937767557_marshaled_pinvoke
{
	Texture2D_t3840446185 * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800_marshaled_com : public DownloadHandler_t2937767557_marshaled_com
{
	Texture2D_t3840446185 * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
#endif // DOWNLOADHANDLERTEXTURE_T2149801800_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t2739891000 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t100236324 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_CertificateHandler_3)); }
	inline CertificateHandler_t2739891000 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_t2739891000 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_t2739891000 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Uri_4)); }
	inline Uri_t100236324 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t100236324 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t100236324 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_com* ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T463507806_H
#ifndef UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#define UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t3852015985  : public AsyncOperation_t1445031843
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t463507806 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t3852015985, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	UnityWebRequest_t463507806_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	UnityWebRequest_t463507806_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};
#endif // UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef GLTFSCENEIMPORTER_T274320441_H
#define GLTFSCENEIMPORTER_T274320441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter
struct  GLTFSceneImporter_t274320441  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::_lastLoadedScene
	GameObject_t1113636619 * ____lastLoadedScene_0;
	// UnityEngine.Transform UnityGLTF.GLTFSceneImporter::_sceneParent
	Transform_t3600365921 * ____sceneParent_1;
	// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader> UnityGLTF.GLTFSceneImporter::_shaderCache
	Dictionary_2_t2973298224 * ____shaderCache_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter::MaximumLod
	int32_t ___MaximumLod_3;
	// GLTF.Schema.Material UnityGLTF.GLTFSceneImporter::DefaultMaterial
	Material_t2790518843 * ___DefaultMaterial_4;
	// System.String UnityGLTF.GLTFSceneImporter::_gltfUrl
	String_t* ____gltfUrl_5;
	// System.String UnityGLTF.GLTFSceneImporter::_gltfDirectoryPath
	String_t* ____gltfDirectoryPath_6;
	// UnityGLTF.GLTFSceneImporter/GLBStream UnityGLTF.GLTFSceneImporter::_gltfStream
	GLBStream_t3327861285  ____gltfStream_7;
	// GLTF.Schema.GLTFRoot UnityGLTF.GLTFSceneImporter::_root
	GLTFRoot_t676886847 * ____root_8;
	// UnityGLTF.Cache.AssetCache UnityGLTF.GLTFSceneImporter::_assetCache
	AssetCache_t783611398 * ____assetCache_9;
	// UnityGLTF.AsyncAction UnityGLTF.GLTFSceneImporter::_asyncAction
	AsyncAction_t3334821446 * ____asyncAction_10;
	// System.Boolean UnityGLTF.GLTFSceneImporter::_addColliders
	bool ____addColliders_11;
	// UnityGLTF.GLTFSceneImporter/LoadType UnityGLTF.GLTFSceneImporter::_loadType
	int32_t ____loadType_12;

public:
	inline static int32_t get_offset_of__lastLoadedScene_0() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____lastLoadedScene_0)); }
	inline GameObject_t1113636619 * get__lastLoadedScene_0() const { return ____lastLoadedScene_0; }
	inline GameObject_t1113636619 ** get_address_of__lastLoadedScene_0() { return &____lastLoadedScene_0; }
	inline void set__lastLoadedScene_0(GameObject_t1113636619 * value)
	{
		____lastLoadedScene_0 = value;
		Il2CppCodeGenWriteBarrier((&____lastLoadedScene_0), value);
	}

	inline static int32_t get_offset_of__sceneParent_1() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____sceneParent_1)); }
	inline Transform_t3600365921 * get__sceneParent_1() const { return ____sceneParent_1; }
	inline Transform_t3600365921 ** get_address_of__sceneParent_1() { return &____sceneParent_1; }
	inline void set__sceneParent_1(Transform_t3600365921 * value)
	{
		____sceneParent_1 = value;
		Il2CppCodeGenWriteBarrier((&____sceneParent_1), value);
	}

	inline static int32_t get_offset_of__shaderCache_2() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____shaderCache_2)); }
	inline Dictionary_2_t2973298224 * get__shaderCache_2() const { return ____shaderCache_2; }
	inline Dictionary_2_t2973298224 ** get_address_of__shaderCache_2() { return &____shaderCache_2; }
	inline void set__shaderCache_2(Dictionary_2_t2973298224 * value)
	{
		____shaderCache_2 = value;
		Il2CppCodeGenWriteBarrier((&____shaderCache_2), value);
	}

	inline static int32_t get_offset_of_MaximumLod_3() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ___MaximumLod_3)); }
	inline int32_t get_MaximumLod_3() const { return ___MaximumLod_3; }
	inline int32_t* get_address_of_MaximumLod_3() { return &___MaximumLod_3; }
	inline void set_MaximumLod_3(int32_t value)
	{
		___MaximumLod_3 = value;
	}

	inline static int32_t get_offset_of_DefaultMaterial_4() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ___DefaultMaterial_4)); }
	inline Material_t2790518843 * get_DefaultMaterial_4() const { return ___DefaultMaterial_4; }
	inline Material_t2790518843 ** get_address_of_DefaultMaterial_4() { return &___DefaultMaterial_4; }
	inline void set_DefaultMaterial_4(Material_t2790518843 * value)
	{
		___DefaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultMaterial_4), value);
	}

	inline static int32_t get_offset_of__gltfUrl_5() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____gltfUrl_5)); }
	inline String_t* get__gltfUrl_5() const { return ____gltfUrl_5; }
	inline String_t** get_address_of__gltfUrl_5() { return &____gltfUrl_5; }
	inline void set__gltfUrl_5(String_t* value)
	{
		____gltfUrl_5 = value;
		Il2CppCodeGenWriteBarrier((&____gltfUrl_5), value);
	}

	inline static int32_t get_offset_of__gltfDirectoryPath_6() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____gltfDirectoryPath_6)); }
	inline String_t* get__gltfDirectoryPath_6() const { return ____gltfDirectoryPath_6; }
	inline String_t** get_address_of__gltfDirectoryPath_6() { return &____gltfDirectoryPath_6; }
	inline void set__gltfDirectoryPath_6(String_t* value)
	{
		____gltfDirectoryPath_6 = value;
		Il2CppCodeGenWriteBarrier((&____gltfDirectoryPath_6), value);
	}

	inline static int32_t get_offset_of__gltfStream_7() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____gltfStream_7)); }
	inline GLBStream_t3327861285  get__gltfStream_7() const { return ____gltfStream_7; }
	inline GLBStream_t3327861285 * get_address_of__gltfStream_7() { return &____gltfStream_7; }
	inline void set__gltfStream_7(GLBStream_t3327861285  value)
	{
		____gltfStream_7 = value;
	}

	inline static int32_t get_offset_of__root_8() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____root_8)); }
	inline GLTFRoot_t676886847 * get__root_8() const { return ____root_8; }
	inline GLTFRoot_t676886847 ** get_address_of__root_8() { return &____root_8; }
	inline void set__root_8(GLTFRoot_t676886847 * value)
	{
		____root_8 = value;
		Il2CppCodeGenWriteBarrier((&____root_8), value);
	}

	inline static int32_t get_offset_of__assetCache_9() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____assetCache_9)); }
	inline AssetCache_t783611398 * get__assetCache_9() const { return ____assetCache_9; }
	inline AssetCache_t783611398 ** get_address_of__assetCache_9() { return &____assetCache_9; }
	inline void set__assetCache_9(AssetCache_t783611398 * value)
	{
		____assetCache_9 = value;
		Il2CppCodeGenWriteBarrier((&____assetCache_9), value);
	}

	inline static int32_t get_offset_of__asyncAction_10() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____asyncAction_10)); }
	inline AsyncAction_t3334821446 * get__asyncAction_10() const { return ____asyncAction_10; }
	inline AsyncAction_t3334821446 ** get_address_of__asyncAction_10() { return &____asyncAction_10; }
	inline void set__asyncAction_10(AsyncAction_t3334821446 * value)
	{
		____asyncAction_10 = value;
		Il2CppCodeGenWriteBarrier((&____asyncAction_10), value);
	}

	inline static int32_t get_offset_of__addColliders_11() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____addColliders_11)); }
	inline bool get__addColliders_11() const { return ____addColliders_11; }
	inline bool* get_address_of__addColliders_11() { return &____addColliders_11; }
	inline void set__addColliders_11(bool value)
	{
		____addColliders_11 = value;
	}

	inline static int32_t get_offset_of__loadType_12() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____loadType_12)); }
	inline int32_t get__loadType_12() const { return ____loadType_12; }
	inline int32_t* get_address_of__loadType_12() { return &____loadType_12; }
	inline void set__loadType_12(int32_t value)
	{
		____loadType_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFSCENEIMPORTER_T274320441_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t3840446185 * m_Items[1];

public:
	inline Texture2D_t3840446185 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t3840446185 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t3840446185 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Texture2D_t3840446185 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t3840446185 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t3840446185 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2744859241_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m193757924_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Scene>::get_Count()
inline int32_t List_1_get_Count_m3096908490 (List_1_t3427735747 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3427735747 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<GLTF.Schema.Scene>::get_Item(System.Int32)
inline Scene_t1955661005 * List_1_get_Item_m2012599669 (List_1_t3427735747 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Scene_t1955661005 * (*) (List_1_t3427735747 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// GLTF.Schema.Scene GLTF.Schema.GLTFRoot::GetDefaultScene()
extern "C" IL2CPP_METHOD_ATTR Scene_t1955661005 * GLTFRoot_GetDefaultScene_m366375611 (GLTFRoot_t676886847 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Image>::get_Count()
inline int32_t List_1_get_Count_m2233704377 (List_1_t2254695417 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2254695417 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Texture>::get_Count()
inline int32_t List_1_get_Count_m1059274901 (List_1_t2284271573 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2284271573 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Material>::get_Count()
inline int32_t List_1_get_Count_m430863746 (List_1_t4262593585 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4262593585 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Buffer>::get_Count()
inline int32_t List_1_get_Count_m4192079870 (List_1_t2341780519 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2341780519 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Mesh>::get_Count()
inline int32_t List_1_get_Count_m2917776829 (List_1_t4198337971 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4198337971 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityGLTF.Cache.AssetCache::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AssetCache__ctor_m3878621961 (AssetCache_t783611398 * __this, int32_t ___imageCacheSize0, int32_t ___textureCacheSize1, int32_t ___materialCacheSize2, int32_t ___bufferCacheSize3, int32_t ___meshCacheSize4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GLTF.Schema.Buffer>::get_Item(System.Int32)
inline Buffer_t869705777 * List_1_get_Item_m3831054255 (List_1_t2341780519 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Buffer_t869705777 * (*) (List_1_t2341780519 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void GLTF.GLTFParser::SeekToBinaryChunk(System.IO.Stream,System.Int32,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GLTFParser_SeekToBinaryChunk_m1369199918 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * p0, int32_t p1, int64_t p2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData> UnityGLTF.Cache.AssetCache::get_BufferCache()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3293772351 * AssetCache_get_BufferCache_m1575123264 (AssetCache_t783611398 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData__ctor_m753061382 (BufferCacheData_t110091724 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::set_ChunkOffset(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData_set_ChunkOffset_m2432482419 (BufferCacheData_t110091724 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::set_Stream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData_set_Stream_m2562676033 (BufferCacheData_t110091724 * __this, Stream_t1273022909 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m329187123 (Dictionary_2_t3293772351 * __this, int32_t p0, BufferCacheData_t110091724 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3293772351 *, int32_t, BufferCacheData_t110091724 *, const RuntimeMethod*))Dictionary_2_set_Item_m2744859241_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1<GLTF.Schema.Image>::get_Item(System.Int32)
inline Image_t782620675 * List_1_get_Item_m4240667468 (List_1_t2254695417 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Image_t782620675 * (*) (List_1_t2254695417 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m75143462 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.AsyncAction::RunOnWorkerThread(System.Action)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncAction_RunOnWorkerThread_m958225134 (AsyncAction_t3334821446 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Get_m996521828 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_SendWebRequest_m489860187 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C" IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m1090830473 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.WebRequestException::.ctor(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m376355303 (WebRequestException_t1410780468 * __this, UnityWebRequest_t463507806 * ___www0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandler_get_data_m1669096410 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2399756175 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, bool p3, bool p4, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// GLTF.Schema.GLTFRoot GLTF.GLTFParser::ParseJson(System.IO.Stream,System.Int64)
extern "C" IL2CPP_METHOD_ATTR GLTFRoot_t676886847 * GLTFParser_ParseJson_m1570455109 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * p0, int64_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::ImportScene(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_ImportScene_m2136484356 (GLTFSceneImporter_t274320441 * __this, int32_t ___sceneIndex0, bool ___isMultithreaded1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m3948448025 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR Match_t3408321083 * Regex_Match_m2255756165 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C" IL2CPP_METHOD_ATTR bool Group_get_Success_m3823591889 (Group_t2468205786 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Capture_get_Length_m4245536461 (Capture_t2232016050 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Texture2D[] UnityGLTF.Cache.AssetCache::get_ImageCache()
extern "C" IL2CPP_METHOD_ATTR Texture2DU5BU5D_t149664596* AssetCache_get_ImageCache_m3334297062 (AssetCache_t783611398 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m2182108104 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerTexture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerTexture__ctor_m1255013425 (DownloadHandlerTexture_t2149801800 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m970510352 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * p0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DownloadHandlerTexture_GetContent_m4103989158 (RuntimeObject * __this /* static, unused */, UnityWebRequest_t463507806 * p0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m2081641574 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m3008871897 (Texture2D_t3840446185 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m1848181995 (Texture2D_t3840446185 * __this, bool p0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m2568598920 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Stream_Dispose_m2589290611 (Stream_t1273022909 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>::get_Item(!0)
inline BufferCacheData_t110091724 * Dictionary_2_get_Item_m1259228363 (Dictionary_2_t3293772351 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BufferCacheData_t110091724 * (*) (Dictionary_2_t3293772351 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m193757924_gshared)(__this, p0, method);
}
// System.IO.Stream UnityGLTF.Cache.BufferCacheData::get_Stream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * BufferCacheData_get_Stream_m855137577 (BufferCacheData_t110091724 * __this, const RuntimeMethod* method);
// System.Int64 UnityGLTF.Cache.BufferCacheData::get_ChunkOffset()
extern "C" IL2CPP_METHOD_ATTR int64_t BufferCacheData_get_ChunkOffset_m3509864196 (BufferCacheData_t110091724 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1406832249 (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22__ctor_m2932397664 (U3CImportSceneU3Ed__22_t599600113 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22_System_IDisposable_Dispose_m1970460421 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CImportSceneU3Ed__22_MoveNext_m4284647012 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CImportSceneU3Ed__22_MoveNext_m4284647012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	Buffer_t869705777 * V_3 = NULL;
	int32_t V_4 = 0;
	Image_t782620675 * V_5 = NULL;
	GLTFSceneImporter_t274320441 * G_B10_0 = NULL;
	GLTFSceneImporter_t274320441 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	GLTFSceneImporter_t274320441 * G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	GLTFSceneImporter_t274320441 * G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	GLTFSceneImporter_t274320441 * G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	GLTFSceneImporter_t274320441 * G_B14_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	GLTFSceneImporter_t274320441 * G_B16_2 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	GLTFSceneImporter_t274320441 * G_B15_2 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	GLTFSceneImporter_t274320441 * G_B17_3 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	GLTFSceneImporter_t274320441 * G_B19_3 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	GLTFSceneImporter_t274320441 * G_B18_3 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	GLTFSceneImporter_t274320441 * G_B20_4 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	GLTFSceneImporter_t274320441 * G_B22_4 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	GLTFSceneImporter_t274320441 * G_B21_4 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B23_4 = 0;
	GLTFSceneImporter_t274320441 * G_B23_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_01a9;
			}
			case 2:
			{
				goto IL_0293;
			}
			case 3:
			{
				goto IL_02f2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (sceneIndex >= 0 && sceneIndex < _root.Scenes.Count)
		int32_t L_3 = __this->get_sceneIndex_2();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_4 = __this->get_sceneIndex_2();
		GLTFSceneImporter_t274320441 * L_5 = V_1;
		NullCheck(L_5);
		GLTFRoot_t676886847 * L_6 = L_5->get__root_8();
		NullCheck(L_6);
		List_1_t3427735747 * L_7 = L_6->get_Scenes_20();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m3096908490(L_7, /*hidden argument*/List_1_get_Count_m3096908490_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_8)))
		{
			goto IL_006c;
		}
	}
	{
		// scene = _root.Scenes[sceneIndex];
		GLTFSceneImporter_t274320441 * L_9 = V_1;
		NullCheck(L_9);
		GLTFRoot_t676886847 * L_10 = L_9->get__root_8();
		NullCheck(L_10);
		List_1_t3427735747 * L_11 = L_10->get_Scenes_20();
		int32_t L_12 = __this->get_sceneIndex_2();
		NullCheck(L_11);
		Scene_t1955661005 * L_13 = List_1_get_Item_m2012599669(L_11, L_12, /*hidden argument*/List_1_get_Item_m2012599669_RuntimeMethod_var);
		__this->set_U3CsceneU3E5__2_5(L_13);
		// }
		goto IL_007d;
	}

IL_006c:
	{
		// scene = _root.GetDefaultScene();
		GLTFSceneImporter_t274320441 * L_14 = V_1;
		NullCheck(L_14);
		GLTFRoot_t676886847 * L_15 = L_14->get__root_8();
		NullCheck(L_15);
		Scene_t1955661005 * L_16 = GLTFRoot_GetDefaultScene_m366375611(L_15, /*hidden argument*/NULL);
		__this->set_U3CsceneU3E5__2_5(L_16);
	}

IL_007d:
	{
		// if (scene == null)
		Scene_t1955661005 * L_17 = __this->get_U3CsceneU3E5__2_5();
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		// throw new Exception("No default scene in gltf file.");
		Exception_t * L_18 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_18, _stringLiteral218779911, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, U3CImportSceneU3Ed__22_MoveNext_m4284647012_RuntimeMethod_var);
	}

IL_0090:
	{
		// _assetCache = new AssetCache(
		//     _root.Images != null ? _root.Images.Count : 0,
		//     _root.Textures != null ? _root.Textures.Count : 0,
		//     _root.Materials != null ? _root.Materials.Count : 0,
		//     _root.Buffers != null ? _root.Buffers.Count : 0,
		//     _root.Meshes != null ? _root.Meshes.Count : 0
		// );
		GLTFSceneImporter_t274320441 * L_19 = V_1;
		GLTFSceneImporter_t274320441 * L_20 = V_1;
		NullCheck(L_20);
		GLTFRoot_t676886847 * L_21 = L_20->get__root_8();
		NullCheck(L_21);
		List_1_t2254695417 * L_22 = L_21->get_Images_14();
		G_B9_0 = L_19;
		if (L_22)
		{
			G_B10_0 = L_19;
			goto IL_00a1;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_00b1;
	}

IL_00a1:
	{
		GLTFSceneImporter_t274320441 * L_23 = V_1;
		NullCheck(L_23);
		GLTFRoot_t676886847 * L_24 = L_23->get__root_8();
		NullCheck(L_24);
		List_1_t2254695417 * L_25 = L_24->get_Images_14();
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_m2233704377(L_25, /*hidden argument*/List_1_get_Count_m2233704377_RuntimeMethod_var);
		G_B11_0 = L_26;
		G_B11_1 = G_B10_0;
	}

IL_00b1:
	{
		GLTFSceneImporter_t274320441 * L_27 = V_1;
		NullCheck(L_27);
		GLTFRoot_t676886847 * L_28 = L_27->get__root_8();
		NullCheck(L_28);
		List_1_t2284271573 * L_29 = L_28->get_Textures_22();
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		if (L_29)
		{
			G_B13_0 = G_B11_0;
			G_B13_1 = G_B11_1;
			goto IL_00c1;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00d1;
	}

IL_00c1:
	{
		GLTFSceneImporter_t274320441 * L_30 = V_1;
		NullCheck(L_30);
		GLTFRoot_t676886847 * L_31 = L_30->get__root_8();
		NullCheck(L_31);
		List_1_t2284271573 * L_32 = L_31->get_Textures_22();
		NullCheck(L_32);
		int32_t L_33 = List_1_get_Count_m1059274901(L_32, /*hidden argument*/List_1_get_Count_m1059274901_RuntimeMethod_var);
		G_B14_0 = L_33;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00d1:
	{
		GLTFSceneImporter_t274320441 * L_34 = V_1;
		NullCheck(L_34);
		GLTFRoot_t676886847 * L_35 = L_34->get__root_8();
		NullCheck(L_35);
		List_1_t4262593585 * L_36 = L_35->get_Materials_15();
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		if (L_36)
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_00e1;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_00f1;
	}

IL_00e1:
	{
		GLTFSceneImporter_t274320441 * L_37 = V_1;
		NullCheck(L_37);
		GLTFRoot_t676886847 * L_38 = L_37->get__root_8();
		NullCheck(L_38);
		List_1_t4262593585 * L_39 = L_38->get_Materials_15();
		NullCheck(L_39);
		int32_t L_40 = List_1_get_Count_m430863746(L_39, /*hidden argument*/List_1_get_Count_m430863746_RuntimeMethod_var);
		G_B17_0 = L_40;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_00f1:
	{
		GLTFSceneImporter_t274320441 * L_41 = V_1;
		NullCheck(L_41);
		GLTFRoot_t676886847 * L_42 = L_41->get__root_8();
		NullCheck(L_42);
		List_1_t2341780519 * L_43 = L_42->get_Buffers_11();
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_43)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		goto IL_0111;
	}

IL_0101:
	{
		GLTFSceneImporter_t274320441 * L_44 = V_1;
		NullCheck(L_44);
		GLTFRoot_t676886847 * L_45 = L_44->get__root_8();
		NullCheck(L_45);
		List_1_t2341780519 * L_46 = L_45->get_Buffers_11();
		NullCheck(L_46);
		int32_t L_47 = List_1_get_Count_m4192079870(L_46, /*hidden argument*/List_1_get_Count_m4192079870_RuntimeMethod_var);
		G_B20_0 = L_47;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
	}

IL_0111:
	{
		GLTFSceneImporter_t274320441 * L_48 = V_1;
		NullCheck(L_48);
		GLTFRoot_t676886847 * L_49 = L_48->get__root_8();
		NullCheck(L_49);
		List_1_t4198337971 * L_50 = L_49->get_Meshes_16();
		G_B21_0 = G_B20_0;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
		G_B21_4 = G_B20_4;
		if (L_50)
		{
			G_B22_0 = G_B20_0;
			G_B22_1 = G_B20_1;
			G_B22_2 = G_B20_2;
			G_B22_3 = G_B20_3;
			G_B22_4 = G_B20_4;
			goto IL_0121;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		G_B23_5 = G_B21_4;
		goto IL_0131;
	}

IL_0121:
	{
		GLTFSceneImporter_t274320441 * L_51 = V_1;
		NullCheck(L_51);
		GLTFRoot_t676886847 * L_52 = L_51->get__root_8();
		NullCheck(L_52);
		List_1_t4198337971 * L_53 = L_52->get_Meshes_16();
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m2917776829(L_53, /*hidden argument*/List_1_get_Count_m2917776829_RuntimeMethod_var);
		G_B23_0 = L_54;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
		G_B23_5 = G_B22_4;
	}

IL_0131:
	{
		AssetCache_t783611398 * L_55 = (AssetCache_t783611398 *)il2cpp_codegen_object_new(AssetCache_t783611398_il2cpp_TypeInfo_var);
		AssetCache__ctor_m3878621961(L_55, G_B23_4, G_B23_3, G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/NULL);
		NullCheck(G_B23_5);
		G_B23_5->set__assetCache_9(L_55);
		// if (_lastLoadedScene == null)
		GLTFSceneImporter_t274320441 * L_56 = V_1;
		NullCheck(L_56);
		GameObject_t1113636619 * L_57 = L_56->get__lastLoadedScene_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_57, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_02f9;
		}
	}
	{
		// if (_root.Buffers != null)
		GLTFSceneImporter_t274320441 * L_59 = V_1;
		NullCheck(L_59);
		GLTFRoot_t676886847 * L_60 = L_59->get__root_8();
		NullCheck(L_60);
		List_1_t2341780519 * L_61 = L_60->get_Buffers_11();
		if (!L_61)
		{
			goto IL_0242;
		}
	}
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		__this->set_U3CiU3E5__3_6(0);
		goto IL_0227;
	}

IL_0168:
	{
		// GLTF.Schema.Buffer buffer = _root.Buffers[i];
		GLTFSceneImporter_t274320441 * L_62 = V_1;
		NullCheck(L_62);
		GLTFRoot_t676886847 * L_63 = L_62->get__root_8();
		NullCheck(L_63);
		List_1_t2341780519 * L_64 = L_63->get_Buffers_11();
		int32_t L_65 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_64);
		Buffer_t869705777 * L_66 = List_1_get_Item_m3831054255(L_64, L_65, /*hidden argument*/List_1_get_Item_m3831054255_RuntimeMethod_var);
		V_3 = L_66;
		// if (buffer.Uri != null)
		Buffer_t869705777 * L_67 = V_3;
		NullCheck(L_67);
		String_t* L_68 = L_67->get_Uri_7();
		if (!L_68)
		{
			goto IL_01b2;
		}
	}
	{
		// yield return LoadBuffer(_gltfDirectoryPath, buffer, i);
		GLTFSceneImporter_t274320441 * L_69 = V_1;
		GLTFSceneImporter_t274320441 * L_70 = V_1;
		NullCheck(L_70);
		String_t* L_71 = L_70->get__gltfDirectoryPath_6();
		Buffer_t869705777 * L_72 = V_3;
		int32_t L_73 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_69);
		RuntimeObject* L_74 = VirtFuncInvoker3< RuntimeObject*, String_t*, Buffer_t869705777 *, int32_t >::Invoke(15 /* System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadBuffer(System.String,GLTF.Schema.Buffer,System.Int32) */, L_69, L_71, L_72, L_73);
		__this->set_U3CU3E2__current_1(L_74);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01a9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_0215;
	}

IL_01b2:
	{
		// GLTFParser.SeekToBinaryChunk(_gltfStream.Stream, i, _gltfStream.StartPosition);
		GLTFSceneImporter_t274320441 * L_75 = V_1;
		NullCheck(L_75);
		GLBStream_t3327861285 * L_76 = L_75->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_77 = L_76->get_Stream_0();
		int32_t L_78 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_t274320441 * L_79 = V_1;
		NullCheck(L_79);
		GLBStream_t3327861285 * L_80 = L_79->get_address_of__gltfStream_7();
		int64_t L_81 = L_80->get_StartPosition_1();
		GLTFParser_SeekToBinaryChunk_m1369199918(NULL /*static, unused*/, L_77, L_78, L_81, /*hidden argument*/NULL);
		// _assetCache.BufferCache[i] = new BufferCacheData()
		// {
		//     ChunkOffset = _gltfStream.Stream.Position,
		//     Stream = _gltfStream.Stream
		// };
		GLTFSceneImporter_t274320441 * L_82 = V_1;
		NullCheck(L_82);
		AssetCache_t783611398 * L_83 = L_82->get__assetCache_9();
		NullCheck(L_83);
		Dictionary_2_t3293772351 * L_84 = AssetCache_get_BufferCache_m1575123264(L_83, /*hidden argument*/NULL);
		int32_t L_85 = __this->get_U3CiU3E5__3_6();
		BufferCacheData_t110091724 * L_86 = (BufferCacheData_t110091724 *)il2cpp_codegen_object_new(BufferCacheData_t110091724_il2cpp_TypeInfo_var);
		BufferCacheData__ctor_m753061382(L_86, /*hidden argument*/NULL);
		BufferCacheData_t110091724 * L_87 = L_86;
		GLTFSceneImporter_t274320441 * L_88 = V_1;
		NullCheck(L_88);
		GLBStream_t3327861285 * L_89 = L_88->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_90 = L_89->get_Stream_0();
		NullCheck(L_90);
		int64_t L_91 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_90);
		NullCheck(L_87);
		BufferCacheData_set_ChunkOffset_m2432482419(L_87, L_91, /*hidden argument*/NULL);
		BufferCacheData_t110091724 * L_92 = L_87;
		GLTFSceneImporter_t274320441 * L_93 = V_1;
		NullCheck(L_93);
		GLBStream_t3327861285 * L_94 = L_93->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_95 = L_94->get_Stream_0();
		NullCheck(L_92);
		BufferCacheData_set_Stream_m2562676033(L_92, L_95, /*hidden argument*/NULL);
		NullCheck(L_84);
		Dictionary_2_set_Item_m329187123(L_84, L_85, L_92, /*hidden argument*/Dictionary_2_set_Item_m329187123_RuntimeMethod_var);
	}

IL_0215:
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		int32_t L_96 = __this->get_U3CiU3E5__3_6();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		int32_t L_97 = V_4;
		__this->set_U3CiU3E5__3_6(L_97);
	}

IL_0227:
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		int32_t L_98 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_t274320441 * L_99 = V_1;
		NullCheck(L_99);
		GLTFRoot_t676886847 * L_100 = L_99->get__root_8();
		NullCheck(L_100);
		List_1_t2341780519 * L_101 = L_100->get_Buffers_11();
		NullCheck(L_101);
		int32_t L_102 = List_1_get_Count_m4192079870(L_101, /*hidden argument*/List_1_get_Count_m4192079870_RuntimeMethod_var);
		if ((((int32_t)L_98) < ((int32_t)L_102)))
		{
			goto IL_0168;
		}
	}

IL_0242:
	{
		// if (_root.Images != null)
		GLTFSceneImporter_t274320441 * L_103 = V_1;
		NullCheck(L_103);
		GLTFRoot_t676886847 * L_104 = L_103->get__root_8();
		NullCheck(L_104);
		List_1_t2254695417 * L_105 = L_104->get_Images_14();
		if (!L_105)
		{
			goto IL_02c4;
		}
	}
	{
		// for (int i = 0; i < _root.Images.Count; ++i)
		__this->set_U3CiU3E5__3_6(0);
		goto IL_02ac;
	}

IL_0258:
	{
		// Image image = _root.Images[i];
		GLTFSceneImporter_t274320441 * L_106 = V_1;
		NullCheck(L_106);
		GLTFRoot_t676886847 * L_107 = L_106->get__root_8();
		NullCheck(L_107);
		List_1_t2254695417 * L_108 = L_107->get_Images_14();
		int32_t L_109 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_108);
		Image_t782620675 * L_110 = List_1_get_Item_m4240667468(L_108, L_109, /*hidden argument*/List_1_get_Item_m4240667468_RuntimeMethod_var);
		V_5 = L_110;
		// yield return LoadImage(_gltfDirectoryPath, image, i);
		GLTFSceneImporter_t274320441 * L_111 = V_1;
		GLTFSceneImporter_t274320441 * L_112 = V_1;
		NullCheck(L_112);
		String_t* L_113 = L_112->get__gltfDirectoryPath_6();
		Image_t782620675 * L_114 = V_5;
		int32_t L_115 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_111);
		RuntimeObject* L_116 = VirtFuncInvoker3< RuntimeObject*, String_t*, Image_t782620675 *, int32_t >::Invoke(14 /* System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadImage(System.String,GLTF.Schema.Image,System.Int32) */, L_111, L_113, L_114, L_115);
		__this->set_U3CU3E2__current_1(L_116);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0293:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < _root.Images.Count; ++i)
		int32_t L_117 = __this->get_U3CiU3E5__3_6();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		int32_t L_118 = V_4;
		__this->set_U3CiU3E5__3_6(L_118);
	}

IL_02ac:
	{
		// for (int i = 0; i < _root.Images.Count; ++i)
		int32_t L_119 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_t274320441 * L_120 = V_1;
		NullCheck(L_120);
		GLTFRoot_t676886847 * L_121 = L_120->get__root_8();
		NullCheck(L_121);
		List_1_t2254695417 * L_122 = L_121->get_Images_14();
		NullCheck(L_122);
		int32_t L_123 = List_1_get_Count_m2233704377(L_122, /*hidden argument*/List_1_get_Count_m2233704377_RuntimeMethod_var);
		if ((((int32_t)L_119) < ((int32_t)L_123)))
		{
			goto IL_0258;
		}
	}

IL_02c4:
	{
		// if (isMultithreaded)
		bool L_124 = __this->get_isMultithreaded_4();
		if (!L_124)
		{
			goto IL_02f9;
		}
	}
	{
		// yield return _asyncAction.RunOnWorkerThread(() => BuildAttributesForMeshes());
		GLTFSceneImporter_t274320441 * L_125 = V_1;
		NullCheck(L_125);
		AsyncAction_t3334821446 * L_126 = L_125->get__asyncAction_10();
		GLTFSceneImporter_t274320441 * L_127 = V_1;
		intptr_t L_128 = (intptr_t)GLTFSceneImporter_U3CImportSceneU3Eb__22_0_m1839693015_RuntimeMethod_var;
		Action_t1264377477 * L_129 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m75143462(L_129, L_127, (intptr_t)L_128, /*hidden argument*/NULL);
		NullCheck(L_126);
		RuntimeObject* L_130 = AsyncAction_RunOnWorkerThread_m958225134(L_126, L_129, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_130);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02f2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_02f9:
	{
		// var sceneObj = CreateScene(scene);
		GLTFSceneImporter_t274320441 * L_131 = V_1;
		Scene_t1955661005 * L_132 = __this->get_U3CsceneU3E5__2_5();
		NullCheck(L_131);
		GameObject_t1113636619 * L_133 = VirtFuncInvoker1< GameObject_t1113636619 *, Scene_t1955661005 * >::Invoke(7 /* UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateScene(GLTF.Schema.Scene) */, L_131, L_132);
		V_2 = L_133;
		// if (_sceneParent != null)
		GLTFSceneImporter_t274320441 * L_134 = V_1;
		NullCheck(L_134);
		Transform_t3600365921 * L_135 = L_134->get__sceneParent_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_136 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_135, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0326;
		}
	}
	{
		// sceneObj.transform.SetParent(_sceneParent, false);
		GameObject_t1113636619 * L_137 = V_2;
		NullCheck(L_137);
		Transform_t3600365921 * L_138 = GameObject_get_transform_m1369836730(L_137, /*hidden argument*/NULL);
		GLTFSceneImporter_t274320441 * L_139 = V_1;
		NullCheck(L_139);
		Transform_t3600365921 * L_140 = L_139->get__sceneParent_1();
		NullCheck(L_138);
		Transform_SetParent_m273471670(L_138, L_140, (bool)0, /*hidden argument*/NULL);
	}

IL_0326:
	{
		// _lastLoadedScene = sceneObj;
		GLTFSceneImporter_t274320441 * L_141 = V_1;
		GameObject_t1113636619 * L_142 = V_2;
		NullCheck(L_141);
		L_141->set__lastLoadedScene_0(L_142);
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CImportSceneU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1294374346 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CImportSceneU3Ed__22_System_Collections_IEnumerator_get_Current_m3450915259 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<Load>d__21::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21__ctor_m4022723356 (U3CLoadU3Ed__21_t2072795234 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<Load>d__21::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21_System_IDisposable_Dispose_m2265447899 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<Load>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadU3Ed__21_MoveNext_m1636262611 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__21_MoveNext_m1636262611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0129;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_loadType == LoadType.Uri)
		GLTFSceneImporter_t274320441 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__loadType_12();
		if (L_4)
		{
			goto IL_00c3;
		}
	}
	{
		// var www = UnityWebRequest.Get(_gltfUrl);
		GLTFSceneImporter_t274320441 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get__gltfUrl_5();
		UnityWebRequest_t463507806 * L_7 = UnityWebRequest_Get_m996521828(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_5(L_7);
		// yield return www.SendWebRequest();
		UnityWebRequest_t463507806 * L_8 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_8);
		UnityWebRequestAsyncOperation_t3852015985 * L_9 = UnityWebRequest_SendWebRequest_m489860187(L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.responseCode >= 400 || www.responseCode == 0)
		UnityWebRequest_t463507806 * L_10 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_10);
		int64_t L_11 = UnityWebRequest_get_responseCode_m1090830473(L_10, /*hidden argument*/NULL);
		if ((((int64_t)L_11) >= ((int64_t)(((int64_t)((int64_t)((int32_t)400)))))))
		{
			goto IL_0086;
		}
	}
	{
		UnityWebRequest_t463507806 * L_12 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_12);
		int64_t L_13 = UnityWebRequest_get_responseCode_m1090830473(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0092;
		}
	}

IL_0086:
	{
		// throw new WebRequestException(www);
		UnityWebRequest_t463507806 * L_14 = __this->get_U3CwwwU3E5__2_5();
		WebRequestException_t1410780468 * L_15 = (WebRequestException_t1410780468 *)il2cpp_codegen_object_new(WebRequestException_t1410780468_il2cpp_TypeInfo_var);
		WebRequestException__ctor_m376355303(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, U3CLoadU3Ed__21_MoveNext_m1636262611_RuntimeMethod_var);
	}

IL_0092:
	{
		// byte[] gltfData = www.downloadHandler.data;
		UnityWebRequest_t463507806 * L_16 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_16);
		DownloadHandler_t2937767557 * L_17 = UnityWebRequest_get_downloadHandler_m534911913(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t4116647657* L_18 = DownloadHandler_get_data_m1669096410(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// _gltfStream.Stream = new MemoryStream(gltfData, 0, gltfData.Length, false, true);
		GLTFSceneImporter_t274320441 * L_19 = V_1;
		NullCheck(L_19);
		GLBStream_t3327861285 * L_20 = L_19->get_address_of__gltfStream_7();
		ByteU5BU5D_t4116647657* L_21 = V_2;
		ByteU5BU5D_t4116647657* L_22 = V_2;
		NullCheck(L_22);
		MemoryStream_t94973147 * L_23 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2399756175(L_23, L_21, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		L_20->set_Stream_0(L_23);
		// }
		__this->set_U3CwwwU3E5__2_5((UnityWebRequest_t463507806 *)NULL);
		goto IL_00e7;
	}

IL_00c3:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_t274320441 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__loadType_12();
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		// throw new Exception("Invalid load type specified: " + _loadType);
		GLTFSceneImporter_t274320441 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->get__loadType_12();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(LoadType_t225521639_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral4142678977, L_29, /*hidden argument*/NULL);
		Exception_t * L_31 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, U3CLoadU3Ed__21_MoveNext_m1636262611_RuntimeMethod_var);
	}

IL_00e7:
	{
		// _root = GLTFParser.ParseJson(_gltfStream.Stream, _gltfStream.StartPosition);
		GLTFSceneImporter_t274320441 * L_32 = V_1;
		GLTFSceneImporter_t274320441 * L_33 = V_1;
		NullCheck(L_33);
		GLBStream_t3327861285 * L_34 = L_33->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_35 = L_34->get_Stream_0();
		GLTFSceneImporter_t274320441 * L_36 = V_1;
		NullCheck(L_36);
		GLBStream_t3327861285 * L_37 = L_36->get_address_of__gltfStream_7();
		int64_t L_38 = L_37->get_StartPosition_1();
		GLTFRoot_t676886847 * L_39 = GLTFParser_ParseJson_m1570455109(NULL /*static, unused*/, L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set__root_8(L_39);
		// yield return ImportScene(sceneIndex, isMultithreaded);
		GLTFSceneImporter_t274320441 * L_40 = V_1;
		int32_t L_41 = __this->get_sceneIndex_3();
		bool L_42 = __this->get_isMultithreaded_4();
		NullCheck(L_40);
		RuntimeObject* L_43 = GLTFSceneImporter_ImportScene_m2136484356(L_40, L_41, L_42, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0129:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<Load>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m440031946 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<Load>d__21::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<Load>d__21::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__21_System_Collections_IEnumerator_get_Current_m2175357321 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35__ctor_m4225273805 (U3CLoadBufferU3Ed__35_t2608884095 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35_System_IDisposable_Dispose_m2170182291 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadBufferU3Ed__35_MoveNext_m1135036225 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBufferU3Ed__35_MoveNext_m1135036225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	Stream_t1273022909 * V_2 = NULL;
	Match_t3408321083 * V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00cc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (buffer.Uri != null)
		Buffer_t869705777 * L_4 = __this->get_buffer_2();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_Uri_7();
		if (!L_5)
		{
			goto IL_0150;
		}
	}
	{
		// Stream bufferStream = null;
		V_2 = (Stream_t1273022909 *)NULL;
		// var uri = buffer.Uri;
		Buffer_t869705777 * L_6 = __this->get_buffer_2();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_Uri_7();
		__this->set_U3CuriU3E5__2_6(L_7);
		// Regex regex = new Regex(Base64StringInitializer);
		Regex_t3657309853 * L_8 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m3948448025(L_8, _stringLiteral2758179804, /*hidden argument*/NULL);
		// Match match = regex.Match(uri);
		String_t* L_9 = __this->get_U3CuriU3E5__2_6();
		NullCheck(L_8);
		Match_t3408321083 * L_10 = Regex_Match_m2255756165(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (match.Success)
		Match_t3408321083 * L_11 = V_3;
		NullCheck(L_11);
		bool L_12 = Group_get_Success_m3823591889(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		// string base64String = uri.Substring(match.Length);
		String_t* L_13 = __this->get_U3CuriU3E5__2_6();
		Match_t3408321083 * L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = Capture_get_Length_m4245536461(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = String_Substring_m2848979100(L_13, L_15, /*hidden argument*/NULL);
		// byte[] base64ByteData = Convert.FromBase64String(base64String);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_17 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// bufferStream = new MemoryStream(base64ByteData, 0, base64ByteData.Length, false, true);
		ByteU5BU5D_t4116647657* L_18 = V_4;
		ByteU5BU5D_t4116647657* L_19 = V_4;
		NullCheck(L_19);
		MemoryStream_t94973147 * L_20 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2399756175(L_20, L_18, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		V_2 = L_20;
		// }
		goto IL_0127;
	}

IL_008e:
	{
		// else if (_loadType == LoadType.Uri)
		GLTFSceneImporter_t274320441 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__loadType_12();
		if (L_22)
		{
			goto IL_0107;
		}
	}
	{
		// var www = UnityWebRequest.Get(Path.Combine(sourceUri, uri));
		String_t* L_23 = __this->get_sourceUri_4();
		String_t* L_24 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_25 = Path_Combine_m3389272516(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_26 = UnityWebRequest_Get_m996521828(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_7(L_26);
		// yield return www.SendWebRequest();
		UnityWebRequest_t463507806 * L_27 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_27);
		UnityWebRequestAsyncOperation_t3852015985 * L_28 = UnityWebRequest_SendWebRequest_m489860187(L_27, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bufferStream = new MemoryStream(www.downloadHandler.data, 0, www.downloadHandler.data.Length, false, true);
		UnityWebRequest_t463507806 * L_29 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_29);
		DownloadHandler_t2937767557 * L_30 = UnityWebRequest_get_downloadHandler_m534911913(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_t4116647657* L_31 = DownloadHandler_get_data_m1669096410(L_30, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_32 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_32);
		DownloadHandler_t2937767557 * L_33 = UnityWebRequest_get_downloadHandler_m534911913(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		ByteU5BU5D_t4116647657* L_34 = DownloadHandler_get_data_m1669096410(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		MemoryStream_t94973147 * L_35 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2399756175(L_35, L_31, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		V_2 = L_35;
		// }
		__this->set_U3CwwwU3E5__3_7((UnityWebRequest_t463507806 *)NULL);
		goto IL_0127;
	}

IL_0107:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_t274320441 * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->get__loadType_12();
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}
	{
		// var pathToLoad = Path.Combine(sourceUri, uri);
		String_t* L_38 = __this->get_sourceUri_4();
		String_t* L_39 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_40 = Path_Combine_m3389272516(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		// bufferStream = File.OpenRead(pathToLoad);
		FileStream_t4292183065 * L_41 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_0127:
	{
		// _assetCache.BufferCache[bufferIndex] = new BufferCacheData()
		// {
		//     Stream = bufferStream
		// };
		GLTFSceneImporter_t274320441 * L_42 = V_1;
		NullCheck(L_42);
		AssetCache_t783611398 * L_43 = L_42->get__assetCache_9();
		NullCheck(L_43);
		Dictionary_2_t3293772351 * L_44 = AssetCache_get_BufferCache_m1575123264(L_43, /*hidden argument*/NULL);
		int32_t L_45 = __this->get_bufferIndex_5();
		BufferCacheData_t110091724 * L_46 = (BufferCacheData_t110091724 *)il2cpp_codegen_object_new(BufferCacheData_t110091724_il2cpp_TypeInfo_var);
		BufferCacheData__ctor_m753061382(L_46, /*hidden argument*/NULL);
		BufferCacheData_t110091724 * L_47 = L_46;
		Stream_t1273022909 * L_48 = V_2;
		NullCheck(L_47);
		BufferCacheData_set_Stream_m2562676033(L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_44);
		Dictionary_2_set_Item_m329187123(L_44, L_45, L_47, /*hidden argument*/Dictionary_2_set_Item_m329187123_RuntimeMethod_var);
		// }
		__this->set_U3CuriU3E5__2_6((String_t*)NULL);
	}

IL_0150:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBufferU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1061952852 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_get_Current_m3481175457 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34__ctor_m3433464278 (U3CLoadImageU3Ed__34_t347840408 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34_System_IDisposable_Dispose_m2761331438 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__34_MoveNext_m3821244950 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__34_MoveNext_m3821244950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	Texture2D_t3840446185 * V_2 = NULL;
	Match_t3408321083 * V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	Texture2D_t3840446185 * V_5 = NULL;
	FileStream_t4292183065 * V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	BufferView_t2650099126 * V_8 = NULL;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	BufferCacheData_t110091724 * V_10 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00fe;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_assetCache.ImageCache[imageID] == null)
		GLTFSceneImporter_t274320441 * L_4 = V_1;
		NullCheck(L_4);
		AssetCache_t783611398 * L_5 = L_4->get__assetCache_9();
		NullCheck(L_5);
		Texture2DU5BU5D_t149664596* L_6 = AssetCache_get_ImageCache_m3334297062(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_imageID_3();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Texture2D_t3840446185 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0288;
		}
	}
	{
		// Texture2D texture = null;
		V_2 = (Texture2D_t3840446185 *)NULL;
		// if (image.Uri != null)
		Image_t782620675 * L_11 = __this->get_image_4();
		NullCheck(L_11);
		String_t* L_12 = L_11->get_Uri_7();
		if (!L_12)
		{
			goto IL_01f6;
		}
	}
	{
		// var uri = image.Uri;
		Image_t782620675 * L_13 = __this->get_image_4();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_Uri_7();
		__this->set_U3CuriU3E5__2_6(L_14);
		// Regex regex = new Regex(Base64StringInitializer);
		Regex_t3657309853 * L_15 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m3948448025(L_15, _stringLiteral2758179804, /*hidden argument*/NULL);
		// Match match = regex.Match(uri);
		String_t* L_16 = __this->get_U3CuriU3E5__2_6();
		NullCheck(L_15);
		Match_t3408321083 * L_17 = Regex_Match_m2255756165(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// if (match.Success)
		Match_t3408321083 * L_18 = V_3;
		NullCheck(L_18);
		bool L_19 = Group_get_Success_m3823591889(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		// var base64Data = uri.Substring(match.Length);
		String_t* L_20 = __this->get_U3CuriU3E5__2_6();
		Match_t3408321083 * L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = Capture_get_Length_m4245536461(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_23 = String_Substring_m2848979100(L_20, L_22, /*hidden argument*/NULL);
		// var textureData = Convert.FromBase64String(base64Data);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_24 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// texture = new Texture2D(0, 0);
		Texture2D_t3840446185 * L_25 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_25, 0, 0, /*hidden argument*/NULL);
		V_2 = L_25;
		// texture.LoadImage(textureData);
		Texture2D_t3840446185 * L_26 = V_2;
		ByteU5BU5D_t4116647657* L_27 = V_4;
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		// }
		goto IL_01ed;
	}

IL_00ad:
	{
		// else if (_loadType == LoadType.Uri)
		GLTFSceneImporter_t274320441 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__loadType_12();
		if (L_29)
		{
			goto IL_0192;
		}
	}
	{
		// var www = UnityWebRequest.Get(Path.Combine(rootPath, uri));
		String_t* L_30 = __this->get_rootPath_5();
		String_t* L_31 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_32 = Path_Combine_m3389272516(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_33 = UnityWebRequest_Get_m996521828(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_7(L_33);
		// www.downloadHandler = new DownloadHandlerTexture();
		UnityWebRequest_t463507806 * L_34 = __this->get_U3CwwwU3E5__3_7();
		DownloadHandlerTexture_t2149801800 * L_35 = (DownloadHandlerTexture_t2149801800 *)il2cpp_codegen_object_new(DownloadHandlerTexture_t2149801800_il2cpp_TypeInfo_var);
		DownloadHandlerTexture__ctor_m1255013425(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		UnityWebRequest_set_downloadHandler_m970510352(L_34, L_35, /*hidden argument*/NULL);
		// yield return www.SendWebRequest();
		UnityWebRequest_t463507806 * L_36 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_36);
		UnityWebRequestAsyncOperation_t3852015985 * L_37 = UnityWebRequest_SendWebRequest_m489860187(L_36, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_37);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00fe:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var tempTexture = DownloadHandlerTexture.GetContent(www);
		UnityWebRequest_t463507806 * L_38 = __this->get_U3CwwwU3E5__3_7();
		Texture2D_t3840446185 * L_39 = DownloadHandlerTexture_GetContent_m4103989158(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		// if (tempTexture != null)
		Texture2D_t3840446185 * L_40 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_41 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_40, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		// texture = new Texture2D(tempTexture.width, tempTexture.height, tempTexture.format, true);
		Texture2D_t3840446185 * L_42 = V_5;
		NullCheck(L_42);
		int32_t L_43 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_42);
		Texture2D_t3840446185 * L_44 = V_5;
		NullCheck(L_44);
		int32_t L_45 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		Texture2D_t3840446185 * L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = Texture2D_get_format_m2371899271(L_46, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_48 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_48, L_43, L_45, L_47, (bool)1, /*hidden argument*/NULL);
		V_2 = L_48;
		// texture.SetPixels(tempTexture.GetPixels());
		Texture2D_t3840446185 * L_49 = V_2;
		Texture2D_t3840446185 * L_50 = V_5;
		NullCheck(L_50);
		ColorU5BU5D_t941916413* L_51 = Texture2D_GetPixels_m2081641574(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Texture2D_SetPixels_m3008871897(L_49, L_51, /*hidden argument*/NULL);
		// texture.Apply(true);
		Texture2D_t3840446185 * L_52 = V_2;
		NullCheck(L_52);
		Texture2D_Apply_m1848181995(L_52, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0189;
	}

IL_014e:
	{
		// Debug.LogFormat("{0} {1}", www.responseCode, www.url);
		ObjectU5BU5D_t2843939325* L_53 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_54 = L_53;
		UnityWebRequest_t463507806 * L_55 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_55);
		int64_t L_56 = UnityWebRequest_get_responseCode_m1090830473(L_55, /*hidden argument*/NULL);
		int64_t L_57 = L_56;
		RuntimeObject * L_58 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
		ObjectU5BU5D_t2843939325* L_59 = L_54;
		UnityWebRequest_t463507806 * L_60 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_60);
		String_t* L_61 = UnityWebRequest_get_url_m2568598920(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_61);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral380657706, L_59, /*hidden argument*/NULL);
		// texture = new Texture2D(16, 16);
		Texture2D_t3840446185 * L_62 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_62, ((int32_t)16), ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_62;
	}

IL_0189:
	{
		// }
		__this->set_U3CwwwU3E5__3_7((UnityWebRequest_t463507806 *)NULL);
		goto IL_01ed;
	}

IL_0192:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_t274320441 * L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->get__loadType_12();
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_01ed;
		}
	}
	{
		// var pathToLoad = Path.Combine(rootPath, uri);
		String_t* L_65 = __this->get_rootPath_5();
		String_t* L_66 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_67 = Path_Combine_m3389272516(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		// var file = File.OpenRead(pathToLoad);
		FileStream_t4292183065 * L_68 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		V_6 = L_68;
		// byte[] bufferData = new byte[file.Length];
		FileStream_t4292183065 * L_69 = V_6;
		NullCheck(L_69);
		int64_t L_70 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_69);
		if ((int64_t)(L_70) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, U3CLoadImageU3Ed__34_MoveNext_m3821244950_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_71 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_70)));
		V_7 = L_71;
		// file.Read(bufferData, 0, (int)file.Length);
		FileStream_t4292183065 * L_72 = V_6;
		ByteU5BU5D_t4116647657* L_73 = V_7;
		FileStream_t4292183065 * L_74 = V_6;
		NullCheck(L_74);
		int64_t L_75 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_74);
		NullCheck(L_72);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_72, L_73, 0, (((int32_t)((int32_t)L_75))));
		// file.Dispose();
		FileStream_t4292183065 * L_76 = V_6;
		NullCheck(L_76);
		Stream_Dispose_m2589290611(L_76, /*hidden argument*/NULL);
		// texture = new Texture2D(0, 0);
		Texture2D_t3840446185 * L_77 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_77, 0, 0, /*hidden argument*/NULL);
		V_2 = L_77;
		// texture.LoadImage(bufferData);
		Texture2D_t3840446185 * L_78 = V_2;
		ByteU5BU5D_t4116647657* L_79 = V_7;
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
	}

IL_01ed:
	{
		// }
		__this->set_U3CuriU3E5__2_6((String_t*)NULL);
		goto IL_0275;
	}

IL_01f6:
	{
		// texture = new Texture2D(0, 0);
		Texture2D_t3840446185 * L_80 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_80, 0, 0, /*hidden argument*/NULL);
		V_2 = L_80;
		// var bufferView = image.BufferView.Value;
		Image_t782620675 * L_81 = __this->get_image_4();
		NullCheck(L_81);
		BufferViewId_t4185270750 * L_82 = L_81->get_BufferView_9();
		NullCheck(L_82);
		BufferView_t2650099126 * L_83 = VirtFuncInvoker0< BufferView_t2650099126 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>::get_Value() */, L_82);
		V_8 = L_83;
		// var data = new byte[bufferView.ByteLength];
		BufferView_t2650099126 * L_84 = V_8;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_ByteLength_9();
		ByteU5BU5D_t4116647657* L_86 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_85);
		V_9 = L_86;
		// var bufferContents = _assetCache.BufferCache[bufferView.Buffer.Id];
		GLTFSceneImporter_t274320441 * L_87 = V_1;
		NullCheck(L_87);
		AssetCache_t783611398 * L_88 = L_87->get__assetCache_9();
		NullCheck(L_88);
		Dictionary_2_t3293772351 * L_89 = AssetCache_get_BufferCache_m1575123264(L_88, /*hidden argument*/NULL);
		BufferView_t2650099126 * L_90 = V_8;
		NullCheck(L_90);
		BufferId_t2787902107 * L_91 = L_90->get_Buffer_7();
		NullCheck(L_91);
		int32_t L_92 = ((GLTFId_1_t1070037637 *)L_91)->get_Id_0();
		NullCheck(L_89);
		BufferCacheData_t110091724 * L_93 = Dictionary_2_get_Item_m1259228363(L_89, L_92, /*hidden argument*/Dictionary_2_get_Item_m1259228363_RuntimeMethod_var);
		V_10 = L_93;
		// bufferContents.Stream.Position = bufferView.ByteOffset + bufferContents.ChunkOffset;
		BufferCacheData_t110091724 * L_94 = V_10;
		NullCheck(L_94);
		Stream_t1273022909 * L_95 = BufferCacheData_get_Stream_m855137577(L_94, /*hidden argument*/NULL);
		BufferView_t2650099126 * L_96 = V_8;
		NullCheck(L_96);
		int32_t L_97 = L_96->get_ByteOffset_8();
		BufferCacheData_t110091724 * L_98 = V_10;
		NullCheck(L_98);
		int64_t L_99 = BufferCacheData_get_ChunkOffset_m3509864196(L_98, /*hidden argument*/NULL);
		NullCheck(L_95);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_95, ((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_97))), (int64_t)L_99)));
		// bufferContents.Stream.Read(data, 0, data.Length);
		BufferCacheData_t110091724 * L_100 = V_10;
		NullCheck(L_100);
		Stream_t1273022909 * L_101 = BufferCacheData_get_Stream_m855137577(L_100, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_102 = V_9;
		ByteU5BU5D_t4116647657* L_103 = V_9;
		NullCheck(L_103);
		NullCheck(L_101);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_101, L_102, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_103)->max_length)))));
		// texture.LoadImage(data);
		Texture2D_t3840446185 * L_104 = V_2;
		ByteU5BU5D_t4116647657* L_105 = V_9;
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
	}

IL_0275:
	{
		// _assetCache.ImageCache[imageID] = texture;
		GLTFSceneImporter_t274320441 * L_106 = V_1;
		NullCheck(L_106);
		AssetCache_t783611398 * L_107 = L_106->get__assetCache_9();
		NullCheck(L_107);
		Texture2DU5BU5D_t149664596* L_108 = AssetCache_get_ImageCache_m3334297062(L_107, /*hidden argument*/NULL);
		int32_t L_109 = __this->get_imageID_3();
		Texture2D_t3840446185 * L_110 = V_2;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_110);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (Texture2D_t3840446185 *)L_110);
	}

IL_0288:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3667090637 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__34_System_Collections_IEnumerator_get_Current_m619836261 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_pinvoke(const GLBStream_t3327861285& unmarshaled, GLBStream_t3327861285_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
extern "C" void GLBStream_t3327861285_marshal_pinvoke_back(const GLBStream_t3327861285_marshaled_pinvoke& marshaled, GLBStream_t3327861285& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_pinvoke_cleanup(GLBStream_t3327861285_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_com(const GLBStream_t3327861285& unmarshaled, GLBStream_t3327861285_marshaled_com& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
extern "C" void GLBStream_t3327861285_marshal_com_back(const GLBStream_t3327861285_marshaled_com& marshaled, GLBStream_t3327861285& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_com_cleanup(GLBStream_t3327861285_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.WebRequestException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m1100128511 (WebRequestException_t1410780468 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m1100128511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException() : base() { }
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		// public WebRequestException() : base() { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m613315964 (WebRequestException_t1410780468 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m613315964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		// public WebRequestException(string message) : base(message) { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m2991602755 (WebRequestException_t1410780468 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m2991602755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1406832249(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebRequestException(string message, Exception inner) : base(message, inner) { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m376355303 (WebRequestException_t1410780468 * __this, UnityWebRequest_t463507806 * ___www0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m376355303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(UnityWebRequest www) : base(string.Format("Error: {0} when requesting: {1}", www.responseCode, www.url)) { }
		UnityWebRequest_t463507806 * L_0 = ___www0;
		NullCheck(L_0);
		int64_t L_1 = UnityWebRequest_get_responseCode_m1090830473(L_0, /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_2);
		UnityWebRequest_t463507806 * L_4 = ___www0;
		NullCheck(L_4);
		String_t* L_5 = UnityWebRequest_get_url_m2568598920(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3155662446, L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(__this, L_6, /*hidden argument*/NULL);
		// public WebRequestException(UnityWebRequest www) : base(string.Format("Error: {0} when requesting: {1}", www.responseCode, www.url)) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
