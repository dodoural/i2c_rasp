/**
 * @file axEccRefPem.h
 * @author NXP Semiconductors
 * @version 1.0
 * @par License
 * Copyright 2017 NXP
 *
 * This software is owned or controlled by NXP and may only be used
 * strictly in accordance with the applicable license terms.  By expressly
 * accepting such terms or by downloading, installing, activating and/or
 * otherwise using the software, you are agreeing that you have read, and
 * that you agree to comply with and are bound by, such license terms.  If
 * you do not agree to be bound by the applicable license terms, then you
 * may not retain, install, activate or otherwise use the software.
 *
 * @par Description
 * Interface to creating a reference ECC pem file
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <openssl/engine.h>
#include <openssl/sha.h>
#include <openssl/rand.h>
#include <openssl/conf.h>
#include <openssl/pem.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/obj_mac.h>
#include <openssl/ec.h>
#include <openssl/obj_mac.h>

#include "ax_api.h"
#include "sm_printf.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _AXECCREFPEM_H
#define _AXECCREFPEM_H

#define EMBSE_REFKEY_ID  0xA5A6B5B6 //!< Part of signature to indicate that the key is a reference to a key stored in the Secure Element. Embedded in private key value.

#define MAX_ECC_256_PUB_KEY_BYTE_LEN 65

U16 axEccWritePemRefKey(U8 storageClass, U8 keyIndex, const char* filepath, const U8 *pubKey, U16 pubKeyLen);
U16 axEccGenRefKey(EC_KEY *eckey, int nid, U8 storageClass, U8 keyIndex, const U8 *pubKey, U16 pubKeyLen);

#ifdef __cplusplus
}
#endif
#endif // _AXECCREFPEM_H
