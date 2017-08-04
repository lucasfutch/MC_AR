#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// moveCamera
struct  moveCamera_t3157790334  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera moveCamera::camera
	Camera_t189460977 * ___camera_2;
	// System.Single moveCamera::lookSpeed
	float ___lookSpeed_3;
	// System.Single moveCamera::moveSpeed
	float ___moveSpeed_4;
	// System.Single moveCamera::rotationX
	float ___rotationX_5;
	// System.Single moveCamera::rotationY
	float ___rotationY_6;

public:
	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(moveCamera_t3157790334, ___camera_2)); }
	inline Camera_t189460977 * get_camera_2() const { return ___camera_2; }
	inline Camera_t189460977 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_t189460977 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___camera_2, value);
	}

	inline static int32_t get_offset_of_lookSpeed_3() { return static_cast<int32_t>(offsetof(moveCamera_t3157790334, ___lookSpeed_3)); }
	inline float get_lookSpeed_3() const { return ___lookSpeed_3; }
	inline float* get_address_of_lookSpeed_3() { return &___lookSpeed_3; }
	inline void set_lookSpeed_3(float value)
	{
		___lookSpeed_3 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(moveCamera_t3157790334, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotationX_5() { return static_cast<int32_t>(offsetof(moveCamera_t3157790334, ___rotationX_5)); }
	inline float get_rotationX_5() const { return ___rotationX_5; }
	inline float* get_address_of_rotationX_5() { return &___rotationX_5; }
	inline void set_rotationX_5(float value)
	{
		___rotationX_5 = value;
	}

	inline static int32_t get_offset_of_rotationY_6() { return static_cast<int32_t>(offsetof(moveCamera_t3157790334, ___rotationY_6)); }
	inline float get_rotationY_6() const { return ___rotationY_6; }
	inline float* get_address_of_rotationY_6() { return &___rotationY_6; }
	inline void set_rotationY_6(float value)
	{
		___rotationY_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
