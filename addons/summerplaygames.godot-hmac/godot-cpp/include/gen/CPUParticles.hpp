#ifndef GODOT_CPP_CPUPARTICLES_HPP
#define GODOT_CPP_CPUPARTICLES_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "CPUParticles.hpp"

#include "GeometryInstance.hpp"
namespace godot {

class Mesh;
class Curve;
class Gradient;
class Object;

class CPUParticles : public GeometryInstance {
public:

	static inline const char *___get_class_name() { return (const char *) "CPUParticles"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Flags {
		FLAG_ALIGN_Y_TO_VELOCITY = 0,
		FLAG_ROTATE_Y = 1,
		FLAG_MAX = 3,
	};
	enum EmissionShape {
		EMISSION_SHAPE_POINT = 0,
		EMISSION_SHAPE_SPHERE = 1,
		EMISSION_SHAPE_BOX = 2,
		EMISSION_SHAPE_POINTS = 3,
		EMISSION_SHAPE_DIRECTED_POINTS = 4,
	};
	enum Parameter {
		PARAM_INITIAL_LINEAR_VELOCITY = 0,
		PARAM_ANGULAR_VELOCITY = 1,
		PARAM_LINEAR_ACCEL = 2,
		PARAM_RADIAL_ACCEL = 3,
		PARAM_TANGENTIAL_ACCEL = 4,
		PARAM_DAMPING = 5,
		PARAM_ANGLE = 6,
		PARAM_SCALE = 7,
		PARAM_HUE_VARIATION = 8,
		PARAM_ANIM_SPEED = 9,
		PARAM_ANIM_OFFSET = 10,
		PARAM_MAX = 11,
	};
	enum DrawOrder {
		DRAW_ORDER_INDEX = 0,
		DRAW_ORDER_LIFETIME = 1,
		DRAW_ORDER_VIEW_DEPTH = 2,
	};

	// constants


	static CPUParticles *_new();

	// methods
	void set_emitting(const bool emitting);
	void set_amount(const int64_t amount);
	void set_lifetime(const double secs);
	void set_one_shot(const bool enable);
	void set_pre_process_time(const double secs);
	void set_explosiveness_ratio(const double ratio);
	void set_randomness_ratio(const double ratio);
	void set_use_local_coordinates(const bool enable);
	void set_fixed_fps(const int64_t fps);
	void set_fractional_delta(const bool enable);
	void set_speed_scale(const double scale);
	bool is_emitting() const;
	int64_t get_amount() const;
	double get_lifetime() const;
	bool get_one_shot() const;
	double get_pre_process_time() const;
	double get_explosiveness_ratio() const;
	double get_randomness_ratio() const;
	bool get_use_local_coordinates() const;
	int64_t get_fixed_fps() const;
	bool get_fractional_delta() const;
	double get_speed_scale() const;
	void set_draw_order(const int64_t order);
	CPUParticles::DrawOrder get_draw_order() const;
	void set_mesh(const Ref<Mesh> mesh);
	Ref<Mesh> get_mesh() const;
	void restart();
	void set_spread(const double degrees);
	double get_spread() const;
	void set_flatness(const double amount);
	double get_flatness() const;
	void set_param(const int64_t param, const double value);
	double get_param(const int64_t param) const;
	void set_param_randomness(const int64_t param, const double randomness);
	double get_param_randomness(const int64_t param) const;
	void set_param_curve(const int64_t param, const Ref<Curve> curve);
	Ref<Curve> get_param_curve(const int64_t param) const;
	void set_color(const Color color);
	Color get_color() const;
	void set_color_ramp(const Ref<Gradient> ramp);
	Ref<Gradient> get_color_ramp() const;
	void set_particle_flag(const int64_t flag, const bool enable);
	bool get_particle_flag(const int64_t flag) const;
	void set_emission_shape(const int64_t shape);
	CPUParticles::EmissionShape get_emission_shape() const;
	void set_emission_sphere_radius(const double radius);
	double get_emission_sphere_radius() const;
	void set_emission_box_extents(const Vector3 extents);
	Vector3 get_emission_box_extents() const;
	void set_emission_points(const PoolVector3Array array);
	PoolVector3Array get_emission_points() const;
	void set_emission_normals(const PoolVector3Array array);
	PoolVector3Array get_emission_normals() const;
	void set_emission_colors(const PoolColorArray array);
	PoolColorArray get_emission_colors() const;
	Vector3 get_gravity() const;
	void set_gravity(const Vector3 accel_vec);
	void convert_from_particles(const Object *particles);
	void _update_render_thread();

};

}

#endif