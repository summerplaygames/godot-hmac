#ifndef GODOT_CPP_COLLISIONSHAPE_HPP
#define GODOT_CPP_COLLISIONSHAPE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Spatial.hpp"
namespace godot {

class Resource;
class Shape;

class CollisionShape : public Spatial {
public:

	static inline const char *___get_class_name() { return (const char *) "CollisionShape"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static CollisionShape *_new();

	// methods
	void resource_changed(const Ref<Resource> resource);
	void set_shape(const Ref<Shape> shape);
	Ref<Shape> get_shape() const;
	void set_disabled(const bool enable);
	bool is_disabled() const;
	void make_convex_from_brothers();

};

}

#endif