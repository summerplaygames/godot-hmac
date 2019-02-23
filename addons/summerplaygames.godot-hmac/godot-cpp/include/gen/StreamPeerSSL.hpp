#ifndef GODOT_CPP_STREAMPEERSSL_HPP
#define GODOT_CPP_STREAMPEERSSL_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "StreamPeerSSL.hpp"

#include "StreamPeer.hpp"
namespace godot {

class StreamPeer;

class StreamPeerSSL : public StreamPeer {
public:

	static inline const char *___get_class_name() { return (const char *) "StreamPeerSSL"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum Status {
		STATUS_DISCONNECTED = 0,
		STATUS_HANDSHAKING = 1,
		STATUS_CONNECTED = 2,
		STATUS_ERROR = 3,
		STATUS_ERROR_HOSTNAME_MISMATCH = 4,
	};

	// constants


	static StreamPeerSSL *_new();

	// methods
	void poll();
	Error accept_stream(const Ref<StreamPeer> base);
	Error connect_to_stream(const Ref<StreamPeer> stream, const bool validate_certs = false, const String for_hostname = "");
	StreamPeerSSL::Status get_status() const;
	void disconnect_from_stream();
	void set_blocking_handshake_enabled(const bool enabled);
	bool is_blocking_handshake_enabled() const;

};

}

#endif