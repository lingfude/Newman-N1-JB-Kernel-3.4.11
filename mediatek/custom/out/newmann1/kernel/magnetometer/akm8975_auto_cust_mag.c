#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_mag.h>


static struct mag_hw akm8975_auto_cust_mag_hw = {
    .i2c_num = 0,
    .direction = 5,//5
    .power_id = MT65XX_POWER_NONE,  /*!< LDO is not used */
    .power_vol= VOL_DEFAULT,        /*!< LDO is not used */
};
struct mag_hw* akm8975_get_cust_mag_hw(void) 
{
    return &akm8975_auto_cust_mag_hw;
}
