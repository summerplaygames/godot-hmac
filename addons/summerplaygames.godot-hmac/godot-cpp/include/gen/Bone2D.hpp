#ifndef GODOT_CPP_BONE2D_HPP
#define GODOT_CPP_BONE2D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Node2D.hpp"
namespace godot {


class Bone2D : public Node2D {
public:

	static inline const char *___get_class_name() { return (const char *) "Bone2D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Bone2D *_new();

	// methods
	void set_rest(const Transform2D rest);
	Transform2D get_rest() const;
	void apply_rest();
	Transform2D get_skeleton_rest() const;
	int64_t get_index_in_skeleton() const;
	void set_default_length(const double default_length);
	double get_default_length() const;

};

}

#endif