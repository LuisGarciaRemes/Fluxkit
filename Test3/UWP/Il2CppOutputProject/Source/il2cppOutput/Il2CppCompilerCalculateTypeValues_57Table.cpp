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


// ProBuilder.Core.pb_Face
struct pb_Face_t1264560821;
// ProBuilder.Core.pb_Object
struct pb_Object_t4080196558;
// ProBuilder.Core.pb_VersionInfo
struct pb_VersionInfo_t568354953;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1839659084;
// System.Collections.Generic.Dictionary`2<System.String,ProBuilder.Core.pb_CIE_Lab_Color>
struct Dictionary_2_t2176439185;
// System.Collections.Generic.List`1<ProBuilder.Core.ChangelogEntry>
struct List_1_t296803260;
// System.Collections.Generic.List`1<ProBuilder.Core.pb_BezierPoint>
struct List_1_t3916537093;
// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge>
struct List_1_t3138043566;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t4027761066;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Void
struct Void_t1185182177;




#ifndef U3CMODULEU3E_T692745595_H
#define U3CMODULEU3E_T692745595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745595 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745595_H
#ifndef U3CMODULEU3E_T692745594_H
#define U3CMODULEU3E_T692745594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745594 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745594_H
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
#ifndef CONSTS_T1749595338_H
#define CONSTS_T1749595338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t1749595338  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T1749595338_H
#ifndef CHANGELOG_T1776431042_H
#define CHANGELOG_T1776431042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.Changelog
struct  Changelog_t1776431042  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<ProBuilder.Core.ChangelogEntry> ProBuilder.Core.Changelog::m_Entries
	List_1_t296803260 * ___m_Entries_3;

