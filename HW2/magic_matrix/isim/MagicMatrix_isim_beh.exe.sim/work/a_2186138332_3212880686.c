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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//Mac/Home/Desktop/CAD/HW2/Q1/MagicMatrix.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );


static void work_a_2186138332_3212880686_p_0(char *t0)
{
    char t56[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    char *t46;
    int t47;
    int t48;
    char *t49;
    int t50;
    int t51;
    int t52;
    unsigned char t53;
    unsigned char t54;
    unsigned char t55;

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = xsi_vhdl_mod(t4, 2);
    t6 = (t5 == 1);
    if (t6 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = xsi_vhdl_mod(t4, 4);
    t6 = (t5 == 0);
    if (t6 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB5:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1152U);
    t25 = xsi_signal_has_event(t2);
    if (t25 == 1)
        goto LAB34;

LAB35:    t6 = (unsigned char)0;

LAB36:    if (t6 != 0)
        goto LAB31;

LAB33:
LAB32:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t25 = (t6 == (unsigned char)3);
    if (t25 != 0)
        goto LAB40;

LAB42:
LAB41:    goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t8 = *((int *)t7);
    t9 = (t8 / 2);
    t10 = (t9 + 1);
    t2 = (t0 + 1928U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((int *)t2) = t10;
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 / 2);
    t2 = (t0 + 2048U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t5;
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(61, ng0);

LAB7:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t5 = *((int *)t7);
    t2 = (t0 + 1032U);
    t11 = *((char **)t2);
    t8 = *((int *)t11);
    t9 = (t5 * t8);
    t6 = (t4 <= t9);
    if (t6 != 0)
        goto LAB8;

LAB10:    goto LAB5;

LAB8:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2288U);
    t12 = *((char **)t2);
    t2 = (t0 + 1928U);
    t13 = *((char **)t2);
    t10 = *((int *)t13);
    t14 = (t10 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t10);
    t16 = (t15 * 13U);
    t2 = (t0 + 2048U);
    t17 = *((char **)t2);
    t18 = *((int *)t17);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t18);
    t21 = (t16 + t20);
    t22 = (4U * t21);
    t23 = (0 + t22);
    t2 = (t12 + t23);
    t24 = *((int *)t2);
    t25 = (t24 == 0);
    if (t25 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 + 1);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t8 = *((int *)t7);
    t9 = xsi_vhdl_mod(t5, t8);
    t2 = (t0 + 1928U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((int *)t2) = t9;
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t8 = *((int *)t7);
    t9 = xsi_vhdl_mod(t5, t8);
    t2 = (t0 + 2048U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((int *)t2) = t9;

LAB12:    goto LAB7;

LAB9:;
LAB11:    xsi_set_current_line(63, ng0);
    t26 = (t0 + 2168U);
    t27 = *((char **)t26);
    t28 = *((int *)t27);
    t26 = (t0 + 2288U);
    t29 = *((char **)t26);
    t26 = (t0 + 1928U);
    t30 = *((char **)t26);
    t31 = *((int *)t30);
    t32 = (t31 - 0);
    t33 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t31);
    t34 = (t33 * 13U);
    t26 = (t0 + 2048U);
    t35 = *((char **)t26);
    t36 = *((int *)t35);
    t37 = (t36 - 0);
    t38 = (t37 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t36);
    t39 = (t34 + t38);
    t40 = (4U * t39);
    t41 = (0 + t40);
    t26 = (t29 + t41);
    *((int *)t26) = t28;
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 + 1);
    t2 = (t0 + 2168U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t5;
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 + 1);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t8 = *((int *)t7);
    t9 = xsi_vhdl_mod(t5, t8);
    t2 = (t0 + 1928U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((int *)t2) = t9;
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 + 1);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t8 = *((int *)t7);
    t9 = xsi_vhdl_mod(t5, t8);
    t2 = (t0 + 2048U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((int *)t2) = t9;
    goto LAB12;

LAB14:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2168U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(78, ng0);

LAB17:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t5 = *((int *)t7);
    t2 = (t0 + 1032U);
    t11 = *((char **)t2);
    t8 = *((int *)t11);
    t9 = (t5 * t8);
    t6 = (t4 <= t9);
    if (t6 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t5 = *((int *)t7);
    t8 = (t4 * t5);
    t2 = (t0 + 2168U);
    t11 = *((char **)t2);
    t2 = (t11 + 0);
    *((int *)t2) = t8;
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(86, ng0);

LAB24:    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t6 = (t4 > 0);
    if (t6 != 0)
        goto LAB25;

LAB27:    goto LAB15;

LAB18:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2168U);
    t12 = *((char **)t2);
    t10 = *((int *)t12);
    t14 = (t10 - 1);
    t2 = (t0 + 1032U);
    t13 = *((char **)t2);
    t18 = *((int *)t13);
    t19 = (t14 / t18);
    t2 = (t0 + 2168U);
    t17 = *((char **)t2);
    t24 = *((int *)t17);
    t28 = (t24 - 1);
    t2 = (t0 + 1032U);
    t26 = *((char **)t2);
    t31 = *((int *)t26);
    t32 = xsi_vhdl_mod(t28, t31);
    t25 = (t19 == t32);
    if (t25 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 + 1);
    t2 = (t0 + 2168U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t5;
    goto LAB17;

LAB19:;
LAB21:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2168U);
    t27 = *((char **)t2);
    t36 = *((int *)t27);
    t2 = (t0 + 2288U);
    t29 = *((char **)t2);
    t2 = (t0 + 2168U);
    t30 = *((char **)t2);
    t37 = *((int *)t30);
    t42 = (t37 - 1);
    t2 = (t0 + 1032U);
    t35 = *((char **)t2);
    t43 = *((int *)t35);
    t44 = (t42 / t43);
    t45 = (t44 - 0);
    t15 = (t45 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t44);
    t16 = (t15 * 13U);
    t2 = (t0 + 2168U);
    t46 = *((char **)t2);
    t47 = *((int *)t46);
    t48 = (t47 - 1);
    t2 = (t0 + 1032U);
    t49 = *((char **)t2);
    t50 = *((int *)t49);
    t51 = xsi_vhdl_mod(t48, t50);
    t52 = (t51 - 0);
    t20 = (t52 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t51);
    t21 = (t16 + t20);
    t22 = (4U * t21);
    t23 = (0 + t22);
    t2 = (t29 + t23);
    *((int *)t2) = t36;
    goto LAB22;

LAB25:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1928U);
    t7 = *((char **)t2);
    t5 = *((int *)t7);
    t2 = (t0 + 1032U);
    t11 = *((char **)t2);
    t8 = *((int *)t11);
    t9 = (t5 / t8);
    t2 = (t0 + 1928U);
    t12 = *((char **)t2);
    t10 = *((int *)t12);
    t2 = (t0 + 1032U);
    t13 = *((char **)t2);
    t14 = *((int *)t13);
    t18 = xsi_vhdl_mod(t10, t14);
    t25 = (t9 != t18);
    if (t25 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t2 = (t0 + 2168U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t5;
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1928U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 + 1);
    t2 = (t0 + 1928U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t5;
    goto LAB24;

LAB26:;
LAB28:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2168U);
    t17 = *((char **)t2);
    t19 = *((int *)t17);
    t2 = (t0 + 2288U);
    t26 = *((char **)t2);
    t2 = (t0 + 1928U);
    t27 = *((char **)t2);
    t24 = *((int *)t27);
    t2 = (t0 + 1032U);
    t29 = *((char **)t2);
    t28 = *((int *)t29);
    t31 = (t24 / t28);
    t32 = (t31 - 0);
    t15 = (t32 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t31);
    t16 = (t15 * 13U);
    t2 = (t0 + 1928U);
    t30 = *((char **)t2);
    t36 = *((int *)t30);
    t2 = (t0 + 1032U);
    t35 = *((char **)t2);
    t37 = *((int *)t35);
    t42 = xsi_vhdl_mod(t36, t37);
    t43 = (t42 - 0);
    t20 = (t43 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t42);
    t21 = (t16 + t20);
    t22 = (4U * t21);
    t23 = (0 + t22);
    t2 = (t26 + t23);
    *((int *)t2) = t19;
    goto LAB29;

LAB31:    xsi_set_current_line(98, ng0);
    t3 = (t0 + 2408U);
    t11 = *((char **)t3);
    t4 = *((int *)t11);
    t3 = (t0 + 1032U);
    t12 = *((char **)t3);
    t5 = *((int *)t12);
    t3 = (t0 + 1032U);
    t13 = *((char **)t3);
    t8 = *((int *)t13);
    t9 = (t5 * t8);
    t55 = (t4 < t9);
    if (t55 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB32;

LAB34:    t3 = (t0 + 1192U);
    t7 = *((char **)t3);
    t53 = *((unsigned char *)t7);
    t54 = (t53 == (unsigned char)3);
    t6 = t54;
    goto LAB36;

LAB37:    xsi_set_current_line(99, ng0);
    t3 = (t0 + 2408U);
    t17 = *((char **)t3);
    t10 = *((int *)t17);
    t14 = (t10 * 4);
    t3 = (t0 + 2528U);
    t26 = *((char **)t3);
    t3 = (t26 + 0);
    *((int *)t3) = t14;
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408U);
    t7 = *((char **)t2);
    t4 = *((int *)t7);
    t2 = (t0 + 1032U);
    t11 = *((char **)t2);
    t5 = *((int *)t11);
    t8 = (t4 / t5);
    t9 = (t8 - 0);
    t15 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t8);
    t16 = (t15 * 13U);
    t2 = (t0 + 2408U);
    t12 = *((char **)t2);
    t10 = *((int *)t12);
    t2 = (t0 + 1032U);
    t13 = *((char **)t2);
    t14 = *((int *)t13);
    t18 = xsi_vhdl_mod(t10, t14);
    t19 = (t18 - 0);
    t20 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 12, 1, t18);
    t21 = (t16 + t20);
    t22 = (4U * t21);
    t23 = (0 + t22);
    t2 = (t3 + t23);
    t24 = *((int *)t2);
    t17 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t56, t24, 4);
    t26 = (t0 + 2648U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    t29 = (t56 + 12U);
    t33 = *((unsigned int *)t29);
    t33 = (t33 * 1U);
    memcpy(t26, t17, t33);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t4 = (3 - 3);
    t15 = (t4 * -1);
    t16 = (1U * t15);
    t20 = (0 + t16);
    t2 = (t3 + t20);
    t6 = *((unsigned char *)t2);
    t7 = (t0 + 2528U);
    t11 = *((char **)t7);
    t5 = *((int *)t11);
    t8 = (t5 - 0);
    t21 = (t8 * 1);
    t22 = (1 * t21);
    t23 = (0U + t22);
    t7 = (t0 + 4016);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t17 = (t13 + 56U);
    t26 = *((char **)t17);
    *((unsigned char *)t26) = t6;
    xsi_driver_first_trans_delta(t7, t23, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t4 = (2 - 3);
    t15 = (t4 * -1);
    t16 = (1U * t15);
    t20 = (0 + t16);
    t2 = (t3 + t20);
    t6 = *((unsigned char *)t2);
    t7 = (t0 + 2528U);
    t11 = *((char **)t7);
    t5 = *((int *)t11);
    t8 = (t5 + 1);
    t9 = (t8 - 0);
    t21 = (t9 * 1);
    t22 = (1 * t21);
    t23 = (0U + t22);
    t7 = (t0 + 4016);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t17 = (t13 + 56U);
    t26 = *((char **)t17);
    *((unsigned char *)t26) = t6;
    xsi_driver_first_trans_delta(t7, t23, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t4 = (1 - 3);
    t15 = (t4 * -1);
    t16 = (1U * t15);
    t20 = (0 + t16);
    t2 = (t3 + t20);
    t6 = *((unsigned char *)t2);
    t7 = (t0 + 2528U);
    t11 = *((char **)t7);
    t5 = *((int *)t11);
    t8 = (t5 + 2);
    t9 = (t8 - 0);
    t21 = (t9 * 1);
    t22 = (1 * t21);
    t23 = (0U + t22);
    t7 = (t0 + 4016);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t17 = (t13 + 56U);
    t26 = *((char **)t17);
    *((unsigned char *)t26) = t6;
    xsi_driver_first_trans_delta(t7, t23, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t4 = (0 - 3);
    t15 = (t4 * -1);
    t16 = (1U * t15);
    t20 = (0 + t16);
    t2 = (t3 + t20);
    t6 = *((unsigned char *)t2);
    t7 = (t0 + 2528U);
    t11 = *((char **)t7);
    t5 = *((int *)t11);
    t8 = (t5 + 3);
    t9 = (t8 - 0);
    t21 = (t9 * 1);
    t22 = (1 * t21);
    t23 = (0U + t22);
    t7 = (t0 + 4016);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t17 = (t13 + 56U);
    t26 = *((char **)t17);
    *((unsigned char *)t26) = t6;
    xsi_driver_first_trans_delta(t7, t23, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 + 1);
    t2 = (t0 + 2408U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = t5;
    goto LAB38;

LAB40:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2528U);
    t7 = *((char **)t2);
    t2 = (t7 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(111, ng0);

LAB43:    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t6 = (t4 <= 576);
    if (t6 != 0)
        goto LAB44;

LAB46:    goto LAB41;

LAB44:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2528U);
    t7 = *((char **)t2);
    t5 = *((int *)t7);
    t8 = (t5 - 0);
    t15 = (t8 * 1);
    t16 = (1 * t15);
    t20 = (0U + t16);
    t2 = (t0 + 4016);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, t20, 1, 0LL);
    goto LAB43;

LAB45:;
LAB1:    return;
}


extern void work_a_2186138332_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2186138332_3212880686_p_0};
	xsi_register_didat("work_a_2186138332_3212880686", "isim/MagicMatrix_isim_beh.exe.sim/work/a_2186138332_3212880686.didat");
	xsi_register_executes(pe);
}
