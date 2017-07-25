#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// placeBox
struct  placeBox_t3405830008  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform placeBox::m_HitTransform
	Transform_t3275118058 * ___m_HitTransform_2;
	// UnityEngine.GameObject placeBox::boxPrefab
	GameObject_t1756533147 * ___boxPrefab_3;
	// System.Single placeBox::createHeight
	float ___createHeight_4;
	// UnityEngine.MaterialPropertyBlock placeBox::props
	MaterialPropertyBlock_t3303648957 * ___props_5;
	// System.Single placeBox::totalHeight
	float ___totalHeight_6;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___m_HitTransform_2)); }
	inline Transform_t3275118058 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3275118058 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3275118058 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_HitTransform_2, value);
	}

	inline static int32_t get_offset_of_boxPrefab_3() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___boxPrefab_3)); }
	inline GameObject_t1756533147 * get_boxPrefab_3() const { return ___boxPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_boxPrefab_3() { return &___boxPrefab_3; }
	inline void set_boxPrefab_3(GameObject_t1756533147 * value)
	{
		___boxPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___boxPrefab_3, value);
	}

	inline static int32_t get_offset_of_createHeight_4() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___createHeight_4)); }
	inline float get_createHeight_4() const { return ___createHeight_4; }
	inline float* get_address_of_createHeight_4() { return &___createHeight_4; }
	inline void set_createHeight_4(float value)
	{
		___createHeight_4 = value;
	}

	inline static int32_t get_offset_of_props_5() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___props_5)); }
	inline MaterialPropertyBlock_t3303648957 * get_props_5() const { return ___props_5; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_props_5() { return &___props_5; }
	inline void set_props_5(MaterialPropertyBlock_t3303648957 * value)
	{
		___props_5 = value;
		Il2CppCodeGenWriteBarrier(&___props_5, value);
	}

	inline static int32_t get_offset_of_totalHeight_6() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___totalHeight_6)); }
	inline float get_totalHeight_6() const { return ___totalHeight_6; }
	inline float* get_address_of_totalHeight_6() { return &___totalHeight_6; }
	inline void set_totalHeight_6(float value)
	{
		___totalHeight_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
