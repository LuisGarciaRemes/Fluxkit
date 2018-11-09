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


// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.IList
struct IList_t2094931216;
// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct NotifyCollectionChangedEventArgs_t9239872;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t3586970409;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.String
struct String_t;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;




#ifndef U3CMODULEU3E_T692745530_H
#define U3CMODULEU3E_T692745530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745530 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745530_H
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
#ifndef SR_T167583546_H
#define SR_T167583546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SR
struct  SR_t167583546  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SR_T167583546_H
#ifndef ORDEREDDICTIONARY_T2617496293_H
#define ORDEREDDICTIONARY_T2617496293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t2617496293  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t2718874744 * ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_t1853889766 * ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject * ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t950877179 * ____siInfo_6;

public:
	inline static int32_t get_offset_of__objectsArray_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsArray_0)); }
	inline ArrayList_t2718874744 * get__objectsArray_0() const { return ____objectsArray_0; }
	inline ArrayList_t2718874744 ** get_address_of__objectsArray_0() { return &____objectsArray_0; }
	inline void set__objectsArray_0(ArrayList_t2718874744 * value)
	{
		____objectsArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectsArray_0), value);
	}

	inline static int32_t get_offset_of__objectsTable_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____objectsTable_1)); }
	inline Hashtable_t1853889766 * get__objectsTable_1() const { return ____objectsTable_1; }
	inline Hashtable_t1853889766 ** get_address_of__objectsTable_1() { return &____objectsTable_1; }
	inline void set__objectsTable_1(Hashtable_t1853889766 * value)
	{
		____objectsTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectsTable_1), value);
	}

	inline static int32_t get_offset_of__initialCapacity_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____initialCapacity_2)); }
	inline int32_t get__initialCapacity_2() const { return ____initialCapacity_2; }
	inline int32_t* get_address_of__initialCapacity_2() { return &____initialCapacity_2; }
	inline void set__initialCapacity_2(int32_t value)
	{
		____initialCapacity_2 = value;
	}

	inline static int32_t get_offset_of__comparer_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____comparer_3)); }
	inline RuntimeObject* get__comparer_3() const { return ____comparer_3; }
	inline RuntimeObject** get_address_of__comparer_3() { return &____comparer_3; }
	inline void set__comparer_3(RuntimeObject* value)
	{
		____comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_3), value);
	}

	inline static int32_t get_offset_of__readOnly_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____readOnly_4)); }
	inline bool get__readOnly_4() const { return ____readOnly_4; }
	inline bool* get_address_of__readOnly_4() { return &____readOnly_4; }
	inline void set__readOnly_4(bool value)
	{
		____readOnly_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}

	inline static int32_t get_offset_of__siInfo_6() { return static_cast<int32_t>(offsetof(OrderedDictionary_t2617496293, ____siInfo_6)); }
	inline SerializationInfo_t950877179 * get__siInfo_6() const { return ____siInfo_6; }
	inline SerializationInfo_t950877179 ** get_address_of__siInfo_6() { return &____siInfo_6; }
	inline void set__siInfo_6(SerializationInfo_t950877179 * value)
	{
		____siInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARY_T2617496293_H
#ifndef ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#define ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t1215437281  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::arrayEnumerator
	RuntimeObject* ___arrayEnumerator_1;

public:
	inline static int32_t get_offset_of__objectReturnType_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ____objectReturnType_0)); }
	inline int32_t get__objectReturnType_0() const { return ____objectReturnType_0; }
	inline int32_t* get_address_of__objectReturnType_0() { return &____objectReturnType_0; }
	inline void set__objectReturnType_0(int32_t value)
	{
		____objectReturnType_0 = value;
	}

	inline static int32_t get_offset_of_arrayEnumerator_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t1215437281, ___arrayEnumerator_1)); }
	inline RuntimeObject* get_arrayEnumerator_1() const { return ___arrayEnumerator_1; }
	inline RuntimeObject** get_address_of_arrayEnumerator_1() { return &___arrayEnumerator_1; }
	inline void set_arrayEnumerator_1(RuntimeObject* value)
	{
		___arrayEnumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___arrayEnumerator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_T1215437281_H
#ifndef ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct  OrderedDictionaryKeyValueCollection_t1788601968  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t2718874744 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ____objects_0)); }
	inline ArrayList_t2718874744 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t2718874744 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t2718874744 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t1788601968, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYKEYVALUECOLLECTION_T1788601968_H
#ifndef STRINGCOLLECTION_T167406615_H
#define STRINGCOLLECTION_T167406615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t167406615  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t2718874744 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t167406615, ___data_0)); }
	inline ArrayList_t2718874744 * get_data_0() const { return ___data_0; }
	inline ArrayList_t2718874744 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t2718874744 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T167406615_H
#ifndef STRINGDICTIONARY_T120437468_H
#define STRINGDICTIONARY_T120437468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t120437468  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1853889766 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t120437468, ___contents_0)); }
	inline Hashtable_t1853889766 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1853889766 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1853889766 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T120437468_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef ENUMERABLE_T538148348_H
#define ENUMERABLE_T538148348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable
struct  Enumerable_t538148348  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLE_T538148348_H
#ifndef ERROR_T2882114465_H
#define ERROR_T2882114465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Error
struct  Error_t2882114465  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROR_T2882114465_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#define __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t2710994319 
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
		uint8_t __StaticArrayInitTypeSizeU3D12_t2710994319__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D12_T2710994319_H
#ifndef __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#define __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct  __StaticArrayInitTypeSizeU3D128_t531529102 
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
		uint8_t __StaticArrayInitTypeSizeU3D128_t531529102__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D128_T531529102_H
#ifndef __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#define __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
struct  __StaticArrayInitTypeSizeU3D14_t3517563373 
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
		uint8_t __StaticArrayInitTypeSizeU3D14_t3517563373__padding[14];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D14_T3517563373_H
#ifndef __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#define __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct  __StaticArrayInitTypeSizeU3D256_t1757367633 
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
		uint8_t __StaticArrayInitTypeSizeU3D256_t1757367633__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D256_T1757367633_H
#ifndef __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#define __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct  __StaticArrayInitTypeSizeU3D3_t3217885684 
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
		uint8_t __StaticArrayInitTypeSizeU3D3_t3217885684__padding[3];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D3_T3217885684_H
#ifndef __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#define __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t2711125392 
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
		uint8_t __StaticArrayInitTypeSizeU3D32_t2711125392__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D32_T2711125392_H
#ifndef __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#define __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44
struct  __StaticArrayInitTypeSizeU3D44_t3517366765 
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
		uint8_t __StaticArrayInitTypeSizeU3D44_t3517366765__padding[44];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D44_T3517366765_H
#ifndef __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#define __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct  __StaticArrayInitTypeSizeU3D6_t3217689076 
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
		uint8_t __StaticArrayInitTypeSizeU3D6_t3217689076__padding[6];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D6_T3217689076_H
#ifndef __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#define __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct  __StaticArrayInitTypeSizeU3D9_t3218278900 
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
		uint8_t __StaticArrayInitTypeSizeU3D9_t3218278900__padding[9];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D9_T3218278900_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255365  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::0283A6AF88802AB45989B29549915BEA0F6CD515
	__StaticArrayInitTypeSizeU3D14_t3517563373  ___0283A6AF88802AB45989B29549915BEA0F6CD515_0;
	// System.Int64 <PrivateImplementationDetails>::03F4297FCC30D0FD5E420E5D26E7FA711167C7EF
	int64_t ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::1A39764B112685485A5BA7B2880D878B858C1A7A
	__StaticArrayInitTypeSizeU3D9_t3218278900  ___1A39764B112685485A5BA7B2880D878B858C1A7A_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::1A84029C80CB5518379F199F53FF08A7B764F8FD
	__StaticArrayInitTypeSizeU3D3_t3217885684  ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC
	__StaticArrayInitTypeSizeU3D12_t2710994319  ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::59F5BD34B6C013DEACC784F69C67E95150033A84
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___59F5BD34B6C013DEACC784F69C67E95150033A84_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C
	__StaticArrayInitTypeSizeU3D6_t3217689076  ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::6D49C9D487D7AD3491ECE08732D68A593CC2038D
	__StaticArrayInitTypeSizeU3D9_t3218278900  ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E
	__StaticArrayInitTypeSizeU3D128_t531529102  ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=44 <PrivateImplementationDetails>::8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3
	__StaticArrayInitTypeSizeU3D44_t3517366765  ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9;
	// System.Int64 <PrivateImplementationDetails>::98A44A6F8606AE6F23FE230286C1D6FBCC407226
	int64_t ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::ADDB8526F472C1C6D36DBD5A6E509D973CC34C92
	__StaticArrayInitTypeSizeU3D12_t2710994319  ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CCEEADA43268372341F81AE0C9208C6856441C04
	__StaticArrayInitTypeSizeU3D128_t531529102  ___CCEEADA43268372341F81AE0C9208C6856441C04_13;
	// System.Int64 <PrivateImplementationDetails>::E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78
	int64_t ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EC5842B3154E1AF94500B57220EB9F684BCCC42A
	__StaticArrayInitTypeSizeU3D32_t2711125392  ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::EEAFE8C6E1AB017237567305EE925C976CDB6458
	__StaticArrayInitTypeSizeU3D256_t1757367633  ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16;

public:
	inline static int32_t get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___0283A6AF88802AB45989B29549915BEA0F6CD515_0)); }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373  get_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() const { return ___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline __StaticArrayInitTypeSizeU3D14_t3517563373 * get_address_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0() { return &___0283A6AF88802AB45989B29549915BEA0F6CD515_0; }
	inline void set_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(__StaticArrayInitTypeSizeU3D14_t3517563373  value)
	{
		___0283A6AF88802AB45989B29549915BEA0F6CD515_0 = value;
	}

	inline static int32_t get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1)); }
	inline int64_t get_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() const { return ___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline int64_t* get_address_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1() { return &___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1; }
	inline void set_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(int64_t value)
	{
		___03F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1 = value;
	}

	inline static int32_t get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___1A39764B112685485A5BA7B2880D878B858C1A7A_2)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900  get_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() const { return ___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900 * get_address_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2() { return &___1A39764B112685485A5BA7B2880D878B858C1A7A_2; }
	inline void set_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(__StaticArrayInitTypeSizeU3D9_t3218278900  value)
	{
		___1A39764B112685485A5BA7B2880D878B858C1A7A_2 = value;
	}

	inline static int32_t get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3)); }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684  get_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() const { return ___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline __StaticArrayInitTypeSizeU3D3_t3217885684 * get_address_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3() { return &___1A84029C80CB5518379F199F53FF08A7B764F8FD_3; }
	inline void set_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(__StaticArrayInitTypeSizeU3D3_t3217885684  value)
	{
		___1A84029C80CB5518379F199F53FF08A7B764F8FD_3 = value;
	}

	inline static int32_t get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319  get_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() const { return ___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319 * get_address_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4() { return &___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4; }
	inline void set_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(__StaticArrayInitTypeSizeU3D12_t2710994319  value)
	{
		___3BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4 = value;
	}

	inline static int32_t get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___59F5BD34B6C013DEACC784F69C67E95150033A84_5)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() const { return ___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5() { return &___59F5BD34B6C013DEACC784F69C67E95150033A84_5; }
	inline void set_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___59F5BD34B6C013DEACC784F69C67E95150033A84_5 = value;
	}

	inline static int32_t get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6)); }
	inline __StaticArrayInitTypeSizeU3D6_t3217689076  get_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() const { return ___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline __StaticArrayInitTypeSizeU3D6_t3217689076 * get_address_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6() { return &___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6; }
	inline void set_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(__StaticArrayInitTypeSizeU3D6_t3217689076  value)
	{
		___5BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6 = value;
	}

	inline static int32_t get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7)); }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900  get_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() const { return ___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline __StaticArrayInitTypeSizeU3D9_t3218278900 * get_address_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7() { return &___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7; }
	inline void set_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(__StaticArrayInitTypeSizeU3D9_t3218278900  value)
	{
		___6D49C9D487D7AD3491ECE08732D68A593CC2038D_7 = value;
	}

	inline static int32_t get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() const { return ___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8() { return &___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8; }
	inline void set_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___6F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8 = value;
	}

	inline static int32_t get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9)); }
	inline __StaticArrayInitTypeSizeU3D44_t3517366765  get_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() const { return ___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline __StaticArrayInitTypeSizeU3D44_t3517366765 * get_address_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9() { return &___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9; }
	inline void set_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(__StaticArrayInitTypeSizeU3D44_t3517366765  value)
	{
		___8E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9 = value;
	}

	inline static int32_t get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10)); }
	inline int64_t get_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() const { return ___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline int64_t* get_address_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10() { return &___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10; }
	inline void set_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(int64_t value)
	{
		___98A44A6F8606AE6F23FE230286C1D6FBCC407226_10 = value;
	}

	inline static int32_t get_offset_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11)); }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319  get_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() const { return ___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline __StaticArrayInitTypeSizeU3D12_t2710994319 * get_address_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11() { return &___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11; }
	inline void set_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11(__StaticArrayInitTypeSizeU3D12_t2710994319  value)
	{
		___ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11 = value;
	}

	inline static int32_t get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() const { return ___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12() { return &___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12; }
	inline void set_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12 = value;
	}

	inline static int32_t get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___CCEEADA43268372341F81AE0C9208C6856441C04_13)); }
	inline __StaticArrayInitTypeSizeU3D128_t531529102  get_CCEEADA43268372341F81AE0C9208C6856441C04_13() const { return ___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline __StaticArrayInitTypeSizeU3D128_t531529102 * get_address_of_CCEEADA43268372341F81AE0C9208C6856441C04_13() { return &___CCEEADA43268372341F81AE0C9208C6856441C04_13; }
	inline void set_CCEEADA43268372341F81AE0C9208C6856441C04_13(__StaticArrayInitTypeSizeU3D128_t531529102  value)
	{
		___CCEEADA43268372341F81AE0C9208C6856441C04_13 = value;
	}

	inline static int32_t get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14)); }
	inline int64_t get_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() const { return ___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline int64_t* get_address_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14() { return &___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14; }
	inline void set_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14(int64_t value)
	{
		___E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14 = value;
	}

	inline static int32_t get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15)); }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392  get_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() const { return ___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline __StaticArrayInitTypeSizeU3D32_t2711125392 * get_address_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15() { return &___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15; }
	inline void set_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15(__StaticArrayInitTypeSizeU3D32_t2711125392  value)
	{
		___EC5842B3154E1AF94500B57220EB9F684BCCC42A_15 = value;
	}

	inline static int32_t get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields, ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16)); }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633  get_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() const { return ___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline __StaticArrayInitTypeSizeU3D256_t1757367633 * get_address_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16() { return &___EEAFE8C6E1AB017237567305EE925C976CDB6458_16; }
	inline void set_EEAFE8C6E1AB017237567305EE925C976CDB6458_16(__StaticArrayInitTypeSizeU3D256_t1757367633  value)
	{
		___EEAFE8C6E1AB017237567305EE925C976CDB6458_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255365_H
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
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___2)); }
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
#endif // CIPHERMODE_T84635067_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___2)); }
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
#endif // PADDINGMODE_T2546806710_H
#ifndef SYMMETRICTRANSFORM_T3802591842_H
#define SYMMETRICTRANSFORM_T3802591842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591842  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Security.Cryptography.PaddingMode Mono.Security.Cryptography.SymmetricTransform::padmode
	int32_t ___padmode_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_padmode_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___padmode_7)); }
	inline int32_t get_padmode_7() const { return ___padmode_7; }
	inline int32_t* get_address_of_padmode_7() { return &___padmode_7; }
	inline void set_padmode_7(int32_t value)
	{
		___padmode_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackByte_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___FeedBackByte_8)); }
	inline int32_t get_FeedBackByte_8() const { return ___FeedBackByte_8; }
	inline int32_t* get_address_of_FeedBackByte_8() { return &___FeedBackByte_8; }
	inline void set_FeedBackByte_8(int32_t value)
	{
		___FeedBackByte_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591842, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591842_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
#define NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedEventArgs
struct  NotifyCollectionChangedEventArgs_t9239872  : public EventArgs_t3591816995
{
public:
	// System.Collections.Specialized.NotifyCollectionChangedAction System.Collections.Specialized.NotifyCollectionChangedEventArgs::_action
	int32_t ____action_1;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newItems
	RuntimeObject* ____newItems_2;
	// System.Collections.IList System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldItems
	RuntimeObject* ____oldItems_3;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_newStartingIndex
	int32_t ____newStartingIndex_4;
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedEventArgs::_oldStartingIndex
	int32_t ____oldStartingIndex_5;

public:
	inline static int32_t get_offset_of__action_1() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____action_1)); }
	inline int32_t get__action_1() const { return ____action_1; }
	inline int32_t* get_address_of__action_1() { return &____action_1; }
	inline void set__action_1(int32_t value)
	{
		____action_1 = value;
	}

	inline static int32_t get_offset_of__newItems_2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____newItems_2)); }
	inline RuntimeObject* get__newItems_2() const { return ____newItems_2; }
	inline RuntimeObject** get_address_of__newItems_2() { return &____newItems_2; }
	inline void set__newItems_2(RuntimeObject* value)
	{
		____newItems_2 = value;
		Il2CppCodeGenWriteBarrier((&____newItems_2), value);
	}

	inline static int32_t get_offset_of__oldItems_3() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____oldItems_3)); }
	inline RuntimeObject* get__oldItems_3() const { return ____oldItems_3; }
	inline RuntimeObject** get_address_of__oldItems_3() { return &____oldItems_3; }
	inline void set__oldItems_3(RuntimeObject* value)
	{
		____oldItems_3 = value;
		Il2CppCodeGenWriteBarrier((&____oldItems_3), value);
	}

	inline static int32_t get_offset_of__newStartingIndex_4() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____newStartingIndex_4)); }
	inline int32_t get__newStartingIndex_4() const { return ____newStartingIndex_4; }
	inline int32_t* get_address_of__newStartingIndex_4() { return &____newStartingIndex_4; }
	inline void set__newStartingIndex_4(int32_t value)
	{
		____newStartingIndex_4 = value;
	}

	inline static int32_t get_offset_of__oldStartingIndex_5() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedEventArgs_t9239872, ____oldStartingIndex_5)); }
	inline int32_t get__oldStartingIndex_5() const { return ____oldStartingIndex_5; }
	inline int32_t* get_address_of__oldStartingIndex_5() { return &____oldStartingIndex_5; }
	inline void set__oldStartingIndex_5(int32_t value)
	{
		____oldStartingIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFYCOLLECTIONCHANGEDEVENTARGS_T9239872_H
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
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_1)); }
	inline int32_t get_FeedbackSizeValue_1() const { return ___FeedbackSizeValue_1; }
	inline int32_t* get_address_of_FeedbackSizeValue_1() { return &___FeedbackSizeValue_1; }
	inline void set_FeedbackSizeValue_1(int32_t value)
	{
		___FeedbackSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_IVValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_2)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_2() const { return ___IVValue_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_2() { return &___IVValue_2; }
	inline void set_IVValue_2(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_2), value);
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_6)); }
	inline int32_t get_KeySizeValue_6() const { return ___KeySizeValue_6; }
	inline int32_t* get_address_of_KeySizeValue_6() { return &___KeySizeValue_6; }
	inline void set_KeySizeValue_6(int32_t value)
	{
		___KeySizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#define NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct  NotifyCollectionChangedEventHandler_t2749712960  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct INotifyCollectionChangedEventHandler_t2749712960_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, NotifyCollectionChangedEventArgs_t9239872 * ___e1) = 0;
};

