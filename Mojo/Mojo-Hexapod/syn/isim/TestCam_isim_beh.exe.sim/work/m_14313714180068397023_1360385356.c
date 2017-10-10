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
static const char *ng0 = "/home/nestea/Documentos/Mojo-Hexapod/src/sccb.v";
static unsigned int ng1[] = {0U, 1U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {512U, 0U};
static unsigned int ng5[] = {1023U, 0U};
static unsigned int ng6[] = {96U, 0U};
static unsigned int ng7[] = {256U, 0U};



static void Cont_45_0(char *t0)
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

LAB0:    t1 = (t0 + 8496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 7264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10216);
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
    t18 = (t0 + 10056);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_46_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 8744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6944);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 10280);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 10072);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 6624);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng1)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t20, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_47_2(char *t0)
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

LAB0:    t1 = (t0 + 8992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 7584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10344);
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
    t18 = (t0 + 10088);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_48_3(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 9240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 10408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 10104);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_50_4(char *t0)
{
    char t14[8];
    char t32[8];
    char t33[8];
    char t39[8];
    char t47[8];
    char t87[8];
    char t106[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;

LAB0:    t1 = (t0 + 9488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 10120);
    *((int *)t2) = 1;
    t3 = (t0 + 9520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 4384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4224);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 10);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6784);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6624);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 7264);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 7584);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7424);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5184);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 4384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 880);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB26:    xsi_set_current_line(67, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 4864);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 10);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB25;

LAB9:    xsi_set_current_line(78, ng0);

LAB31:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5024);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 10, t6, 10, t7, 10);
    t15 = (t0 + 4864);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 10);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB35;

LAB32:    if (t20 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t14) = 1;

LAB35:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB42;

LAB39:    if (t20 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t14) = 1;

LAB42:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB43;

LAB44:
LAB45:    goto LAB25;

LAB11:    xsi_set_current_line(87, ng0);

LAB47:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 6144);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 4544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB25;

LAB13:    xsi_set_current_line(92, ng0);

LAB48:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5984);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t14, 0, 8);
    t7 = (t14 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t15);
    t13 = (t12 >> 7);
    t16 = (t13 & 1);
    *((unsigned int *)t7) = t16;
    t23 = (t0 + 6464);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6144);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 4544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB25;

LAB15:    xsi_set_current_line(98, ng0);

LAB49:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5664);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t14, 0, 8);
    t7 = (t14 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t15);
    t13 = (t12 >> 7);
    t16 = (t13 & 1);
    *((unsigned int *)t7) = t16;
    t23 = (t0 + 6464);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5664);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6144);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 4544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB25;

LAB17:    xsi_set_current_line(104, ng0);

LAB50:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6464);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 10, t5, 10, t6, 10);
    t7 = (t0 + 4864);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 10);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB54;

LAB51:    if (t20 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t14) = 1;

LAB54:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB61;

LAB58:    if (t20 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t14) = 1;

LAB61:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB62;

LAB63:
LAB64:    goto LAB25;

LAB19:    xsi_set_current_line(114, ng0);

LAB66:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5024);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 10, t6, 10, t7, 10);
    t15 = (t0 + 4864);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 10);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB70;

LAB67:    if (t20 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t14) = 1;

LAB70:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB25;

LAB21:    xsi_set_current_line(119, ng0);

LAB74:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5024);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 10, t6, 10, t7, 10);
    t15 = (t0 + 4864);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 10);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 9);
    t11 = (t10 & 1);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 9);
    t16 = (t13 & 1);
    *((unsigned int *)t6) = t16;
    t15 = (t0 + 7104);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 9);
    t11 = (t10 & 1);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 9);
    t16 = (t13 & 1);
    *((unsigned int *)t6) = t16;
    memset(t32, 0, 8);
    t15 = (t14 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t15) != 0)
        goto LAB77;

LAB78:    t24 = (t32 + 4);
    t22 = *((unsigned int *)t32);
    t25 = *((unsigned int *)t24);
    t26 = (t22 || t25);
    if (t26 > 0)
        goto LAB79;

LAB80:    memcpy(t47, t32, 8);

LAB81:    t78 = (t47 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t47);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB93;

LAB94:
LAB95:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t32, 0, 8);
    t6 = (t32 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 9);
    t11 = (t10 & 1);
    *((unsigned int *)t32) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 9);
    t16 = (t13 & 1);
    *((unsigned int *)t6) = t16;
    memset(t14, 0, 8);
    t15 = (t32 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t32);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB107;

LAB105:    if (*((unsigned int *)t15) == 0)
        goto LAB104;

LAB106:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;

LAB107:    memset(t33, 0, 8);
    t24 = (t14 + 4);
    t22 = *((unsigned int *)t24);
    t25 = (~(t22));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t24) != 0)
        goto LAB110;

