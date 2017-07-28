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
	// UnityEngine.GameObject placeBox::block1Prefab
	GameObject_t1756533147 * ___block1Prefab_4;
	// UnityEngine.GameObject placeBox::block2Prefab
	GameObject_t1756533147 * ___block2Prefab_5;
	// UnityEngine.GameObject placeBox::block3Prefab
	GameObject_t1756533147 * ___block3Prefab_6;
	// System.Single placeBox::createHeight
	float ___createHeight_7;
	// UnityEngine.GameObject placeBox::boxGO
	GameObject_t1756533147 * ___boxGO_8;
	// UnityEngine.Animator placeBox::animator
	Animator_t69676727 * ___animator_9;
	// UnityEngine.MaterialPropertyBlock placeBox::props
	MaterialPropertyBlock_t3303648957 * ___props_10;
	// UnityEngine.Vector3 placeBox::originalVec
	Vector3_t2243707580  ___originalVec_13;
	// System.Single placeBox::timeToAnimate
	float ___timeToAnimate_14;
	// System.Single placeBox::timeElapsed
	float ___timeElapsed_15;
	// System.Boolean placeBox::animationCheck
	bool ___animationCheck_16;
	// System.Boolean placeBox::animationStarted
	bool ___animationStarted_17;

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

	inline static int32_t get_offset_of_block1Prefab_4() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___block1Prefab_4)); }
	inline GameObject_t1756533147 * get_block1Prefab_4() const { return ___block1Prefab_4; }
	inline GameObject_t1756533147 ** get_address_of_block1Prefab_4() { return &___block1Prefab_4; }
	inline void set_block1Prefab_4(GameObject_t1756533147 * value)
	{
		___block1Prefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___block1Prefab_4, value);
	}

	inline static int32_t get_offset_of_block2Prefab_5() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___block2Prefab_5)); }
	inline GameObject_t1756533147 * get_block2Prefab_5() const { return ___block2Prefab_5; }
	inline GameObject_t1756533147 ** get_address_of_block2Prefab_5() { return &___block2Prefab_5; }
	inline void set_block2Prefab_5(GameObject_t1756533147 * value)
	{
		___block2Prefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___block2Prefab_5, value);
	}

	inline static int32_t get_offset_of_block3Prefab_6() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___block3Prefab_6)); }
	inline GameObject_t1756533147 * get_block3Prefab_6() const { return ___block3Prefab_6; }
	inline GameObject_t1756533147 ** get_address_of_block3Prefab_6() { return &___block3Prefab_6; }
	inline void set_block3Prefab_6(GameObject_t1756533147 * value)
	{
		___block3Prefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___block3Prefab_6, value);
	}

	inline static int32_t get_offset_of_createHeight_7() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___createHeight_7)); }
	inline float get_createHeight_7() const { return ___createHeight_7; }
	inline float* get_address_of_createHeight_7() { return &___createHeight_7; }
	inline void set_createHeight_7(float value)
	{
		___createHeight_7 = value;
	}

	inline static int32_t get_offset_of_boxGO_8() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___boxGO_8)); }
	inline GameObject_t1756533147 * get_boxGO_8() const { return ___boxGO_8; }
	inline GameObject_t1756533147 ** get_address_of_boxGO_8() { return &___boxGO_8; }
	inline void set_boxGO_8(GameObject_t1756533147 * value)
	{
		___boxGO_8 = value;
		Il2CppCodeGenWriteBarrier(&___boxGO_8, value);
	}

	inline static int32_t get_offset_of_animator_9() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animator_9)); }
	inline Animator_t69676727 * get_animator_9() const { return ___animator_9; }
	inline Animator_t69676727 ** get_address_of_animator_9() { return &___animator_9; }
	inline void set_animator_9(Animator_t69676727 * value)
	{
		___animator_9 = value;
		Il2CppCodeGenWriteBarrier(&___animator_9, value);
	}

	inline static int32_t get_offset_of_props_10() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___props_10)); }
	inline MaterialPropertyBlock_t3303648957 * get_props_10() const { return ___props_10; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_props_10() { return &___props_10; }
	inline void set_props_10(MaterialPropertyBlock_t3303648957 * value)
	{
		___props_10 = value;
		Il2CppCodeGenWriteBarrier(&___props_10, value);
	}

	inline static int32_t get_offset_of_originalVec_13() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___originalVec_13)); }
	inline Vector3_t2243707580  get_originalVec_13() const { return ___originalVec_13; }
	inline Vector3_t2243707580 * get_address_of_originalVec_13() { return &___originalVec_13; }
	inline void set_originalVec_13(Vector3_t2243707580  value)
	{
		___originalVec_13 = value;
	}

	inline static int32_t get_offset_of_timeToAnimate_14() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___timeToAnimate_14)); }
	inline float get_timeToAnimate_14() const { return ___timeToAnimate_14; }
	inline float* get_address_of_timeToAnimate_14() { return &___timeToAnimate_14; }
	inline void set_timeToAnimate_14(float value)
	{
		___timeToAnimate_14 = value;
	}

	inline static int32_t get_offset_of_timeElapsed_15() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___timeElapsed_15)); }
	inline float get_timeElapsed_15() const { return ___timeElapsed_15; }
	inline float* get_address_of_timeElapsed_15() { return &___timeElapsed_15; }
	inline void set_timeElapsed_15(float value)
	{
		___timeElapsed_15 = value;
	}

	inline static int32_t get_offset_of_animationCheck_16() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animationCheck_16)); }
	inline bool get_animationCheck_16() const { return ___animationCheck_16; }
	inline bool* get_address_of_animationCheck_16() { return &___animationCheck_16; }
	inline void set_animationCheck_16(bool value)
	{
		___animationCheck_16 = value;
	}

	inline static int32_t get_offset_of_animationStarted_17() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animationStarted_17)); }
	inline bool get_animationStarted_17() const { return ___animationStarted_17; }
	inline bool* get_address_of_animationStarted_17() { return &___animationStarted_17; }
	inline void set_animationStarted_17(bool value)
	{
		___animationStarted_17 = value;
	}
};

struct placeBox_t3405830008_StaticFields
{
public:
	// placeBox/Selected placeBox::currentSelectedOG
	int32_t ___currentSelectedOG_11;
	// placeBox/Selected placeBox::currentSelectionIsABlock
	int32_t ___currentSelectionIsABlock_12;

public:
	inline static int32_t get_offset_of_currentSelectedOG_11() { return static_cast<int32_t>(offsetof(placeBox_t3405830008_StaticFields, ___currentSelectedOG_11)); }
	inline int32_t get_currentSelectedOG_11() const { return ___currentSelectedOG_11; }
	inline int32_t* get_address_of_currentSelectedOG_11() { return &___currentSelectedOG_11; }
	inline void set_currentSelectedOG_11(int32_t value)
	{
		___currentSelectedOG_11 = value;
	}

	inline static int32_t get_offset_of_currentSelectionIsABlock_12() { return static_cast<int32_t>(offsetof(placeBox_t3405830008_StaticFields, ___currentSelectionIsABlock_12)); }
	inline int32_t get_currentSelectionIsABlock_12() const { return ___currentSelectionIsABlock_12; }
	inline int32_t* get_address_of_currentSelectionIsABlock_12() { return &___currentSelectionIsABlock_12; }
	inline void set_currentSelectionIsABlock_12(int32_t value)
	{
		___currentSelectionIsABlock_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
