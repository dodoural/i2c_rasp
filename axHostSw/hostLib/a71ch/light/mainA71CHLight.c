/***************************************************************************
 * Copyright 2016 NXP
 *
 * This software is owned or controlled by NXP and may only be used
 * strictly in accordance with the applicable license terms.  By expressly
 * accepting such terms or by downloading, installing, activating and/or
 * otherwise using the software, you are agreeing that you have read, and
 * that you agree to comply with and are bound by, such license terms.  If
 * you do not agree to be bound by the applicable license terms, then you
 * may not retain, install, activate or otherwise use the software.
 * **************************************************************************
 *
 *    Name: mainA71CHLight.c
 *
 *  This file contains the main entry for a simplified host library example application
 *  Support for SCP03 is excluded from the Library and Application
 *
 ****************************************************************************/

#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include "smComSCI2C.h"
#include <string.h>
#include "uECC.h"
#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include <a71ch_const.h>
#include "ax_api.h"
#include "ax_util.h"
#include "sm_apdu.h"
#include "sm_errors.h"
#include "tst_sm_time.h"
#include "ax_api.h"
#include "axHostCrypto.h"
#include "sm_timer.h"
#include "app_boot.h"
#include "global_platf.h"
#include "sm_printf.h"
#include "tstHostCrypto.h"

U8 exLight(void);

// ---------------------------------------------------------------------
//           Please do not change the following defines
// ---------------------------------------------------------------------

#define EX_APP_VERSION "1.00:1.01"
#if defined(USE_RTOS) && USE_RTOS == 1
void mainA71CHLight(void * pTask);
#else
int mainA71CHLight(const char * connectHandle);
#endif

/*******************************************************************************
 **   Main Function  main()
 *******************************************************************************/
int main(int argc, const char * argv[]) {
    app_boot_Init();

#if defined(USE_RTOS) && USE_RTOS == 1

    if (xTaskCreate(mainA71CHLight, "mainA71CHLight", configMINIMAL_STACK_SIZE + 400, NULL, mainA71CHLight_task_PRIORITY, NULL) != pdPASS)
    {
        sm_printf(DBGOUT, "Failed to create slave task");
        while (1)
            ;
    }

    vTaskStartScheduler();
    for (;;)
        ;
#else
    mainA71CHLight(argc == 2 ?  argv[1] : NULL);
#endif
    return 0;
}

