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
static const char *ng0 = "C:/Users/SSR/Desktop/VHDL_Project/Module/LMX2531/LMX2531_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1144140317_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1144140317_2372691052_p_1(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    int64 t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB6:    t2 = (t0 + 4120);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 4120);
    *((int *)t5) = 0;
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2568U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t6);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 50);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, 2, 2);
    t4 = (2U != 2U);
    if (t4 == 1)
        goto LAB16;

LAB17:    t3 = (t0 + 4328);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 7172);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 7204);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

LAB30:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 7236);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 7268);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

LAB42:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 7300);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB54:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 7332);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

LAB58:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB64:    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 7364);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB68:    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB63:    goto LAB62;

LAB65:    goto LAB63;

LAB66:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB72:    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB67:    goto LAB66;

LAB69:    goto LAB67;

LAB70:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7396);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB76:    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB71:    goto LAB70;

LAB73:    goto LAB71;

LAB74:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB80:    *((char **)t1) = &&LAB81;
    goto LAB1;

LAB75:    goto LAB74;

LAB77:    goto LAB75;

LAB78:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 7428);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB84:    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB79:    goto LAB78;

LAB81:    goto LAB79;

LAB82:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB88:    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB83:    goto LAB82;

LAB85:    goto LAB83;

LAB86:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7460);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB92:    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB87:    goto LAB86;

LAB89:    goto LAB87;

LAB90:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB96:    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB91:    goto LAB90;

LAB93:    goto LAB91;

LAB94:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7492);
    t5 = (t0 + 4392);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 1);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB100:    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB95:    goto LAB94;

LAB97:    goto LAB95;

LAB98:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t6 = *((int64 *)t3);
    t7 = (t6 * 99);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t7);

LAB104:    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB99:    goto LAB98;

LAB101:    goto LAB99;

LAB102:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4264);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(152, ng0);

LAB108:    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB103:    goto LAB102;

LAB105:    goto LAB103;

LAB106:    goto LAB2;

LAB107:    goto LAB106;

LAB109:    goto LAB107;

}


extern void work_a_1144140317_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1144140317_2372691052_p_0,(void *)work_a_1144140317_2372691052_p_1};
	xsi_register_didat("work_a_1144140317_2372691052", "isim/LMX2531_tb_isim_beh.exe.sim/work/a_1144140317_2372691052.didat");
	xsi_register_executes(pe);
}
