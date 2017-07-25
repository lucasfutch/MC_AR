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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_Utils_serializableUnityARMatrix41608204732.h"
#include "AssemblyU2DCSharp_Utils_SerializableVector44294681242.h"
#include "mscorlib_System_Void1841601450.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UnityARMatrix4100931615.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "mscorlib_System_Int322071877448.h"
#include "AssemblyU2DCSharp_Utils_serializableUnityARPlaneAn2771464920.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARPlaneAnchor2379298071.h"
#include "mscorlib_System_Byte3683104436.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARPlaneAnchor1439520888.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_Text_Encoding663144255.h"
#include "mscorlib_System_String2029220233.h"

// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t1608204732;
// Utils.SerializableVector4
struct SerializableVector4_t4294681242;
// System.Object
struct Il2CppObject;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t2771464920;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Text.Encoding
struct Encoding_t663144255;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
extern Il2CppClass* serializableUnityARMatrix4x4_t1608204732_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m1858760716_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3351186895_MetadataUsageId;
extern Il2CppClass* Matrix4x4_t2933234003_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m2316713119_MetadataUsageId;
extern Il2CppClass* SerializableVector4_t4294681242_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t663144255_il2cpp_TypeInfo_var;
extern Il2CppClass* serializableUnityARPlaneAnchor_t2771464920_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m1167097547_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m4217660239_MetadataUsageId;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1742103562;
extern const uint32_t SerializableVector4_ToString_m137239981_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_m2818398069_MetadataUsageId;

