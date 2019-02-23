#include "EditorResourcePreviewGenerator.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"
#include "Resource.hpp"


namespace godot {


EditorResourcePreviewGenerator *EditorResourcePreviewGenerator::_new()
{
	return (EditorResourcePreviewGenerator *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"EditorResourcePreviewGenerator")());
}
bool EditorResourcePreviewGenerator::handles(const String type) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "handles");
	}
	return ___godot_icall_bool_String(mb, (const Object *) this, type);
}

Ref<Texture> EditorResourcePreviewGenerator::generate(const Ref<Resource> from, const Vector2 size) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "generate");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object_Object_Vector2(mb, (const Object *) this, from.ptr(), size));
}

Ref<Texture> EditorResourcePreviewGenerator::generate_from_path(const String path, const Vector2 size) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreviewGenerator", "generate_from_path");
	}
	return Ref<Texture>::__internal_constructor(___godot_icall_Object_String_Vector2(mb, (const Object *) this, path, size));
}

}