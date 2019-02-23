#ifndef GODOT_CPP_ANIMATIONNODEANIMATION_HPP
#define GODOT_CPP_ANIMATIONNODEANIMATION_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AnimationRootNode.hpp"
namespace godot {


class AnimationNodeAnimation : public AnimationRootNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeAnimation"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationNodeAnimation *_new();

	// methods
	void set_animation(const String name);
	String get_animation() const;

};

}

#endif