#ifndef GODOT_CPP_ANIMATIONNODEADD3_HPP
#define GODOT_CPP_ANIMATIONNODEADD3_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AnimationNode.hpp"
namespace godot {


class AnimationNodeAdd3 : public AnimationNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeAdd3"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationNodeAdd3 *_new();

	// methods
	void set_use_sync(const bool enable);
	bool is_using_sync() const;

};

}

#endif