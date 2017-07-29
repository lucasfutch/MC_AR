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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
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
	// UnityEngine.GameObject placeBox::randColorPrefab
	GameObject_t1756533147 * ___randColorPrefab_3;
	// UnityEngine.GameObject placeBox::woodPrefab
	GameObject_t1756533147 * ___woodPrefab_4;
	// UnityEngine.GameObject placeBox::brickPrefab
	GameObject_t1756533147 * ___brickPrefab_5;
	// UnityEngine.GameObject placeBox::torchPrefab
	GameObject_t1756533147 * ___torchPrefab_6;
	// UnityEngine.GameObject placeBox::waterPrefab
	GameObject_t1756533147 * ___waterPrefab_7;
	// UnityEngine.GameObject placeBox::stalactitePrefab
	GameObject_t1756533147 * ___stalactitePrefab_8;
	// UnityEngine.GameObject placeBox::treePrefab
	GameObject_t1756533147 * ___treePrefab_9;
	// UnityEngine.GameObject placeBox::sandPrefab
	GameObject_t1756533147 * ___sandPrefab_10;
	// UnityEngine.GameObject placeBox::explosion
	GameObject_t1756533147 * ___explosion_11;
	// UnityEngine.GameObject placeBox::PickAxeSound
	GameObject_t1756533147 * ___PickAxeSound_12;
	// UnityEngine.GameObject placeBox::placeObjectSound
	GameObject_t1756533147 * ___placeObjectSound_13;
	// System.Single placeBox::createHeight
	float ___createHeight_14;
	// UnityEngine.AudioSource placeBox::audioPlace
	AudioSource_t1135106623 * ___audioPlace_15;
	// UnityEngine.AudioSource placeBox::audioDestroy
	AudioSource_t1135106623 * ___audioDestroy_16;
	// UnityEngine.GameObject placeBox::boxGO
	GameObject_t1756533147 * ___boxGO_17;
	// UnityEngine.Animator placeBox::animator
	Animator_t69676727 * ___animator_18;
	// UnityEngine.MaterialPropertyBlock placeBox::props
	MaterialPropertyBlock_t3303648957 * ___props_19;
	// UnityEngine.Vector3 placeBox::originalVec
	Vector3_t2243707580  ___originalVec_22;
	// System.Single placeBox::timeToAnimate
	float ___timeToAnimate_23;
	// System.Single placeBox::timeElapsed
	float ___timeElapsed_24;
	// System.Boolean placeBox::animationCheck
	bool ___animationCheck_25;
	// System.Boolean placeBox::animationStarted
	bool ___animationStarted_26;
	// System.Boolean placeBox::isCeiling
	bool ___isCeiling_27;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___m_HitTransform_2)); }
	inline Transform_t3275118058 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3275118058 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3275118058 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_HitTransform_2, value);
	}

	inline static int32_t get_offset_of_randColorPrefab_3() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___randColorPrefab_3)); }
	inline GameObject_t1756533147 * get_randColorPrefab_3() const { return ___randColorPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_randColorPrefab_3() { return &___randColorPrefab_3; }
	inline void set_randColorPrefab_3(GameObject_t1756533147 * value)
	{
		___randColorPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___randColorPrefab_3, value);
	}

	inline static int32_t get_offset_of_woodPrefab_4() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___woodPrefab_4)); }
	inline GameObject_t1756533147 * get_woodPrefab_4() const { return ___woodPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_woodPrefab_4() { return &___woodPrefab_4; }
	inline void set_woodPrefab_4(GameObject_t1756533147 * value)
	{
		___woodPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___woodPrefab_4, value);
	}

	inline static int32_t get_offset_of_brickPrefab_5() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___brickPrefab_5)); }
	inline GameObject_t1756533147 * get_brickPrefab_5() const { return ___brickPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_brickPrefab_5() { return &___brickPrefab_5; }
	inline void set_brickPrefab_5(GameObject_t1756533147 * value)
	{
		___brickPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___brickPrefab_5, value);
	}

	inline static int32_t get_offset_of_torchPrefab_6() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___torchPrefab_6)); }
	inline GameObject_t1756533147 * get_torchPrefab_6() const { return ___torchPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_torchPrefab_6() { return &___torchPrefab_6; }
	inline void set_torchPrefab_6(GameObject_t1756533147 * value)
	{
		___torchPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___torchPrefab_6, value);
	}

	inline static int32_t get_offset_of_waterPrefab_7() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___waterPrefab_7)); }
	inline GameObject_t1756533147 * get_waterPrefab_7() const { return ___waterPrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_waterPrefab_7() { return &___waterPrefab_7; }
	inline void set_waterPrefab_7(GameObject_t1756533147 * value)
	{
		___waterPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___waterPrefab_7, value);
	}

	inline static int32_t get_offset_of_stalactitePrefab_8() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___stalactitePrefab_8)); }
	inline GameObject_t1756533147 * get_stalactitePrefab_8() const { return ___stalactitePrefab_8; }
	inline GameObject_t1756533147 ** get_address_of_stalactitePrefab_8() { return &___stalactitePrefab_8; }
	inline void set_stalactitePrefab_8(GameObject_t1756533147 * value)
	{
		___stalactitePrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___stalactitePrefab_8, value);
	}

	inline static int32_t get_offset_of_treePrefab_9() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___treePrefab_9)); }
	inline GameObject_t1756533147 * get_treePrefab_9() const { return ___treePrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_treePrefab_9() { return &___treePrefab_9; }
	inline void set_treePrefab_9(GameObject_t1756533147 * value)
	{
		___treePrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___treePrefab_9, value);
	}

	inline static int32_t get_offset_of_sandPrefab_10() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___sandPrefab_10)); }
	inline GameObject_t1756533147 * get_sandPrefab_10() const { return ___sandPrefab_10; }
	inline GameObject_t1756533147 ** get_address_of_sandPrefab_10() { return &___sandPrefab_10; }
	inline void set_sandPrefab_10(GameObject_t1756533147 * value)
	{
		___sandPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___sandPrefab_10, value);
	}

	inline static int32_t get_offset_of_explosion_11() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___explosion_11)); }
	inline GameObject_t1756533147 * get_explosion_11() const { return ___explosion_11; }
	inline GameObject_t1756533147 ** get_address_of_explosion_11() { return &___explosion_11; }
	inline void set_explosion_11(GameObject_t1756533147 * value)
	{
		___explosion_11 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_11, value);
	}

	inline static int32_t get_offset_of_PickAxeSound_12() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___PickAxeSound_12)); }
	inline GameObject_t1756533147 * get_PickAxeSound_12() const { return ___PickAxeSound_12; }
	inline GameObject_t1756533147 ** get_address_of_PickAxeSound_12() { return &___PickAxeSound_12; }
	inline void set_PickAxeSound_12(GameObject_t1756533147 * value)
	{
		___PickAxeSound_12 = value;
		Il2CppCodeGenWriteBarrier(&___PickAxeSound_12, value);
	}

	inline static int32_t get_offset_of_placeObjectSound_13() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___placeObjectSound_13)); }
	inline GameObject_t1756533147 * get_placeObjectSound_13() const { return ___placeObjectSound_13; }
	inline GameObject_t1756533147 ** get_address_of_placeObjectSound_13() { return &___placeObjectSound_13; }
	inline void set_placeObjectSound_13(GameObject_t1756533147 * value)
	{
		___placeObjectSound_13 = value;
		Il2CppCodeGenWriteBarrier(&___placeObjectSound_13, value);
	}

	inline static int32_t get_offset_of_createHeight_14() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___createHeight_14)); }
	inline float get_createHeight_14() const { return ___createHeight_14; }
	inline float* get_address_of_createHeight_14() { return &___createHeight_14; }
	inline void set_createHeight_14(float value)
	{
		___createHeight_14 = value;
	}

	inline static int32_t get_offset_of_audioPlace_15() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___audioPlace_15)); }
	inline AudioSource_t1135106623 * get_audioPlace_15() const { return ___audioPlace_15; }
	inline AudioSource_t1135106623 ** get_address_of_audioPlace_15() { return &___audioPlace_15; }
	inline void set_audioPlace_15(AudioSource_t1135106623 * value)
	{
		___audioPlace_15 = value;
		Il2CppCodeGenWriteBarrier(&___audioPlace_15, value);
	}

	inline static int32_t get_offset_of_audioDestroy_16() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___audioDestroy_16)); }
	inline AudioSource_t1135106623 * get_audioDestroy_16() const { return ___audioDestroy_16; }
	inline AudioSource_t1135106623 ** get_address_of_audioDestroy_16() { return &___audioDestroy_16; }
	inline void set_audioDestroy_16(AudioSource_t1135106623 * value)
	{
		___audioDestroy_16 = value;
		Il2CppCodeGenWriteBarrier(&___audioDestroy_16, value);
	}

	inline static int32_t get_offset_of_boxGO_17() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___boxGO_17)); }
	inline GameObject_t1756533147 * get_boxGO_17() const { return ___boxGO_17; }
	inline GameObject_t1756533147 ** get_address_of_boxGO_17() { return &___boxGO_17; }
	inline void set_boxGO_17(GameObject_t1756533147 * value)
	{
		___boxGO_17 = value;
		Il2CppCodeGenWriteBarrier(&___boxGO_17, value);
	}

	inline static int32_t get_offset_of_animator_18() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animator_18)); }
	inline Animator_t69676727 * get_animator_18() const { return ___animator_18; }
	inline Animator_t69676727 ** get_address_of_animator_18() { return &___animator_18; }
	inline void set_animator_18(Animator_t69676727 * value)
	{
		___animator_18 = value;
		Il2CppCodeGenWriteBarrier(&___animator_18, value);
	}

	inline static int32_t get_offset_of_props_19() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___props_19)); }
	inline MaterialPropertyBlock_t3303648957 * get_props_19() const { return ___props_19; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_props_19() { return &___props_19; }
	inline void set_props_19(MaterialPropertyBlock_t3303648957 * value)
	{
		___props_19 = value;
		Il2CppCodeGenWriteBarrier(&___props_19, value);
	}

	inline static int32_t get_offset_of_originalVec_22() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___originalVec_22)); }
	inline Vector3_t2243707580  get_originalVec_22() const { return ___originalVec_22; }
	inline Vector3_t2243707580 * get_address_of_originalVec_22() { return &___originalVec_22; }
	inline void set_originalVec_22(Vector3_t2243707580  value)
	{
		___originalVec_22 = value;
	}

	inline static int32_t get_offset_of_timeToAnimate_23() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___timeToAnimate_23)); }
	inline float get_timeToAnimate_23() const { return ___timeToAnimate_23; }
	inline float* get_address_of_timeToAnimate_23() { return &___timeToAnimate_23; }
	inline void set_timeToAnimate_23(float value)
	{
		___timeToAnimate_23 = value;
	}

	inline static int32_t get_offset_of_timeElapsed_24() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___timeElapsed_24)); }
	inline float get_timeElapsed_24() const { return ___timeElapsed_24; }
	inline float* get_address_of_timeElapsed_24() { return &___timeElapsed_24; }
	inline void set_timeElapsed_24(float value)
	{
		___timeElapsed_24 = value;
	}

	inline static int32_t get_offset_of_animationCheck_25() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animationCheck_25)); }
	inline bool get_animationCheck_25() const { return ___animationCheck_25; }
	inline bool* get_address_of_animationCheck_25() { return &___animationCheck_25; }
	inline void set_animationCheck_25(bool value)
	{
		___animationCheck_25 = value;
	}

	inline static int32_t get_offset_of_animationStarted_26() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___animationStarted_26)); }
	inline bool get_animationStarted_26() const { return ___animationStarted_26; }
	inline bool* get_address_of_animationStarted_26() { return &___animationStarted_26; }
	inline void set_animationStarted_26(bool value)
	{
		___animationStarted_26 = value;
	}

	inline static int32_t get_offset_of_isCeiling_27() { return static_cast<int32_t>(offsetof(placeBox_t3405830008, ___isCeiling_27)); }
	inline bool get_isCeiling_27() const { return ___isCeiling_27; }
	inline bool* get_address_of_isCeiling_27() { return &___isCeiling_27; }
	inline void set_isCeiling_27(bool value)
	{
		___isCeiling_27 = value;
	}
};

