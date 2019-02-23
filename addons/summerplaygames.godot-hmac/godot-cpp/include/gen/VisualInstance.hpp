#ifndef GODOT_CPP_VISUALINSTANCE_HPP
#define GODOT_CPP_VISUALINSTANCE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Spatial.hpp"
namespace godot {


class VisualInstance : public Spatial {
public:

	static inline const char *___get_class_name() { return (const char *) "VisualInstance"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants

	// methods
	RID _get_visual_instance_rid() const;
	void set_base(const RID base);
	void set_layer_mask(const int64_t mask);
	int64_t get_layer_mask() const;
	void set_layer_mask_bit(const int64_t layer, const bool enabled);
	bool get_layer_mask_bit(const int64_t layer) const;
	AABB get_transformed_aabb() const;
	AABB get_aabb() const;

};

}

#endif