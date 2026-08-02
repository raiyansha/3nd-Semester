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
static const char *ng0 = "F:/verilog/jk_ff/jk_FF.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {10, 0};
static int ng4[] = {11, 0};



static void Always_8_0(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 32, 2, 2U, t7, 1, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t5, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t6 = (t5 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t6) == 0)
        goto LAB22;

LAB24:    t7 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t7) = 1;

LAB25:    t9 = (t13 + 4);
    t10 = (t5 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB27;

LAB26:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t11 = (t0 + 1928);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(10, ng0);
    t9 = (t0 + 1768);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(13, ng0);
    t3 = (t0 + 1768);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t13, 0, 8);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t7) == 0)
        goto LAB16;

LAB18:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;

LAB19:    t10 = (t13 + 4);
    t11 = (t6 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    *((unsigned int *)t13) = t20;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB21;

LAB20:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t26 & 1U);
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    goto LAB15;

LAB16:    *((unsigned int *)t13) = 1;
    goto LAB19;

LAB21:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t23 | t24);
    goto LAB20;

LAB22:    *((unsigned int *)t13) = 1;
    goto LAB25;

LAB27:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t10);
    *((unsigned int *)t13) = (t21 | t22);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t23 | t24);
    goto LAB26;

}


extern void work_m_00000000002966758239_2839147829_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000002966758239_2839147829", "isim/test_isim_beh.exe.sim/work/m_00000000002966758239_2839147829.didat");
	xsi_register_executes(pe);
}
