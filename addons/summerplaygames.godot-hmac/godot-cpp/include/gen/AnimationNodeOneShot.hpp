#ifndef GODOT_CPP_ANIMATIONNODEONESHOT_HPP
#define GODOT_CPP_ANIMATIONNODEONESHOT_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "AnimationNodeOneShot.hpp"

#include "AnimationNode.hpp"
namespace godot {


class AnimationNodeOneShot : public AnimationNode {
public:

	static inline const char *___get_class_name() { return (const char *) "AnimationNodeOneShot"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum MixMode {
		MIX_MODE_BLEND = 0,
		MIX_MODE_ADD = 1,
	};

	// constants


	static AnimationNodeOneShot *_new();

	// methods
	void set_fadein_time(const double time);
	double get_fadein_time() const;
	void set_fadeout_time(const double time);
	double get_fadeout_time() const;
	void set_autorestart(const bool enable);
	bool has_autorestart() const;
	void set_autorestart_delay(const double enable);
	double get_autorestart_delay() const;
	void set_autorestart_random_delay(const double enable);
	double get_autorestart_random_delay() const;
	void set_mix_mode(const int64_t mode);
	AnimationNodeOneShot::MixMode get_mix_mode() const;
	void set_use_sync(const bool enable);
	bool is_using_sync() const;

};

}

#endif