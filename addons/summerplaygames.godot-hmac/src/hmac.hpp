#ifndef HMAC_HPP
#define HMAC_HPP

#include <Godot.hpp>
#include <Reference.hpp>
#include <mbedtls/md.h>
#include <mbedtls/sha256.h>

namespace godot {
    class HMAC : public Reference {
        GODOT_CLASS(HMAC, Reference)
    
    private:
        mbedtls_md_type_t getMbedType(String type);

    public:
        static void _register_methods();
        String digest(PoolByteArray secret, PoolByteArray payload, String type);

        HMAC();
        ~HMAC();

        void _init();
    };
}

#endif