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
static const char *ng0 = "//Mac/Home/Desktop/CAD/HW2/Timer/timer.vhd";



static void work_a_2166314343_1678943863_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5048);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2888U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 2888U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((int *)t4) = t10;
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (1 / 2);
    t1 = (t9 == t10);
    if (t1 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 1);
    if (t1 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5160);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5160);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB9;

}

static void work_a_2166314343_1678943863_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    int t24;
    int t25;
    char *t26;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 5224);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t14 = (t9 + 56U);
    t17 = *((char **)t14);
    *((int *)t17) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 3128U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 5288);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t14 = (t9 + 56U);
    t17 = *((char **)t14);
    *((int *)t17) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 5352);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t14 = (t9 + 56U);
    t17 = *((char **)t14);
    *((int *)t17) = t15;
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 5064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3008U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3128U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1352U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB13;

LAB14:    t8 = (unsigned char)0;

LAB15:    if (t8 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t3 = t7;
    goto LAB9;

LAB10:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3008U);
    t23 = *((char **)t2);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t2 = (t0 + 3008U);
    t26 = *((char **)t2);
    t2 = (t26 + 0);
    *((int *)t2) = t25;
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 10);
    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB11;

LAB13:    t2 = (t0 + 3008U);
    t14 = *((char **)t2);
    t15 = *((int *)t14);
    t16 = (t15 != 9);
    if (t16 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 3128U);
    t17 = *((char **)t2);
    t18 = *((int *)t17);
    t19 = (t18 != 5);
    t13 = t19;

LAB21:    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 3248U);
    t20 = *((char **)t2);
    t21 = *((int *)t20);
    t22 = (t21 != 9);
    t12 = t22;

LAB18:    t8 = t12;
    goto LAB15;

LAB16:    t12 = (unsigned char)1;
    goto LAB18;

LAB19:    t13 = (unsigned char)1;
    goto LAB21;

LAB22:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3008U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3128U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t18 = (t15 + 1);
    t1 = (t0 + 3128U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 3128U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 6);
    if (t3 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB23;

LAB25:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3128U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t18 = (t15 + 1);
    t1 = (t0 + 3248U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t18;
    goto LAB26;

}

static void work_a_2166314343_1678943863_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    if (t3 == 0)
        goto LAB3;

LAB14:    if (t3 == 1)
        goto LAB4;

LAB15:    if (t3 == 2)
        goto LAB5;

LAB16:    if (t3 == 3)
        goto LAB6;

LAB17:    if (t3 == 4)
        goto LAB7;

LAB18:    if (t3 == 5)
        goto LAB8;

LAB19:    if (t3 == 6)
        goto LAB9;

LAB20:    if (t3 == 7)
        goto LAB10;

LAB21:    if (t3 == 8)
        goto LAB11;

LAB22:    if (t3 == 9)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(90, ng0);

LAB2:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    if (t3 == 0)
        goto LAB26;

LAB33:    if (t3 == 1)
        goto LAB27;

LAB34:    if (t3 == 2)
        goto LAB28;

LAB35:    if (t3 == 3)
        goto LAB29;

LAB36:    if (t3 == 4)
        goto LAB30;

LAB37:    if (t3 == 5)
        goto LAB31;

LAB38:
LAB32:    xsi_set_current_line(99, ng0);

LAB25:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    if (t3 == 0)
        goto LAB41;

LAB52:    if (t3 == 1)
        goto LAB42;

LAB53:    if (t3 == 2)
        goto LAB43;

LAB54:    if (t3 == 3)
        goto LAB44;

LAB55:    if (t3 == 4)
        goto LAB45;

LAB56:    if (t3 == 5)
        goto LAB46;

LAB57:    if (t3 == 6)
        goto LAB47;

LAB58:    if (t3 == 7)
        goto LAB48;

LAB59:    if (t3 == 8)
        goto LAB49;

LAB60:    if (t3 == 9)
        goto LAB50;

LAB61:
LAB51:    xsi_set_current_line(112, ng0);

LAB40:    t1 = (t0 + 5080);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 8804);
    t5 = (t0 + 5416);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB2;

LAB4:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 8812);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 8820);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 8828);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB7:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 8836);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 8844);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB9:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 8852);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB10:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 8860);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB11:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 8868);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB12:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 8876);
    t4 = (t0 + 5416);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB24:;
LAB26:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 8884);
    t5 = (t0 + 5480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB25;

LAB27:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 8892);
    t4 = (t0 + 5480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB25;

LAB28:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 8900);
    t4 = (t0 + 5480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB25;

LAB29:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 8908);
    t4 = (t0 + 5480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB25;

LAB30:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8916);
    t4 = (t0 + 5480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB25;

LAB31:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 8924);
    t4 = (t0 + 5480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB25;

LAB39:;
LAB41:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 8932);
    t5 = (t0 + 5544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB40;

LAB42:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 8940);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB43:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 8948);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB44:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 8956);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB45:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 8964);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB46:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 8972);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB47:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 8980);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB48:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 8988);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB49:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 8996);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB50:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 9004);
    t4 = (t0 + 5544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB40;

LAB62:;
}


extern void work_a_2166314343_1678943863_init()
{
	static char *pe[] = {(void *)work_a_2166314343_1678943863_p_0,(void *)work_a_2166314343_1678943863_p_1,(void *)work_a_2166314343_1678943863_p_2};
	xsi_register_didat("work_a_2166314343_1678943863", "isim/simulate_isim_beh.exe.sim/work/a_2166314343_1678943863.didat");
	xsi_register_executes(pe);
}
