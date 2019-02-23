#include "CPUParticles2D.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"
#include "Curve.hpp"
#include "Gradient.hpp"
#include "Object.hpp"


namespace godot {


CPUParticles2D *CPUParticles2D::_new()
{
	return (CPUParticles2D *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"CPUParticles2D")());
}
void CPUParticles2D::set_emitting(const bool emitting) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_emitting");
	}
	___godot_icall_void_bool(mb, (const Object *) this, emitting);
}

void CPUParticles2D::set_amount(const int64_t amount) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_amount");
	}
	___godot_icall_void_int(mb, (const Object *) this, amount);
}

void CPUParticles2D::set_lifetime(const double secs) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_lifetime");
	}
	___godot_icall_void_float(mb, (const Object *) this, secs);
}

void CPUParticles2D::set_one_shot(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_one_shot");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

void CPUParticles2D::set_pre_process_time(const double secs) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_pre_process_time");
	}
	___godot_icall_void_float(mb, (const Object *) this, secs);
}

void CPUParticles2D::set_explosiveness_ratio(const double ratio) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_explosiveness_ratio");
	}
	___godot_icall_void_float(mb, (const Object *) this, ratio);
}

void CPUParticles2D::set_randomness_ratio(const double ratio) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_randomness_ratio");
	}
	___godot_icall_void_float(mb, (const Object *) this, ratio);
}

void CPUParticles2D::set_use_local_coordinates(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_use_local_coordinates");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

void CPUParticles2D::set_fixed_fps(const int64_t fps) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_fixed_fps");
	}
	___godot_icall_void_int(mb, (const Object *) this, fps);
}

void CPUParticles2D::set_fractional_delta(const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_fractional_delta");
	}
	___godot_icall_void_bool(mb, (const Object *) this, enable);
}

void CPUParticles2D::set_speed_scale(const double scale) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_speed_scale");
	}
	___godot_icall_void_float(mb, (const Object *) this, scale);
}

bool CPUParticles2D::is_emitting() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "is_emitting");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

int64_t CPUParticles2D::get_amount() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_amount");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

double CPUParticles2D::get_lifetime() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_lifetime");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

bool CPUParticles2D::get_one_shot() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_one_shot");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

double CPUParticles2D::get_pre_process_time() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_pre_process_time");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

double CPUParticles2D::get_explosiveness_ratio() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_explosiveness_ratio");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

double CPUParticles2D::get_randomness_ratio() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_randomness_ratio");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

bool CPUParticles2D::get_use_local_coordinates() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_use_local_coordinates");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

int64_t CPUParticles2D::get_fixed_fps() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_fixed_fps");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

bool CPUParticles2D::get_fractional_delta() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_fractional_delta");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

double CPUParticles2D::get_speed_scale() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_speed_scale");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CPUParticles2D::set_draw_order(const int64_t order) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_draw_order");
	}
	___godot_icall_void_int(mb, (const Object *) this, order);
}

CPUParticles2D::DrawOrder CPUParticles2D::get_draw_order() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_draw_order");
	}
	return (CPUParticles2D::DrawOrder) ___godot_icall_int(mb, (const Object *) this);
}

void CPUParticles2D::set_texture(const Ref<Texture> texture) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_texture");
	}
	___godot_icall_void_Object(mb, (const Object *) this, texture.ptr());
}

Ref<Texture> CPUParticles2D::get_texture() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_texture");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void CPUParticles2D::set_normalmap(const Ref<Texture> normalmap) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_normalmap");
	}
	___godot_icall_void_Object(mb, (const Object *) this, normalmap.ptr());
}

Ref<Texture> CPUParticles2D::get_normalmap() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_normalmap");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void CPUParticles2D::restart() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "restart");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void CPUParticles2D::set_spread(const double degrees) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_spread");
	}
	___godot_icall_void_float(mb, (const Object *) this, degrees);
}

double CPUParticles2D::get_spread() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_spread");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CPUParticles2D::set_flatness(const double amount) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_flatness");
	}
	___godot_icall_void_float(mb, (const Object *) this, amount);
}

double CPUParticles2D::get_flatness() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_flatness");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CPUParticles2D::set_param(const int64_t param, const double value) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_param");
	}
	___godot_icall_void_int_float(mb, (const Object *) this, param, value);
}

