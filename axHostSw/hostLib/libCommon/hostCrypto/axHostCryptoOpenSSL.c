/**
 * @file axHostCryptoOpenSSL.c
 * @author NXP Semiconductors
 * @version 1.0
 * @par License
 * Copyright 2016 NXP
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
 * Host Crypto OpenSSL wrapper implementation for the A7-series
 *
 * @par HISTORY
 *
 */

#include "axHostCrypto.h"
#include "ax_util.h"
#include "sm_types.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

#ifdef OPENSSL
#include <openssl/sha.h>
#include <openssl/aes.h>
#include <openssl/cmac.h>
#include <openssl/rand.h>

#ifdef TGT_A70CU
S32 HOST_SHA256_GetPartialHash(const U8 *msg, U32 msgLen, U8 *pHashState, U32 *pNumProcessedMsgBytes)
{
    SHA256_CTX ctx256;
    const U32 sha256BlockSize = 64;
    int ret;

    ret = SHA256_Init(&ctx256);
    if (ret == HOST_CRYPTO_OK)
    {
        U32 numExtraBytes = msgLen % sha256BlockSize;
        U32 numProcessedBytes = msgLen - numExtraBytes;

#ifdef PARTIAL_HASH_DEFAULT_NO_STATE
        if (numProcessedBytes > 0)
        {
#endif
            ret = SHA256_Update(&ctx256, msg, numProcessedBytes);
            if (ret == HOST_CRYPTO_OK)
            {
                SHA_LONG h;
                int i;
                for (i = 0; i < 8; i++)
                {
                    h = ctx256.h[i];
                    *pHashState++ = (h >> 24) & 0xff;
                    *pHashState++ = (h >> 16) & 0xff;
                    *pHashState++ = (h >> 8) & 0xff;
                    *pHashState++ = h  & 0xff;
                }
            }
#ifdef PARTIAL_HASH_DEFAULT_NO_STATE
        }
#endif

        *pNumProcessedMsgBytes = numProcessedBytes;
    }

    return ret;
}
#endif // TGT_A70CU

S32 HOST_SHA1_Get(const U8 *msg, U32 msgLen, U8 *pHash)
{
    SHA_CTX ctx;
    int ret;

    ret = SHA1_Init(&ctx);
    if (ret == HOST_CRYPTO_OK)
    {
        ret = SHA1_Update(&ctx, msg, msgLen);
        if (ret == HOST_CRYPTO_OK)
        {
            ret = SHA1_Final(pHash, &ctx);
        }
    }
    return ret;
}

S32 HOST_SHA256_Get(const U8 *msg, U32 msgLen, U8 *pHash)
{
    SHA256_CTX ctx256;
    int ret;

    ret = SHA256_Init(&ctx256);
    if (ret == HOST_CRYPTO_OK)
    {
        ret = SHA256_Update(&ctx256, msg, msgLen);
        if (ret == HOST_CRYPTO_OK)
        {
            ret = SHA256_Final(pHash, &ctx256);
        }
    }

    return ret;
}

S32 HOST_AES_ECB_ENCRYPT(const U8 *plainText, U8 *cipherText, const U8 *key, U32 keyLen)
{
    AES_KEY keyLocal;
    int keyLenBits = keyLen * 8;
    int nRet = 0;

    // This works assuming the plaintext has the same size as the key
    // NOTE: AES_set_encrypt_key returns 0 upon success
    nRet = AES_set_encrypt_key(key, keyLenBits, &keyLocal);
    if (nRet != 0)
    {
        return HOST_CRYPTO_ERROR;
    }

    // AES_ecb_encrypt has return type void
    AES_ecb_encrypt(plainText, cipherText, &keyLocal, AES_ENCRYPT);

    return HOST_CRYPTO_OK;
}

S32 HOST_AES_ECB_DECRYPT(U8 *plainText, const U8 *cipherText, const U8 *key, U32 keyLen)
{
    AES_KEY keyLocal;
    int keyLenBits = keyLen * 8;
    int nRet = 0;

    // This works assuming the plaintext has the same size as the key
    // NOTE: AES_set_encrypt_key returns 0 upon success
    nRet = AES_set_decrypt_key(key, keyLenBits, &keyLocal);
    if (nRet != 0)
    {
        return HOST_CRYPTO_ERROR;
    }

    // AES_ecb_encrypt has return type void
    AES_ecb_encrypt(cipherText, plainText, &keyLocal, AES_DECRYPT);

    return HOST_CRYPTO_OK;
}

