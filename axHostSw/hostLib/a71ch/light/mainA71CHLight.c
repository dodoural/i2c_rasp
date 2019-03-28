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

#include <stdint.h>

#include <stdio.h>

#include <assert.h>

#include <a71ch_const.h>

#include "ax_api.h"

#include "ax_util.h"

#include "sm_apdu.h"

#include "sm_errors.h"


#include "tst_sm_time.h"

#ifdef _WIN32
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#endif
#include "ax_api.h"
#include "axHostCrypto.h"
#include "sm_timer.h"
#include "app_boot.h"
#include "global_platf.h"
#include "sm_printf.h"

#if defined(USE_RTOS) && USE_RTOS == 1
#include "FreeRTOS.h"
#include "task.h"
#define mainA71CHLight_task_PRIORITY (configMAX_PRIORITIES - 4)
#endif

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
    U8 result = 1;
   // int connectStatus = 0;
    SmCommState_t commState;
    time_t now;
    axTimeMeasurement_t execTime;
#ifdef TDA8029_UART
    Scp03SessionState_t sessionState;
#endif



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
    sw =  -1;
    U8 uid[18]= {0};
    U16 size = 18;
    sw = A71_GetUniqueID(uid,&size);
    if(sw == SW_OK)
    printf("\n\rUNIQUE ID = %s\n\r",uid);
    U8 rnd[64];
    sw = A71_GetRandom(rnd,64);
    if(sw == SW_OK)
    printf("\n\rRANDOM NUMBER =%s\n\r",rnd);

 uint16_t value = 65;
 uint8_t pubkey[88] = {0};
        if ( A71_GetPublicKeyEccKeyPair(0, pubkey, &value) == SMCOM_OK)
            printf("Good.");
        if (A71_GenerateEccKeyPair(0) == SMCOM_OK)
            printf("Good.");
int i = 0;
for(i = 0; i < 65 ; i++)
{
printf(" %d",pubkey[i]);
}
printf("\n\r");
    initMeasurement(&execTime);

    result &= exLight();

    concludeMeasurement(&execTime);
    app_test_status(result);
    now = time(NULL);
    sm_printf(CONSOLE, "\r\n-----------\r\nLight Example Set A71CH finished (Rev %s) on 0x%04X, overall result = %s\r\n%sExec time: %ld ms\r\n------------\r\n",
            EX_APP_VERSION,
            commState.appletVersion,
            ((result == 1) ? "OK" : "FAILED"),
            ctime(&now),
            getMeasurement(&execTime));
    #if defined(USE_RTOS) && USE_RTOS == 1
        vTaskSuspend(NULL);
    #else
        return 0;
    #endif
}
