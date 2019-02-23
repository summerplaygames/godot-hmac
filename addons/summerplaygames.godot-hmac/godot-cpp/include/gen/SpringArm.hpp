#ifndef GODOT_CPP_SPRINGARM_HPP
#define GODOT_CPP_SPRINGARM_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Spatial.hpp"
namespace godot {

class Shape;

class SpringArm : public Spatial {
public:

	static inline const char *___get_class_name() { return (const char *) "SpringArm"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static SpringArm *_new();

	// methods
	double get_hit_length();
	void set_length(const double length);
	double get_length() const;
	void set_shape(const Ref<Shape> shape);
	Ref<Shape> get_shape() const;
	void add_excluded_object(const RID RID);
	bool remove_excluded_object(const RID RID);
	void clear_excluded_objects();
	void set_collision_mask(const int64_t mask);
	int64_t get_collision_mask();
	void set_margin(const double margin);
	double get_margin();

};

}

#endif