S32 HOST_CMAC_Get(const U8 *pKey, U8 keySizeInBytes, const U8 *pMsg, U32 msgLen, U8* pMac)
{
    int ret;
    size_t size;
    axHcCmacCtx_t *ctx;

    ret = HOST_CMAC_Init(&ctx, pKey, keySizeInBytes);
    if (ret == HOST_CRYPTO_OK)
    {
        ret = CMAC_Update(ctx, pMsg, msgLen);
        if (ret == HOST_CRYPTO_OK)
        {
            ret = CMAC_Final(ctx, pMac, &size);
        }
    }

    if (ret != ERR_MEMORY)
    {
        CMAC_CTX_free(ctx);
    }

    return ret;
}

S32 HOST_CMAC_Init(axHcCmacCtx_t **ctx, const U8 *pKey,  U8 keySizeInBytes)
{
    int ret;

    *ctx = CMAC_CTX_new();
    if (*ctx == NULL)
    {
        return ERR_MEMORY;
    }

    // CMAC_Init() returns
    //      1 = success
    //      0 = failure
    ret = CMAC_Init(*ctx, pKey, keySizeInBytes, EVP_aes_128_cbc(), NULL);

    return ret;
}

S32 HOST_CMAC_Update(axHcCmacCtx_t *ctx, const U8 *pMsg, U32 msgLen)
{
    int ret;

    // CMAC_Update() returns
    //      1 = success
    //      0 = failure
    ret = CMAC_Update(ctx, pMsg, msgLen);

    return ret;
}

S32 HOST_CMAC_Finish(axHcCmacCtx_t *ctx, U8 *pMac)
{
    int ret;
    size_t size;

    // CMAC_Final() returns
    //      1 = success
    //      0 = failure
    ret = CMAC_Final(ctx, pMac, &size);
    CMAC_CTX_free(ctx);

    return ret;
}

S32 HOST_AES_CBC_Process(const U8 *pKey, U32 keyLen, const U8 *pIv, U8 dir, const U8 *pIn, U32 inLen, U8 *pOut)
{
    int outLen = 0;
    int nRet;
    EVP_CIPHER_CTX aesCtx;

    assert(pIn != NULL);
    assert(pOut != NULL);

    EVP_CIPHER_CTX_init(&aesCtx);

    if (keyLen != AES_BLOCK_SIZE)
    {
        // printf("Unsupported key length for HOST_AES_CBC_Process\r\n");
        return ERR_API_ERROR;
    }

    if ((inLen % AES_BLOCK_SIZE) != 0)
    {
        // printf("Input data are not block aligned for HOST_AES_CBC_Process\r\n");
        return ERR_API_ERROR;
    }

    if (dir == HOST_ENCRYPT)
    {
        // EVP_EncryptInit_ex returns 0 on failure and 1 upon success
        if (!EVP_EncryptInit_ex(&aesCtx, EVP_aes_128_cbc(), NULL, pKey, pIv))
        {
            return HOST_CRYPTO_ERROR;
        }
        if (!EVP_EncryptUpdate(&aesCtx, pOut, &outLen, pIn, inLen))
        {
            return HOST_CRYPTO_ERROR;
        }
    }
    else if (dir == HOST_DECRYPT)
    {
        // EVP_DecryptInit_ex returns 0 on failure and 1 upon success
        if (!EVP_DecryptInit_ex(&aesCtx, EVP_aes_128_cbc(), NULL, pKey, pIv))
        {
            return HOST_CRYPTO_ERROR;
        }
        if (!EVP_DecryptUpdate(&aesCtx, pOut, &outLen, pIn, inLen))
        {
            return HOST_CRYPTO_ERROR;
        }
    }
    else
    {
        // printf("Unsupported direction for HOST_AES_CBC_Process\r\n");
        return ERR_API_ERROR;
    }

    nRet = EVP_CIPHER_CTX_cleanup(&aesCtx);
    return nRet;
}

S32 HOST_GetRandom(U32 inLen, U8 *pRandom)
{
    int nRet;

    nRet = RAND_bytes(pRandom, inLen);
    return nRet;
}

#endif // OPENSSL
