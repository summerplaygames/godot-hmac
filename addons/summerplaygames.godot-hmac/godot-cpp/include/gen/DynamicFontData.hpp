#ifndef GODOT_CPP_DYNAMICFONTDATA_HPP
#define GODOT_CPP_DYNAMICFONTDATA_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "DynamicFontData.hpp"

#include "Resource.hpp"
namespace godot {


class DynamicFontData : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "DynamicFontData"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Hinting {
		HINTING_NONE = 0,
		HINTING_LIGHT = 1,
		HINTING_NORMAL = 2,
	};

	// constants


	static DynamicFontData *_new();

	// methods
	void set_font_path(const String path);
	String get_font_path() const;
	void set_hinting(const int64_t mode);
	DynamicFontData::Hinting get_hinting() const;

};

}

#endif