// System.Byte[]
struct ByteU5BU5D_t3397334013  : public Il2CppArray
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
// System.Object[]
struct ObjectU5BU5D_t3614634134  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Il2CppObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (Il2CppObject * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t4294681242 * SerializableVector4_op_Implicit_m2818398069 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___rValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m3056798804 (serializableUnityARMatrix4x4_t1608204732 * __this, SerializableVector4_t4294681242 * ___v00, SerializableVector4_t4294681242 * ___v11, SerializableVector4_t4294681242 * ___v22, SerializableVector4_t4294681242 * ___v33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t2243707581  SerializableVector4_op_Implicit_m3701091973 (Il2CppObject * __this /* static, unused */, SerializableVector4_t4294681242 * ___rValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void UnityARMatrix4x4__ctor_m2255520762 (UnityARMatrix4x4_t100931615 * __this, Vector4_t2243707581  ___c00, Vector4_t2243707581  ___c11, Vector4_t2243707581  ___c22, Vector4_t2243707581  ___c33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t2243707581  Matrix4x4_GetColumn_m1367096730 (Matrix4x4_t2933234003 * __this, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
extern "C"  void Matrix4x4_SetColumn_m3120649749 (Matrix4x4_t2933234003 * __this, int32_t p0, Vector4_t2243707581  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t1608204732 * serializableUnityARMatrix4x4_op_Implicit_m3351186895 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___rValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m1161519484 (SerializableVector4_t4294681242 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t663144255 * Encoding_get_UTF8_m1752852937 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m2103992067 (serializableUnityARPlaneAnchor_t2771464920 * __this, serializableUnityARMatrix4x4_t1608204732 * ___wt0, SerializableVector4_t4294681242 * ___ctr1, SerializableVector4_t4294681242 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t3397334013* ___idstr4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t2933234003  serializableUnityARMatrix4x4_op_Implicit_m2316713119 (Il2CppObject * __this /* static, unused */, serializableUnityARMatrix4x4_t1608204732 * ___rValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m1263743648 (Il2CppObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t3614634134* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m1222289168 (Vector4_t2243707581 * __this, float p0, float p1, float p2, float p3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m3056798804 (serializableUnityARMatrix4x4_t1608204732 * __this, SerializableVector4_t4294681242 * ___v00, SerializableVector4_t4294681242 * ___v11, SerializableVector4_t4294681242 * ___v22, SerializableVector4_t4294681242 * ___v33, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		SerializableVector4_t4294681242 * L_0 = ___v00;
		__this->set_column0_0(L_0);
		SerializableVector4_t4294681242 * L_1 = ___v11;
		__this->set_column1_1(L_1);
		SerializableVector4_t4294681242 * L_2 = ___v22;
		__this->set_column2_2(L_2);
		SerializableVector4_t4294681242 * L_3 = ___v33;
		__this->set_column3_3(L_3);
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C"  serializableUnityARMatrix4x4_t1608204732 * serializableUnityARMatrix4x4_op_Implicit_m1858760716 (Il2CppObject * __this /* static, unused */, UnityARMatrix4x4_t100931615  ___rValue0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m1858760716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t2243707581  L_0 = (&___rValue0)->get_column0_0();
		SerializableVector4_t4294681242 * L_1 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t2243707581  L_2 = (&___rValue0)->get_column1_1();
		SerializableVector4_t4294681242 * L_3 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t2243707581  L_4 = (&___rValue0)->get_column2_2();
		SerializableVector4_t4294681242 * L_5 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t2243707581  L_6 = (&___rValue0)->get_column3_3();
		SerializableVector4_t4294681242 * L_7 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_8 = (serializableUnityARMatrix4x4_t1608204732 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t1608204732_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3056798804(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  UnityARMatrix4x4_t100931615  serializableUnityARMatrix4x4_op_Implicit_m2643271182 (Il2CppObject * __this /* static, unused */, serializableUnityARMatrix4x4_t1608204732 * ___rValue0, const MethodInfo* method)
{
	{
		serializableUnityARMatrix4x4_t1608204732 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t4294681242 * L_1 = L_0->get_column0_0();
		Vector4_t2243707581  L_2 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t4294681242 * L_4 = L_3->get_column1_1();
		Vector4_t2243707581  L_5 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t4294681242 * L_7 = L_6->get_column2_2();
		Vector4_t2243707581  L_8 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t4294681242 * L_10 = L_9->get_column3_3();
		Vector4_t2243707581  L_11 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_t100931615  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_m2255520762(&L_12, L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t1608204732 * serializableUnityARMatrix4x4_op_Implicit_m3351186895 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___rValue0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3351186895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t2243707581  L_0 = Matrix4x4_GetColumn_m1367096730((&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t4294681242 * L_1 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t2243707581  L_2 = Matrix4x4_GetColumn_m1367096730((&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t4294681242 * L_3 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t2243707581  L_4 = Matrix4x4_GetColumn_m1367096730((&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t4294681242 * L_5 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t2243707581  L_6 = Matrix4x4_GetColumn_m1367096730((&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t4294681242 * L_7 = SerializableVector4_op_Implicit_m2818398069(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_8 = (serializableUnityARMatrix4x4_t1608204732 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t1608204732_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m3056798804(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t2933234003  serializableUnityARMatrix4x4_op_Implicit_m2316713119 (Il2CppObject * __this /* static, unused */, serializableUnityARMatrix4x4_t1608204732 * ___rValue0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m2316713119_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t2933234003  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Initobj (Matrix4x4_t2933234003_il2cpp_TypeInfo_var, (&V_0));
		serializableUnityARMatrix4x4_t1608204732 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t4294681242 * L_1 = L_0->get_column0_0();
		Vector4_t2243707581  L_2 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		Matrix4x4_SetColumn_m3120649749((&V_0), 0, L_2, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t4294681242 * L_4 = L_3->get_column1_1();
		Vector4_t2243707581  L_5 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Matrix4x4_SetColumn_m3120649749((&V_0), 1, L_5, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t4294681242 * L_7 = L_6->get_column2_2();
		Vector4_t2243707581  L_8 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Matrix4x4_SetColumn_m3120649749((&V_0), 2, L_8, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t4294681242 * L_10 = L_9->get_column3_3();
		Vector4_t2243707581  L_11 = SerializableVector4_op_Implicit_m3701091973(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Matrix4x4_SetColumn_m3120649749((&V_0), 3, L_11, /*hidden argument*/NULL);
		Matrix4x4_t2933234003  L_12 = V_0;
		return L_12;
	}
}
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m2103992067 (serializableUnityARPlaneAnchor_t2771464920 * __this, serializableUnityARMatrix4x4_t1608204732 * ___wt0, SerializableVector4_t4294681242 * ___ctr1, SerializableVector4_t4294681242 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t3397334013* ___idstr4, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t1608204732 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t4294681242 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t4294681242 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t3397334013* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  serializableUnityARPlaneAnchor_t2771464920 * serializableUnityARPlaneAnchor_op_Implicit_m1167097547 (Il2CppObject * __this /* static, unused */, ARPlaneAnchor_t1439520888  ___rValue0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m1167097547_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t1608204732 * V_0 = NULL;
	SerializableVector4_t4294681242 * V_1 = NULL;
	SerializableVector4_t4294681242 * V_2 = NULL;
	ByteU5BU5D_t3397334013* V_3 = NULL;
	{
		Matrix4x4_t2933234003  L_0 = (&___rValue0)->get_transform_1();
		serializableUnityARMatrix4x4_t1608204732 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m3351186895(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t2243707580 * L_2 = (&___rValue0)->get_address_of_center_3();
		float L_3 = L_2->get_x_1();
		Vector3_t2243707580 * L_4 = (&___rValue0)->get_address_of_center_3();
		float L_5 = L_4->get_y_2();
		Vector3_t2243707580 * L_6 = (&___rValue0)->get_address_of_center_3();
		float L_7 = L_6->get_z_3();
		SerializableVector4_t4294681242 * L_8 = (SerializableVector4_t4294681242 *)il2cpp_codegen_object_new(SerializableVector4_t4294681242_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1161519484(L_8, L_3, L_5, L_7, (1.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t2243707580 * L_9 = (&___rValue0)->get_address_of_extent_4();
		float L_10 = L_9->get_x_1();
		Vector3_t2243707580 * L_11 = (&___rValue0)->get_address_of_extent_4();
		float L_12 = L_11->get_y_2();
		Vector3_t2243707580 * L_13 = (&___rValue0)->get_address_of_extent_4();
		float L_14 = L_13->get_z_3();
		SerializableVector4_t4294681242 * L_15 = (SerializableVector4_t4294681242 *)il2cpp_codegen_object_new(SerializableVector4_t4294681242_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1161519484(L_15, L_10, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_16 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = (&___rValue0)->get_identifier_0();
		NullCheck(L_16);
		ByteU5BU5D_t3397334013* L_18 = VirtFuncInvoker1< ByteU5BU5D_t3397334013*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		serializableUnityARMatrix4x4_t1608204732 * L_19 = V_0;
		SerializableVector4_t4294681242 * L_20 = V_1;
		SerializableVector4_t4294681242 * L_21 = V_2;
		int64_t L_22 = (&___rValue0)->get_alignment_2();
		ByteU5BU5D_t3397334013* L_23 = V_3;
		serializableUnityARPlaneAnchor_t2771464920 * L_24 = (serializableUnityARPlaneAnchor_t2771464920 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t2771464920_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m2103992067(L_24, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
extern "C"  ARPlaneAnchor_t1439520888  serializableUnityARPlaneAnchor_op_Implicit_m4217660239 (Il2CppObject * __this /* static, unused */, serializableUnityARPlaneAnchor_t2771464920 * ___rValue0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m4217660239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t1439520888  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t663144255_il2cpp_TypeInfo_var);
		Encoding_t663144255 * L_0 = Encoding_get_UTF8_m1752852937(NULL /*static, unused*/, /*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t2771464920 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_t3397334013* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t3397334013* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		serializableUnityARPlaneAnchor_t2771464920 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t4294681242 * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t2771464920 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t4294681242 * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t2771464920 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t4294681242 * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_t2243707580  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2638739322(&L_13, L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		serializableUnityARPlaneAnchor_t2771464920 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t4294681242 * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t2771464920 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t4294681242 * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t2771464920 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t4294681242 * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_t2243707580  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m2638739322(&L_23, L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		serializableUnityARPlaneAnchor_t2771464920 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		serializableUnityARPlaneAnchor_t2771464920 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_t1608204732 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t2933234003  L_28 = serializableUnityARMatrix4x4_op_Implicit_m2316713119(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		ARPlaneAnchor_t1439520888  L_29 = V_0;
		return L_29;
	}
}
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m1161519484 (SerializableVector4_t4294681242 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
extern "C"  String_t* SerializableVector4_ToString_m137239981 (SerializableVector4_t4294681242 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m137239981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3614634134* L_0 = ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		Il2CppObject * L_3 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)L_3);
		ObjectU5BU5D_t3614634134* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		Il2CppObject * L_7 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_7);
		ObjectU5BU5D_t3614634134* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		Il2CppObject * L_11 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)L_11);
		ObjectU5BU5D_t3614634134* L_12 = L_8;
		float L_13 = __this->get_w_3();
		float L_14 = L_13;
		Il2CppObject * L_15 = Box(Single_t2076509932_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m1263743648(NULL /*static, unused*/, _stringLiteral1742103562, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t2243707581  SerializableVector4_op_Implicit_m3701091973 (Il2CppObject * __this /* static, unused */, SerializableVector4_t4294681242 * ___rValue0, const MethodInfo* method)
{
	{
		SerializableVector4_t4294681242 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t4294681242 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t4294681242 * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t4294681242 * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_t2243707581  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m1222289168(&L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t4294681242 * SerializableVector4_op_Implicit_m2818398069 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581  ___rValue0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_m2818398069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t4294681242 * L_4 = (SerializableVector4_t4294681242 *)il2cpp_codegen_object_new(SerializableVector4_t4294681242_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1161519484(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
