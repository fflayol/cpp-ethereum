#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "compiler.h"
#include <stdint.h>
#include <stdlib.h>

struct ethash_h256;

#define decsha3(bits) \
	int sha3_##bits(uint8_t*, uint8_t const*, size_t);

decsha3(256)
decsha3(512)

static inline void SHA3_256(struct ethash_h256 const* ret, uint8_t const* data, size_t const size)
{
	sha3_256((uint8_t*)ret, data, size);
}
static inline void SHA3_256_96(struct ethash_h256 const* ret, uint8_t const* data)
{
	sha3_256((uint8_t*)ret, data, 96);
}

static inline void SHA3_256_32(struct ethash_h256 const* ret, uint8_t const* data)
{
	sha3_256((uint8_t*)ret, data, 32);
}

static inline void SHA3_512(uint8_t* ret, uint8_t const* data, size_t const size)
{
	sha3_512(ret, data, size);
}

static inline void SHA3_512_32(uint8_t* ret, uint8_t const* data)
{
	sha3_512(ret, data, 32);
}

static inline void SHA3_512_64(uint8_t* ret, uint8_t const* data)
{
	sha3_512(ret, data, 64);
}

static inline void SHA3_512_40(uint8_t* ret, uint8_t const* data)
{
	sha3_512(ret, data, 40);
}
static inline void SHA3_512_96(uint8_t* ret, uint8_t const* data)
{
	sha3_512(ret, data, 40);
}
#ifdef __cplusplus
}
#endif
