#ifndef GODOT_CPP_UPNPDEVICE_HPP
#define GODOT_CPP_UPNPDEVICE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>
#include "UPNPDevice.hpp"

#include "Reference.hpp"
namespace godot {


class UPNPDevice : public Reference {
public:

	static inline const char *___get_class_name() { return (const char *) "UPNPDevice"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (o) ? (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o) : nullptr; }

	// enums
	enum IGDStatus {
		IGD_STATUS_OK = 0,
		IGD_STATUS_HTTP_ERROR = 1,
		IGD_STATUS_HTTP_EMPTY = 2,
		IGD_STATUS_NO_URLS = 3,
		IGD_STATUS_NO_IGD = 4,
		IGD_STATUS_DISCONNECTED = 5,
		IGD_STATUS_UNKNOWN_DEVICE = 6,
		IGD_STATUS_INVALID_CONTROL = 7,
		IGD_STATUS_MALLOC_ERROR = 8,
		IGD_STATUS_UNKNOWN_ERROR = 9,
	};

	// constants


	static UPNPDevice *_new();

	// methods
	bool is_valid_gateway() const;
	String query_external_address() const;
	int64_t add_port_mapping(const int64_t port, const int64_t port_internal = 0, const String desc = "", const String proto = "UDP", const int64_t duration = 0) const;
	int64_t delete_port_mapping(const int64_t port, const String proto = "UDP") const;
	void set_description_url(const String url);
	String get_description_url() const;
	void set_service_type(const String type);
	String get_service_type() const;
	void set_igd_control_url(const String url);
	String get_igd_control_url() const;
	void set_igd_service_type(const String type);
	String get_igd_service_type() const;
	void set_igd_our_addr(const String addr);
	String get_igd_our_addr() const;
	void set_igd_status(const int64_t status);
	UPNPDevice::IGDStatus get_igd_status() const;

};

}

#endif