#include "EditorResourcePreview.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "Texture.hpp"
#include "Object.hpp"
#include "Resource.hpp"
#include "EditorResourcePreviewGenerator.hpp"


namespace godot {


void EditorResourcePreview::_preview_ready(const String arg0, const Ref<Texture> arg1, const Ref<Texture> arg2, const int64_t arg3, const String arg4, const Variant arg5) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreview", "_preview_ready");
	}
	___godot_icall_void_String_Object_Object_int_String_Variant(mb, (const Object *) this, arg0, arg1.ptr(), arg2.ptr(), arg3, arg4, arg5);
}

void EditorResourcePreview::queue_resource_preview(const String path, const Object *receiver, const String receiver_func, const Variant userdata) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreview", "queue_resource_preview");
	}
	___godot_icall_void_String_Object_String_Variant(mb, (const Object *) this, path, receiver, receiver_func, userdata);
}

void EditorResourcePreview::queue_edited_resource_preview(const Ref<Resource> resource, const Object *receiver, const String receiver_func, const Variant userdata) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreview", "queue_edited_resource_preview");
	}
	___godot_icall_void_Object_Object_String_Variant(mb, (const Object *) this, resource.ptr(), receiver, receiver_func, userdata);
}

void EditorResourcePreview::add_preview_generator(const Ref<EditorResourcePreviewGenerator> generator) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreview", "add_preview_generator");
	}
	___godot_icall_void_Object(mb, (const Object *) this, generator.ptr());
}

void EditorResourcePreview::remove_preview_generator(const Ref<EditorResourcePreviewGenerator> generator) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreview", "remove_preview_generator");
	}
	___godot_icall_void_Object(mb, (const Object *) this, generator.ptr());
}

void EditorResourcePreview::check_for_invalidation(const String path) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorResourcePreview", "check_for_invalidation");
	}
	___godot_icall_void_String(mb, (const Object *) this, path);
}

}