public:
	inline static int32_t get_offset_of_m_Entries_3() { return static_cast<int32_t>(offsetof(Changelog_t1776431042, ___m_Entries_3)); }
	inline List_1_t296803260 * get_m_Entries_3() const { return ___m_Entries_3; }
	inline List_1_t296803260 ** get_address_of_m_Entries_3() { return &___m_Entries_3; }
	inline void set_m_Entries_3(List_1_t296803260 * value)
	{
		___m_Entries_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Entries_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGELOG_T1776431042_H
#ifndef CHANGELOGENTRY_T3119695814_H
#define CHANGELOGENTRY_T3119695814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.ChangelogEntry
struct  ChangelogEntry_t3119695814  : public RuntimeObject
{
public:
	// ProBuilder.Core.pb_VersionInfo ProBuilder.Core.ChangelogEntry::m_VersionInfo
	pb_VersionInfo_t568354953 * ___m_VersionInfo_0;
	// System.String ProBuilder.Core.ChangelogEntry::m_ReleaseNotes
	String_t* ___m_ReleaseNotes_1;

public:
	inline static int32_t get_offset_of_m_VersionInfo_0() { return static_cast<int32_t>(offsetof(ChangelogEntry_t3119695814, ___m_VersionInfo_0)); }
	inline pb_VersionInfo_t568354953 * get_m_VersionInfo_0() const { return ___m_VersionInfo_0; }
	inline pb_VersionInfo_t568354953 ** get_address_of_m_VersionInfo_0() { return &___m_VersionInfo_0; }
	inline void set_m_VersionInfo_0(pb_VersionInfo_t568354953 * value)
	{
		___m_VersionInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_VersionInfo_0), value);
	}

	inline static int32_t get_offset_of_m_ReleaseNotes_1() { return static_cast<int32_t>(offsetof(ChangelogEntry_t3119695814, ___m_ReleaseNotes_1)); }
	inline String_t* get_m_ReleaseNotes_1() const { return ___m_ReleaseNotes_1; }
	inline String_t** get_address_of_m_ReleaseNotes_1() { return &___m_ReleaseNotes_1; }
	inline void set_m_ReleaseNotes_1(String_t* value)
	{
		___m_ReleaseNotes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReleaseNotes_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANGELOGENTRY_T3119695814_H
#ifndef PB_CIE_LAB_COLOR_T2391182886_H
#define PB_CIE_LAB_COLOR_T2391182886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_CIE_Lab_Color
struct  pb_CIE_Lab_Color_t2391182886  : public RuntimeObject
{
public:
	// System.Single ProBuilder.Core.pb_CIE_Lab_Color::L
	float ___L_0;
	// System.Single ProBuilder.Core.pb_CIE_Lab_Color::a
	float ___a_1;
	// System.Single ProBuilder.Core.pb_CIE_Lab_Color::b
	float ___b_2;

public:
	inline static int32_t get_offset_of_L_0() { return static_cast<int32_t>(offsetof(pb_CIE_Lab_Color_t2391182886, ___L_0)); }
	inline float get_L_0() const { return ___L_0; }
	inline float* get_address_of_L_0() { return &___L_0; }
	inline void set_L_0(float value)
	{
		___L_0 = value;
	}

	inline static int32_t get_offset_of_a_1() { return static_cast<int32_t>(offsetof(pb_CIE_Lab_Color_t2391182886, ___a_1)); }
	inline float get_a_1() const { return ___a_1; }
	inline float* get_address_of_a_1() { return &___a_1; }
	inline void set_a_1(float value)
	{
		___a_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(pb_CIE_Lab_Color_t2391182886, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_CIE_LAB_COLOR_T2391182886_H
#ifndef PB_CLIPPING_T3524379063_H
#define PB_CLIPPING_T3524379063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Clipping
struct  pb_Clipping_t3524379063  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_CLIPPING_T3524379063_H
#ifndef PB_COLORUTIL_T600019625_H
#define PB_COLORUTIL_T600019625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_ColorUtil
struct  pb_ColorUtil_t600019625  : public RuntimeObject
{
public:

public:
};

struct pb_ColorUtil_t600019625_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,ProBuilder.Core.pb_CIE_Lab_Color> ProBuilder.Core.pb_ColorUtil::ColorNameLookup
	Dictionary_2_t2176439185 * ___ColorNameLookup_0;

public:
	inline static int32_t get_offset_of_ColorNameLookup_0() { return static_cast<int32_t>(offsetof(pb_ColorUtil_t600019625_StaticFields, ___ColorNameLookup_0)); }
	inline Dictionary_2_t2176439185 * get_ColorNameLookup_0() const { return ___ColorNameLookup_0; }
	inline Dictionary_2_t2176439185 ** get_address_of_ColorNameLookup_0() { return &___ColorNameLookup_0; }
	inline void set_ColorNameLookup_0(Dictionary_2_t2176439185 * value)
	{
		___ColorNameLookup_0 = value;
		Il2CppCodeGenWriteBarrier((&___ColorNameLookup_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_COLORUTIL_T600019625_H
#ifndef PB_EDGECONNECTION_T3838793190_H
#define PB_EDGECONNECTION_T3838793190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_EdgeConnection
struct  pb_EdgeConnection_t3838793190  : public RuntimeObject
{
public:
	// ProBuilder.Core.pb_Face ProBuilder.Core.pb_EdgeConnection::face
	pb_Face_t1264560821 * ___face_0;
	// System.Collections.Generic.List`1<ProBuilder.Core.pb_Edge> ProBuilder.Core.pb_EdgeConnection::edges
	List_1_t3138043566 * ___edges_1;

public:
	inline static int32_t get_offset_of_face_0() { return static_cast<int32_t>(offsetof(pb_EdgeConnection_t3838793190, ___face_0)); }
	inline pb_Face_t1264560821 * get_face_0() const { return ___face_0; }
	inline pb_Face_t1264560821 ** get_address_of_face_0() { return &___face_0; }
	inline void set_face_0(pb_Face_t1264560821 * value)
	{
		___face_0 = value;
		Il2CppCodeGenWriteBarrier((&___face_0), value);
	}

	inline static int32_t get_offset_of_edges_1() { return static_cast<int32_t>(offsetof(pb_EdgeConnection_t3838793190, ___edges_1)); }
	inline List_1_t3138043566 * get_edges_1() const { return ___edges_1; }
	inline List_1_t3138043566 ** get_address_of_edges_1() { return &___edges_1; }
	inline void set_edges_1(List_1_t3138043566 * value)
	{
		___edges_1 = value;
		Il2CppCodeGenWriteBarrier((&___edges_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGECONNECTION_T3838793190_H
#ifndef PB_EDGEEXTENSION_T2102338514_H
#define PB_EDGEEXTENSION_T2102338514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_EdgeExtension
struct  pb_EdgeExtension_t2102338514  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGEEXTENSION_T2102338514_H
#ifndef U3CGETEDGELOOKUPU3EC__ANONSTOREY0_T3639327394_H
#define U3CGETEDGELOOKUPU3EC__ANONSTOREY0_T3639327394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_EdgeLookup/<GetEdgeLookup>c__AnonStorey0
struct  U3CGetEdgeLookupU3Ec__AnonStorey0_t3639327394  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> ProBuilder.Core.pb_EdgeLookup/<GetEdgeLookup>c__AnonStorey0::lookup
	Dictionary_2_t1839659084 * ___lookup_0;

public:
	inline static int32_t get_offset_of_lookup_0() { return static_cast<int32_t>(offsetof(U3CGetEdgeLookupU3Ec__AnonStorey0_t3639327394, ___lookup_0)); }
	inline Dictionary_2_t1839659084 * get_lookup_0() const { return ___lookup_0; }
	inline Dictionary_2_t1839659084 ** get_address_of_lookup_0() { return &___lookup_0; }
	inline void set_lookup_0(Dictionary_2_t1839659084 * value)
	{
		___lookup_0 = value;
		Il2CppCodeGenWriteBarrier((&___lookup_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETEDGELOOKUPU3EC__ANONSTOREY0_T3639327394_H
#ifndef PB_HSVCOLOR_T1663590451_H
#define PB_HSVCOLOR_T1663590451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_HsvColor
struct  pb_HsvColor_t1663590451  : public RuntimeObject
{
public:
	// System.Single ProBuilder.Core.pb_HsvColor::h
	float ___h_0;
	// System.Single ProBuilder.Core.pb_HsvColor::s
	float ___s_1;
	// System.Single ProBuilder.Core.pb_HsvColor::v
	float ___v_2;

public:
	inline static int32_t get_offset_of_h_0() { return static_cast<int32_t>(offsetof(pb_HsvColor_t1663590451, ___h_0)); }
	inline float get_h_0() const { return ___h_0; }
	inline float* get_address_of_h_0() { return &___h_0; }
	inline void set_h_0(float value)
	{
		___h_0 = value;
	}

	inline static int32_t get_offset_of_s_1() { return static_cast<int32_t>(offsetof(pb_HsvColor_t1663590451, ___s_1)); }
	inline float get_s_1() const { return ___s_1; }
	inline float* get_address_of_s_1() { return &___s_1; }
	inline void set_s_1(float value)
	{
		___s_1 = value;
	}

	inline static int32_t get_offset_of_v_2() { return static_cast<int32_t>(offsetof(pb_HsvColor_t1663590451, ___v_2)); }
	inline float get_v_2() const { return ___v_2; }
	inline float* get_address_of_v_2() { return &___v_2; }
	inline void set_v_2(float value)
	{
		___v_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_HSVCOLOR_T1663590451_H
#ifndef PB_XYZ_COLOR_T186003279_H
#define PB_XYZ_COLOR_T186003279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_XYZ_Color
struct  pb_XYZ_Color_t186003279  : public RuntimeObject
{
public:
	// System.Single ProBuilder.Core.pb_XYZ_Color::x
	float ___x_0;
	// System.Single ProBuilder.Core.pb_XYZ_Color::y
	float ___y_1;
	// System.Single ProBuilder.Core.pb_XYZ_Color::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t186003279, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t186003279, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(pb_XYZ_Color_t186003279, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_XYZ_COLOR_T186003279_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_10)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_13)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_14)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D512_T3317833663_H
#define __STATICARRAYINITTYPESIZEU3D512_T3317833663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t3317833663 
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
		uint8_t __StaticArrayInitTypeSizeU3D512_t3317833663__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T3317833663_H
#ifndef __STATICARRAYINITTYPESIZEU3D512_T3317833662_H
#define __STATICARRAYINITTYPESIZEU3D512_T3317833662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t3317833662 
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
		uint8_t __StaticArrayInitTypeSizeU3D512_t3317833662__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T3317833662_H
#ifndef MONOENCODING_T666837952_H
#define MONOENCODING_T666837952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoding
struct  MonoEncoding_t666837952  : public Encoding_t1523322056
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_16;

public:
	inline static int32_t get_offset_of_win_code_page_16() { return static_cast<int32_t>(offsetof(MonoEncoding_t666837952, ___win_code_page_16)); }
	inline int32_t get_win_code_page_16() const { return ___win_code_page_16; }
	inline int32_t* get_address_of_win_code_page_16() { return &___win_code_page_16; }
	inline void set_win_code_page_16(int32_t value)
	{
		___win_code_page_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODING_T666837952_H
#ifndef PB_EDGE_T1665968824_H
#define PB_EDGE_T1665968824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Edge
struct  pb_Edge_t1665968824 
{
public:
	// System.Int32 ProBuilder.Core.pb_Edge::x
	int32_t ___x_0;
	// System.Int32 ProBuilder.Core.pb_Edge::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(pb_Edge_t1665968824, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(pb_Edge_t1665968824, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};

struct pb_Edge_t1665968824_StaticFields
{
public:
	// ProBuilder.Core.pb_Edge ProBuilder.Core.pb_Edge::Empty
	pb_Edge_t1665968824  ___Empty_2;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(pb_Edge_t1665968824_StaticFields, ___Empty_2)); }
	inline pb_Edge_t1665968824  get_Empty_2() const { return ___Empty_2; }
	inline pb_Edge_t1665968824 * get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(pb_Edge_t1665968824  value)
	{
		___Empty_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGE_T1665968824_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255376_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255376  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::05C64B887A4D766EEB5842345D6B609A0E3A91C9
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::148F346330E294B4157ED412259A7E7F373E26A8
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___148F346330E294B4157ED412259A7E7F373E26A8_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::1F867F0E96DB3A56943B8CB2662D1DA624023FCD
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3220DE2BE9769737429E0DE2C6D837CB7C5A02AD
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::356CE585046545CD2D0B109FF8A85DB88EE29074
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___356CE585046545CD2D0B109FF8A85DB88EE29074_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::4FEA2A6324C0192B29C90830F5D578051A4B1B16
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::598D9433A53523A59D462896B803E416AB0B1901
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___598D9433A53523A59D462896B803E416AB0B1901_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::6E6F169B075CACDE575F1FEA42B1376D31D5A7E5
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::7089F9820A6F9CC830909BCD1FAF2EF0A540F348
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::D5DB24A984219B0001B4B86CDE1E0DF54572D83A
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::E11338F644FF140C0E23D8B7526DB4D2D73FC3F7
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4
	__StaticArrayInitTypeSizeU3D512_t3317833663  ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14;

public:
	inline static int32_t get_offset_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() const { return ___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0() { return &___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0; }
	inline void set_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___05C64B887A4D766EEB5842345D6B609A0E3A91C9_0 = value;
	}

	inline static int32_t get_offset_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___148F346330E294B4157ED412259A7E7F373E26A8_1)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U3148F346330E294B4157ED412259A7E7F373E26A8_1() const { return ___148F346330E294B4157ED412259A7E7F373E26A8_1; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1() { return &___148F346330E294B4157ED412259A7E7F373E26A8_1; }
	inline void set_U3148F346330E294B4157ED412259A7E7F373E26A8_1(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___148F346330E294B4157ED412259A7E7F373E26A8_1 = value;
	}

	inline static int32_t get_offset_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() const { return ___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2() { return &___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2; }
	inline void set_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___1F867F0E96DB3A56943B8CB2662D1DA624023FCD_2 = value;
	}

	inline static int32_t get_offset_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() const { return ___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3() { return &___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3; }
	inline void set_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___3220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3 = value;
	}

	inline static int32_t get_offset_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___356CE585046545CD2D0B109FF8A85DB88EE29074_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() const { return ___356CE585046545CD2D0B109FF8A85DB88EE29074_4; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4() { return &___356CE585046545CD2D0B109FF8A85DB88EE29074_4; }
	inline void set_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___356CE585046545CD2D0B109FF8A85DB88EE29074_4 = value;
	}

	inline static int32_t get_offset_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() const { return ___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5() { return &___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5; }
	inline void set_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___4FEA2A6324C0192B29C90830F5D578051A4B1B16_5 = value;
	}

	inline static int32_t get_offset_of_U3598D9433A53523A59D462896B803E416AB0B1901_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___598D9433A53523A59D462896B803E416AB0B1901_6)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U3598D9433A53523A59D462896B803E416AB0B1901_6() const { return ___598D9433A53523A59D462896B803E416AB0B1901_6; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U3598D9433A53523A59D462896B803E416AB0B1901_6() { return &___598D9433A53523A59D462896B803E416AB0B1901_6; }
	inline void set_U3598D9433A53523A59D462896B803E416AB0B1901_6(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___598D9433A53523A59D462896B803E416AB0B1901_6 = value;
	}

	inline static int32_t get_offset_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() const { return ___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7() { return &___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7; }
	inline void set_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___6E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7 = value;
	}

	inline static int32_t get_offset_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() const { return ___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8() { return &___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8; }
	inline void set_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___7089F9820A6F9CC830909BCD1FAF2EF0A540F348_8 = value;
	}

	inline static int32_t get_offset_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() const { return ___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9() { return &___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9; }
	inline void set_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___9ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9 = value;
	}

	inline static int32_t get_offset_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() const { return ___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10() { return &___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10; }
	inline void set_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10 = value;
	}

	inline static int32_t get_offset_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() const { return ___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11() { return &___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11; }
	inline void set_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11 = value;
	}

	inline static int32_t get_offset_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() const { return ___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12() { return &___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12; }
	inline void set_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12 = value;
	}

	inline static int32_t get_offset_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() const { return ___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13() { return &___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13; }
	inline void set_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13 = value;
	}

	inline static int32_t get_offset_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields, ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663  get_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() const { return ___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833663 * get_address_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14() { return &___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14; }
	inline void set_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14(__StaticArrayInitTypeSizeU3D512_t3317833663  value)
	{
		___FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255376_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255375_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255375  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::05B1E1067273E188A50BA4342B4BC09ABEE669CD
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::09885C8B0840E863B3A14261999895D896677D5A
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___09885C8B0840E863B3A14261999895D896677D5A_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::271EF3D1C1F8136E08DBCAB443CE02538A4156F0
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::2E1C78D5F4666324672DFACDC9307935CF14E98F
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___2E1C78D5F4666324672DFACDC9307935CF14E98F_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3551F16F8A11003B8289B76B9E3D97969B68E7D9
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::36A0A1CE2E522AB1D22668B38F6126D2F6E17D44
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::37C03949C69BDDA042205E1A573B349E75F693B8
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___37C03949C69BDDA042205E1A573B349E75F693B8_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::47DCC01E928630EBCC018C5E0285145985F92532
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___47DCC01E928630EBCC018C5E0285145985F92532_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::52623ED7F33E8C1C541F1C3101FA981B173D795E
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___52623ED7F33E8C1C541F1C3101FA981B173D795E_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::659C24C855D0E50CBD366B2774AF841E29202E70
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___659C24C855D0E50CBD366B2774AF841E29202E70_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::82273BF74F02F3FDFABEED76BCA4B82DDB2C2761
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::8E958C1847104F390F9C9B64F0F39C98ED4AC63F
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::94F89F72CC0508D891A0C71DD7B57B703869A3FB
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::9EF46C677634CB82C0BD475E372C71C5F68C981A
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___9EF46C677634CB82C0BD475E372C71C5F68C981A_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::A5A5BE77BD3D095389FABC21D18BB648787E6618
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___A5A5BE77BD3D095389FABC21D18BB648787E6618_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B1D1CEE08985760776A35065014EAF3D4D3CDE8D
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B2574B82126B684C0CB3CF93BF7473F0FBB34400
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::B6BD9A82204938ABFE97CF3FAB5A47824080EAA0
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::BC1CEF8131E7F0D8206029373157806126E21026
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___BC1CEF8131E7F0D8206029373157806126E21026_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C14817C33562352073848F1A8EA633C19CF1A4F5
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___C14817C33562352073848F1A8EA633C19CF1A4F5_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C392E993B9E622A36C30E0BB997A9F41293CD9EF
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::CFB85A64A0D1FAB523C3DE56096F8803CDFEA674
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::D257291FBF3DA6F5C38B3275534902BC9EDE92EA
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::D4795500A3D0F00D8EE85626648C3FBAFA4F70C3
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::DF4C38A5E59685BBEC109623762B6914BE00E866
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___DF4C38A5E59685BBEC109623762B6914BE00E866_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::F632BE2E03B27F265F779A5D3D217E5C14AB6CB5
	__StaticArrayInitTypeSizeU3D512_t3317833662  ___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36;

public:
	inline static int32_t get_offset_of_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0() const { return ___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0() { return &___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0; }
	inline void set_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___05B1E1067273E188A50BA4342B4BC09ABEE669CD_0 = value;
	}

	inline static int32_t get_offset_of_U309885C8B0840E863B3A14261999895D896677D5A_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___09885C8B0840E863B3A14261999895D896677D5A_1)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U309885C8B0840E863B3A14261999895D896677D5A_1() const { return ___09885C8B0840E863B3A14261999895D896677D5A_1; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U309885C8B0840E863B3A14261999895D896677D5A_1() { return &___09885C8B0840E863B3A14261999895D896677D5A_1; }
	inline void set_U309885C8B0840E863B3A14261999895D896677D5A_1(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___09885C8B0840E863B3A14261999895D896677D5A_1 = value;
	}

	inline static int32_t get_offset_of_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2() const { return ___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2() { return &___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2; }
	inline void set_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___0BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2 = value;
	}

	inline static int32_t get_offset_of_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3() const { return ___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3() { return &___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3; }
	inline void set_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3 = value;
	}

	inline static int32_t get_offset_of_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___2E1C78D5F4666324672DFACDC9307935CF14E98F_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4() const { return ___2E1C78D5F4666324672DFACDC9307935CF14E98F_4; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4() { return &___2E1C78D5F4666324672DFACDC9307935CF14E98F_4; }
	inline void set_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___2E1C78D5F4666324672DFACDC9307935CF14E98F_4 = value;
	}

	inline static int32_t get_offset_of_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5() const { return ___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5() { return &___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5; }
	inline void set_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___3551F16F8A11003B8289B76B9E3D97969B68E7D9_5 = value;
	}

	inline static int32_t get_offset_of_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6() const { return ___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6() { return &___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6; }
	inline void set_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___36A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6 = value;
	}

	inline static int32_t get_offset_of_U337C03949C69BDDA042205E1A573B349E75F693B8_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___37C03949C69BDDA042205E1A573B349E75F693B8_7)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U337C03949C69BDDA042205E1A573B349E75F693B8_7() const { return ___37C03949C69BDDA042205E1A573B349E75F693B8_7; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U337C03949C69BDDA042205E1A573B349E75F693B8_7() { return &___37C03949C69BDDA042205E1A573B349E75F693B8_7; }
	inline void set_U337C03949C69BDDA042205E1A573B349E75F693B8_7(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___37C03949C69BDDA042205E1A573B349E75F693B8_7 = value;
	}

	inline static int32_t get_offset_of_U347DCC01E928630EBCC018C5E0285145985F92532_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___47DCC01E928630EBCC018C5E0285145985F92532_8)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U347DCC01E928630EBCC018C5E0285145985F92532_8() const { return ___47DCC01E928630EBCC018C5E0285145985F92532_8; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U347DCC01E928630EBCC018C5E0285145985F92532_8() { return &___47DCC01E928630EBCC018C5E0285145985F92532_8; }
	inline void set_U347DCC01E928630EBCC018C5E0285145985F92532_8(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___47DCC01E928630EBCC018C5E0285145985F92532_8 = value;
	}

	inline static int32_t get_offset_of_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___52623ED7F33E8C1C541F1C3101FA981B173D795E_9)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9() const { return ___52623ED7F33E8C1C541F1C3101FA981B173D795E_9; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9() { return &___52623ED7F33E8C1C541F1C3101FA981B173D795E_9; }
	inline void set_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___52623ED7F33E8C1C541F1C3101FA981B173D795E_9 = value;
	}

	inline static int32_t get_offset_of_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10() const { return ___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10() { return &___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10; }
	inline void set_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___5EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10 = value;
	}

	inline static int32_t get_offset_of_U3659C24C855D0E50CBD366B2774AF841E29202E70_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___659C24C855D0E50CBD366B2774AF841E29202E70_11)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U3659C24C855D0E50CBD366B2774AF841E29202E70_11() const { return ___659C24C855D0E50CBD366B2774AF841E29202E70_11; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U3659C24C855D0E50CBD366B2774AF841E29202E70_11() { return &___659C24C855D0E50CBD366B2774AF841E29202E70_11; }
	inline void set_U3659C24C855D0E50CBD366B2774AF841E29202E70_11(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___659C24C855D0E50CBD366B2774AF841E29202E70_11 = value;
	}

	inline static int32_t get_offset_of_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12() const { return ___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12() { return &___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12; }
	inline void set_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___6B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12 = value;
	}

	inline static int32_t get_offset_of_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13() const { return ___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13() { return &___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13; }
	inline void set_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___71D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13 = value;
	}

	inline static int32_t get_offset_of_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14() const { return ___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14() { return &___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14; }
	inline void set_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___7A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14 = value;
	}

	inline static int32_t get_offset_of_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15() const { return ___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15() { return &___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15; }
	inline void set_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___7AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15 = value;
	}

	inline static int32_t get_offset_of_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16() const { return ___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16() { return &___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16; }
	inline void set_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___82273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16 = value;
	}

	inline static int32_t get_offset_of_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17() const { return ___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17() { return &___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17; }
	inline void set_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___8C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17 = value;
	}

	inline static int32_t get_offset_of_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18() const { return ___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18() { return &___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18; }
	inline void set_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___8E958C1847104F390F9C9B64F0F39C98ED4AC63F_18 = value;
	}

	inline static int32_t get_offset_of_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19() const { return ___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19() { return &___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19; }
	inline void set_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___94F89F72CC0508D891A0C71DD7B57B703869A3FB_19 = value;
	}

	inline static int32_t get_offset_of_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20() const { return ___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20() { return &___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20; }
	inline void set_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___9E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20 = value;
	}

	inline static int32_t get_offset_of_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___9EF46C677634CB82C0BD475E372C71C5F68C981A_21)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21() const { return ___9EF46C677634CB82C0BD475E372C71C5F68C981A_21; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21() { return &___9EF46C677634CB82C0BD475E372C71C5F68C981A_21; }
	inline void set_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___9EF46C677634CB82C0BD475E372C71C5F68C981A_21 = value;
	}

	inline static int32_t get_offset_of_A5A5BE77BD3D095389FABC21D18BB648787E6618_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___A5A5BE77BD3D095389FABC21D18BB648787E6618_22)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_A5A5BE77BD3D095389FABC21D18BB648787E6618_22() const { return ___A5A5BE77BD3D095389FABC21D18BB648787E6618_22; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_A5A5BE77BD3D095389FABC21D18BB648787E6618_22() { return &___A5A5BE77BD3D095389FABC21D18BB648787E6618_22; }
	inline void set_A5A5BE77BD3D095389FABC21D18BB648787E6618_22(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___A5A5BE77BD3D095389FABC21D18BB648787E6618_22 = value;
	}

	inline static int32_t get_offset_of_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23() const { return ___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23() { return &___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23; }
	inline void set_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23 = value;
	}

	inline static int32_t get_offset_of_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24() const { return ___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24() { return &___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24; }
	inline void set_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24 = value;
	}

	inline static int32_t get_offset_of_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25() const { return ___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25() { return &___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25; }
	inline void set_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___B2574B82126B684C0CB3CF93BF7473F0FBB34400_25 = value;
	}

	inline static int32_t get_offset_of_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26() const { return ___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26() { return &___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26; }
	inline void set_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26 = value;
	}

	inline static int32_t get_offset_of_BC1CEF8131E7F0D8206029373157806126E21026_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___BC1CEF8131E7F0D8206029373157806126E21026_27)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_BC1CEF8131E7F0D8206029373157806126E21026_27() const { return ___BC1CEF8131E7F0D8206029373157806126E21026_27; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_BC1CEF8131E7F0D8206029373157806126E21026_27() { return &___BC1CEF8131E7F0D8206029373157806126E21026_27; }
	inline void set_BC1CEF8131E7F0D8206029373157806126E21026_27(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___BC1CEF8131E7F0D8206029373157806126E21026_27 = value;
	}

	inline static int32_t get_offset_of_C14817C33562352073848F1A8EA633C19CF1A4F5_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___C14817C33562352073848F1A8EA633C19CF1A4F5_28)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_C14817C33562352073848F1A8EA633C19CF1A4F5_28() const { return ___C14817C33562352073848F1A8EA633C19CF1A4F5_28; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_C14817C33562352073848F1A8EA633C19CF1A4F5_28() { return &___C14817C33562352073848F1A8EA633C19CF1A4F5_28; }
	inline void set_C14817C33562352073848F1A8EA633C19CF1A4F5_28(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___C14817C33562352073848F1A8EA633C19CF1A4F5_28 = value;
	}

	inline static int32_t get_offset_of_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29() const { return ___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29() { return &___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29; }
	inline void set_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___C392E993B9E622A36C30E0BB997A9F41293CD9EF_29 = value;
	}

	inline static int32_t get_offset_of_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30() const { return ___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30() { return &___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30; }
	inline void set_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30 = value;
	}

	inline static int32_t get_offset_of_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31() const { return ___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31() { return &___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31; }
	inline void set_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31 = value;
	}

	inline static int32_t get_offset_of_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32() const { return ___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32() { return &___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32; }
	inline void set_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32 = value;
	}

	inline static int32_t get_offset_of_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33() const { return ___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33() { return &___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33; }
	inline void set_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33 = value;
	}

	inline static int32_t get_offset_of_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34() const { return ___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34() { return &___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34; }
	inline void set_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34 = value;
	}

	inline static int32_t get_offset_of_DF4C38A5E59685BBEC109623762B6914BE00E866_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___DF4C38A5E59685BBEC109623762B6914BE00E866_35)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_DF4C38A5E59685BBEC109623762B6914BE00E866_35() const { return ___DF4C38A5E59685BBEC109623762B6914BE00E866_35; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_DF4C38A5E59685BBEC109623762B6914BE00E866_35() { return &___DF4C38A5E59685BBEC109623762B6914BE00E866_35; }
	inline void set_DF4C38A5E59685BBEC109623762B6914BE00E866_35(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___DF4C38A5E59685BBEC109623762B6914BE00E866_35 = value;
	}

	inline static int32_t get_offset_of_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields, ___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662  get_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36() const { return ___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833662 * get_address_of_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36() { return &___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36; }
	inline void set_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36(__StaticArrayInitTypeSizeU3D512_t3317833662  value)
	{
		___F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255375_H
#ifndef BYTEENCODING_T1371924561_H
#define BYTEENCODING_T1371924561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ByteEncoding
struct  ByteEncoding_t1371924561  : public MonoEncoding_t666837952
{
public:
	// System.Char[] I18N.Common.ByteEncoding::toChars
	CharU5BU5D_t3528271667* ___toChars_17;
	// System.String I18N.Common.ByteEncoding::encodingName
	String_t* ___encodingName_18;
	// System.String I18N.Common.ByteEncoding::bodyName
	String_t* ___bodyName_19;
	// System.String I18N.Common.ByteEncoding::headerName
	String_t* ___headerName_20;
	// System.String I18N.Common.ByteEncoding::webName
	String_t* ___webName_21;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserDisplay
	bool ___isBrowserDisplay_22;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserSave
	bool ___isBrowserSave_23;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsDisplay
	bool ___isMailNewsDisplay_24;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsSave
	bool ___isMailNewsSave_25;
	// System.Int32 I18N.Common.ByteEncoding::windowsCodePage
	int32_t ___windowsCodePage_26;

public:
	inline static int32_t get_offset_of_toChars_17() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___toChars_17)); }
	inline CharU5BU5D_t3528271667* get_toChars_17() const { return ___toChars_17; }
	inline CharU5BU5D_t3528271667** get_address_of_toChars_17() { return &___toChars_17; }
	inline void set_toChars_17(CharU5BU5D_t3528271667* value)
	{
		___toChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___toChars_17), value);
	}

	inline static int32_t get_offset_of_encodingName_18() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___encodingName_18)); }
	inline String_t* get_encodingName_18() const { return ___encodingName_18; }
	inline String_t** get_address_of_encodingName_18() { return &___encodingName_18; }
	inline void set_encodingName_18(String_t* value)
	{
		___encodingName_18 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_18), value);
	}

	inline static int32_t get_offset_of_bodyName_19() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___bodyName_19)); }
	inline String_t* get_bodyName_19() const { return ___bodyName_19; }
	inline String_t** get_address_of_bodyName_19() { return &___bodyName_19; }
	inline void set_bodyName_19(String_t* value)
	{
		___bodyName_19 = value;
		Il2CppCodeGenWriteBarrier((&___bodyName_19), value);
	}

	inline static int32_t get_offset_of_headerName_20() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___headerName_20)); }
	inline String_t* get_headerName_20() const { return ___headerName_20; }
	inline String_t** get_address_of_headerName_20() { return &___headerName_20; }
	inline void set_headerName_20(String_t* value)
	{
		___headerName_20 = value;
		Il2CppCodeGenWriteBarrier((&___headerName_20), value);
	}

	inline static int32_t get_offset_of_webName_21() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___webName_21)); }
	inline String_t* get_webName_21() const { return ___webName_21; }
	inline String_t** get_address_of_webName_21() { return &___webName_21; }
	inline void set_webName_21(String_t* value)
	{
		___webName_21 = value;
		Il2CppCodeGenWriteBarrier((&___webName_21), value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_22() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isBrowserDisplay_22)); }
	inline bool get_isBrowserDisplay_22() const { return ___isBrowserDisplay_22; }
	inline bool* get_address_of_isBrowserDisplay_22() { return &___isBrowserDisplay_22; }
	inline void set_isBrowserDisplay_22(bool value)
	{
		___isBrowserDisplay_22 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_23() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isBrowserSave_23)); }
	inline bool get_isBrowserSave_23() const { return ___isBrowserSave_23; }
	inline bool* get_address_of_isBrowserSave_23() { return &___isBrowserSave_23; }
	inline void set_isBrowserSave_23(bool value)
	{
		___isBrowserSave_23 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_24() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isMailNewsDisplay_24)); }
	inline bool get_isMailNewsDisplay_24() const { return ___isMailNewsDisplay_24; }
	inline bool* get_address_of_isMailNewsDisplay_24() { return &___isMailNewsDisplay_24; }
	inline void set_isMailNewsDisplay_24(bool value)
	{
		___isMailNewsDisplay_24 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_25() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isMailNewsSave_25)); }
	inline bool get_isMailNewsSave_25() const { return ___isMailNewsSave_25; }
	inline bool* get_address_of_isMailNewsSave_25() { return &___isMailNewsSave_25; }
	inline void set_isMailNewsSave_25(bool value)
	{
		___isMailNewsSave_25 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_26() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___windowsCodePage_26)); }
	inline int32_t get_windowsCodePage_26() const { return ___windowsCodePage_26; }
	inline int32_t* get_address_of_windowsCodePage_26() { return &___windowsCodePage_26; }
	inline void set_windowsCodePage_26(int32_t value)
	{
		___windowsCodePage_26 = value;
	}
};

