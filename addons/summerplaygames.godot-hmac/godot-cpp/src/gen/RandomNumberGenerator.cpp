#include "RandomNumberGenerator.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


RandomNumberGenerator *RandomNumberGenerator::_new()
{
	return (RandomNumberGenerator *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"RandomNumberGenerator")());
}
void RandomNumberGenerator::set_seed(const int64_t seed) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("RandomNumberGenerator", "set_seed");
	}
	___godot_icall_void_int(mb, (const Object *) this, seed);
}

int64_t RandomNumberGenerator::get_seed() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("RandomNumberGenerator", "get_seed");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

int64_t RandomNumberGenerator::randi() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("RandomNumberGenerator", "randi");
	}
	return ___godot_icall_int(mb, (const Object *) this);
}

double RandomNumberGenerator::randf() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("RandomNumberGenerator", "randf");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

double RandomNumberGenerator::rand_range(const double from, const double to) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("RandomNumberGenerator", "rand_range");
	}
	return ___godot_icall_float_float_float(mb, (const Object *) this, from, to);
}

void RandomNumberGenerator::randomize() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("RandomNumberGenerator", "randomize");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}