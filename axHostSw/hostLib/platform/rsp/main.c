#include "pigpio.h"
#include "stdio.h"
#include <unistd.h>
#define I2C_SDA 17
#define I2C_SCL 27
#define I2C_SPEED 200000


static int axI2CInit()
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
    printf("INIT SUCCESS!!\n\r");
}

int main()
{
    char ReadBuf[24];
    int i=0;
    for(i = 0 ; i<0;i++)
	    printf("RIDDLE AND CODE\n\r");
  //  axI2CInit();
    while (1)
    {
        char CmdBuf1[] = {4, 0x48, // Chip address
        0x02,0x07,0x01,0x07, // set the register address as 0x01 to read the register
        0x02,0x06,0x02,0x03, // Read 7 register.
        0 // EOL
        };
	char CmdBuf[] = {0x04,0x48,
	0x02,0x07,0x01,0x07,
	0x00
	};

    //    bbI2CZip(17,CmdBuf1,sizeof(CmdBuf1),ReadBuf,24);
//	sleep(1);
    }
}
