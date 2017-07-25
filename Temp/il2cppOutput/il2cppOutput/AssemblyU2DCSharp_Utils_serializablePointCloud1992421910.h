#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePointCloud
struct  serializablePointCloud_t1992421910  : public Il2CppObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t3397334013* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t1992421910, ___pointCloudData_0)); }
	inline ByteU5BU5D_t3397334013* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t3397334013* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier(&___pointCloudData_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
