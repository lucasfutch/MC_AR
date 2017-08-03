#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockData
struct  BlockData_t1455168015  : public Il2CppObject
{
public:
	// System.Single BlockData::locx
	float ___locx_0;
	// System.Single BlockData::locy
	float ___locy_1;
	// System.Single BlockData::locz
	float ___locz_2;
	// System.String BlockData::type
	String_t* ___type_3;

public:
	inline static int32_t get_offset_of_locx_0() { return static_cast<int32_t>(offsetof(BlockData_t1455168015, ___locx_0)); }
	inline float get_locx_0() const { return ___locx_0; }
	inline float* get_address_of_locx_0() { return &___locx_0; }
	inline void set_locx_0(float value)
	{
		___locx_0 = value;
	}

	inline static int32_t get_offset_of_locy_1() { return static_cast<int32_t>(offsetof(BlockData_t1455168015, ___locy_1)); }
	inline float get_locy_1() const { return ___locy_1; }
	inline float* get_address_of_locy_1() { return &___locy_1; }
	inline void set_locy_1(float value)
	{
		___locy_1 = value;
	}

	inline static int32_t get_offset_of_locz_2() { return static_cast<int32_t>(offsetof(BlockData_t1455168015, ___locz_2)); }
	inline float get_locz_2() const { return ___locz_2; }
	inline float* get_address_of_locz_2() { return &___locz_2; }
	inline void set_locz_2(float value)
	{
		___locz_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(BlockData_t1455168015, ___type_3)); }
	inline String_t* get_type_3() const { return ___type_3; }
	inline String_t** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(String_t* value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
