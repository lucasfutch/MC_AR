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
#include "AssemblyU2DCSharp_placeBox1_Selected3017047179.h"

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

// placeBox1
struct  placeBox1_t1505429257  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject placeBox1::randColorPrefab
	GameObject_t1756533147 * ___randColorPrefab_2;
	// UnityEngine.GameObject placeBox1::woodPrefab
	GameObject_t1756533147 * ___woodPrefab_3;
	// UnityEngine.GameObject placeBox1::brickPrefab
	GameObject_t1756533147 * ___brickPrefab_4;
	// UnityEngine.GameObject placeBox1::torchPrefab
	GameObject_t1756533147 * ___torchPrefab_5;
	// UnityEngine.GameObject placeBox1::waterPrefab
	GameObject_t1756533147 * ___waterPrefab_6;
	// UnityEngine.GameObject placeBox1::stalactitePrefab
	GameObject_t1756533147 * ___stalactitePrefab_7;
	// UnityEngine.GameObject placeBox1::treePrefab
	GameObject_t1756533147 * ___treePrefab_8;
	// UnityEngine.GameObject placeBox1::sandPrefab
	GameObject_t1756533147 * ___sandPrefab_9;
	// UnityEngine.GameObject placeBox1::explosion
	GameObject_t1756533147 * ___explosion_10;
	// UnityEngine.GameObject placeBox1::PickAxeSound
	GameObject_t1756533147 * ___PickAxeSound_11;
	// UnityEngine.GameObject placeBox1::placeObjectSound
	GameObject_t1756533147 * ___placeObjectSound_12;
	// System.Single placeBox1::createHeight
	float ___createHeight_13;
	// UnityEngine.Vector3 placeBox1::createHeightVec
	Vector3_t2243707580  ___createHeightVec_14;
	// UnityEngine.AudioSource placeBox1::audioPlace
	AudioSource_t1135106623 * ___audioPlace_15;
	// UnityEngine.AudioSource placeBox1::audioDestroy
	AudioSource_t1135106623 * ___audioDestroy_16;
	// UnityEngine.GameObject placeBox1::boxGO
	GameObject_t1756533147 * ___boxGO_17;
	// UnityEngine.GameObject placeBox1::go
	GameObject_t1756533147 * ___go_18;
	// UnityEngine.Animator placeBox1::animator
	Animator_t69676727 * ___animator_19;
	// UnityEngine.MaterialPropertyBlock placeBox1::props
	MaterialPropertyBlock_t3303648957 * ___props_20;
	// UnityEngine.Vector3 placeBox1::originalVec
	Vector3_t2243707580  ___originalVec_23;
	// System.Single placeBox1::timeToAnimate
	float ___timeToAnimate_24;
	// System.Single placeBox1::timeElapsed
	float ___timeElapsed_25;
	// System.Boolean placeBox1::animationCheck
	bool ___animationCheck_26;
	// System.Boolean placeBox1::animationStarted
	bool ___animationStarted_27;
	// System.Boolean placeBox1::isCeiling
	bool ___isCeiling_28;

