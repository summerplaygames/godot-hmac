#include "WebSocketMultiplayerPeer.hpp"


#include <core/GodotGlobal.hpp>
#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include <core/Godot.hpp>

#include "__icalls.hpp"


#include "WebSocketPeer.hpp"


namespace godot {


Ref<WebSocketPeer> WebSocketMultiplayerPeer::get_peer(const int64_t peer_id) const {
	static godot_method_bind *mb = nullptr;
	if (mb == nullptr) {
		mb = godot::api->godot_method_bind_get_method("WebSocketMultiplayerPeer", "get_peer");
	}
	return Ref<WebSocketPeer>::__internal_constructor(___godot_icall_Object_int(mb, (const Object *) this, peer_id));
}

}