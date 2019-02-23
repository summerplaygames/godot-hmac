#ifndef GODOT_CPP_CSGPOLYGON_HPP
#define GODOT_CPP_CSGPOLYGON_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "CSGPolygon.hpp"

#include "CSGPrimitive.hpp"
namespace godot {

class Material;

class CSGPolygon : public CSGPrimitive {
public:

	static inline const char *___get_class_name() { return (const char *) "CSGPolygon"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum PathRotation {
		PATH_ROTATION_POLYGON = 0,
		PATH_ROTATION_PATH = 1,
		PATH_ROTATION_PATH_FOLLOW = 2,
	};
	enum Mode {
		MODE_DEPTH = 0,
		MODE_SPIN = 1,
		MODE_PATH = 2,
	};

	// constants


	static CSGPolygon *_new();

	// methods
	void set_polygon(const PoolVector2Array polygon);
	PoolVector2Array get_polygon() const;
	void set_mode(const int64_t mode);
	CSGPolygon::Mode get_mode() const;
	void set_depth(const double depth);
	double get_depth() const;
	void set_spin_degrees(const double degrees);
	double get_spin_degrees() const;
	void set_spin_sides(const int64_t spin_sides);
	int64_t get_spin_sides() const;
	void set_path_node(const NodePath path);
	NodePath get_path_node() const;
	void set_path_interval(const double distance);
	double get_path_interval() const;
	void set_path_rotation(const int64_t mode);
	CSGPolygon::PathRotation get_path_rotation() const;
	void set_path_local(const bool enable);
	bool is_path_local() const;
	void set_path_continuous_u(const bool enable);
	bool is_path_continuous_u() const;
	void set_path_joined(const bool enable);
	bool is_path_joined() const;
	void set_material(const Ref<Material> material);
	Ref<Material> get_material() const;
	void set_smooth_faces(const bool smooth_faces);
	bool get_smooth_faces() const;
	bool _is_editable_3d_polygon() const;
	bool _has_editable_3d_polygon_no_depth() const;
	void _path_exited();
	void _path_changed();

};

}

#endif