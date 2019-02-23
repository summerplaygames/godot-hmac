#include "Physics2DDirectSpaceState.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Physics2DShapeQueryParameters.hpp"


namespace godot {


Array Physics2DDirectSpaceState::intersect_point(const Vector2 point, const int64_t max_results, const Array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_point");
	}
	return ___godot_icall_Array_Vector2_int_Array_int_bool_bool(mb, (const Object *) this, point, max_results, exclude, collision_layer, collide_with_bodies, collide_with_areas);
}

Array Physics2DDirectSpaceState::intersect_point_on_canvas(const Vector2 point, const int64_t canvas_instance_id, const int64_t max_results, const Array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_point_on_canvas");
	}
	return ___godot_icall_Array_Vector2_int_int_Array_int_bool_bool(mb, (const Object *) this, point, canvas_instance_id, max_results, exclude, collision_layer, collide_with_bodies, collide_with_areas);
}

Dictionary Physics2DDirectSpaceState::intersect_ray(const Vector2 from, const Vector2 to, const Array exclude, const int64_t collision_layer, const bool collide_with_bodies, const bool collide_with_areas) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_ray");
	}
	return ___godot_icall_Dictionary_Vector2_Vector2_Array_int_bool_bool(mb, (const Object *) this, from, to, exclude, collision_layer, collide_with_bodies, collide_with_areas);
}

Array Physics2DDirectSpaceState::intersect_shape(const Ref<Physics2DShapeQueryParameters> shape, const int64_t max_results) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "intersect_shape");
	}
	return ___godot_icall_Array_Object_int(mb, (const Object *) this, shape.ptr(), max_results);
}

Array Physics2DDirectSpaceState::cast_motion(const Ref<Physics2DShapeQueryParameters> shape) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "cast_motion");
	}
	return ___godot_icall_Array_Object(mb, (const Object *) this, shape.ptr());
}

Array Physics2DDirectSpaceState::collide_shape(const Ref<Physics2DShapeQueryParameters> shape, const int64_t max_results) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "collide_shape");
	}
	return ___godot_icall_Array_Object_int(mb, (const Object *) this, shape.ptr(), max_results);
}

Dictionary Physics2DDirectSpaceState::get_rest_info(const Ref<Physics2DShapeQueryParameters> shape) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("Physics2DDirectSpaceState", "get_rest_info");
	}
	return ___godot_icall_Dictionary_Object(mb, (const Object *) this, shape.ptr());
}

}