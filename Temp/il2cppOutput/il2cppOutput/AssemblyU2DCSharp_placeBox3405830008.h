#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_placeBox_Selected3327221688.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Animator
struct Animator_t69676727;
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
	// UnityEngine.Animator placeBox::animator
	Animator_t69676727 * ___animator_5;
	// UnityEngine.MaterialPropertyBlock placeBox::props
	MaterialPropertyBlock_t3303648957 * ___props_6;
	// UnityEngine.Vector3 placeBox::originalVec
	Vector3_t2243707580  ___originalVec_8;
	// System.Single placeBox::timeToAnimate
	float ___timeToAnimate_9;
	// System.Single placeBox::timeElapsed
	float ___timeElapsed_10;
	// System.Boolean placeBox::animationCheck
	bool ___animationCheck_11;
	// System.Boolean placeBox::animationStarted
	bool ___animationStarted_12;

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

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animator_5)); }
	inline Animator_t69676727 * get_animator_5() const { return ___animator_5; }
	inline Animator_t69676727 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t69676727 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier(&___animator_5, value);
	}

	inline static int32_t get_offset_of_props_6() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___props_6)); }
	inline MaterialPropertyBlock_t3303648957 * get_props_6() const { return ___props_6; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_props_6() { return &___props_6; }
	inline void set_props_6(MaterialPropertyBlock_t3303648957 * value)
	{
		___props_6 = value;
		Il2CppCodeGenWriteBarrier(&___props_6, value);
	}

	inline static int32_t get_offset_of_originalVec_8() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___originalVec_8)); }
	inline Vector3_t2243707580  get_originalVec_8() const { return ___originalVec_8; }
	inline Vector3_t2243707580 * get_address_of_originalVec_8() { return &___originalVec_8; }
	inline void set_originalVec_8(Vector3_t2243707580  value)
	{
		___originalVec_8 = value;
	}

	inline static int32_t get_offset_of_timeToAnimate_9() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___timeToAnimate_9)); }
	inline float get_timeToAnimate_9() const { return ___timeToAnimate_9; }
	inline float* get_address_of_timeToAnimate_9() { return &___timeToAnimate_9; }
	inline void set_timeToAnimate_9(float value)
	{
		___timeToAnimate_9 = value;
	}

	inline static int32_t get_offset_of_timeElapsed_10() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___timeElapsed_10)); }
	inline float get_timeElapsed_10() const { return ___timeElapsed_10; }
	inline float* get_address_of_timeElapsed_10() { return &___timeElapsed_10; }
	inline void set_timeElapsed_10(float value)
	{
		___timeElapsed_10 = value;
	}

	inline static int32_t get_offset_of_animationCheck_11() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animationCheck_11)); }
	inline bool get_animationCheck_11() const { return ___animationCheck_11; }
	inline bool* get_address_of_animationCheck_11() { return &___animationCheck_11; }
	inline void set_animationCheck_11(bool value)
	{
		___animationCheck_11 = value;
	}

	inline static int32_t get_offset_of_animationStarted_12() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animationStarted_12)); }
	inline bool get_animationStarted_12() const { return ___animationStarted_12; }
	inline bool* get_address_of_animationStarted_12() { return &___animationStarted_12; }
	inline void set_animationStarted_12(bool value)
	{
		___animationStarted_12 = value;
	}
};

struct placeBox_t3405830008_StaticFields
{
public:
	// placeBox/Selected placeBox::currentSelectedOG
	int32_t ___currentSelectedOG_7;

public:
	inline static int32_t get_offset_of_currentSelectedOG_7() { return static_cast<int32_t>(offsetof(placeBox_t3405830008_StaticFields, ___currentSelectedOG_7)); }
	inline int32_t get_currentSelectedOG_7() const { return ___currentSelectedOG_7; }
	inline int32_t* get_address_of_currentSelectedOG_7() { return &___currentSelectedOG_7; }
	inline void set_currentSelectedOG_7(int32_t value)
	{
		___currentSelectedOG_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