#if defined(USE_RTOS) && USE_RTOS == 1
void mainA71CHLight(void * connectHandle)
#else
int mainA71CHLight(const char * connectHandle)
#endif
{



    sm_printf(DBGOUT, "a71ch HostLibrary light application (Rev %s)\r\n",
    EX_APP_VERSION);
    sm_printf(DBGOUT, "**********************************************\r\n");
    sm_initSleep();
    sm_printf(DBGOUT, "Connect to A71CH-SM. Chunksize at link layer = %d.\r\n", MAX_CHUNK_LENGTH_LINK);
U8 atr[64];
U16 atrLen = 64;
int sw = smComSCI2C_Open(ESTABLISH_SCI2C, 0x00, atr,&atrLen);
if (sw == SW_OK)
	printf("A71CH Init Successful\n\r");
else{
	printf("A71CH Init Failed\n\r");
	return -1;
}
   /* connectStatus = app_boot_Connect(&commState, connectHandle);

    if (connectStatus != 0) {
        sm_printf(CONSOLE, "Connection failed. SW = %d\r\n", connectStatus);
        #if defined(USE_RTOS) && USE_RTOS == 1
            assert(0);
        #else
            return connectStatus;
        #endif
    }
*/
eccKeyComponents_t dodo[5];
dodo[0].pubLen = sizeof(dodo->pub);
dodo[0].curve = ECCCurve_NIST_P256;
dodo[1].pubLen = sizeof(dodo->pub);

sw =  -1;
int i = 0;
U8 uid[36]= {0};
U16 size = 36;
  if ( A71_GetPublicKeyEccKeyPair(0, dodo[0].pub, &(dodo[0].pubLen)) == SW_OK)
    {       printf("PUB KEY IS : ");
            for(i = 0; i < 65 ; i++)
            {
                printf("%02x",dodo[0].pub[i]);
            }
            printf("\n\r");

    }
    // if (A71_GenerateEccKeyPair(0) == SW_OK)
    // {
    //     if ( A71_GetPublicKeyEccKeyPair(0, dodo[0].pub, &(dodo[0].pubLen)) == SW_OK)
    //     {

    //         printf("Get Good 1.\n\r");
    //         for(i = 0; i < 65 ; i++)
    //         {
    //             printf(" %d",dodo[0].pub[i]);
    //         }
    //         printf("\n\r");
    //         if(A71_SetEccPublicKey(0,dodo[0].pub, dodo[0].pubLen) == SW_OK)
    //             printf("Key saved at index %d\n\r",0);
    //     }
    // }
    //  if (A71_GenerateEccKeyPair(1) == SW_OK)
    // {
    //     if ( A71_GetPublicKeyEccKeyPair(1, dodo[1].pub, &(dodo[1].pubLen)) == SW_OK)
    //     {

    //         printf("Get Good 2.\n\r");
    //         for(i = 0; i < 65 ; i++)
    //         {
    //             printf(" %d",dodo[1].pub[i]);
    //         }
    //         printf("\n\r");
    //         if(A71_SetEccPublicKey(1,dodo[1].pub, dodo[1].pubLen) == SW_OK)
    //             printf("Key saved at index %d\n\r",0);
    //     }
    // }
    // sw = A71_GetUniqueID(uid,&size);

    // if(sw == SW_OK)
    // printf("UNIQUE ID = ");
    // for(i = 0; i < 18 ; i++)
    // {
    //     printf(" %d",uid[i]);
    // }
    // printf("\n\r");
    // U8 rnd[64];
    // sw = A71_GetRandom(rnd,64);
    // if(sw == SW_OK)
    // printf("RANDOM NUMBER = ");
    // for(i = 0; i < 65 ; i++)
    // {
    //     printf(" %d",rnd[i]);
    // }
    // printf("\n\r");


U8 str[] = {"HELLO WORLD !"};
U8 sha[32] = {0};
U16 shaLen =32;
U8 sign1[256] = {0};
U16 signLen1 = 256;
U8 sign2[256] = {0};
U16 signLen2 = 256;
if (A71_GetSha256(str,sizeof(str),sha,&shaLen)== SW_OK)
{

    if(A71_EccSign(0,sha,shaLen,sign1,&signLen1) == SW_OK)
    {
        printf("Signature size is : %d\n\r",signLen1);
        printf("SIGNATURE IS : ");
        for(i=0;i<signLen1;i++)
        {
            printf("%02x",sign1[i]);
        }
        puts("");

        int ress = uECC_verify(dodo[0].pub, sha, shaLen, sign1+2, uECC_secp256r1());
        printf("RES IS %d\n",ress);

        puts("Sign Succesfull");
        U8 res = 0;
        if(A71_EccVerify(0,sha,shaLen,sign1,signLen1,&res)==SW_OK)
        printf("RESULT OF VERIFY IS %d\n\r",res);
        if(A71_EccVerifyWithKey(dodo[0].pub,dodo[0].pubLen,sha,shaLen,sign1,signLen1,&res)==SW_OK)
        printf("RESULT OF VERIFY IS %d\n\r",res);

        #include <fcntl.h>
        FILE *fp;
        fp=fopen("sign.txt","wb");
        if(fp != NULL )
        {
        fprintf(fp,"%s", sign1);
        fclose(fp);
        }

    }
     if(A71_EccNormalizedAsnSign(0,sha,shaLen,sign1,&signLen1) == SW_OK)
    {
        printf("Signature size is : %d\n\r",signLen1);
        printf("SIGNATURE IS : ");
        for(i=0;i<signLen1;i++)
        {
            printf("%02x",sign1[i]);
        }
        puts("");

        int ress = uECC_verify(dodo[0].pub, sha, shaLen, sign1, uECC_secp256r1());
        printf("RES IS %d\n",ress);

        puts("Sign Succesfull");
        U8 res = 0;
        if(A71_EccVerify(0,sha,shaLen,sign1,signLen1,&res)==SW_OK)
        printf("RESULT OF VERIFY IS %d\n\r",res);
        if(A71_EccVerifyWithKey(dodo[0].pub,dodo[0].pubLen,sha,shaLen,sign1,signLen1,&res)==SW_OK)
        printf("RESULT OF VERIFY IS %d\n\r",res);

        #include <fcntl.h>
        FILE *fp;
        fp=fopen("sign.txt","wb");
        if(fp != NULL )
        {
        fprintf(fp,"%s", sign1);
        fclose(fp);
        }

    }
    //  if(A71_EccSign(1,sha,32,sign2,&signLen2) == SW_OK)
    // {
    //     puts("Sign Succesfull");
    //     U8 res = 0;
    //     if(A71_EccVerify(1,sha,shaLen,sign2,signLen2,&res)==SW_OK)
    //     printf("RESULT OF VERIFY IS %d\n\r",res);
    //     if(A71_EccVerifyWithKey(dodo[1].pub,dodo[1].pubLen,sha,shaLen,sign2,signLen2,&res)==SW_OK)
    //     printf("RESULT OF VERIFY IS %d\n\r",res);
    // }
}

return 0;
}
