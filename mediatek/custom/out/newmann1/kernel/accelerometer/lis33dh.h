#ifndef LIS33DH_H
#define LIS33DH_H
	 
#include <linux/ioctl.h>

extern struct acc_hw* lis33dh_get_cust_acc_hw(void); 

#define LIS33DH_I2C_SLAVE_ADDR		0x30//0x30<-> SD0=GND;0x32<-> SD0=High
	 
	 /* LIS33DH Register Map  (Please refer to LIS33DH Specifications) */
#define LIS33DH_REG_CTL_REG1		0x20
#define LIS33DH_REG_CTL_REG2		0x21
#define LIS33DH_REG_CTL_REG3		0x22
#define LIS33DH_REG_CTL_REG4		0x23
#define LIS33DH_REG_DATAX0		    0x28
#define LIS33DH_REG_OUT_X		    0x28
#define LIS33DH_REG_OUT_Y		    0x2A
#define LIS33DH_REG_OUT_Z		    0x2C


#define LIS33DH_REG_DEVID			0x0f
#define LIS33DH_REG_THRESH_TAP		0x1D
#define LIS33DH_REG_OFSX			0x1E
#define LIS33DH_REG_OFSY			0x1F
#define LIS33DH_REG_OFSZ			0x20
#define LIS33DH_REG_DUR				0x21
#define LIS33DH_REG_THRESH_ACT		0x24
#define LIS33DH_REG_THRESH_INACT	0x25
#define LIS33DH_REG_TIME_INACT		0x26
#define LIS33DH_REG_ACT_INACT_CTL	0x27
#define LIS33DH_REG_THRESH_FF		0x28
#define LIS33DH_REG_TIME_FF			0x29
#define LIS33DH_REG_TAP_AXES		0x2A
#define LIS33DH_REG_ACT_TAP_STATUS	0x2B
#define	LIS33DH_REG_BW_RATE			0x2C
#define LIS33DH_REG_POWER_CTL		0x2D
#define LIS33DH_REG_INT_ENABLE		0x2E
#define LIS33DH_REG_INT_MAP			0x2F
#define LIS33DH_REG_INT_SOURCE		0x30
#define LIS33DH_REG_DATA_FORMAT		0x31
#define LIS33DH_REG_DATAX0			0x32
#define LIS33DH_REG_FIFO_CTL		0x38
#define LIS33DH_REG_FIFO_STATUS		0x39
//*/

//#define LIS3DH_FIXED_DEVID			0xE5
#define LIS33DH_FIXED_DEVID			0x33//modify by lilingyun
	 
#define LIS33DH_BW_200HZ			0x60
#define LIS33DH_BW_100HZ			0x50 //400 or 100 on other choise //changed
#define LIS33DH_BW_50HZ				0x40
#define LIS33DH_BW_25HZ				0x30

#define	LIS33DH_FULLRANG_LSB		0XFF
	 
#define LIS33DH_MEASURE_MODE		0x08	//changed 
#define LIS33DH_DATA_READY			0x07    //changed
	 
//#define LIS33DH_FULL_RES			0x08
#define LIS33DH_RANGE_2G			0x00
#define LIS33DH_RANGE_4G			0x10
#define LIS33DH_RANGE_8G			0x20 //8g or 2g no ohter choise//changed
//#define LIS33DH_RANGE_16G			0x30 //8g or 2g no ohter choise//changed

#define LIS33DH_SELF_TEST           0x10 //changed
	 
#define LIS33DH_STREAM_MODE			0x80
#define LIS33DH_SAMPLES_15			0x0F
	 
#define LIS33DH_FS_8G_LSB_G			0x20
#define LIS33DH_FS_4G_LSB_G			0x10
#define LIS33DH_FS_2G_LSB_G			0x00
	 
#define LIS33DH_LEFT_JUSTIFY		0x04
#define LIS33DH_RIGHT_JUSTIFY		0x00
	 
	 
#define LIS33DH_SUCCESS						0
#define LIS33DH_ERR_I2C						-1
#define LIS33DH_ERR_STATUS					-3
#define LIS33DH_ERR_SETUP_FAILURE			-4
#define LIS33DH_ERR_GETGSENSORDATA			-5
#define LIS33DH_ERR_IDENTIFICATION			-6
	 
	 
	 
#define LIS33DH_BUFSIZE				256
	 
#endif

