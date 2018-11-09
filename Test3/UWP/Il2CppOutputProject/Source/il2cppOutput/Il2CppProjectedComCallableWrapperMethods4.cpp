#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.IDictionary`2<System.UInt32,System.UInt32>
struct IDictionary_2_t2298181031;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.UInt32>
struct IReadOnlyDictionary_2_t4250299036;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t2292407383;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>[]
struct KeyValuePair_2U5BU5D_t2471815638;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.UInt32,System.UInt32>
struct KeyCollection_t3683428346;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.UInt32,System.UInt32>
struct ValueCollection_t3369606673;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.UInt32>
struct ReadOnlyDictionary_2_t2833669367;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.UInt32,System.UInt32>
struct KeyValuePairComparer_t3860530639;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.UInt32>
struct ConstantSplittableMap_2_t3365189159;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;

extern RuntimeClass* ConstantSplittableMap_2_t3365189159_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t470219449_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t2298181031_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t1940150448_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t4250299036_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t1937034511_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t2833669367_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4076297504;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m2653360652_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m3539307501_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1360358227_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1662296104_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1484005982_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3578467758_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m1125182560_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m156740503_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m2175672871_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m3078130594_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m4234820587_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2418310178_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m591092529_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m996161704_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m4138523545_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3394458310_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m2755646888_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m183334391_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m1353641753_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m306691652_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m2077291667_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m2378025400_ComCallableWrapperProjectedMethod_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IMapView_2_t1288339008;



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
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>
struct NOVTABLE IKeyValuePair_2_t3481798315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2175672871(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3078130594(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.UInt32>
struct NOVTABLE IKeyValuePair_2_t2961754129 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m156740503(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m4234820587(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.UInt32,System.UInt32>
struct NOVTABLE IMapView_2_t1288339008 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m591092529(uint32_t ___key0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m4138523545(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2418310178(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m996161704(IMapView_2_t1288339008** ___first0, IMapView_2_t1288339008** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>
struct NOVTABLE IMap_2_t2483966460 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m306691652(uint32_t ___key0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2378025400(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m183334391(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2755646888(IMapView_2_t1288339008** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m1353641753(uint32_t ___key0, uint32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2077291667(uint32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3394458310() = 0;
};
#ifndef READONLYDICTIONARY_2_T2833669367_H
#define READONLYDICTIONARY_2_T2833669367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.UInt32>
struct  ReadOnlyDictionary_2_t2833669367  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3683428346 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3369606673 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2833669367, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2833669367, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2833669367, ___m_keys_2)); }
	inline KeyCollection_t3683428346 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3683428346 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3683428346 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2833669367, ___m_values_3)); }
	inline ValueCollection_t3369606673 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3369606673 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3369606673 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T2833669367_H
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
#ifndef CONSTANTSPLITTABLEMAP_2_T3365189159_H
#define CONSTANTSPLITTABLEMAP_2_T3365189159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.UInt32>
struct  ConstantSplittableMap_2_t3365189159  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2471815638* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3365189159, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2471815638* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2471815638** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2471815638* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3365189159, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3365189159, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3365189159_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t3860530639 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3365189159_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t3860530639 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t3860530639 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t3860530639 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3365189159_H
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
#ifndef KEYVALUEPAIR_2_T2457078697_H
#define KEYVALUEPAIR_2_T2457078697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct  KeyValuePair_2_t2457078697 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2457078697, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2457078697, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2457078697_H
#ifndef KEYVALUEPAIR_2_T1937034511_H
#define KEYVALUEPAIR_2_T1937034511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>
struct  KeyValuePair_2_t1937034511 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1937034511, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1937034511, ___value_1)); }
	inline uint32_t get_value_1() const { return ___value_1; }
	inline uint32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1937034511_H
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
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H


// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m1662296104_gshared (KeyValuePair_2_t2457078697 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m1484005982_gshared (KeyValuePair_2_t2457078697 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m1125182560_gshared (ReadOnlyDictionary_2_t2833669367 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m3539307501_gshared (ConstantSplittableMap_2_t3365189159 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.UInt32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m2653360652_gshared (ConstantSplittableMap_2_t3365189159 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Key()
extern "C" IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m1360358227_gshared (KeyValuePair_2_t1937034511 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Value_m3578467758_gshared (KeyValuePair_2_t1937034511 * __this, const RuntimeMethod* method);

// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m1662296104 (KeyValuePair_2_t2457078697 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t2457078697 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1662296104_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m1484005982 (KeyValuePair_2_t2457078697 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t2457078697 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1484005982_gshared)(__this, method);
}
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m2696589580 (KeyNotFoundException_t2292407383 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_m3489164646 (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m1125182560 (ReadOnlyDictionary_2_t2833669367 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t2833669367 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m1125182560_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.UInt32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m3539307501 (ConstantSplittableMap_2_t3365189159 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3365189159 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3539307501_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.UInt32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m2653360652 (ConstantSplittableMap_2_t3365189159 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t3365189159 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2653360652_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m1360358227 (KeyValuePair_2_t1937034511 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t1937034511 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1360358227_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>::get_Value()
inline uint32_t KeyValuePair_2_get_Value_m3578467758 (KeyValuePair_2_t1937034511 * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t1937034511 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3578467758_gshared)(__this, method);
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2175672871_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2175672871_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1662296104((KeyValuePair_2_t2457078697*)UnBox(__thisValue, KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1662296104_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3078130594_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3078130594_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1484005982((KeyValuePair_2_t2457078697*)UnBox(__thisValue, KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1484005982_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m306691652_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m306691652_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, uint32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.UInt32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2298181031_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2378025400_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2378025400_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>::get_Count() */, ICollection_1_t470219449_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m183334391_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m183334391_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.UInt32>::ContainsKey(TKey) */, IDictionary_2_t2298181031_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m2755646888_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1288339008** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m2755646888_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t4250299036_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t2833669367 * readOnlyDictionary = (ReadOnlyDictionary_2_t2833669367*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t2833669367_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m1125182560(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m1125182560_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1288339008* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1288339008::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1288339008>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m1353641753_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, uint32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m1353641753_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.UInt32>::ContainsKey(TKey) */, IDictionary_2_t2298181031_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< uint32_t, uint32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt32,System.UInt32>::set_Item(TKey,TValue) */, IDictionary_2_t2298181031_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m2077291667_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m2077291667_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.UInt32>::Remove(TKey) */, IDictionary_2_t2298181031_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.UInt32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3394458310_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3394458310_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>::Clear() */, ICollection_1_t470219449_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.UInt32,System.UInt32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m591092529_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m591092529_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, uint32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.UInt32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t4250299036_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.UInt32,System.UInt32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m4138523545_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m4138523545_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>::get_Count() */, IReadOnlyCollection_1_t1940150448_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.UInt32,System.UInt32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2418310178_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2418310178_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.UInt32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t4250299036_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.UInt32,System.UInt32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m996161704_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1288339008** ___first0, IMapView_2_t1288339008** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m996161704_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.UInt32>>::get_Count() */, IReadOnlyCollection_1_t1940150448_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3365189159 * splittableMap = (ConstantSplittableMap_2_t3365189159 *)IsInstSealed(__this, ConstantSplittableMap_2_t3365189159_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3365189159*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3365189159_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m3539307501(splittableMap, __this, ConstantSplittableMap_2__ctor_m3539307501_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m2653360652(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m2653360652_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1288339008::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1288339008>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1288339008::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1288339008>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.UInt32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m156740503_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m156740503_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1360358227((KeyValuePair_2_t1937034511*)UnBox(__thisValue, KeyValuePair_2_t1937034511_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1360358227_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.UInt32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m4234820587_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m4234820587_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m3578467758((KeyValuePair_2_t1937034511*)UnBox(__thisValue, KeyValuePair_2_t1937034511_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m3578467758_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