struct placeBox_t3405830008_StaticFields
{
public:
	// placeBox/Selected placeBox::currentSelectedOG
	int32_t ___currentSelectedOG_20;
	// placeBox/Selected placeBox::currentSelectionIsABlock
	int32_t ___currentSelectionIsABlock_21;

public:
	inline static int32_t get_offset_of_currentSelectedOG_20() { return static_cast<int32_t>(offsetof(placeBox_t3405830008_StaticFields, ___currentSelectedOG_20)); }
	inline int32_t get_currentSelectedOG_20() const { return ___currentSelectedOG_20; }
	inline int32_t* get_address_of_currentSelectedOG_20() { return &___currentSelectedOG_20; }
	inline void set_currentSelectedOG_20(int32_t value)
	{
		___currentSelectedOG_20 = value;
	}

	inline static int32_t get_offset_of_currentSelectionIsABlock_21() { return static_cast<int32_t>(offsetof(placeBox_t3405830008_StaticFields, ___currentSelectionIsABlock_21)); }
	inline int32_t get_currentSelectionIsABlock_21() const { return ___currentSelectionIsABlock_21; }
	inline int32_t* get_address_of_currentSelectionIsABlock_21() { return &___currentSelectionIsABlock_21; }
	inline void set_currentSelectionIsABlock_21(int32_t value)
	{
		___currentSelectionIsABlock_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