LAB111:    t31 = (t33 + 4);
    t29 = *((unsigned int *)t33);
    t36 = *((unsigned int *)t31);
    t37 = (t29 || t36);
    if (t37 > 0)
        goto LAB112;

LAB113:    memcpy(t47, t33, 8);

LAB114:    t78 = (t47 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t47);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB122;

LAB123:
LAB124:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t15);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB133;

LAB130:    if (t20 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t14) = 1;

LAB133:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB134;

LAB135:
LAB136:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 3);
    t16 = (t13 & 1);
    *((unsigned int *)t6) = t16;
    t15 = (t14 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB146;

LAB147:
LAB148:    goto LAB25;

LAB27:    xsi_set_current_line(72, ng0);

LAB30:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 3344U);
    t6 = *((char **)t5);
    t5 = (t0 + 5504);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3184U);
    t3 = *((char **)t2);
    t2 = (t0 + 5824);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB29;

LAB34:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(81, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 6464);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB38;

LAB41:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(82, ng0);

LAB46:    xsi_set_current_line(83, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 7104);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB45;

LAB53:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(108, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 7104);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB57;

LAB60:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(109, ng0);

LAB65:    xsi_set_current_line(110, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 6464);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 4224);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB64;

LAB69:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(117, ng0);
    t30 = (t0 + 880);
    t31 = *((char **)t30);
    t30 = (t0 + 4224);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 3);
    goto LAB73;

LAB75:    *((unsigned int *)t32) = 1;
    goto LAB78;

LAB77:    t23 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB78;

LAB79:    t30 = (t0 + 7264);
    t31 = (t30 + 56U);
    t34 = *((char **)t31);
    memset(t33, 0, 8);
    t35 = (t34 + 4);
    t27 = *((unsigned int *)t35);
    t28 = (~(t27));
    t29 = *((unsigned int *)t34);
    t36 = (t29 & t28);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB85;

LAB83:    if (*((unsigned int *)t35) == 0)
        goto LAB82;

LAB84:    t38 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t38) = 1;

LAB85:    memset(t39, 0, 8);
    t40 = (t33 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t33);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t40) != 0)
        goto LAB88;

LAB89:    t48 = *((unsigned int *)t32);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t32 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB90;

LAB91:
LAB92:    goto LAB81;

LAB82:    *((unsigned int *)t33) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t39) = 1;
    goto LAB89;

LAB88:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB89;

LAB90:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t32 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t32);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t8 = (t64 & t66);
    t71 = (t68 & t70);
    t72 = (~(t8));
    t73 = (~(t71));
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t74 & t72);
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t72);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB92;

LAB93:    xsi_set_current_line(123, ng0);

LAB96:    xsi_set_current_line(124, ng0);
    t84 = (t0 + 5344);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    memset(t87, 0, 8);
    t88 = (t87 + 4);
    t89 = (t86 + 4);
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 3);
    t92 = (t91 & 1);
    *((unsigned int *)t87) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 >> 3);
    t95 = (t94 & 1);
    *((unsigned int *)t88) = t95;
    t96 = (t87 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t87);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB97;

LAB98:
LAB99:    goto LAB95;

LAB97:    xsi_set_current_line(124, ng0);

LAB100:    xsi_set_current_line(125, ng0);
    t102 = (t0 + 3024U);
    t103 = *((char **)t102);
    t102 = (t0 + 7584);
    t104 = (t102 + 56U);
    t105 = *((char **)t104);
    t107 = *((unsigned int *)t103);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = (t103 + 4);
    t111 = (t105 + 4);
    t112 = (t106 + 4);
    t113 = *((unsigned int *)t110);
    t114 = *((unsigned int *)t111);
    t115 = (t113 | t114);
    *((unsigned int *)t112) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 != 0);
    if (t117 == 1)
        goto LAB101;

LAB102:
LAB103:    t134 = (t0 + 7424);
    xsi_vlogvar_assign_value(t134, t106, 0, 0, 1);
    goto LAB99;

LAB101:    t118 = *((unsigned int *)t106);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t106) = (t118 | t119);
    t120 = (t103 + 4);
    t121 = (t105 + 4);
    t122 = *((unsigned int *)t120);
    t123 = (~(t122));
    t124 = *((unsigned int *)t103);
    t125 = (t124 & t123);
    t126 = *((unsigned int *)t121);
    t127 = (~(t126));
    t128 = *((unsigned int *)t105);
    t129 = (t128 & t127);
    t130 = (~(t125));
    t131 = (~(t129));
    t132 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t132 & t130);
    t133 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t133 & t131);
    goto LAB103;

LAB104:    *((unsigned int *)t14) = 1;
    goto LAB107;

LAB108:    *((unsigned int *)t33) = 1;
    goto LAB111;

LAB110:    t30 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB111;

LAB112:    t34 = (t0 + 7264);
    t35 = (t34 + 56U);
    t38 = *((char **)t35);
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t38);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t40) != 0)
        goto LAB117;

