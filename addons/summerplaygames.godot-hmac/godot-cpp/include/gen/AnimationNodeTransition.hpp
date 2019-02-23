#ifndef GODOT_CPP_ANIMATIONNODETRANSITION_HPP
#define GODOT_CPP_ANIMATIONNODETRANSITION_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "AnimationNode.hpp"
namespace godot {


class AnimationNodeTransition : public AnimationNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeTransition"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static AnimationNodeTransition *_new();

	// methods
	void set_enabled_inputs(const int64_t amount);
	int64_t get_enabled_inputs();
	void set_input_as_auto_advance(const int64_t input, const bool enable);
	bool is_input_set_as_auto_advance(const int64_t input) const;
	void set_input_caption(const int64_t input, const String caption);
	String get_input_caption(const int64_t input) const;
	void set_cross_fade_time(const double time);
	double get_cross_fade_time() const;

};

}

#endif