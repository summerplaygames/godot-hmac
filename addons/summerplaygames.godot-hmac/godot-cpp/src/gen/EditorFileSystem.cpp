#include "EditorFileSystem.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "EditorFileSystemDirectory.hpp"


namespace godot {


EditorFileSystemDirectory *EditorFileSystem::get_filesystem() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "get_filesystem");
	}
	return (EditorFileSystemDirectory *) ___godot_icall_Object(mb, (const Object *) this);
}

bool EditorFileSystem::is_scanning() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "is_scanning");
	}
	return ___godot_icall_bool(mb, (const Object *) this);
}

double EditorFileSystem::get_scanning_progress() const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "get_scanning_progress");
	}
	return ___godot_icall_float(mb, (const Object *) this);
}

void EditorFileSystem::scan() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "scan");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void EditorFileSystem::scan_sources() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "scan_sources");
	}
	___godot_icall_void(mb, (const Object *) this);
}

void EditorFileSystem::update_file(const String path) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "update_file");
	}
	___godot_icall_void_String(mb, (const Object *) this, path);
}

EditorFileSystemDirectory *EditorFileSystem::get_filesystem_path(const String path) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "get_filesystem_path");
	}
	return (EditorFileSystemDirectory *) ___godot_icall_Object_String(mb, (const Object *) this, path);
}

String EditorFileSystem::get_file_type(const String path) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "get_file_type");
	}
	return ___godot_icall_String_String(mb, (const Object *) this, path);
}

void EditorFileSystem::update_script_classes() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("EditorFileSystem", "update_script_classes");
	}
	___godot_icall_void(mb, (const Object *) this);
}

}