LAB118:    t48 = *((unsigned int *)t33);
    t49 = *((unsigned int *)t39);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t33 + 4);
    t52 = (t39 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB114;

LAB115:    *((unsigned int *)t39) = 1;
    goto LAB118;

LAB117:    t46 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB118;

LAB119:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t33 + 4);
    t62 = (t39 + 4);
    t63 = *((unsigned int *)t33);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t39);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t8 = (t64 & t66);
    t71 = (t68 & t70);
    t72 = (~(t8));
    t73 = (~(t71));
    t74 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t74 & t72);
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t76 & t72);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    goto LAB121;

LAB122:    xsi_set_current_line(129, ng0);

LAB125:    xsi_set_current_line(130, ng0);
    t84 = (t0 + 5344);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t88 = ((char*)((ng2)));
    memset(t87, 0, 8);
    xsi_vlog_unsigned_add(t87, 4, t86, 4, t88, 4);
    t89 = (t0 + 5184);
    xsi_vlogvar_assign_value(t89, t87, 0, 0, 4);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5344);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t14, 0, 8);
    t6 = (t14 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 3);
    t16 = (t13 & 1);
    *((unsigned int *)t6) = t16;
    t15 = (t14 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB126;

LAB127:
LAB128:    goto LAB124;

LAB126:    xsi_set_current_line(132, ng0);

LAB129:    xsi_set_current_line(133, ng0);
    t23 = (t0 + 4704);
    t24 = (t23 + 56U);
    t30 = *((char **)t24);
    t31 = (t0 + 4224);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB128;

LAB132:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(140, ng0);

LAB137:    xsi_set_current_line(141, ng0);
    t30 = (t0 + 5344);
    t31 = (t30 + 56U);
    t34 = *((char **)t31);
    memset(t33, 0, 8);
    t35 = (t33 + 4);
    t38 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 3);
    t41 = (t37 & 1);
    *((unsigned int *)t33) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 3);
    t44 = (t43 & 1);
    *((unsigned int *)t35) = t44;
    memset(t32, 0, 8);
    t40 = (t33 + 4);
    t45 = *((unsigned int *)t40);
    t48 = (~(t45));
    t49 = *((unsigned int *)t33);
    t50 = (t49 & t48);
    t54 = (t50 & 1U);
    if (t54 != 0)
        goto LAB141;

LAB139:    if (*((unsigned int *)t40) == 0)
        goto LAB138;

LAB140:    t46 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t46) = 1;

LAB141:    t51 = (t32 + 4);
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t32);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB142;

LAB143:
LAB144:    goto LAB136;

LAB138:    *((unsigned int *)t32) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(141, ng0);

LAB145:    xsi_set_current_line(142, ng0);
    t52 = (t0 + 6304);
    t53 = (t52 + 56U);
    t61 = *((char **)t53);
    memset(t39, 0, 8);
    t62 = (t39 + 4);
    t78 = (t61 + 4);
    t60 = *((unsigned int *)t61);
    t63 = (t60 >> 7);
    t64 = (t63 & 1);
    *((unsigned int *)t39) = t64;
    t65 = *((unsigned int *)t78);
    t66 = (t65 >> 7);
    t67 = (t66 & 1);
    *((unsigned int *)t62) = t67;
    t84 = (t0 + 6464);
    xsi_vlogvar_assign_value(t84, t39, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6304);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t32, 0, 8);
    t7 = (t32 + 4);
    t15 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t15);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 127U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 127U);
    xsi_vlogtype_concat(t14, 8, 8, 2U, t32, 7, t2, 1);
    t23 = (t0 + 6144);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 8);
    goto LAB144;

LAB146:    xsi_set_current_line(147, ng0);

LAB149:    xsi_set_current_line(148, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 6784);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB148;

}

static void Always_155_5(char *t0)
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

LAB0:    t1 = (t0 + 9736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 10136);
    *((int *)t2) = 1;
    t3 = (t0 + 9768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 2704U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(158, ng0);

LAB10:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB8:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 6464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6624);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 6784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6944);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 7104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7264);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5344);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 7424);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7584);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 6144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6304);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4704);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(156, ng0);

LAB9:    xsi_set_current_line(157, ng0);
    t11 = (t0 + 880);
    t12 = *((char **)t11);
    t11 = (t0 + 4384);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 3, 0LL);
    goto LAB8;

}


extern void work_m_14313714180068397023_1360385356_init()
{
	static char *pe[] = {(void *)Cont_45_0,(void *)Cont_46_1,(void *)Cont_47_2,(void *)Cont_48_3,(void *)Always_50_4,(void *)Always_155_5};
	xsi_register_didat("work_m_14313714180068397023_1360385356", "isim/TestCam_isim_beh.exe.sim/work/m_14313714180068397023_1360385356.didat");
	xsi_register_executes(pe);
}
