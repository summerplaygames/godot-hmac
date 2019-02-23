#ifndef GODOT_CPP_SKELETON2D_HPP
#define GODOT_CPP_SKELETON2D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node2D.hpp"
namespace godot {

class Bone2D;

class Skeleton2D : public Node2D {
public:

	static inline const char *___get_class_name() { return (const char *) "Skeleton2D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Skeleton2D *_new();

	// methods
	void _update_bone_setup();
	void _update_transform();
	int64_t get_bone_count() const;
	Bone2D *get_bone(const int64_t idx);
	RID get_skeleton() const;

};

}

#endif