struct ByteEncoding_t1371924561_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteEncoding::isNormalized
	ByteU5BU5D_t4116647657* ___isNormalized_27;
	// System.Byte[] I18N.Common.ByteEncoding::isNormalizedComputed
	ByteU5BU5D_t4116647657* ___isNormalizedComputed_28;
	// System.Byte[] I18N.Common.ByteEncoding::normalization_bytes
	ByteU5BU5D_t4116647657* ___normalization_bytes_29;

public:
	inline static int32_t get_offset_of_isNormalized_27() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___isNormalized_27)); }
	inline ByteU5BU5D_t4116647657* get_isNormalized_27() const { return ___isNormalized_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalized_27() { return &___isNormalized_27; }
	inline void set_isNormalized_27(ByteU5BU5D_t4116647657* value)
	{
		___isNormalized_27 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalized_27), value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_28() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___isNormalizedComputed_28)); }
	inline ByteU5BU5D_t4116647657* get_isNormalizedComputed_28() const { return ___isNormalizedComputed_28; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalizedComputed_28() { return &___isNormalizedComputed_28; }
	inline void set_isNormalizedComputed_28(ByteU5BU5D_t4116647657* value)
	{
		___isNormalizedComputed_28 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalizedComputed_28), value);
	}

	inline static int32_t get_offset_of_normalization_bytes_29() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___normalization_bytes_29)); }
	inline ByteU5BU5D_t4116647657* get_normalization_bytes_29() const { return ___normalization_bytes_29; }
	inline ByteU5BU5D_t4116647657** get_address_of_normalization_bytes_29() { return &___normalization_bytes_29; }
	inline void set_normalization_bytes_29(ByteU5BU5D_t4116647657* value)
	{
		___normalization_bytes_29 = value;
		Il2CppCodeGenWriteBarrier((&___normalization_bytes_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENCODING_T1371924561_H
#ifndef ENTITYTYPE_T1235791919_H
#define ENTITYTYPE_T1235791919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.EntityType
struct  EntityType_t1235791919 
{
public:
	// System.Int32 ProBuilder.Core.EntityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EntityType_t1235791919, ___value___2)); }
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
#endif // ENTITYTYPE_T1235791919_H
#ifndef SELECTMODE_T880512167_H
#define SELECTMODE_T880512167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.SelectMode
struct  SelectMode_t880512167 
{
public:
	// System.Int32 ProBuilder.Core.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t880512167, ___value___2)); }
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
#endif // SELECTMODE_T880512167_H
#ifndef STATUS_T632827111_H
#define STATUS_T632827111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.Status
struct  Status_t632827111 
{
public:
	// System.Int32 ProBuilder.Core.Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t632827111, ___value___2)); }
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
#endif // STATUS_T632827111_H
#ifndef PB_BEZIERPOINT_T2444462351_H
#define PB_BEZIERPOINT_T2444462351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_BezierPoint
struct  pb_BezierPoint_t2444462351 
{
public:
	// UnityEngine.Vector3 ProBuilder.Core.pb_BezierPoint::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 ProBuilder.Core.pb_BezierPoint::tangentIn
	Vector3_t3722313464  ___tangentIn_1;
	// UnityEngine.Vector3 ProBuilder.Core.pb_BezierPoint::tangentOut
	Vector3_t3722313464  ___tangentOut_2;
	// UnityEngine.Quaternion ProBuilder.Core.pb_BezierPoint::rotation
	Quaternion_t2301928331  ___rotation_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(pb_BezierPoint_t2444462351, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_tangentIn_1() { return static_cast<int32_t>(offsetof(pb_BezierPoint_t2444462351, ___tangentIn_1)); }
	inline Vector3_t3722313464  get_tangentIn_1() const { return ___tangentIn_1; }
	inline Vector3_t3722313464 * get_address_of_tangentIn_1() { return &___tangentIn_1; }
	inline void set_tangentIn_1(Vector3_t3722313464  value)
	{
		___tangentIn_1 = value;
	}

	inline static int32_t get_offset_of_tangentOut_2() { return static_cast<int32_t>(offsetof(pb_BezierPoint_t2444462351, ___tangentOut_2)); }
	inline Vector3_t3722313464  get_tangentOut_2() const { return ___tangentOut_2; }
	inline Vector3_t3722313464 * get_address_of_tangentOut_2() { return &___tangentOut_2; }
	inline void set_tangentOut_2(Vector3_t3722313464  value)
	{
		___tangentOut_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(pb_BezierPoint_t2444462351, ___rotation_3)); }
	inline Quaternion_t2301928331  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t2301928331 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t2301928331  value)
	{
		___rotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_BEZIERPOINT_T2444462351_H
#ifndef PB_BEZIERTANGENTDIRECTION_T503654898_H
#define PB_BEZIERTANGENTDIRECTION_T503654898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_BezierTangentDirection
struct  pb_BezierTangentDirection_t503654898 
{
public:
	// System.Int32 ProBuilder.Core.pb_BezierTangentDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(pb_BezierTangentDirection_t503654898, ___value___2)); }
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
#endif // PB_BEZIERTANGENTDIRECTION_T503654898_H
#ifndef PB_BEZIERTANGENTMODE_T516906914_H
#define PB_BEZIERTANGENTMODE_T516906914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_BezierTangentMode
struct  pb_BezierTangentMode_t516906914 
{
public:
	// System.Int32 ProBuilder.Core.pb_BezierTangentMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(pb_BezierTangentMode_t516906914, ___value___2)); }
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
#endif // PB_BEZIERTANGENTMODE_T516906914_H
#ifndef PB_BOUNDS2D_T689838911_H
#define PB_BOUNDS2D_T689838911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Bounds2D
struct  pb_Bounds2D_t689838911  : public RuntimeObject
{
public:
	// UnityEngine.Vector2 ProBuilder.Core.pb_Bounds2D::center
	Vector2_t2156229523  ___center_0;
	// UnityEngine.Vector2 ProBuilder.Core.pb_Bounds2D::_size
	Vector2_t2156229523  ____size_1;
	// UnityEngine.Vector2 ProBuilder.Core.pb_Bounds2D::_extents
	Vector2_t2156229523  ____extents_2;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(pb_Bounds2D_t689838911, ___center_0)); }
	inline Vector2_t2156229523  get_center_0() const { return ___center_0; }
	inline Vector2_t2156229523 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_t2156229523  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(pb_Bounds2D_t689838911, ____size_1)); }
	inline Vector2_t2156229523  get__size_1() const { return ____size_1; }
	inline Vector2_t2156229523 * get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(Vector2_t2156229523  value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__extents_2() { return static_cast<int32_t>(offsetof(pb_Bounds2D_t689838911, ____extents_2)); }
	inline Vector2_t2156229523  get__extents_2() const { return ____extents_2; }
	inline Vector2_t2156229523 * get_address_of__extents_2() { return &____extents_2; }
	inline void set__extents_2(Vector2_t2156229523  value)
	{
		____extents_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_BOUNDS2D_T689838911_H
#ifndef OUTCODE_T2015344846_H
#define OUTCODE_T2015344846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Clipping/OutCode
struct  OutCode_t2015344846 
{
public:
	// System.Int32 ProBuilder.Core.pb_Clipping/OutCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OutCode_t2015344846, ___value___2)); }
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
#endif // OUTCODE_T2015344846_H
#ifndef PB_EDGELOOKUP_T1945391737_H
#define PB_EDGELOOKUP_T1945391737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_EdgeLookup
struct  pb_EdgeLookup_t1945391737  : public RuntimeObject
{
public:
	// ProBuilder.Core.pb_Edge ProBuilder.Core.pb_EdgeLookup::local
	pb_Edge_t1665968824  ___local_0;
	// ProBuilder.Core.pb_Edge ProBuilder.Core.pb_EdgeLookup::common
	pb_Edge_t1665968824  ___common_1;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(pb_EdgeLookup_t1945391737, ___local_0)); }
	inline pb_Edge_t1665968824  get_local_0() const { return ___local_0; }
	inline pb_Edge_t1665968824 * get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(pb_Edge_t1665968824  value)
	{
		___local_0 = value;
	}

	inline static int32_t get_offset_of_common_1() { return static_cast<int32_t>(offsetof(pb_EdgeLookup_t1945391737, ___common_1)); }
	inline pb_Edge_t1665968824  get_common_1() const { return ___common_1; }
	inline pb_Edge_t1665968824 * get_address_of_common_1() { return &___common_1; }
	inline void set_common_1(pb_Edge_t1665968824  value)
	{
		___common_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_EDGELOOKUP_T1945391737_H
#ifndef HIDEFLAGS_T4250555765_H
#define HIDEFLAGS_T4250555765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideFlags
struct  HideFlags_t4250555765 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t4250555765, ___value___2)); }
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
#endif // HIDEFLAGS_T4250555765_H
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
#ifndef CP20290_T1010799432_H
#define CP20290_T1010799432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20290
struct  CP20290_t1010799432  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20290_t1010799432_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20290::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20290_t1010799432_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20290_T1010799432_H
#ifndef CP20297_T1010799439_H
#define CP20297_T1010799439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20297
struct  CP20297_t1010799439  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20297_t1010799439_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20297::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20297_t1010799439_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20297_T1010799439_H
#ifndef CP20420_T1395871466_H
#define CP20420_T1395871466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20420
struct  CP20420_t1395871466  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20420_t1395871466_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20420::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20420_t1395871466_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20420_T1395871466_H
#ifndef CP20424_T1395871470_H
#define CP20424_T1395871470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20424
struct  CP20424_t1395871470  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20424_t1395871470_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20424::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20424_t1395871470_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20424_T1395871470_H
#ifndef CP20871_T2147492183_H
#define CP20871_T2147492183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20871
struct  CP20871_t2147492183  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20871_t2147492183_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20871::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP20871_t2147492183_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20871_T2147492183_H
#ifndef CP21025_T3367402627_H
#define CP21025_T3367402627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP21025
struct  CP21025_t3367402627  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP21025_t3367402627_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP21025::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP21025_t3367402627_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP21025_T3367402627_H
#ifndef CP37_T108829002_H
#define CP37_T108829002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP37
struct  CP37_t108829002  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP37_t108829002_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP37::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP37_t108829002_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP37_T108829002_H
#ifndef CP500_T2026640899_H
#define CP500_T2026640899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP500
struct  CP500_t2026640899  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP500_t2026640899_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP500::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP500_t2026640899_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP500_T2026640899_H
#ifndef CP708_T2382871261_H
#define CP708_T2382871261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP708
struct  CP708_t2382871261  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP708_t2382871261_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP708::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP708_t2382871261_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP708_T2382871261_H
#ifndef CP852_T864169168_H
#define CP852_T864169168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP852
struct  CP852_t864169168  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP852_t864169168_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP852::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP852_t864169168_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP852_T864169168_H
#ifndef CP855_T1623684055_H
#define CP855_T1623684055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP855
struct  CP855_t1623684055  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP855_t1623684055_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP855::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP855_t1623684055_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP855_T1623684055_H
#ifndef CP857_T460884641_H
#define CP857_T460884641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP857
struct  CP857_t460884641  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP857_t460884641_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP857::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP857_t460884641_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP857_T460884641_H
#ifndef CP858_T2383198942_H
#define CP858_T2383198942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP858
struct  CP858_t2383198942  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP858_t2383198942_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP858::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP858_t2383198942_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP858_T2383198942_H
#ifndef CP862_T864234704_H
#define CP862_T864234704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP862
struct  CP862_t864234704  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP862_t864234704_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP862::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP862_t864234704_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP862_T864234704_H
#ifndef CP864_T57665650_H
#define CP864_T57665650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP864
struct  CP864_t57665650  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP864_t57665650_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP864::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP864_t57665650_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP864_T57665650_H
#ifndef CP866_T3189833532_H
#define CP866_T3189833532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP866
struct  CP866_t3189833532  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP866_t3189833532_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP866::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP866_t3189833532_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP866_T3189833532_H
#ifndef CP869_T3949348419_H
#define CP869_T3949348419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP869
struct  CP869_t3949348419  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP869_t3949348419_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP869::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP869_t3949348419_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP869_T3949348419_H
#ifndef CP870_T2027099654_H
#define CP870_T2027099654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP870
struct  CP870_t2027099654  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP870_t2027099654_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP870::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP870_t2027099654_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP870_T2027099654_H
#ifndef CP875_T1623815127_H
#define CP875_T1623815127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP875
struct  CP875_t1623815127  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP875_t1623815127_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP875::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP875_t1623815127_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP875_T1623815127_H
#ifndef CP10000_T776152390_H
#define CP10000_T776152390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP10000
struct  CP10000_t776152390  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP10000_t776152390_StaticFields
{
public:
	// System.Char[] I18N.West.CP10000::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP10000_t776152390_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP10000_T776152390_H
#ifndef CP10079_T3879478589_H
#define CP10079_T3879478589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP10079
struct  CP10079_t3879478589  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP10079_t3879478589_StaticFields
{
public:
	// System.Char[] I18N.West.CP10079::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP10079_t3879478589_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP10079_T3879478589_H
#ifndef CP1250_T1787607523_H
#define CP1250_T1787607523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP1250
struct  CP1250_t1787607523  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1250_t1787607523_StaticFields
{
public:
	// System.Char[] I18N.West.CP1250::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1250_t1787607523_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1250_T1787607523_H
#ifndef CP1252_T2169944547_H
#define CP1252_T2169944547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP1252
struct  CP1252_t2169944547  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1252_t2169944547_StaticFields
{
public:
	// System.Char[] I18N.West.CP1252::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1252_t2169944547_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1252_T2169944547_H
#ifndef CP1253_T4126259683_H
#define CP1253_T4126259683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP1253
struct  CP1253_t4126259683  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1253_t4126259683_StaticFields
{
public:
	// System.Char[] I18N.West.CP1253::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP1253_t4126259683_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1253_T4126259683_H
#ifndef CP28592_T3519602206_H
#define CP28592_T3519602206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28592
struct  CP28592_t3519602206  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP28592_t3519602206_StaticFields
{
public:
	// System.Char[] I18N.West.CP28592::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28592_t3519602206_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28592_T3519602206_H
#ifndef CP28593_T3519602207_H
#define CP28593_T3519602207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28593
struct  CP28593_t3519602207  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP28593_t3519602207_StaticFields
{
public:
	// System.Char[] I18N.West.CP28593::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28593_t3519602207_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28593_T3519602207_H
#ifndef CP28597_T3519602203_H
#define CP28597_T3519602203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28597
struct  CP28597_t3519602203  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP28597_t3519602203_StaticFields
{
public:
	// System.Char[] I18N.West.CP28597::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28597_t3519602203_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28597_T3519602203_H
#ifndef CP28605_T1600022914_H
#define CP28605_T1600022914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP28605
struct  CP28605_t1600022914  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP28605_t1600022914_StaticFields
{
public:
	// System.Char[] I18N.West.CP28605::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP28605_t1600022914_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP28605_T1600022914_H
#ifndef CP437_T3683438768_H
#define CP437_T3683438768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP437
struct  CP437_t3683438768  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP437_t3683438768_StaticFields
{
public:
	// System.Char[] I18N.West.CP437::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP437_t3683438768_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP437_T3683438768_H
#ifndef CP850_T1311178993_H
#define CP850_T1311178993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP850
struct  CP850_t1311178993  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP850_t1311178993_StaticFields
{
public:
	// System.Char[] I18N.West.CP850::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP850_t1311178993_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP850_T1311178993_H
#ifndef CP860_T1311113457_H
#define CP860_T1311113457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP860
struct  CP860_t1311113457  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP860_t1311113457_StaticFields
{
public:
	// System.Char[] I18N.West.CP860::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP860_t1311113457_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP860_T1311113457_H
#ifndef CP861_T2877197398_H
#define CP861_T2877197398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP861
struct  CP861_t2877197398  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP861_t2877197398_StaticFields
{
public:
	// System.Char[] I18N.West.CP861::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP861_t2877197398_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP861_T2877197398_H
#ifndef CP863_T1714397984_H
#define CP863_T1714397984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP863
struct  CP863_t1714397984  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP863_t1714397984_StaticFields
{
public:
	// System.Char[] I18N.West.CP863::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP863_t1714397984_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP863_T1714397984_H
#ifndef CP865_T551598570_H
#define CP865_T551598570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.CP865
struct  CP865_t551598570  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP865_t551598570_StaticFields
{
public:
	// System.Char[] I18N.West.CP865::ToChars
	CharU5BU5D_t3528271667* ___ToChars_30;

public:
	inline static int32_t get_offset_of_ToChars_30() { return static_cast<int32_t>(offsetof(CP865_t551598570_StaticFields, ___ToChars_30)); }
	inline CharU5BU5D_t3528271667* get_ToChars_30() const { return ___ToChars_30; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_30() { return &___ToChars_30; }
	inline void set_ToChars_30(CharU5BU5D_t3528271667* value)
	{
		___ToChars_30 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP865_T551598570_H
#ifndef PB_ACTIONRESULT_T2930272204_H
#define PB_ACTIONRESULT_T2930272204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_ActionResult
struct  pb_ActionResult_t2930272204  : public RuntimeObject
{
public:
	// ProBuilder.Core.Status ProBuilder.Core.pb_ActionResult::status
	int32_t ___status_0;
	// System.String ProBuilder.Core.pb_ActionResult::notification
	String_t* ___notification_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(pb_ActionResult_t2930272204, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_notification_1() { return static_cast<int32_t>(offsetof(pb_ActionResult_t2930272204, ___notification_1)); }
	inline String_t* get_notification_1() const { return ___notification_1; }
	inline String_t** get_address_of_notification_1() { return &___notification_1; }
	inline void set_notification_1(String_t* value)
	{
		___notification_1 = value;
		Il2CppCodeGenWriteBarrier((&___notification_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_ACTIONRESULT_T2930272204_H
#ifndef PB_CONSTANT_T479464192_H
#define PB_CONSTANT_T479464192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Constant
struct  pb_Constant_t479464192  : public RuntimeObject
{
public:

public:
};

struct pb_Constant_t479464192_StaticFields
{
public:
	// UnityEngine.Rect ProBuilder.Core.pb_Constant::RectZero
	Rect_t2360479859  ___RectZero_91;
	// UnityEngine.Color ProBuilder.Core.pb_Constant::ProBuilderBlue
	Color_t2555686324  ___ProBuilderBlue_92;
	// UnityEngine.Color ProBuilder.Core.pb_Constant::ProBuilderLightGray
	Color_t2555686324  ___ProBuilderLightGray_93;
	// UnityEngine.Color ProBuilder.Core.pb_Constant::ProBuilderDarkGray
	Color_t2555686324  ___ProBuilderDarkGray_94;

public:
	inline static int32_t get_offset_of_RectZero_91() { return static_cast<int32_t>(offsetof(pb_Constant_t479464192_StaticFields, ___RectZero_91)); }
	inline Rect_t2360479859  get_RectZero_91() const { return ___RectZero_91; }
	inline Rect_t2360479859 * get_address_of_RectZero_91() { return &___RectZero_91; }
	inline void set_RectZero_91(Rect_t2360479859  value)
	{
		___RectZero_91 = value;
	}

	inline static int32_t get_offset_of_ProBuilderBlue_92() { return static_cast<int32_t>(offsetof(pb_Constant_t479464192_StaticFields, ___ProBuilderBlue_92)); }
	inline Color_t2555686324  get_ProBuilderBlue_92() const { return ___ProBuilderBlue_92; }
	inline Color_t2555686324 * get_address_of_ProBuilderBlue_92() { return &___ProBuilderBlue_92; }
	inline void set_ProBuilderBlue_92(Color_t2555686324  value)
	{
		___ProBuilderBlue_92 = value;
	}

	inline static int32_t get_offset_of_ProBuilderLightGray_93() { return static_cast<int32_t>(offsetof(pb_Constant_t479464192_StaticFields, ___ProBuilderLightGray_93)); }
	inline Color_t2555686324  get_ProBuilderLightGray_93() const { return ___ProBuilderLightGray_93; }
	inline Color_t2555686324 * get_address_of_ProBuilderLightGray_93() { return &___ProBuilderLightGray_93; }
	inline void set_ProBuilderLightGray_93(Color_t2555686324  value)
	{
		___ProBuilderLightGray_93 = value;
	}

	inline static int32_t get_offset_of_ProBuilderDarkGray_94() { return static_cast<int32_t>(offsetof(pb_Constant_t479464192_StaticFields, ___ProBuilderDarkGray_94)); }
	inline Color_t2555686324  get_ProBuilderDarkGray_94() const { return ___ProBuilderDarkGray_94; }
	inline Color_t2555686324 * get_address_of_ProBuilderDarkGray_94() { return &___ProBuilderDarkGray_94; }
	inline void set_ProBuilderDarkGray_94(Color_t2555686324  value)
	{
		___ProBuilderDarkGray_94 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_CONSTANT_T479464192_H
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
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef ENCASMO_708_T562121192_H
#define ENCASMO_708_T562121192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCasmo_708
struct  ENCasmo_708_t562121192  : public CP708_t2382871261
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCASMO_708_T562121192_H
#ifndef ENCIBM00858_T2458074995_H
#define ENCIBM00858_T2458074995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm00858
struct  ENCibm00858_t2458074995  : public CP858_t2383198942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM00858_T2458074995_H
#ifndef ENCIBM037_T2940665735_H
#define ENCIBM037_T2940665735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm037
struct  ENCibm037_t2940665735  : public CP37_t108829002
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM037_T2940665735_H
#ifndef ENCIBM1025_T670129495_H
#define ENCIBM1025_T670129495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1025
struct  ENCibm1025_t670129495  : public CP21025_t3367402627
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1025_T670129495_H
#ifndef ENCIBM290_T1373926436_H
#define ENCIBM290_T1373926436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm290
struct  ENCibm290_t1373926436  : public CP20290_t1010799432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM290_T1373926436_H
#ifndef ENCIBM297_T2940010377_H
#define ENCIBM297_T2940010377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm297
struct  ENCibm297_t2940010377  : public CP20297_t1010799439
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM297_T2940010377_H
#ifndef ENCIBM420_T1374516262_H
#define ENCIBM420_T1374516262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm420
struct  ENCibm420_t1374516262  : public CP20420_t1395871466
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM420_T1374516262_H
#ifndef ENCIBM424_T3343884730_H
#define ENCIBM424_T3343884730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm424
struct  ENCibm424_t3343884730  : public CP20424_t1395871470
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM424_T3343884730_H
#ifndef ENCIBM500_T1374385189_H
#define ENCIBM500_T1374385189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm500
struct  ENCibm500_t1374385189  : public CP500_t2026640899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM500_T1374385189_H
#ifndef ENCIBM852_T2537512288_H
#define ENCIBM852_T2537512288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm852
struct  ENCibm852_t2537512288  : public CP852_t864169168
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM852_T2537512288_H
#ifndef ENCIBM855_T1777997401_H
#define ENCIBM855_T1777997401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm855
struct  ENCibm855_t1777997401  : public CP855_t1623684055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM855_T1777997401_H
#ifndef ENCIBM857_T2940796815_H
#define ENCIBM857_T2940796815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm857
struct  ENCibm857_t2940796815  : public CP857_t460884641
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM857_T2940796815_H
#ifndef ENCIBM862_T2537577824_H
#define ENCIBM862_T2537577824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm862
struct  ENCibm862_t2537577824  : public CP862_t864234704
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM862_T2537577824_H
#ifndef ENCIBM864_T3344146878_H
#define ENCIBM864_T3344146878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm864
struct  ENCibm864_t3344146878  : public CP864_t57665650
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM864_T3344146878_H
#ifndef ENCIBM866_T211978996_H
#define ENCIBM866_T211978996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm866
struct  ENCibm866_t211978996  : public CP866_t3189833532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM866_T211978996_H
#ifndef ENCIBM869_T3747431405_H
#define ENCIBM869_T3747431405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm869
struct  ENCibm869_t3747431405  : public CP869_t3949348419
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM869_T3747431405_H
#ifndef ENCIBM870_T1374843946_H
#define ENCIBM870_T1374843946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm870
struct  ENCibm870_t1374843946  : public CP870_t2027099654
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM870_T1374843946_H
#ifndef ENCIBM871_T4103727301_H
#define ENCIBM871_T4103727301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm871
struct  ENCibm871_t4103727301  : public CP20871_t2147492183
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM871_T4103727301_H
#ifndef ENCIBM875_T1778128473_H
#define ENCIBM875_T1778128473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm875
struct  ENCibm875_t1778128473  : public CP875_t1623815127
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM875_T1778128473_H
#ifndef ENCIBM437_T3410411110_H
#define ENCIBM437_T3410411110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm437
struct  ENCibm437_t3410411110  : public CP437_t3683438768
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM437_T3410411110_H
#ifndef ENCIBM850_T3813826705_H
#define ENCIBM850_T3813826705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm850
struct  ENCibm850_t3813826705  : public CP850_t1311178993
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM850_T3813826705_H
#ifndef ENCIBM860_T3814023313_H
#define ENCIBM860_T3814023313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm860
struct  ENCibm860_t3814023313  : public CP860_t1311113457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM860_T3814023313_H
#ifndef ENCIBM861_T2247939372_H
#define ENCIBM861_T2247939372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm861
struct  ENCibm861_t2247939372  : public CP861_t2877197398
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM861_T2247939372_H
#ifndef ENCIBM863_T1085139958_H
#define ENCIBM863_T1085139958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm863
struct  ENCibm863_t1085139958  : public CP863_t1714397984
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM863_T1085139958_H
#ifndef ENCIBM865_T278570904_H
#define ENCIBM865_T278570904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCibm865
struct  ENCibm865_t278570904  : public CP865_t551598570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM865_T278570904_H
#ifndef ENCISO_8859_15_T3881981915_H
#define ENCISO_8859_15_T3881981915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_15
struct  ENCiso_8859_15_t3881981915  : public CP28605_t1600022914
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_15_T3881981915_H
#ifndef ENCISO_8859_2_T815391552_H
#define ENCISO_8859_2_T815391552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_2
struct  ENCiso_8859_2_t815391552  : public CP28592_t3519602206
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_2_T815391552_H
#ifndef ENCISO_8859_3_T2381475493_H
#define ENCISO_8859_3_T2381475493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_3
struct  ENCiso_8859_3_t2381475493  : public CP28593_t3519602207
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_3_T2381475493_H
#ifndef ENCISO_8859_7_T412107025_H
#define ENCISO_8859_7_T412107025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCiso_8859_7
struct  ENCiso_8859_7_t412107025  : public CP28597_t3519602203
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCISO_8859_7_T412107025_H
#ifndef ENCMACINTOSH_T1087697298_H
#define ENCMACINTOSH_T1087697298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCmacintosh
struct  ENCmacintosh_t1087697298  : public CP10000_t776152390
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCMACINTOSH_T1087697298_H
#ifndef ENCWINDOWS_1250_T3241285640_H
#define ENCWINDOWS_1250_T3241285640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCwindows_1250
struct  ENCwindows_1250_t3241285640  : public CP1250_t1787607523
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1250_T3241285640_H
#ifndef ENCWINDOWS_1252_T3241285642_H
#define ENCWINDOWS_1252_T3241285642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCwindows_1252
struct  ENCwindows_1252_t3241285642  : public CP1252_t2169944547
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1252_T3241285642_H
#ifndef ENCWINDOWS_1253_T3241285643_H
#define ENCWINDOWS_1253_T3241285643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCwindows_1253
struct  ENCwindows_1253_t3241285643  : public CP1253_t4126259683
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_1253_T3241285643_H
#ifndef ENCX_MAC_ICELANDIC_T2411177152_H
#define ENCX_MAC_ICELANDIC_T2411177152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.West.ENCx_mac_icelandic
struct  ENCx_mac_icelandic_t2411177152  : public CP10079_t3879478589
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_MAC_ICELANDIC_T2411177152_H
#ifndef PB_COLORPALETTE_T2809412505_H
#define PB_COLORPALETTE_T2809412505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_ColorPalette
struct  pb_ColorPalette_t2809412505  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Color ProBuilder.Core.pb_ColorPalette::current
	Color_t2555686324  ___current_4;
	// System.Collections.Generic.List`1<UnityEngine.Color> ProBuilder.Core.pb_ColorPalette::colors
	List_1_t4027761066 * ___colors_5;

public:
	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(pb_ColorPalette_t2809412505, ___current_4)); }
	inline Color_t2555686324  get_current_4() const { return ___current_4; }
	inline Color_t2555686324 * get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(Color_t2555686324  value)
	{
		___current_4 = value;
	}

	inline static int32_t get_offset_of_colors_5() { return static_cast<int32_t>(offsetof(pb_ColorPalette_t2809412505, ___colors_5)); }
	inline List_1_t4027761066 * get_colors_5() const { return ___colors_5; }
	inline List_1_t4027761066 ** get_address_of_colors_5() { return &___colors_5; }
	inline void set_colors_5(List_1_t4027761066 * value)
	{
		___colors_5 = value;
		Il2CppCodeGenWriteBarrier((&___colors_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_COLORPALETTE_T2809412505_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PB_BEZIERSHAPE_T1252922490_H
#define PB_BEZIERSHAPE_T1252922490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_BezierShape
struct  pb_BezierShape_t1252922490  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<ProBuilder.Core.pb_BezierPoint> ProBuilder.Core.pb_BezierShape::m_Points
	List_1_t3916537093 * ___m_Points_4;
	// System.Boolean ProBuilder.Core.pb_BezierShape::m_CloseLoop
	bool ___m_CloseLoop_5;
	// System.Single ProBuilder.Core.pb_BezierShape::m_Radius
	float ___m_Radius_6;
	// System.Int32 ProBuilder.Core.pb_BezierShape::m_Rows
	int32_t ___m_Rows_7;
	// System.Int32 ProBuilder.Core.pb_BezierShape::m_Columns
	int32_t ___m_Columns_8;
	// System.Boolean ProBuilder.Core.pb_BezierShape::m_Smooth
	bool ___m_Smooth_9;
	// System.Boolean ProBuilder.Core.pb_BezierShape::m_IsEditing
	bool ___m_IsEditing_10;
	// ProBuilder.Core.pb_Object ProBuilder.Core.pb_BezierShape::m_Mesh
	pb_Object_t4080196558 * ___m_Mesh_11;

public:
	inline static int32_t get_offset_of_m_Points_4() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_Points_4)); }
	inline List_1_t3916537093 * get_m_Points_4() const { return ___m_Points_4; }
	inline List_1_t3916537093 ** get_address_of_m_Points_4() { return &___m_Points_4; }
	inline void set_m_Points_4(List_1_t3916537093 * value)
	{
		___m_Points_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Points_4), value);
	}

	inline static int32_t get_offset_of_m_CloseLoop_5() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_CloseLoop_5)); }
	inline bool get_m_CloseLoop_5() const { return ___m_CloseLoop_5; }
	inline bool* get_address_of_m_CloseLoop_5() { return &___m_CloseLoop_5; }
	inline void set_m_CloseLoop_5(bool value)
	{
		___m_CloseLoop_5 = value;
	}

	inline static int32_t get_offset_of_m_Radius_6() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_Radius_6)); }
	inline float get_m_Radius_6() const { return ___m_Radius_6; }
	inline float* get_address_of_m_Radius_6() { return &___m_Radius_6; }
	inline void set_m_Radius_6(float value)
	{
		___m_Radius_6 = value;
	}

	inline static int32_t get_offset_of_m_Rows_7() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_Rows_7)); }
	inline int32_t get_m_Rows_7() const { return ___m_Rows_7; }
	inline int32_t* get_address_of_m_Rows_7() { return &___m_Rows_7; }
	inline void set_m_Rows_7(int32_t value)
	{
		___m_Rows_7 = value;
	}

	inline static int32_t get_offset_of_m_Columns_8() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_Columns_8)); }
	inline int32_t get_m_Columns_8() const { return ___m_Columns_8; }
	inline int32_t* get_address_of_m_Columns_8() { return &___m_Columns_8; }
	inline void set_m_Columns_8(int32_t value)
	{
		___m_Columns_8 = value;
	}

	inline static int32_t get_offset_of_m_Smooth_9() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_Smooth_9)); }
	inline bool get_m_Smooth_9() const { return ___m_Smooth_9; }
	inline bool* get_address_of_m_Smooth_9() { return &___m_Smooth_9; }
	inline void set_m_Smooth_9(bool value)
	{
		___m_Smooth_9 = value;
	}

	inline static int32_t get_offset_of_m_IsEditing_10() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_IsEditing_10)); }
	inline bool get_m_IsEditing_10() const { return ___m_IsEditing_10; }
	inline bool* get_address_of_m_IsEditing_10() { return &___m_IsEditing_10; }
	inline void set_m_IsEditing_10(bool value)
	{
		___m_IsEditing_10 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_11() { return static_cast<int32_t>(offsetof(pb_BezierShape_t1252922490, ___m_Mesh_11)); }
	inline pb_Object_t4080196558 * get_m_Mesh_11() const { return ___m_Mesh_11; }
	inline pb_Object_t4080196558 ** get_address_of_m_Mesh_11() { return &___m_Mesh_11; }
	inline void set_m_Mesh_11(pb_Object_t4080196558 * value)
	{
		___m_Mesh_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_BEZIERSHAPE_T1252922490_H
#ifndef PB_ENTITY_T2459545027_H
#define PB_ENTITY_T2459545027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_Entity
struct  pb_Entity_t2459545027  : public MonoBehaviour_t3962482529
{
public:
	// ProBuilder.Core.EntityType ProBuilder.Core.pb_Entity::_entityType
	int32_t ____entityType_4;

public:
	inline static int32_t get_offset_of__entityType_4() { return static_cast<int32_t>(offsetof(pb_Entity_t2459545027, ____entityType_4)); }
	inline int32_t get__entityType_4() const { return ____entityType_4; }
	inline int32_t* get_address_of__entityType_4() { return &____entityType_4; }
	inline void set__entityType_4(int32_t value)
	{
		____entityType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_ENTITY_T2459545027_H
#ifndef PB_ENTITYBEHAVIOUR_T1336585749_H
#define PB_ENTITYBEHAVIOUR_T1336585749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_EntityBehaviour
struct  pb_EntityBehaviour_t1336585749  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean ProBuilder.Core.pb_EntityBehaviour::manageVisibility
	bool ___manageVisibility_4;

public:
	inline static int32_t get_offset_of_manageVisibility_4() { return static_cast<int32_t>(offsetof(pb_EntityBehaviour_t1336585749, ___manageVisibility_4)); }
	inline bool get_manageVisibility_4() const { return ___manageVisibility_4; }
	inline bool* get_address_of_manageVisibility_4() { return &___manageVisibility_4; }
	inline void set_manageVisibility_4(bool value)
	{
		___manageVisibility_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_ENTITYBEHAVIOUR_T1336585749_H
#ifndef PB_COLLIDERBEHAVIOUR_T2617278307_H
#define PB_COLLIDERBEHAVIOUR_T2617278307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilder.Core.pb_ColliderBehaviour
struct  pb_ColliderBehaviour_t2617278307  : public pb_EntityBehaviour_t1336585749
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PB_COLLIDERBEHAVIOUR_T2617278307_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5700 = { sizeof (ENCibm290_t1373926436), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5701 = { sizeof (CP20297_t1010799439), -1, sizeof(CP20297_t1010799439_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5701[1] = 
{
	CP20297_t1010799439_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5702 = { sizeof (ENCibm297_t2940010377), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5703 = { sizeof (CP20420_t1395871466), -1, sizeof(CP20420_t1395871466_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5703[1] = 
{
	CP20420_t1395871466_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5704 = { sizeof (ENCibm420_t1374516262), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5705 = { sizeof (CP20424_t1395871470), -1, sizeof(CP20424_t1395871470_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5705[1] = 
{
	CP20424_t1395871470_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5706 = { sizeof (ENCibm424_t3343884730), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5707 = { sizeof (CP20871_t2147492183), -1, sizeof(CP20871_t2147492183_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5707[1] = 
{
	CP20871_t2147492183_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5708 = { sizeof (ENCibm871_t4103727301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5709 = { sizeof (CP21025_t3367402627), -1, sizeof(CP21025_t3367402627_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5709[1] = 
{
	CP21025_t3367402627_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5710 = { sizeof (ENCibm1025_t670129495), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5711 = { sizeof (CP37_t108829002), -1, sizeof(CP37_t108829002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5711[1] = 
{
	CP37_t108829002_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5712 = { sizeof (ENCibm037_t2940665735), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5713 = { sizeof (CP500_t2026640899), -1, sizeof(CP500_t2026640899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5713[1] = 
{
	CP500_t2026640899_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5714 = { sizeof (ENCibm500_t1374385189), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5715 = { sizeof (CP708_t2382871261), -1, sizeof(CP708_t2382871261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5715[1] = 
{
	CP708_t2382871261_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5716 = { sizeof (ENCasmo_708_t562121192), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5717 = { sizeof (CP852_t864169168), -1, sizeof(CP852_t864169168_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5717[1] = 
{
	CP852_t864169168_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5718 = { sizeof (ENCibm852_t2537512288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5719 = { sizeof (CP855_t1623684055), -1, sizeof(CP855_t1623684055_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5719[1] = 
{
	CP855_t1623684055_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5720 = { sizeof (ENCibm855_t1777997401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5721 = { sizeof (CP857_t460884641), -1, sizeof(CP857_t460884641_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5721[1] = 
{
	CP857_t460884641_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5722 = { sizeof (ENCibm857_t2940796815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5723 = { sizeof (CP858_t2383198942), -1, sizeof(CP858_t2383198942_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5723[1] = 
{
	CP858_t2383198942_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5724 = { sizeof (ENCibm00858_t2458074995), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5725 = { sizeof (CP862_t864234704), -1, sizeof(CP862_t864234704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5725[1] = 
{
	CP862_t864234704_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5726 = { sizeof (ENCibm862_t2537577824), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5727 = { sizeof (CP864_t57665650), -1, sizeof(CP864_t57665650_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5727[1] = 
{
	CP864_t57665650_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5728 = { sizeof (ENCibm864_t3344146878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5729 = { sizeof (CP866_t3189833532), -1, sizeof(CP866_t3189833532_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5729[1] = 
{
	CP866_t3189833532_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5730 = { sizeof (ENCibm866_t211978996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5731 = { sizeof (CP869_t3949348419), -1, sizeof(CP869_t3949348419_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5731[1] = 
{
	CP869_t3949348419_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5732 = { sizeof (ENCibm869_t3747431405), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5733 = { sizeof (CP870_t2027099654), -1, sizeof(CP870_t2027099654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5733[1] = 
{
	CP870_t2027099654_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5734 = { sizeof (ENCibm870_t1374843946), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5735 = { sizeof (CP875_t1623815127), -1, sizeof(CP875_t1623815127_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5735[1] = 
{
	CP875_t1623815127_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5736 = { sizeof (ENCibm875_t1778128473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5737 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255375), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5737[37] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U305B1E1067273E188A50BA4342B4BC09ABEE669CD_0(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U309885C8B0840E863B3A14261999895D896677D5A_1(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U30BBB1FA6CCD88EF7F8B73A4A7AF064FE4A421486_2(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U3271EF3D1C1F8136E08DBCAB443CE02538A4156F0_3(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U32E1C78D5F4666324672DFACDC9307935CF14E98F_4(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U33551F16F8A11003B8289B76B9E3D97969B68E7D9_5(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U336A0A1CE2E522AB1D22668B38F6126D2F6E17D44_6(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U337C03949C69BDDA042205E1A573B349E75F693B8_7(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U347DCC01E928630EBCC018C5E0285145985F92532_8(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U352623ED7F33E8C1C541F1C3101FA981B173D795E_9(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U35EF781A18260A43AA5EAF73D4DAAA126F7ACAB4A_10(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U3659C24C855D0E50CBD366B2774AF841E29202E70_11(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U36B2745F3AD679B4F2E844D23C3EE0BAD49E1528D_12(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U371D13FFA93C0CC3F813C0B17C0FDFAC1D1AAA8CE_13(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U37A827DA5CD16B7AC8DB4221BABFA420A2B8668E8_14(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U37AF949FCE93CBEA9FAE4D22F2BCD5756396C6BB9_15(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U382273BF74F02F3FDFABEED76BCA4B82DDB2C2761_16(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U38C32A1D05EF81F6F81E519ECE45CC6D67AEC5A32_17(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U38E958C1847104F390F9C9B64F0F39C98ED4AC63F_18(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U394F89F72CC0508D891A0C71DD7B57B703869A3FB_19(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U39E66CEC4FA557D4655353E0A4F5940FA0D71CF3A_20(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_U39EF46C677634CB82C0BD475E372C71C5F68C981A_21(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_A5A5BE77BD3D095389FABC21D18BB648787E6618_22(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_B0D57A37D962AF56458E04E1BAAB3C4BC1B146F5_23(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_B1D1CEE08985760776A35065014EAF3D4D3CDE8D_24(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_B2574B82126B684C0CB3CF93BF7473F0FBB34400_25(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_B6BD9A82204938ABFE97CF3FAB5A47824080EAA0_26(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_BC1CEF8131E7F0D8206029373157806126E21026_27(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_C14817C33562352073848F1A8EA633C19CF1A4F5_28(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_C392E993B9E622A36C30E0BB997A9F41293CD9EF_29(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_C74F2436F5FE448E6F8A9D1C5C95D8DD53B39F1E_30(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_C8E6884C6631D74572185DA8E1E35BD7BBCCD6C4_31(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_CFB85A64A0D1FAB523C3DE56096F8803CDFEA674_32(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_D257291FBF3DA6F5C38B3275534902BC9EDE92EA_33(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_D4795500A3D0F00D8EE85626648C3FBAFA4F70C3_34(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_DF4C38A5E59685BBEC109623762B6914BE00E866_35(),
	U3CPrivateImplementationDetailsU3E_t3057255375_StaticFields::get_offset_of_F632BE2E03B27F265F779A5D3D217E5C14AB6CB5_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5738 = { sizeof (__StaticArrayInitTypeSizeU3D512_t3317833662)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t3317833662 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5739 = { sizeof (U3CModuleU3E_t692745594), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5740 = { sizeof (Consts_t1749595338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5740[41] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5741 = { sizeof (CP10000_t776152390), -1, sizeof(CP10000_t776152390_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5741[1] = 
{
	CP10000_t776152390_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5742 = { sizeof (ENCmacintosh_t1087697298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5743 = { sizeof (CP10079_t3879478589), -1, sizeof(CP10079_t3879478589_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5743[1] = 
{
	CP10079_t3879478589_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5744 = { sizeof (ENCx_mac_icelandic_t2411177152), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5745 = { sizeof (CP1250_t1787607523), -1, sizeof(CP1250_t1787607523_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5745[1] = 
{
	CP1250_t1787607523_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5746 = { sizeof (ENCwindows_1250_t3241285640), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5747 = { sizeof (CP1252_t2169944547), -1, sizeof(CP1252_t2169944547_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5747[1] = 
{
	CP1252_t2169944547_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5748 = { sizeof (ENCwindows_1252_t3241285642), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5749 = { sizeof (CP1253_t4126259683), -1, sizeof(CP1253_t4126259683_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5749[1] = 
{
	CP1253_t4126259683_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5750 = { sizeof (ENCwindows_1253_t3241285643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5751 = { sizeof (CP28592_t3519602206), -1, sizeof(CP28592_t3519602206_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5751[1] = 
{
	CP28592_t3519602206_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5752 = { sizeof (ENCiso_8859_2_t815391552), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5753 = { sizeof (CP28593_t3519602207), -1, sizeof(CP28593_t3519602207_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5753[1] = 
{
	CP28593_t3519602207_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5754 = { sizeof (ENCiso_8859_3_t2381475493), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5755 = { sizeof (CP28597_t3519602203), -1, sizeof(CP28597_t3519602203_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5755[1] = 
{
	CP28597_t3519602203_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5756 = { sizeof (ENCiso_8859_7_t412107025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5757 = { sizeof (CP28605_t1600022914), -1, sizeof(CP28605_t1600022914_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5757[1] = 
{
	CP28605_t1600022914_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5758 = { sizeof (ENCiso_8859_15_t3881981915), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5759 = { sizeof (CP437_t3683438768), -1, sizeof(CP437_t3683438768_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5759[1] = 
{
	CP437_t3683438768_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5760 = { sizeof (ENCibm437_t3410411110), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5761 = { sizeof (CP850_t1311178993), -1, sizeof(CP850_t1311178993_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5761[1] = 
{
	CP850_t1311178993_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5762 = { sizeof (ENCibm850_t3813826705), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5763 = { sizeof (CP860_t1311113457), -1, sizeof(CP860_t1311113457_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5763[1] = 
{
	CP860_t1311113457_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5764 = { sizeof (ENCibm860_t3814023313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5765 = { sizeof (CP861_t2877197398), -1, sizeof(CP861_t2877197398_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5765[1] = 
{
	CP861_t2877197398_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5766 = { sizeof (ENCibm861_t2247939372), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5767 = { sizeof (CP863_t1714397984), -1, sizeof(CP863_t1714397984_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5767[1] = 
{
	CP863_t1714397984_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5768 = { sizeof (ENCibm863_t1085139958), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5769 = { sizeof (CP865_t551598570), -1, sizeof(CP865_t551598570_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5769[1] = 
{
	CP865_t551598570_StaticFields::get_offset_of_ToChars_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5770 = { sizeof (ENCibm865_t278570904), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5771 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255376), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5771[15] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U305C64B887A4D766EEB5842345D6B609A0E3A91C9_0(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U3148F346330E294B4157ED412259A7E7F373E26A8_1(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U31F867F0E96DB3A56943B8CB2662D1DA624023FCD_2(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U33220DE2BE9769737429E0DE2C6D837CB7C5A02AD_3(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U3356CE585046545CD2D0B109FF8A85DB88EE29074_4(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U34FEA2A6324C0192B29C90830F5D578051A4B1B16_5(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U3598D9433A53523A59D462896B803E416AB0B1901_6(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U36E6F169B075CACDE575F1FEA42B1376D31D5A7E5_7(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U37089F9820A6F9CC830909BCD1FAF2EF0A540F348_8(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_U39ACD15FF06BC5A9B676BDBD6BFF4025F9CCE845D_9(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_A394B4578F1DC8407FC72C0514F23F5AE4EDEBA8_10(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_B676CC7861A57EFB9BD0D7BEA61CD8E2484C57ED_11(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_D5DB24A984219B0001B4B86CDE1E0DF54572D83A_12(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_E11338F644FF140C0E23D8B7526DB4D2D73FC3F7_13(),
	U3CPrivateImplementationDetailsU3E_t3057255376_StaticFields::get_offset_of_FBB979B39B3DE95C52CD45C1036F61ABCE6B17D4_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5772 = { sizeof (__StaticArrayInitTypeSizeU3D512_t3317833663)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t3317833663 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5773 = { sizeof (U3CModuleU3E_t692745595), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5774 = { sizeof (ChangelogEntry_t3119695814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5774[2] = 
{
	ChangelogEntry_t3119695814::get_offset_of_m_VersionInfo_0(),
	ChangelogEntry_t3119695814::get_offset_of_m_ReleaseNotes_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5775 = { sizeof (Changelog_t1776431042), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5775[4] = 
{
	0,
	0,
	0,
	Changelog_t1776431042::get_offset_of_m_Entries_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5776 = { sizeof (Status_t632827111)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5776[5] = 
{
	Status_t632827111::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5777 = { sizeof (pb_ActionResult_t2930272204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5777[2] = 
{
	pb_ActionResult_t2930272204::get_offset_of_status_0(),
	pb_ActionResult_t2930272204::get_offset_of_notification_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5778 = { sizeof (pb_BezierTangentMode_t516906914)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5778[4] = 
{
	pb_BezierTangentMode_t516906914::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5779 = { sizeof (pb_BezierTangentDirection_t503654898)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5779[3] = 
{
	pb_BezierTangentDirection_t503654898::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5780 = { sizeof (pb_BezierPoint_t2444462351)+ sizeof (RuntimeObject), sizeof(pb_BezierPoint_t2444462351 ), 0, 0 };
extern const int32_t g_FieldOffsetTable5780[4] = 
{
	pb_BezierPoint_t2444462351::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	pb_BezierPoint_t2444462351::get_offset_of_tangentIn_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	pb_BezierPoint_t2444462351::get_offset_of_tangentOut_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	pb_BezierPoint_t2444462351::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5781 = { sizeof (pb_BezierShape_t1252922490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5781[8] = 
{
	pb_BezierShape_t1252922490::get_offset_of_m_Points_4(),
	pb_BezierShape_t1252922490::get_offset_of_m_CloseLoop_5(),
	pb_BezierShape_t1252922490::get_offset_of_m_Radius_6(),
	pb_BezierShape_t1252922490::get_offset_of_m_Rows_7(),
	pb_BezierShape_t1252922490::get_offset_of_m_Columns_8(),
	pb_BezierShape_t1252922490::get_offset_of_m_Smooth_9(),
	pb_BezierShape_t1252922490::get_offset_of_m_IsEditing_10(),
	pb_BezierShape_t1252922490::get_offset_of_m_Mesh_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5782 = { sizeof (pb_Bounds2D_t689838911), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5782[3] = 
{
	pb_Bounds2D_t689838911::get_offset_of_center_0(),
	pb_Bounds2D_t689838911::get_offset_of__size_1(),
	pb_Bounds2D_t689838911::get_offset_of__extents_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5783 = { sizeof (pb_Clipping_t3524379063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5784 = { sizeof (OutCode_t2015344846)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5784[6] = 
{
	OutCode_t2015344846::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5785 = { sizeof (pb_ColliderBehaviour_t2617278307), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5786 = { sizeof (pb_ColorPalette_t2809412505), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5786[2] = 
{
	pb_ColorPalette_t2809412505::get_offset_of_current_4(),
	pb_ColorPalette_t2809412505::get_offset_of_colors_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5787 = { sizeof (pb_HsvColor_t1663590451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5787[3] = 
{
	pb_HsvColor_t1663590451::get_offset_of_h_0(),
	pb_HsvColor_t1663590451::get_offset_of_s_1(),
	pb_HsvColor_t1663590451::get_offset_of_v_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5788 = { sizeof (pb_XYZ_Color_t186003279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5788[3] = 
{
	pb_XYZ_Color_t186003279::get_offset_of_x_0(),
	pb_XYZ_Color_t186003279::get_offset_of_y_1(),
	pb_XYZ_Color_t186003279::get_offset_of_z_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5789 = { sizeof (pb_CIE_Lab_Color_t2391182886), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5789[3] = 
{
	pb_CIE_Lab_Color_t2391182886::get_offset_of_L_0(),
	pb_CIE_Lab_Color_t2391182886::get_offset_of_a_1(),
	pb_CIE_Lab_Color_t2391182886::get_offset_of_b_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5790 = { sizeof (pb_ColorUtil_t600019625), -1, sizeof(pb_ColorUtil_t600019625_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5790[1] = 
{
	pb_ColorUtil_t600019625_StaticFields::get_offset_of_ColorNameLookup_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5791 = { sizeof (pb_Constant_t479464192), -1, sizeof(pb_Constant_t479464192_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5791[105] = 
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
	pb_Constant_t479464192_StaticFields::get_offset_of_RectZero_91(),
	pb_Constant_t479464192_StaticFields::get_offset_of_ProBuilderBlue_92(),
	pb_Constant_t479464192_StaticFields::get_offset_of_ProBuilderLightGray_93(),
	pb_Constant_t479464192_StaticFields::get_offset_of_ProBuilderDarkGray_94(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5792 = { sizeof (pb_Edge_t1665968824)+ sizeof (RuntimeObject), sizeof(pb_Edge_t1665968824 ), sizeof(pb_Edge_t1665968824_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5792[3] = 
{
	pb_Edge_t1665968824::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	pb_Edge_t1665968824::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	pb_Edge_t1665968824_StaticFields::get_offset_of_Empty_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5793 = { sizeof (pb_EdgeConnection_t3838793190), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5793[2] = 
{
	pb_EdgeConnection_t3838793190::get_offset_of_face_0(),
	pb_EdgeConnection_t3838793190::get_offset_of_edges_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5794 = { sizeof (pb_EdgeExtension_t2102338514), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5795 = { sizeof (pb_EdgeLookup_t1945391737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5795[2] = 
{
	pb_EdgeLookup_t1945391737::get_offset_of_local_0(),
	pb_EdgeLookup_t1945391737::get_offset_of_common_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5796 = { sizeof (U3CGetEdgeLookupU3Ec__AnonStorey0_t3639327394), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5796[1] = 
{
	U3CGetEdgeLookupU3Ec__AnonStorey0_t3639327394::get_offset_of_lookup_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5797 = { sizeof (pb_Entity_t2459545027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5797[1] = 
{
	pb_Entity_t2459545027::get_offset_of__entityType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5798 = { sizeof (pb_EntityBehaviour_t1336585749), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5798[1] = 
{
	pb_EntityBehaviour_t1336585749::get_offset_of_manageVisibility_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5799 = { sizeof (SelectMode_t880512167)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable5799[4] = 
{
	SelectMode_t880512167::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
