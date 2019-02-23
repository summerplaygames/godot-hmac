#ifndef GODOT_CPP_CURVE3D_HPP
#define GODOT_CPP_CURVE3D_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include "Resource.hpp"
namespace godot {


class Curve3D : public Resource {
public:

	static inline const char *___get_class_name() { return (const char *) "Curve3D"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums

	// constants


	static Curve3D *_new();

	// methods
	int64_t get_point_count() const;
	void add_point(const Vector3 position, const Vector3 in = Vector3(0, 0, 0), const Vector3 out = Vector3(0, 0, 0), const int64_t at_position = -1);
	void set_point_position(const int64_t idx, const Vector3 position);
	Vector3 get_point_position(const int64_t idx) const;
	void set_point_tilt(const int64_t idx, const double tilt);
	double get_point_tilt(const int64_t idx) const;
	void set_point_in(const int64_t idx, const Vector3 position);
	Vector3 get_point_in(const int64_t idx) const;
	void set_point_out(const int64_t idx, const Vector3 position);
	Vector3 get_point_out(const int64_t idx) const;
	void remove_point(const int64_t idx);
	void clear_points();
	Vector3 interpolate(const int64_t idx, const double t) const;
	Vector3 interpolatef(const double fofs) const;
	void set_bake_interval(const double distance);
	double get_bake_interval() const;
	void set_up_vector_enabled(const bool enable);
	bool is_up_vector_enabled() const;
	double get_baked_length() const;
	Vector3 interpolate_baked(const double offset, const bool cubic = false) const;
	Vector3 interpolate_baked_up_vector(const double offset, const bool apply_tilt = false) const;
	PoolVector3Array get_baked_points() const;
	PoolRealArray get_baked_tilts() const;
	PoolVector3Array get_baked_up_vectors() const;
	Vector3 get_closest_point(const Vector3 to_point) const;
	double get_closest_offset(const Vector3 to_point) const;
	PoolVector3Array tessellate(const int64_t max_stages = 5, const double tolerance_degrees = 4) const;
	Dictionary _get_data() const;
	void _set_data(const Dictionary arg0);

};

}

#endif