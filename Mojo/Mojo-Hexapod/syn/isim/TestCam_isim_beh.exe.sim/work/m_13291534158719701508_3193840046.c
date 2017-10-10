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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/nestea/Documentos/Mojo-Hexapod/src/ov2640.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {197U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Cont_25_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 11472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15456);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_69_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 11720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 9440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 15264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_70_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 11968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 8480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15280);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_71_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 8800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15296);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_72_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 12464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 9120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 15312);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_111_5(char *t0)
{
    char t11[8];
    char t24[8];
    char t50[8];
    char t52[8];
    char t53[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 12712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 15328);
    *((int *)t2) = 1;
    t3 = (t0 + 12744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 7680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 7520);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 18);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 7360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7200);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 7360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 744);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 7200);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB19:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 9760);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9600);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 10080);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 9440);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9280);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 16);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 10400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10240);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 5520U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t2) == 0)
        goto LAB73;

LAB75:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;

LAB76:    t6 = (t11 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB2;

LAB7:    xsi_set_current_line(119, ng0);

LAB20:    xsi_set_current_line(120, ng0);
    t5 = (t0 + 8160);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 18, t9, 18, t10, 18);
    t12 = (t0 + 8000);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 18);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 8160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t11, 0, 8);
    t6 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 | t14);
    if (t15 != 262143U)
        goto LAB22;

LAB21:    if (*((unsigned int *)t6) == 0)
        goto LAB23;

LAB24:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;

LAB22:    t9 = (t11 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(124, ng0);

LAB28:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4720U);
    t5 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t5 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t2) == 0)
        goto LAB29;

LAB31:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB32:    t7 = (t11 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB19;

LAB11:    xsi_set_current_line(134, ng0);

LAB46:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 8160);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 18, t6, 18, t7, 18);
    t9 = (t0 + 8000);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 18);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 8160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t11, 0, 8);
    t6 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 | t14);
    if (t15 != 262143U)
        goto LAB48;

LAB47:    if (*((unsigned int *)t6) == 0)
        goto LAB49;

LAB50:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;

LAB48:    t9 = (t11 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (~(t16));
    t18 = *((unsigned int *)t11);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB51;

LAB52:
LAB53:    goto LAB19;

LAB13:    xsi_set_current_line(139, ng0);

LAB54:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4720U);
    t5 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t5 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t2) == 0)
        goto LAB55;

LAB57:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB58:    t7 = (t11 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB59;

LAB60:
LAB61:    goto LAB19;

LAB15:    xsi_set_current_line(149, ng0);

LAB72:    goto LAB19;

LAB23:    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB25:    xsi_set_current_line(122, ng0);
    t10 = (t0 + 880);
    t12 = *((char **)t10);
    t10 = (t0 + 7200);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 3);
    goto LAB27;

LAB29:    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(125, ng0);

LAB36:    xsi_set_current_line(126, ng0);
    t9 = (t0 + 7680);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t23 = ((char*)((ng3)));
    memset(t24, 0, 8);
    t25 = (t12 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB38;

LAB37:    if (t36 != 0)
        goto LAB39;

LAB40:    t40 = (t24 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(129, ng0);

LAB45:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 7200);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB43:    goto LAB35;

LAB38:    *((unsigned int *)t24) = 1;
    goto LAB40;

LAB39:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(126, ng0);

LAB44:    xsi_set_current_line(127, ng0);
    t46 = (t0 + 7680);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng1)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 8, t48, 8, t49, 8);
    t51 = (t0 + 7520);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 8);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB43;

LAB49:    *((unsigned int *)t11) = 1;
    goto LAB48;

LAB51:    xsi_set_current_line(137, ng0);
    t10 = (t0 + 1152);
    t12 = *((char **)t10);
    t10 = (t0 + 7200);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 3);
    goto LAB53;

LAB55:    *((unsigned int *)t11) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(140, ng0);

LAB62:    xsi_set_current_line(141, ng0);
    t9 = (t0 + 7680);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t23 = ((char*)((ng4)));
    memset(t24, 0, 8);
    t25 = (t12 + 4);
    t26 = (t23 + 4);
    t27 = *((unsigned int *)t12);
    t28 = *((unsigned int *)t23);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB64;

LAB63:    if (t36 != 0)
        goto LAB65;

LAB66:    t40 = (t24 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(144, ng0);

LAB71:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 7200);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB69:    goto LAB61;

LAB64:    *((unsigned int *)t24) = 1;
    goto LAB66;

LAB65:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(141, ng0);

LAB70:    xsi_set_current_line(142, ng0);
    t46 = (t0 + 7680);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = ((char*)((ng1)));
    memset(t50, 0, 8);
    xsi_vlog_unsigned_add(t50, 8, t48, 8, t49, 8);
    t51 = (t0 + 7520);
    xsi_vlogvar_assign_value(t51, t50, 0, 0, 8);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB69;

LAB73:    *((unsigned int *)t11) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(166, ng0);

