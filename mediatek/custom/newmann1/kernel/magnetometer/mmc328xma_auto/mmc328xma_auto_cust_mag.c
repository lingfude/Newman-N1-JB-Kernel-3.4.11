#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_mag.h>


static struct mag_hw mmc328x_auto_cust_mag_hw = {
    .i2c_num = 0,
    .direction = 5,//6
    .power_id = MT65XX_POWER_NONE,  /*!< LDO is not used */
    .power_vol= VOL_DEFAULT,        /*!< LDO is not used */
};
struct mag_hw* mmc328x_get_cust_mag_hw(void) 
{
    return &mmc328x_auto_cust_mag_hw;
}