#endif // NOTIFYCOLLECTIONCHANGEDEVENTHANDLER_T2749712960_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct Aes_t1218282760_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_10;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_9() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalBlockSizes_9)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_9() const { return ___s_legalBlockSizes_9; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_9() { return &___s_legalBlockSizes_9; }
	inline void set_s_legalBlockSizes_9(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_9), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_10() { return static_cast<int32_t>(offsetof(Aes_t1218282760_StaticFields, ___s_legalKeySizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_10() const { return ___s_legalKeySizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_10() { return &___s_legalKeySizes_10; }
	inline void set_s_legalKeySizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef AESTRANSFORM_T2957123611_H
#define AESTRANSFORM_T2957123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t2957123611  : public SymmetricTransform_t3802591842
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___expandedKey_12)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t2957123611_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_15), value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t4116647657* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t4116647657* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_16), value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_17), value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t2770800703* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t2770800703* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier((&___T0_18), value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t2770800703* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t2770800703* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier((&___T1_19), value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t2770800703* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t2770800703* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier((&___T2_20), value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t2770800703* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t2770800703* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier((&___T3_21), value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_22), value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_23), value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_24), value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T2957123611_H
#ifndef AESCRYPTOSERVICEPROVIDER_T345478893_H
#define AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesCryptoServiceProvider
struct  AesCryptoServiceProvider_t345478893  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifndef AESMANAGED_T1129950597_H
#define AESMANAGED_T1129950597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t1129950597  : public Aes_t1218282760
{
public:
	// System.Security.Cryptography.RijndaelManaged System.Security.Cryptography.AesManaged::m_rijndael
	RijndaelManaged_t3586970409 * ___m_rijndael_11;

public:
	inline static int32_t get_offset_of_m_rijndael_11() { return static_cast<int32_t>(offsetof(AesManaged_t1129950597, ___m_rijndael_11)); }
	inline RijndaelManaged_t3586970409 * get_m_rijndael_11() const { return ___m_rijndael_11; }
	inline RijndaelManaged_t3586970409 ** get_address_of_m_rijndael_11() { return &___m_rijndael_11; }
	inline void set_m_rijndael_11(RijndaelManaged_t3586970409 * value)
	{
		___m_rijndael_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_rijndael_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T1129950597_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3100 = { sizeof (NotifyCollectionChangedAction_t1056453382)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3100[6] = 
{
	NotifyCollectionChangedAction_t1056453382::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3101 = { sizeof (NotifyCollectionChangedEventArgs_t9239872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3101[5] = 
{
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__action_1(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__newItems_2(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__oldItems_3(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__newStartingIndex_4(),
	NotifyCollectionChangedEventArgs_t9239872::get_offset_of__oldStartingIndex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3102 = { sizeof (NotifyCollectionChangedEventHandler_t2749712960), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3103 = { sizeof (OrderedDictionary_t2617496293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3103[7] = 
{
	OrderedDictionary_t2617496293::get_offset_of__objectsArray_0(),
	OrderedDictionary_t2617496293::get_offset_of__objectsTable_1(),
	OrderedDictionary_t2617496293::get_offset_of__initialCapacity_2(),
	OrderedDictionary_t2617496293::get_offset_of__comparer_3(),
	OrderedDictionary_t2617496293::get_offset_of__readOnly_4(),
	OrderedDictionary_t2617496293::get_offset_of__syncRoot_5(),
	OrderedDictionary_t2617496293::get_offset_of__siInfo_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3104 = { sizeof (OrderedDictionaryEnumerator_t1215437281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3104[2] = 
{
	OrderedDictionaryEnumerator_t1215437281::get_offset_of__objectReturnType_0(),
	OrderedDictionaryEnumerator_t1215437281::get_offset_of_arrayEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3105 = { sizeof (OrderedDictionaryKeyValueCollection_t1788601968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3105[2] = 
{
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of__objects_0(),
	OrderedDictionaryKeyValueCollection_t1788601968::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3106 = { sizeof (StringCollection_t167406615), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3106[1] = 
{
	StringCollection_t167406615::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3107 = { sizeof (StringDictionary_t120437468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3107[1] = 
{
	StringDictionary_t120437468::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3108 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3109 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3109[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3110 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3110[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3111 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3111[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3112 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3112[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3113 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3113[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3114 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3115 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3115[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3116 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3116[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3117 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3118 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3119 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255365), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3119[17] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U30283A6AF88802AB45989B29549915BEA0F6CD515_0(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U303F4297FCC30D0FD5E420E5D26E7FA711167C7EF_1(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U31A39764B112685485A5BA7B2880D878B858C1A7A_2(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U31A84029C80CB5518379F199F53FF08A7B764F8FD_3(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U33BE77BF818331C2D8400FFFFF9FADD3F16AD89AC_4(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U359F5BD34B6C013DEACC784F69C67E95150033A84_5(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U35BC3486B05BA8CF4689C7BDB198B3F477BB4E20C_6(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U36D49C9D487D7AD3491ECE08732D68A593CC2038D_7(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U36F3AD3DC3AF8047587C4C9D696EB68A01FEF796E_8(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U38E0EF3D67A3EB1863224EE3CACB424BC2F8CFBA3_9(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_U398A44A6F8606AE6F23FE230286C1D6FBCC407226_10(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_ADDB8526F472C1C6D36DBD5A6E509D973CC34C92_11(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_C02C28AFEBE998F767E4AF43E3BE8F5E9FA11536_12(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_CCEEADA43268372341F81AE0C9208C6856441C04_13(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_E5BC1BAFADE1862DD6E0B9FB632BFAA6C3873A78_14(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_EC5842B3154E1AF94500B57220EB9F684BCCC42A_15(),
	U3CPrivateImplementationDetailsU3E_t3057255365_StaticFields::get_offset_of_EEAFE8C6E1AB017237567305EE925C976CDB6458_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3120 = { sizeof (__StaticArrayInitTypeSizeU3D3_t3217885684)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D3_t3217885684 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3121 = { sizeof (__StaticArrayInitTypeSizeU3D6_t3217689076)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D6_t3217689076 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3122 = { sizeof (__StaticArrayInitTypeSizeU3D9_t3218278900)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D9_t3218278900 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3123 = { sizeof (__StaticArrayInitTypeSizeU3D12_t2710994319)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D12_t2710994319 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3124 = { sizeof (__StaticArrayInitTypeSizeU3D14_t3517563373)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D14_t3517563373 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3125 = { sizeof (__StaticArrayInitTypeSizeU3D32_t2711125392)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D32_t2711125392 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3126 = { sizeof (__StaticArrayInitTypeSizeU3D44_t3517366765)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D44_t3517366765 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3127 = { sizeof (__StaticArrayInitTypeSizeU3D128_t531529102)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D128_t531529102 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3128 = { sizeof (__StaticArrayInitTypeSizeU3D256_t1757367633)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D256_t1757367633 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3129 = { sizeof (U3CModuleU3E_t692745530), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3130 = { sizeof (SR_t167583546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3131 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3132 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3133 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3134 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3135 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3136 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3137 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3138 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3139 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3140 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3141 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3142 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3143 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3144 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3145 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3146 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3147 = { sizeof (AesManaged_t1129950597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3147[1] = 
{
	AesManaged_t1129950597::get_offset_of_m_rijndael_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3148 = { sizeof (AesCryptoServiceProvider_t345478893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3149 = { sizeof (AesTransform_t2957123611), -1, sizeof(AesTransform_t2957123611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3149[14] = 
{
	AesTransform_t2957123611::get_offset_of_expandedKey_12(),
	AesTransform_t2957123611::get_offset_of_Nk_13(),
	AesTransform_t2957123611::get_offset_of_Nr_14(),
	AesTransform_t2957123611_StaticFields::get_offset_of_Rcon_15(),
	AesTransform_t2957123611_StaticFields::get_offset_of_SBox_16(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iSBox_17(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T0_18(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T1_19(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T2_20(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T3_21(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT0_22(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT1_23(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT2_24(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT3_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3150 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3151 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3152 = { sizeof (Error_t2882114465), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3153 = { sizeof (Enumerable_t538148348), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3154 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3154[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3155 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3155[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3156 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3156[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3157 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3157[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3158 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3158[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3159 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3159[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3160 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3160[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3161 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3161[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3162 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3162[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3163 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3163[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3164 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3164[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3165 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3165[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3166 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3166[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3167 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3167[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3168 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3168[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3169 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3169[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3170 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3170[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3171 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3171[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3172 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3172[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3173 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3173[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3174 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3174[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3175 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3175[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3176 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3176[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3177 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3177[11] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3178 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3178[11] = 
{
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3179 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3179[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3180 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3181 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3182 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3183 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3183[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3184 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3184[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3185 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3185[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3186 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3187 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3187[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3188 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3188[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3189 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3190 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3190[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3191 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3191[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3192 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3192[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3193 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3193[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3194 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3195 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3195[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3196 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3196[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3197 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3198 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3198[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3199 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
