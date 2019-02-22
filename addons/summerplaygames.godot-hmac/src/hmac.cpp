#include "hmac.hpp"

#include <mbedtls/md.h>
#include <mbedtls/sha256.h>

using namespace godot;

void HMAC::_register_methods() {
    register_method("digest", &HMAC::digest);
}

String HMAC::digest(PoolByteArray secret, PoolByteArray payload, String type) {
    unsigned char localMac[32];
    char convertedMac[32*2];

    const size_t keyLength = secret.size();
    const size_t payloadLength = payload.size();

    char* secretBuffer = new char[keyLength]();
    char* payloadBuffer = new char[payloadLength]();

    for (int i = 0; i < keyLength; i++) {
        secretBuffer[i] = (char)secret[i];
    }

    for (int i = 0; i < payloadLength; i++) {
        payloadBuffer[i] = (char)payload[i];
    }

    mbedtls_md_context_t ctx;
    mbedtls_md_init(&ctx);
    mbedtls_md_type_t mbedType = getMbedType(type.to_lower());
    mbedtls_md_setup(&ctx, mbedtls_md_info_from_type(mbedType), 1);
    mbedtls_md_hmac_starts(&ctx, (const unsigned char*) secretBuffer, keyLength);
    mbedtls_md_hmac_update(&ctx, (const unsigned char *)payloadBuffer, payloadLength);
    mbedtls_md_hmac_finish(&ctx, localMac);
    mbedtls_md_free(&ctx);

    for (int i = 0; i < sizeof(localMac); i++) {
        sprintf(&convertedMac[i*2], "%02x", (int)localMac[i]);   
    }

    delete[] secretBuffer;
    delete[] payloadBuffer;

    return String(convertedMac);
}

mbedtls_md_type_t HMAC::getMbedType(String type) {
    if (type == "sha256") { return MBEDTLS_MD_SHA256; }
	else if(type == "none") { return MBEDTLS_MD_NONE;}
	else if(type == "md2") { return MBEDTLS_MD_MD2;}
	else if(type == "md4") { return MBEDTLS_MD_MD4;}
	else if(type == "md5") { return MBEDTLS_MD_MD5;}
	else if(type == "sha1") { return MBEDTLS_MD_SHA1;}
	else if(type == "sha224") { return MBEDTLS_MD_SHA224;}
	else if(type == "sha384") { return MBEDTLS_MD_SHA384;}
	else if(type == "sha512") { return MBEDTLS_MD_SHA512;}
	else if(type == "ripemd160") { return MBEDTLS_MD_RIPEMD160;}
    return MBEDTLS_MD_SHA256;
}

HMAC::HMAC() {}

HMAC::~HMAC() {}

void HMAC::_init() {
    
}

