#ifndef GODOT_CPP_CLIPPEDCAMERA_HPP
#define GODOT_CPP_CLIPPEDCAMERA_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "ClippedCamera.hpp"

#include "Camera.hpp"
namespace godot {

class Object;

class ClippedCamera : public Camera {
public:

	static inline const char *___get_class_name() { return (const char *) "ClippedCamera"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum ProcessMode {
		CLIP_PROCESS_PHYSICS = 0,
		CLIP_PROCESS_IDLE = 1,
	};

	// constants


	static ClippedCamera *_new();

	// methods
	void set_margin(const double margin);
	double get_margin() const;
	void set_process_mode(const int64_t process_mode);
	ClippedCamera::ProcessMode get_process_mode() const;
	void set_collision_mask(const int64_t mask);
	int64_t get_collision_mask() const;
	void set_collision_mask_bit(const int64_t bit, const bool value);
	bool get_collision_mask_bit(const int64_t bit) const;
	void add_exception_rid(const RID rid);
	void add_exception(const Object *node);
	void remove_exception_rid(const RID rid);
	void remove_exception(const Object *node);
	void set_clip_to_areas(const bool enable);
	bool is_clip_to_areas_enabled() const;
	void set_clip_to_bodies(const bool enable);
	bool is_clip_to_bodies_enabled() const;
	void clear_exceptions();

};

}

#endif