#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_UnityEngine_XR_iOS_UIBehavior_Se3137343744.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// destroyBlock
struct destroyBlock_t3412050513;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UIBehavior
struct  UIBehavior_t1836955822  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UIBehavior::Block
	Transform_t3275118058 * ___Block_2;
	// UnityEngine.Transform UnityEngine.XR.iOS.UIBehavior::Pickaxe
	Transform_t3275118058 * ___Pickaxe_3;
	// UnityEngine.GameObject UnityEngine.XR.iOS.UIBehavior::PickAxeParent
	GameObject_t1756533147 * ___PickAxeParent_4;
	// destroyBlock UnityEngine.XR.iOS.UIBehavior::destroyBlockScript
	destroyBlock_t3412050513 * ___destroyBlockScript_5;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.UIBehavior::biggerButton
	Vector3_t2243707580  ___biggerButton_7;

public:
	inline static int32_t get_offset_of_Block_2() { return static_cast<int32_t>(offsetof(UIBehavior_t1836955822, ___Block_2)); }
	inline Transform_t3275118058 * get_Block_2() const { return ___Block_2; }
	inline Transform_t3275118058 ** get_address_of_Block_2() { return &___Block_2; }
	inline void set_Block_2(Transform_t3275118058 * value)
	{
		___Block_2 = value;
		Il2CppCodeGenWriteBarrier(&___Block_2, value);
	}

	inline static int32_t get_offset_of_Pickaxe_3() { return static_cast<int32_t>(offsetof(UIBehavior_t1836955822, ___Pickaxe_3)); }
	inline Transform_t3275118058 * get_Pickaxe_3() const { return ___Pickaxe_3; }
	inline Transform_t3275118058 ** get_address_of_Pickaxe_3() { return &___Pickaxe_3; }
	inline void set_Pickaxe_3(Transform_t3275118058 * value)
	{
		___Pickaxe_3 = value;
		Il2CppCodeGenWriteBarrier(&___Pickaxe_3, value);
	}

	inline static int32_t get_offset_of_PickAxeParent_4() { return static_cast<int32_t>(offsetof(UIBehavior_t1836955822, ___PickAxeParent_4)); }
	inline GameObject_t1756533147 * get_PickAxeParent_4() const { return ___PickAxeParent_4; }
	inline GameObject_t1756533147 ** get_address_of_PickAxeParent_4() { return &___PickAxeParent_4; }
	inline void set_PickAxeParent_4(GameObject_t1756533147 * value)
	{
		___PickAxeParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___PickAxeParent_4, value);
	}

	inline static int32_t get_offset_of_destroyBlockScript_5() { return static_cast<int32_t>(offsetof(UIBehavior_t1836955822, ___destroyBlockScript_5)); }
	inline destroyBlock_t3412050513 * get_destroyBlockScript_5() const { return ___destroyBlockScript_5; }
	inline destroyBlock_t3412050513 ** get_address_of_destroyBlockScript_5() { return &___destroyBlockScript_5; }
	inline void set_destroyBlockScript_5(destroyBlock_t3412050513 * value)
	{
		___destroyBlockScript_5 = value;
		Il2CppCodeGenWriteBarrier(&___destroyBlockScript_5, value);
	}

	inline static int32_t get_offset_of_biggerButton_7() { return static_cast<int32_t>(offsetof(UIBehavior_t1836955822, ___biggerButton_7)); }
	inline Vector3_t2243707580  get_biggerButton_7() const { return ___biggerButton_7; }
	inline Vector3_t2243707580 * get_address_of_biggerButton_7() { return &___biggerButton_7; }
	inline void set_biggerButton_7(Vector3_t2243707580  value)
	{
		___biggerButton_7 = value;
	}
};

struct UIBehavior_t1836955822_StaticFields
{
public:
	// UnityEngine.XR.iOS.UIBehavior/Selected UnityEngine.XR.iOS.UIBehavior::currentSelected
	int32_t ___currentSelected_6;

public:
	inline static int32_t get_offset_of_currentSelected_6() { return static_cast<int32_t>(offsetof(UIBehavior_t1836955822_StaticFields, ___currentSelected_6)); }
	inline int32_t get_currentSelected_6() const { return ___currentSelected_6; }
	inline int32_t* get_address_of_currentSelected_6() { return &___currentSelected_6; }
	inline void set_currentSelected_6(int32_t value)
	{
		___currentSelected_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
