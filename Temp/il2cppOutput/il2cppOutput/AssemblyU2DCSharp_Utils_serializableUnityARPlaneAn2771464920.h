#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_ARPlaneAnchor2379298071.h"

// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t1608204732;
// Utils.SerializableVector4
struct SerializableVector4_t4294681242;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t2771464920  : public Il2CppObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t1608204732 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t4294681242 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t4294681242 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t3397334013* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t2771464920, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t1608204732 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t1608204732 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t1608204732 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier(&___worldTransform_0, value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t2771464920, ___center_1)); }
	inline SerializableVector4_t4294681242 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t4294681242 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t4294681242 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier(&___center_1, value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t2771464920, ___extent_2)); }
	inline SerializableVector4_t4294681242 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t4294681242 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t4294681242 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier(&___extent_2, value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t2771464920, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t2771464920, ___identifierStr_4)); }
	inline ByteU5BU5D_t3397334013* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t3397334013* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier(&___identifierStr_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
