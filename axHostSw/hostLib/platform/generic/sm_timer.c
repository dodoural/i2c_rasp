/**
* @file sm_timer.c
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
* This file implements implements platform independent sleep functionality
* @par History
*
*****************************************************************************/

#include <stdint.h>
#ifdef LINUX
#include <unistd.h>
#endif
#include <time.h>
#include "sm_timer.h"

/* initializes the system tick counter
 * return 0 on succes, 1 on failure */
uint32_t sm_initSleep()
{
    return 0;
}

/**
 * Implement a blocking (for the calling thread) wait for a number of milliseconds.
 */
void sm_sleep(uint32_t msec)
{
#ifdef LINUX
    useconds_t microsec = msec*1000;
    usleep(microsec);
#else
    clock_t goal = msec + clock();
    while (goal > clock());
#endif
}

/**
 * Implement a blocking (for the calling thread) wait for a number of microseconds
 */
void sm_usleep(uint32_t microsec)
{
#ifdef LINUX
    usleep(microsec);
#else
#ifdef _WIN32
#pragma message ( "No sm_usleep implemented" )
#else
#warning "No sm_usleep implemented"
#endif
#endif
}