LAB80:    xsi_set_current_line(167, ng0);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 10560);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5040U);
    t3 = *((char **)t2);
    t2 = (t0 + 9600);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 5200U);
    t3 = *((char **)t2);
    t2 = (t0 + 9920);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5200U);
    t3 = *((char **)t2);
    t2 = (t0 + 10080);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t11, 2, 2, 2U, t6, 1, t3, 1);
    t7 = ((char*)((ng5)));
    memset(t24, 0, 8);
    t9 = (t11 + 4);
    t10 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t27 = (~(t22));
    t28 = (t19 & t27);
    if (t28 != 0)
        goto LAB84;

LAB81:    if (t22 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t24) = 1;

LAB84:    t23 = (t24 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB85;

LAB86:
LAB87:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 5040U);
    t3 = *((char **)t2);
    t2 = (t0 + 9760);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t11, 2, 2, 2U, t6, 1, t3, 1);
    t7 = ((char*)((ng5)));
    memset(t24, 0, 8);
    t9 = (t11 + 4);
    t10 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t27 = (~(t22));
    t28 = (t19 & t27);
    if (t28 != 0)
        goto LAB91;

LAB88:    if (t22 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t24) = 1;

LAB91:    t23 = (t24 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 5200U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB98;

LAB96:    if (*((unsigned int *)t2) == 0)
        goto LAB95;

LAB97:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;

LAB98:    memset(t24, 0, 8);
    t6 = (t11 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t6) != 0)
        goto LAB101;

LAB102:    t9 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (!(t27));
    t29 = *((unsigned int *)t9);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB103;

LAB104:    memcpy(t53, t24, 8);

LAB105:    t49 = (t53 + 4);
    t72 = *((unsigned int *)t49);
    t73 = (~(t72));
    t74 = *((unsigned int *)t53);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB117;

LAB118:
LAB119:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 5040U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t2) != 0)
        goto LAB122;

LAB123:    t6 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t6);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB124;

LAB125:    memcpy(t50, t11, 8);

LAB126:    t40 = (t50 + 4);
    t64 = *((unsigned int *)t40);
    t65 = (~(t64));
    t66 = *((unsigned int *)t50);
    t68 = (t66 & t65);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB134;

LAB135:
LAB136:    goto LAB79;

LAB83:    t12 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(173, ng0);
    t25 = ((char*)((ng1)));
    t26 = (t0 + 8320);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    goto LAB87;

LAB90:    t12 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(176, ng0);
    t25 = ((char*)((ng1)));
    t26 = (t0 + 8640);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    goto LAB94;

LAB95:    *((unsigned int *)t11) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t24) = 1;
    goto LAB102;

LAB101:    t7 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB102;

LAB103:    t10 = (t0 + 5040U);
    t12 = *((char **)t10);
    memset(t50, 0, 8);
    t10 = (t12 + 4);
    t31 = *((unsigned int *)t10);
    t32 = (~(t31));
    t33 = *((unsigned int *)t12);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB109;

LAB107:    if (*((unsigned int *)t10) == 0)
        goto LAB106;

LAB108:    t23 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t23) = 1;

LAB109:    memset(t52, 0, 8);
    t25 = (t50 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (~(t36));
    t38 = *((unsigned int *)t50);
    t41 = (t38 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t25) != 0)
        goto LAB112;

LAB113:    t43 = *((unsigned int *)t24);
    t44 = *((unsigned int *)t52);
    t45 = (t43 | t44);
    *((unsigned int *)t53) = t45;
    t39 = (t24 + 4);
    t40 = (t52 + 4);
    t46 = (t53 + 4);
    t54 = *((unsigned int *)t39);
    t55 = *((unsigned int *)t40);
    t56 = (t54 | t55);
    *((unsigned int *)t46) = t56;
    t57 = *((unsigned int *)t46);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB105;

LAB106:    *((unsigned int *)t50) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t52) = 1;
    goto LAB113;

LAB112:    t26 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB113;

LAB114:    t59 = *((unsigned int *)t53);
    t60 = *((unsigned int *)t46);
    *((unsigned int *)t53) = (t59 | t60);
    t47 = (t24 + 4);
    t48 = (t52 + 4);
    t61 = *((unsigned int *)t47);
    t62 = (~(t61));
    t63 = *((unsigned int *)t24);
    t8 = (t63 & t62);
    t64 = *((unsigned int *)t48);
    t65 = (~(t64));
    t66 = *((unsigned int *)t52);
    t67 = (t66 & t65);
    t68 = (~(t8));
    t69 = (~(t67));
    t70 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t70 & t68);
    t71 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t71 & t69);
    goto LAB116;

LAB117:    xsi_set_current_line(179, ng0);
    t51 = ((char*)((ng2)));
    t77 = (t0 + 10240);
    xsi_vlogvar_assign_value(t77, t51, 0, 0, 1);
    goto LAB119;

LAB120:    *((unsigned int *)t11) = 1;
    goto LAB123;

LAB122:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB123;

