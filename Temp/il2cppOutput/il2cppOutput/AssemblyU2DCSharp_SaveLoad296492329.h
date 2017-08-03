#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// SaveLoad
struct SaveLoad_t296492329;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveLoad
struct  SaveLoad_t296492329  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SaveLoad::allBlocksLength
	int32_t ___allBlocksLength_3;
	// UnityEngine.GameObject[] SaveLoad::allBlocks
	GameObjectU5BU5D_t3057952154* ___allBlocks_4;
	// UnityEngine.Vector3 SaveLoad::location
	Vector3_t2243707580  ___location_5;
	// UnityEngine.Vector3 SaveLoad::bringUp
	Vector3_t2243707580  ___bringUp_6;

public:
	inline static int32_t get_offset_of_allBlocksLength_3() { return static_cast<int32_t>(offsetof(SaveLoad_t296492329, ___allBlocksLength_3)); }
	inline int32_t get_allBlocksLength_3() const { return ___allBlocksLength_3; }
	inline int32_t* get_address_of_allBlocksLength_3() { return &___allBlocksLength_3; }
	inline void set_allBlocksLength_3(int32_t value)
	{
		___allBlocksLength_3 = value;
	}

	inline static int32_t get_offset_of_allBlocks_4() { return static_cast<int32_t>(offsetof(SaveLoad_t296492329, ___allBlocks_4)); }
	inline GameObjectU5BU5D_t3057952154* get_allBlocks_4() const { return ___allBlocks_4; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_allBlocks_4() { return &___allBlocks_4; }
	inline void set_allBlocks_4(GameObjectU5BU5D_t3057952154* value)
	{
		___allBlocks_4 = value;
		Il2CppCodeGenWriteBarrier(&___allBlocks_4, value);
	}

	inline static int32_t get_offset_of_location_5() { return static_cast<int32_t>(offsetof(SaveLoad_t296492329, ___location_5)); }
	inline Vector3_t2243707580  get_location_5() const { return ___location_5; }
	inline Vector3_t2243707580 * get_address_of_location_5() { return &___location_5; }
	inline void set_location_5(Vector3_t2243707580  value)
	{
		___location_5 = value;
	}

	inline static int32_t get_offset_of_bringUp_6() { return static_cast<int32_t>(offsetof(SaveLoad_t296492329, ___bringUp_6)); }
	inline Vector3_t2243707580  get_bringUp_6() const { return ___bringUp_6; }
	inline Vector3_t2243707580 * get_address_of_bringUp_6() { return &___bringUp_6; }
	inline void set_bringUp_6(Vector3_t2243707580  value)
	{
		___bringUp_6 = value;
	}
};

struct SaveLoad_t296492329_StaticFields
{
public:
	// SaveLoad SaveLoad::control
	SaveLoad_t296492329 * ___control_2;

public:
	inline static int32_t get_offset_of_control_2() { return static_cast<int32_t>(offsetof(SaveLoad_t296492329_StaticFields, ___control_2)); }
	inline SaveLoad_t296492329 * get_control_2() const { return ___control_2; }
	inline SaveLoad_t296492329 ** get_address_of_control_2() { return &___control_2; }
	inline void set_control_2(SaveLoad_t296492329 * value)
	{
		___control_2 = value;
		Il2CppCodeGenWriteBarrier(&___control_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
