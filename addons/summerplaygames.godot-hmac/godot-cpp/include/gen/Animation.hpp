#ifndef GODOT_CPP_ANIMATION_HPP
#define GODOT_CPP_ANIMATION_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "Animation.hpp"

#include "Resource.hpp"
namespace godot {

class Resource;
class Animation;

class Animation : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "Animation"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum TrackType {
		TYPE_VALUE = 0,
		TYPE_TRANSFORM = 1,
		TYPE_METHOD = 2,
		TYPE_BEZIER = 3,
		TYPE_AUDIO = 4,
		TYPE_ANIMATION = 5,
	};
	enum UpdateMode {
		UPDATE_CONTINUOUS = 0,
		UPDATE_DISCRETE = 1,
		UPDATE_TRIGGER = 2,
		UPDATE_CAPTURE = 3,
	};
	enum InterpolationType {
		INTERPOLATION_NEAREST = 0,
		INTERPOLATION_LINEAR = 1,
		INTERPOLATION_CUBIC = 2,
	};

	// constants


	static Animation *_new();

	// methods
	int64_t add_track(const int64_t type, const int64_t at_position = -1);
	void remove_track(const int64_t idx);
	int64_t get_track_count() const;
	Animation::TrackType track_get_type(const int64_t idx) const;
	NodePath track_get_path(const int64_t idx) const;
	void track_set_path(const int64_t idx, const NodePath path);
	int64_t find_track(const NodePath path) const;
	void track_move_up(const int64_t idx);
	void track_move_down(const int64_t idx);
	void track_swap(const int64_t idx, const int64_t with_idx);
	void track_set_imported(const int64_t idx, const bool imported);
	bool track_is_imported(const int64_t idx) const;
	void track_set_enabled(const int64_t idx, const bool enabled);
	bool track_is_enabled(const int64_t idx) const;
	int64_t transform_track_insert_key(const int64_t idx, const double time, const Vector3 location, const Quat rotation, const Vector3 scale);
	void track_insert_key(const int64_t idx, const double time, const Variant key, const double transition = 1);
	void track_remove_key(const int64_t idx, const int64_t key_idx);
	void track_remove_key_at_position(const int64_t idx, const double position);
	void track_set_key_value(const int64_t idx, const int64_t key, const Variant value);
	void track_set_key_transition(const int64_t idx, const int64_t key_idx, const double transition);
	double track_get_key_transition(const int64_t idx, const int64_t key_idx) const;
	int64_t track_get_key_count(const int64_t idx) const;
	Variant track_get_key_value(const int64_t idx, const int64_t key_idx) const;
	double track_get_key_time(const int64_t idx, const int64_t key_idx) const;
	int64_t track_find_key(const int64_t idx, const double time, const bool exact = false) const;
	void track_set_interpolation_type(const int64_t idx, const int64_t interpolation);
	Animation::InterpolationType track_get_interpolation_type(const int64_t idx) const;
	void track_set_interpolation_loop_wrap(const int64_t idx, const bool interpolation);
	bool track_get_interpolation_loop_wrap(const int64_t idx) const;
	Array transform_track_interpolate(const int64_t idx, const double time_sec) const;
	void value_track_set_update_mode(const int64_t idx, const int64_t mode);
	Animation::UpdateMode value_track_get_update_mode(const int64_t idx) const;
	PoolIntArray value_track_get_key_indices(const int64_t idx, const double time_sec, const double delta) const;
	PoolIntArray method_track_get_key_indices(const int64_t idx, const double time_sec, const double delta) const;
	String method_track_get_name(const int64_t idx, const int64_t key_idx) const;
	Array method_track_get_params(const int64_t idx, const int64_t key_idx) const;
	int64_t bezier_track_insert_key(const int64_t track, const double time, const double value, const Vector2 in_handle = Vector2(0, 0), const Vector2 out_handle = Vector2(0, 0));
	void bezier_track_set_key_value(const int64_t idx, const int64_t key_idx, const double value);
	void bezier_track_set_key_in_handle(const int64_t idx, const int64_t key_idx, const Vector2 in_handle);
	void bezier_track_set_key_out_handle(const int64_t idx, const int64_t key_idx, const Vector2 out_handle);
	double bezier_track_get_key_value(const int64_t idx, const int64_t key_idx) const;
	Vector2 bezier_track_get_key_in_handle(const int64_t idx, const int64_t key_idx) const;
	Vector2 bezier_track_get_key_out_handle(const int64_t idx, const int64_t key_idx) const;
	double bezier_track_interpolate(const int64_t track, const double time) const;
	int64_t audio_track_insert_key(const int64_t track, const double time, const Ref<Resource> stream, const double start_offset = 0, const double end_offset = 0);
	void audio_track_set_key_stream(const int64_t idx, const int64_t key_idx, const Ref<Resource> stream);
	void audio_track_set_key_start_offset(const int64_t idx, const int64_t key_idx, const double offset);
	void audio_track_set_key_end_offset(const int64_t idx, const int64_t key_idx, const double offset);
	Ref<Resource> audio_track_get_key_stream(const int64_t idx, const int64_t key_idx) const;
	double audio_track_get_key_start_offset(const int64_t idx, const int64_t key_idx) const;
	double audio_track_get_key_end_offset(const int64_t idx, const int64_t key_idx) const;
	int64_t animation_track_insert_key(const int64_t track, const double time, const String animation);
	void animation_track_set_key_animation(const int64_t idx, const int64_t key_idx, const String animation);
	String animation_track_get_key_animation(const int64_t idx, const int64_t key_idx) const;
	void set_length(const double time_sec);
	double get_length() const;
	void set_loop(const bool enabled);
	bool has_loop() const;
	void set_step(const double size_sec);
	double get_step() const;
	void clear();
	void copy_track(const int64_t track, const Ref<Animation> to_animation);

};

}

#endif