LAB124:    t7 = (t0 + 5200U);
    t9 = *((char **)t7);
    memset(t24, 0, 8);
    t7 = (t9 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (~(t21));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t22);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t7) != 0)
        goto LAB129;

LAB130:    t30 = *((unsigned int *)t11);
    t31 = *((unsigned int *)t24);
    t32 = (t30 & t31);
    *((unsigned int *)t50) = t32;
    t12 = (t11 + 4);
    t23 = (t24 + 4);
    t25 = (t50 + 4);
    t33 = *((unsigned int *)t12);
    t34 = *((unsigned int *)t23);
    t35 = (t33 | t34);
    *((unsigned int *)t25) = t35;
    t36 = *((unsigned int *)t25);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB126;

LAB127:    *((unsigned int *)t24) = 1;
    goto LAB130;

LAB129:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB130;

LAB131:    t38 = *((unsigned int *)t50);
    t41 = *((unsigned int *)t25);
    *((unsigned int *)t50) = (t38 | t41);
    t26 = (t11 + 4);
    t39 = (t24 + 4);
    t42 = *((unsigned int *)t11);
    t43 = (~(t42));
    t44 = *((unsigned int *)t26);
    t45 = (~(t44));
    t54 = *((unsigned int *)t24);
    t55 = (~(t54));
    t56 = *((unsigned int *)t39);
    t57 = (~(t56));
    t8 = (t43 & t45);
    t67 = (t55 & t57);
    t58 = (~(t8));
    t59 = (~(t67));
    t60 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t60 & t58);
    t61 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t61 & t59);
    t62 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t62 & t58);
    t63 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t63 & t59);
    goto LAB133;

LAB134:    xsi_set_current_line(181, ng0);

LAB137:    xsi_set_current_line(182, ng0);
    t46 = (t0 + 5360U);
    t47 = *((char **)t46);
    t46 = (t0 + 9440);
    t48 = (t46 + 56U);
    t49 = *((char **)t48);
    memset(t53, 0, 8);
    t51 = (t53 + 4);
    t77 = (t49 + 4);
    t70 = *((unsigned int *)t49);
    t71 = (t70 >> 0);
    *((unsigned int *)t53) = t71;
    t72 = *((unsigned int *)t77);
    t73 = (t72 >> 0);
    *((unsigned int *)t51) = t73;
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t74 & 255U);
    t75 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t75 & 255U);
    xsi_vlogtype_concat(t52, 16, 16, 2U, t53, 8, t47, 8);
    t78 = (t0 + 9280);
    xsi_vlogvar_assign_value(t78, t52, 0, 0, 16);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 10400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t11, 0, 8);
    t6 = (t5 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB141;

LAB139:    if (*((unsigned int *)t6) == 0)
        goto LAB138;

LAB140:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;

LAB141:    t9 = (t11 + 4);
    t10 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    *((unsigned int *)t11) = t19;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB143;

LAB142:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t29 & 1U);
    t12 = (t0 + 10240);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 10400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t13 = *((unsigned int *)t6);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB144;

LAB145:
LAB146:    goto LAB136;

LAB138:    *((unsigned int *)t11) = 1;
    goto LAB141;

LAB143:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = *((unsigned int *)t9);
    t27 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t27);
    goto LAB142;

LAB144:    xsi_set_current_line(185, ng0);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 8960);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 1);
    goto LAB146;

}

static void Always_190_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 12960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 15344);
    *((int *)t2) = 1;
    t3 = (t0 + 12992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(190, ng0);

LAB5:    xsi_set_current_line(191, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(195, ng0);

LAB10:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7680);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 8000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8160);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 18, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 7200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7360);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 8320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8480);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 8640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8800);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 8960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9120);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 9280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9440);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = (t0 + 9600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9760);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 9920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 10240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10400);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(191, ng0);

LAB9:    xsi_set_current_line(192, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 7680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8160);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 18, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t2 = (t0 + 7360);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB8;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 13208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2320U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 15776);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 15360);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 15840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 15904);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 15968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig5_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 14200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 16032);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig6_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 14448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 16096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig7_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 14696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3440U);
    t4 = *((char **)t2);
    t2 = (t0 + 3120U);
    t5 = *((char **)t2);
    t2 = (t0 + 3280U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 10, 10, 3U, t6, 1, t5, 1, t4, 8);
    t2 = (t0 + 16160);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 1023U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 9);
    t19 = (t0 + 15376);
    *((int *)t19) = 1;

LAB1:    return;
}

static void implSig8_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 14944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 16224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_13291534158719701508_3193840046_init()
{
	static char *pe[] = {(void *)Cont_25_0,(void *)Cont_69_1,(void *)Cont_70_2,(void *)Cont_71_3,(void *)Cont_72_4,(void *)Always_111_5,(void *)Always_190_6,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute,(void *)implSig8_execute};
	xsi_register_didat("work_m_13291534158719701508_3193840046", "isim/TestCam_isim_beh.exe.sim/work/m_13291534158719701508_3193840046.didat");
	xsi_register_executes(pe);
}
