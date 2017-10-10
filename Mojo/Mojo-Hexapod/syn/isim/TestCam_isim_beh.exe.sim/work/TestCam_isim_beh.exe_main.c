/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_10923636775739984753_3342287592_init();
    xilinxcorelib_ver_m_03971639830285338144_2247654869_init();
    xilinxcorelib_ver_m_08863506630922086634_2749839746_init();
    xilinxcorelib_ver_m_02693843609087607046_0422120331_init();
    xilinxcorelib_ver_m_15865681622471344847_3774233031_init();
    xilinxcorelib_ver_m_14518455072116702019_2432590907_init();
    work_m_05880053597461080167_1424522592_init();
    work_m_14313714180068397023_1360385356_init();
    work_m_08830432943141599017_2309063917_init();
    work_m_13291534158719701508_3193840046_init();
    work_m_15766603861423872602_0756200589_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_15766603861423872602_0756200589");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
