/**
 * @file i2c_a7.c
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
 * i.MX6UL board specific i2c code
 * @par History
 *
 **/
#include "i2c_a7.h"
#include <stdio.h>
#include <string.h>

#include <fcntl.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <linux/i2c-dev.h>
#include <linux/i2c.h>
#include <time.h>
#include "pigpio.h"

// #define LOG_I2C 1
#define I2C_SDA 17
#define I2C_SCL 27
#define I2C_SPEED 400000
#define A71CH_ADDRESS 0x48

/**
* Opens the communication channel to I2C device
*/
i2c_error_t axI2CInit()
{
    if(gpioInitialise() == PI_INIT_FAILED )
    {
        printf("PIGPIO INIT FAILED /n/r");
        return -1;
    }
    if(bbI2COpen(I2C_SDA,I2C_SCL,I2C_SPEED) < 0)
    {
        printf("PIGPIO BITBANG INIT FAILED");
        return -1;
    }
    return I2C_OK;
}
/**
* Closes the communication channel to I2C device (not implemented)
*/
void axI2CTerm(int mode)
{
    bbI2CClose(I2C_SDA);
    gpioTerminate();
}

/**
 * Write a single byte to the slave device.
 * In the context of the SCI2C protocol, this command is only invoked
 * to trigger a wake-up of the attached secure module. As such this
 * wakeup command 'wakes' the device, but does not receive a valid response.
 * \note \par bus is currently not used to distinguish between I2C masters.
*/
i2c_error_t axI2CWriteByte(unsigned char bus, unsigned char addr, unsigned char *pTx)
{
    int nrWritten = -1;
    i2c_error_t rv;
    extern unsigned int bytesLen;
    bytesLen = 1;
    if (bus != I2C_BUS_0)
    {
        printf("axI2CWriteByte on wrong bus %x (addr %x)\n", bus, addr);
    }
    char ReadBuf[256];
    char CmdBuf[] = {PI_I2C_ADDR, A71CH_ADDRESS, // Chip address
    PI_I2C_START,PI_I2C_WRITE,*pTx, // set the register address as 0x01 to read the register
    PI_I2C_STOP, // Read 7 register.
    PI_I2C_END // EOL
    };

    nrWritten = bbI2CZip(I2C_SDA,CmdBuf,sizeof(CmdBuf),ReadBuf,256);

    if (nrWritten < 0)
    {
        // printf("Failed writing data (nrWritten=%d).\n", nrWritten);
        rv = I2C_FAILED;
    }
    else
    {
         rv = I2C_OK;
    }

    return rv;
}

i2c_error_t axI2CWrite(unsigned char bus, unsigned char addr, unsigned char * pTx, unsigned short txLen)
{
    int nrWritten = -1;
    i2c_error_t rv;
    extern unsigned int bytesLen;
    bytesLen = txLen ;
#ifdef LOG_I2C
    int i = 0;
#endif
    if (bus != I2C_BUS_0)
    {
        printf("axI2CWrite on wrong bus %x (addr %x)\n", bus, addr);
    }
#ifdef LOG_I2C
    printf("TX (axI2CWrite): ");
    for (i = 0; i < txLen; i++)
    {
        printf("%02X ", pTx[i]);
    }
    printf("\n");
#endif
    bytesLen = txLen;
    char ReadBuf[256];
    char CmdBuf[6+txLen];
    memcpy(CmdBuf+4,pTx,txLen);
    CmdBuf[0]=PI_I2C_ADDR;
    CmdBuf[1]=A71CH_ADDRESS;
    CmdBuf[2]=PI_I2C_START;
    CmdBuf[3]=PI_I2C_WRITE;
    CmdBuf[5+txLen]=PI_I2C_END;
    CmdBuf[4+txLen]=PI_I2C_STOP;

    nrWritten = bbI2CZip(I2C_SDA,CmdBuf,sizeof(CmdBuf),ReadBuf,256);
   if (nrWritten < 0)
   {
      printf("Failed writing data (nrWritten=%d).\n", nrWritten);
      rv = I2C_FAILED;
   }
   else
   {
      rv = I2C_OK;
   }
#ifdef LOG_I2C
    printf("    Done with rv = %02x ", rv);
    printf("\n");
#endif

   return rv;
}

i2c_error_t axI2CWriteRead(unsigned char bus, unsigned char addr, unsigned char * pTx,
      unsigned short txLen, unsigned char * pRx, unsigned short * pRxLen)
{
    int r = 0;
    int i = 0;
    char ReadBuf[256];
    extern unsigned int bytesLen;
    bytesLen = txLen ;

    if (bus != I2C_BUS_0) // change if bus 0 is not the correct bus
    {
        printf("axI2CWriteRead on wrong bus %x (addr %x)\n", bus, addr);
    }

    char CmdBuf[] = {PI_I2C_ADDR, A71CH_ADDRESS, // Chip address
        PI_I2C_START,PI_I2C_WRITE,*pTx, // set the register address as 0x01 to read the register
        PI_I2C_COMBINED_ON,PI_I2C_READ,0xff,PI_I2C_STOP, // Read 7 register.
        PI_I2C_END // EOL
        };
    bbI2CZip(I2C_SDA,CmdBuf,sizeof(CmdBuf),ReadBuf,256);
    if (r < 0)
    {
#ifdef LOG_I2C
        printf("axI2CWriteRead: ioctl cmd I2C_RDWR fails with value %d (hex: 0x%08X)\n", r, r);
        perror("Errorstring: ");
#endif
        // printf("axI2CWriteRead: ioctl value %d (hex: 0x%08X)\n", r, r);
        return I2C_FAILED;
    }
    else
    {
        int rlen = ReadBuf[0]+1;

#ifdef LOG_I2C
        printf("RX  (%d): ", rlen);
        for (i = 0; i < rlen; i++)
        {
            printf("%02X ", packets.msgs[1].buf[i]);
        }
        printf("\n");
#endif
        for (i = 0; i < rlen; i++)
        {
            pRx[i] = ReadBuf[i];
        }
        *pRxLen = rlen;
    }

    return I2C_OK;
}