double CPUParticles2D::get_param(const int64_t param) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_param");
	}
	return ___godot_icall_float_int(mb, (const Object *) this, param);
}

void CPUParticles2D::set_param_randomness(const int64_t param, const double randomness) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_param_randomness");
	}
	___godot_icall_void_int_float(mb, (const Object *) this, param, randomness);
}

double CPUParticles2D::get_param_randomness(const int64_t param) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_param_randomness");
	}
	return ___godot_icall_float_int(mb, (const Object *) this, param);
}

void CPUParticles2D::set_param_curve(const int64_t param, const Ref<Curve> curve) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_param_curve");
	}
	___godot_icall_void_int_Object(mb, (const Object *) this, param, curve.ptr());
}

Ref<Curve> CPUParticles2D::get_param_curve(const int64_t param) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_param_curve");
	}
	return Ref<Curve>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, param));
}

void CPUParticles2D::set_color(const Color color) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_color");
	}
	___godot_icall_void_Color(mb, (const Object *) this, color);
}

Color CPUParticles2D::get_color() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_color");
	}
	return ___godot_icall_Color(mb, (const Object *) this);
}

void CPUParticles2D::set_color_ramp(const Ref<Gradient> ramp) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_color_ramp");
	}
	___godot_icall_void_Object(mb, (const Object *) this, ramp.ptr());
}

Ref<Gradient> CPUParticles2D::get_color_ramp() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_color_ramp");
	}
	return Ref<Gradient>::__internal_constructor(___godot_icall_Object(mb, (const Object *) this));
}

void CPUParticles2D::set_particle_flag(const int64_t flag, const bool enable) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_particle_flag");
	}
	___godot_icall_void_int_bool(mb, (const Object *) this, flag, enable);
}

bool CPUParticles2D::get_particle_flag(const int64_t flag) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_particle_flag");
	}
	return ___godot_icall_bool_int(mb, (const Object *) this, flag);
}

void CPUParticles2D::set_emission_shape(const int64_t shape) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_shape");
	}
	___godot_icall_void_int(mb, (const Object *) this, shape);
}

CPUParticles2D::EmissionShape CPUParticles2D::get_emission_shape() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_shape");
	}
	return (CPUParticles2D::EmissionShape) ___godot_icall_int(mb, (const Object *) this);
}

void CPUParticles2D::set_emission_sphere_radius(const double radius) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_sphere_radius");
	}
	___godot_icall_void_float(mb, (const Object *) this, radius);
}

double CPUParticles2D::get_emission_sphere_radius() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_sphere_radius");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void CPUParticles2D::set_emission_rect_extents(const Vector2 extents) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_rect_extents");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, extents);
}

Vector2 CPUParticles2D::get_emission_rect_extents() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_rect_extents");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void CPUParticles2D::set_emission_points(const PoolVector2Array array) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_points");
	}
	___godot_icall_void_PoolVector2Array(mb, (const Object *) this, array);
}

PoolVector2Array CPUParticles2D::get_emission_points() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_points");
	}
	return ___godot_icall_PoolVector2Array(mb, (const Object *) this);
}

void CPUParticles2D::set_emission_normals(const PoolVector2Array array) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_normals");
	}
	___godot_icall_void_PoolVector2Array(mb, (const Object *) this, array);
}

PoolVector2Array CPUParticles2D::get_emission_normals() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_normals");
	}
	return ___godot_icall_PoolVector2Array(mb, (const Object *) this);
}

void CPUParticles2D::set_emission_colors(const PoolColorArray array) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_emission_colors");
	}
	___godot_icall_void_PoolColorArray(mb, (const Object *) this, array);
}

PoolColorArray CPUParticles2D::get_emission_colors() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_emission_colors");
	}
	return ___godot_icall_PoolColorArray(mb, (const Object *) this);
}

Vector2 CPUParticles2D::get_gravity() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "get_gravity");
	}
	return ___godot_icall_Vector2(mb, (const Object *) this);
}

void CPUParticles2D::set_gravity(const Vector2 accel_vec) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "set_gravity");
	}
	___godot_icall_void_Vector2(mb, (const Object *) this, accel_vec);
}

void CPUParticles2D::convert_from_particles(const Object *particles) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "convert_from_particles");
	}
	___godot_icall_void_Object(mb, (const Object *) this, particles);
}

void CPUParticles2D::_update_render_thread() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("CPUParticles2D", "_update_render_thread");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}