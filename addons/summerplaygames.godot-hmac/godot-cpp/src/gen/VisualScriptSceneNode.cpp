#include "VisualScriptSceneNode.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"




namespace godot {


VisualScriptSceneNode *VisualScriptSceneNode::_new()
{
	return (VisualScriptSceneNode *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, godot::api->godot_get_class_constructor((char *)"VisualScriptSceneNode")());
}
void VisualScriptSceneNode::set_node_path(const NodePath path) {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptSceneNode", "set_node_path");
	}
	___godot_icall_void_NodePath(mb, (const Object *) this, path);
}

NodePath VisualScriptSceneNode::get_node_path() {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("VisualScriptSceneNode", "get_node_path");
	}
	return ___godot_icall_NodePath(mb, (const Object *) this);
}

}