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
static const char *ng0 = "//Mac/Home/Desktop/CAD/HW3/Q1/dice_game.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1152898971_1607509014_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    unsigned char t15;
    char *t16;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4456);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4520);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4584);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 4648);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    if (t6 == 0)
        goto LAB3;

LAB9:    if (t6 == 1)
        goto LAB4;

LAB10:    if (t6 == 2)
        goto LAB5;

LAB11:    if (t6 == 3)
        goto LAB6;

LAB12:    if (t6 == 4)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)1);
    if (t8 != 0)
        goto LAB43;

LAB45:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t7 = (t6 == t11);
    if (t7 != 0)
        goto LAB46;

LAB47:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t7 = (t6 == 7);
    if (t7 != 0)
        goto LAB48;

LAB49:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 4;
    xsi_driver_first_trans_fast(t1);

LAB44:
LAB2:    t1 = (t0 + 4360);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)1);
    if (t8 != 0)
        goto LAB15;

LAB17:
LAB16:    goto LAB2;

LAB4:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)1);
    if (t8 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t8 = (t6 == 7);
    if (t8 == 1)
        goto LAB23;

LAB24:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t12 = (t11 == 11);
    t7 = t12;

LAB25:    if (t7 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = *((int *)t2);
    t12 = (t6 == 2);
    if (t12 == 1)
        goto LAB31;

LAB32:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t13 = (t11 == 3);
    t8 = t13;

LAB33:    if (t8 == 1)
        goto LAB28;

LAB29:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t14 = *((int *)t4);
    t15 = (t14 == 12);
    t7 = t15;

LAB30:    if (t7 != 0)
        goto LAB26;

LAB27:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4456);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 4712);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 4;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB2;

LAB5:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4584);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)1);
    if (t8 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4648);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)1);
    if (t8 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB2;

LAB7:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)1);
    if (t8 != 0)
        goto LAB40;

LAB42:
LAB41:    goto LAB2;

LAB14:;
LAB15:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB18:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 4520);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 2;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB23:    t7 = (unsigned char)1;
    goto LAB25;

LAB26:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4712);
    t5 = (t1 + 56U);
    t9 = *((char **)t5);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((int *)t16) = 3;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB28:    t7 = (unsigned char)1;
    goto LAB30;

LAB31:    t8 = (unsigned char)1;
    goto LAB33;

LAB34:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB35;

LAB37:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB40:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 4712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((int *)t9) = 5;
    xsi_driver_first_trans_fast(t1);
    goto LAB41;

LAB43:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4520);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB44;

LAB46:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 2;
    xsi_driver_first_trans_fast(t1);
    goto LAB44;

LAB48:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 4712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t9 = *((char **)t5);
    *((int *)t9) = 3;
    xsi_driver_first_trans_fast(t1);
    goto LAB44;

}

static void work_a_1152898971_1607509014_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4376);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2312U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t3 = (t0 + 4776);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t10 = (t2 == (unsigned char)1);
    if (t10 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t1 = (t0 + 4840);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t5;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}


extern void work_a_1152898971_1607509014_init()
{
	static char *pe[] = {(void *)work_a_1152898971_1607509014_p_0,(void *)work_a_1152898971_1607509014_p_1};
	xsi_register_didat("work_a_1152898971_1607509014", "isim/DiceGame_isim_beh.exe.sim/work/a_1152898971_1607509014.didat");
	xsi_register_executes(pe);
}