public:
	inline static int32_t get_offset_of_randColorPrefab_2() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___randColorPrefab_2)); }
	inline GameObject_t1756533147 * get_randColorPrefab_2() const { return ___randColorPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_randColorPrefab_2() { return &___randColorPrefab_2; }
	inline void set_randColorPrefab_2(GameObject_t1756533147 * value)
	{
		___randColorPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___randColorPrefab_2, value);
	}

	inline static int32_t get_offset_of_woodPrefab_3() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___woodPrefab_3)); }
	inline GameObject_t1756533147 * get_woodPrefab_3() const { return ___woodPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_woodPrefab_3() { return &___woodPrefab_3; }
	inline void set_woodPrefab_3(GameObject_t1756533147 * value)
	{
		___woodPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___woodPrefab_3, value);
	}

	inline static int32_t get_offset_of_brickPrefab_4() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___brickPrefab_4)); }
	inline GameObject_t1756533147 * get_brickPrefab_4() const { return ___brickPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_brickPrefab_4() { return &___brickPrefab_4; }
	inline void set_brickPrefab_4(GameObject_t1756533147 * value)
	{
		___brickPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___brickPrefab_4, value);
	}

	inline static int32_t get_offset_of_torchPrefab_5() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___torchPrefab_5)); }
	inline GameObject_t1756533147 * get_torchPrefab_5() const { return ___torchPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_torchPrefab_5() { return &___torchPrefab_5; }
	inline void set_torchPrefab_5(GameObject_t1756533147 * value)
	{
		___torchPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___torchPrefab_5, value);
	}

	inline static int32_t get_offset_of_waterPrefab_6() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___waterPrefab_6)); }
	inline GameObject_t1756533147 * get_waterPrefab_6() const { return ___waterPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_waterPrefab_6() { return &___waterPrefab_6; }
	inline void set_waterPrefab_6(GameObject_t1756533147 * value)
	{
		___waterPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___waterPrefab_6, value);
	}

	inline static int32_t get_offset_of_stalactitePrefab_7() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___stalactitePrefab_7)); }
	inline GameObject_t1756533147 * get_stalactitePrefab_7() const { return ___stalactitePrefab_7; }
	inline GameObject_t1756533147 ** get_address_of_stalactitePrefab_7() { return &___stalactitePrefab_7; }
	inline void set_stalactitePrefab_7(GameObject_t1756533147 * value)
	{
		___stalactitePrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___stalactitePrefab_7, value);
	}

	inline static int32_t get_offset_of_treePrefab_8() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___treePrefab_8)); }
	inline GameObject_t1756533147 * get_treePrefab_8() const { return ___treePrefab_8; }
	inline GameObject_t1756533147 ** get_address_of_treePrefab_8() { return &___treePrefab_8; }
	inline void set_treePrefab_8(GameObject_t1756533147 * value)
	{
		___treePrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___treePrefab_8, value);
	}

	inline static int32_t get_offset_of_sandPrefab_9() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___sandPrefab_9)); }
	inline GameObject_t1756533147 * get_sandPrefab_9() const { return ___sandPrefab_9; }
	inline GameObject_t1756533147 ** get_address_of_sandPrefab_9() { return &___sandPrefab_9; }
	inline void set_sandPrefab_9(GameObject_t1756533147 * value)
	{
		___sandPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___sandPrefab_9, value);
	}

	inline static int32_t get_offset_of_explosion_10() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___explosion_10)); }
	inline GameObject_t1756533147 * get_explosion_10() const { return ___explosion_10; }
	inline GameObject_t1756533147 ** get_address_of_explosion_10() { return &___explosion_10; }
	inline void set_explosion_10(GameObject_t1756533147 * value)
	{
		___explosion_10 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_10, value);
	}

	inline static int32_t get_offset_of_PickAxeSound_11() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___PickAxeSound_11)); }
	inline GameObject_t1756533147 * get_PickAxeSound_11() const { return ___PickAxeSound_11; }
	inline GameObject_t1756533147 ** get_address_of_PickAxeSound_11() { return &___PickAxeSound_11; }
	inline void set_PickAxeSound_11(GameObject_t1756533147 * value)
	{
		___PickAxeSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___PickAxeSound_11, value);
	}

	inline static int32_t get_offset_of_placeObjectSound_12() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___placeObjectSound_12)); }
	inline GameObject_t1756533147 * get_placeObjectSound_12() const { return ___placeObjectSound_12; }
	inline GameObject_t1756533147 ** get_address_of_placeObjectSound_12() { return &___placeObjectSound_12; }
	inline void set_placeObjectSound_12(GameObject_t1756533147 * value)
	{
		___placeObjectSound_12 = value;
		Il2CppCodeGenWriteBarrier(&___placeObjectSound_12, value);
	}

	inline static int32_t get_offset_of_createHeight_13() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___createHeight_13)); }
	inline float get_createHeight_13() const { return ___createHeight_13; }
	inline float* get_address_of_createHeight_13() { return &___createHeight_13; }
	inline void set_createHeight_13(float value)
	{
		___createHeight_13 = value;
	}

	inline static int32_t get_offset_of_createHeightVec_14() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___createHeightVec_14)); }
	inline Vector3_t2243707580  get_createHeightVec_14() const { return ___createHeightVec_14; }
	inline Vector3_t2243707580 * get_address_of_createHeightVec_14() { return &___createHeightVec_14; }
	inline void set_createHeightVec_14(Vector3_t2243707580  value)
	{
		___createHeightVec_14 = value;
	}

	inline static int32_t get_offset_of_audioPlace_15() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___audioPlace_15)); }
	inline AudioSource_t1135106623 * get_audioPlace_15() const { return ___audioPlace_15; }
	inline AudioSource_t1135106623 ** get_address_of_audioPlace_15() { return &___audioPlace_15; }
	inline void set_audioPlace_15(AudioSource_t1135106623 * value)
	{
		___audioPlace_15 = value;
		Il2CppCodeGenWriteBarrier(&___audioPlace_15, value);
	}

	inline static int32_t get_offset_of_audioDestroy_16() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___audioDestroy_16)); }
	inline AudioSource_t1135106623 * get_audioDestroy_16() const { return ___audioDestroy_16; }
	inline AudioSource_t1135106623 ** get_address_of_audioDestroy_16() { return &___audioDestroy_16; }
	inline void set_audioDestroy_16(AudioSource_t1135106623 * value)
	{
		___audioDestroy_16 = value;
		Il2CppCodeGenWriteBarrier(&___audioDestroy_16, value);
	}

	inline static int32_t get_offset_of_boxGO_17() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___boxGO_17)); }
	inline GameObject_t1756533147 * get_boxGO_17() const { return ___boxGO_17; }
	inline GameObject_t1756533147 ** get_address_of_boxGO_17() { return &___boxGO_17; }
	inline void set_boxGO_17(GameObject_t1756533147 * value)
	{
		___boxGO_17 = value;
		Il2CppCodeGenWriteBarrier(&___boxGO_17, value);
	}

	inline static int32_t get_offset_of_go_18() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___go_18)); }
	inline GameObject_t1756533147 * get_go_18() const { return ___go_18; }
	inline GameObject_t1756533147 ** get_address_of_go_18() { return &___go_18; }
	inline void set_go_18(GameObject_t1756533147 * value)
	{
		___go_18 = value;
		Il2CppCodeGenWriteBarrier(&___go_18, value);
	}

	inline static int32_t get_offset_of_animator_19() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___animator_19)); }
	inline Animator_t69676727 * get_animator_19() const { return ___animator_19; }
	inline Animator_t69676727 ** get_address_of_animator_19() { return &___animator_19; }
	inline void set_animator_19(Animator_t69676727 * value)
	{
		___animator_19 = value;
		Il2CppCodeGenWriteBarrier(&___animator_19, value);
	}

	inline static int32_t get_offset_of_props_20() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___props_20)); }
	inline MaterialPropertyBlock_t3303648957 * get_props_20() const { return ___props_20; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_props_20() { return &___props_20; }
	inline void set_props_20(MaterialPropertyBlock_t3303648957 * value)
	{
		___props_20 = value;
		Il2CppCodeGenWriteBarrier(&___props_20, value);
	}

	inline static int32_t get_offset_of_originalVec_23() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___originalVec_23)); }
	inline Vector3_t2243707580  get_originalVec_23() const { return ___originalVec_23; }
	inline Vector3_t2243707580 * get_address_of_originalVec_23() { return &___originalVec_23; }
	inline void set_originalVec_23(Vector3_t2243707580  value)
	{
		___originalVec_23 = value;
	}

	inline static int32_t get_offset_of_timeToAnimate_24() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___timeToAnimate_24)); }
	inline float get_timeToAnimate_24() const { return ___timeToAnimate_24; }
	inline float* get_address_of_timeToAnimate_24() { return &___timeToAnimate_24; }
	inline void set_timeToAnimate_24(float value)
	{
		___timeToAnimate_24 = value;
	}

	inline static int32_t get_offset_of_timeElapsed_25() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___timeElapsed_25)); }
	inline float get_timeElapsed_25() const { return ___timeElapsed_25; }
	inline float* get_address_of_timeElapsed_25() { return &___timeElapsed_25; }
	inline void set_timeElapsed_25(float value)
	{
		___timeElapsed_25 = value;
	}

	inline static int32_t get_offset_of_animationCheck_26() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___animationCheck_26)); }
	inline bool get_animationCheck_26() const { return ___animationCheck_26; }
	inline bool* get_address_of_animationCheck_26() { return &___animationCheck_26; }
	inline void set_animationCheck_26(bool value)
	{
		___animationCheck_26 = value;
	}

	inline static int32_t get_offset_of_animationStarted_27() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___animationStarted_27)); }
	inline bool get_animationStarted_27() const { return ___animationStarted_27; }
	inline bool* get_address_of_animationStarted_27() { return &___animationStarted_27; }
	inline void set_animationStarted_27(bool value)
	{
		___animationStarted_27 = value;
	}

	inline static int32_t get_offset_of_isCeiling_28() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257, ___isCeiling_28)); }
	inline bool get_isCeiling_28() const { return ___isCeiling_28; }
	inline bool* get_address_of_isCeiling_28() { return &___isCeiling_28; }
	inline void set_isCeiling_28(bool value)
	{
		___isCeiling_28 = value;
	}
};

