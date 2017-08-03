#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.List`1<BlockData>
struct List_1_t824289147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AllBlockData
struct  AllBlockData_t171087180  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<BlockData> AllBlockData::allBlocksLocation
	List_1_t824289147 * ___allBlocksLocation_0;

public:
	inline static int32_t get_offset_of_allBlocksLocation_0() { return static_cast<int32_t>(offsetof(AllBlockData_t171087180, ___allBlocksLocation_0)); }
	inline List_1_t824289147 * get_allBlocksLocation_0() const { return ___allBlocksLocation_0; }
	inline List_1_t824289147 ** get_address_of_allBlocksLocation_0() { return &___allBlocksLocation_0; }
	inline void set_allBlocksLocation_0(List_1_t824289147 * value)
	{
		___allBlocksLocation_0 = value;
		Il2CppCodeGenWriteBarrier(&___allBlocksLocation_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