struct placeBox1_t1505429257_StaticFields
{
public:
	// placeBox1/Selected placeBox1::currentSelectedOG
	int32_t ___currentSelectedOG_21;
	// placeBox1/Selected placeBox1::currentSelectionIsABlock
	int32_t ___currentSelectionIsABlock_22;

public:
	inline static int32_t get_offset_of_currentSelectedOG_21() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257_StaticFields, ___currentSelectedOG_21)); }
	inline int32_t get_currentSelectedOG_21() const { return ___currentSelectedOG_21; }
	inline int32_t* get_address_of_currentSelectedOG_21() { return &___currentSelectedOG_21; }
	inline void set_currentSelectedOG_21(int32_t value)
	{
		___currentSelectedOG_21 = value;
	}

	inline static int32_t get_offset_of_currentSelectionIsABlock_22() { return static_cast<int32_t>(offsetof(placeBox1_t1505429257_StaticFields, ___currentSelectionIsABlock_22)); }
	inline int32_t get_currentSelectionIsABlock_22() const { return ___currentSelectionIsABlock_22; }
	inline int32_t* get_address_of_currentSelectionIsABlock_22() { return &___currentSelectionIsABlock_22; }
	inline void set_currentSelectionIsABlock_22(int32_t value)
	{
		___currentSelectionIsABlock_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
