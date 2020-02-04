#ifndef _PRJLED_H_
#define _PRJLED_H_
//****************************************************************************//
//*   PRJLED.H -- Header File of PRJLED.C                                    *//
//*                                                                          *//
//*   Copyright (c) 2001-2014 Wistron Corporation                            *//
//*   All rights reserved.                                                   *//
//*                                                                          *//
//*   This program contains proprietary and confidential information         *//
//*   pertaining to Wistron Corporation, and should not be used, reproduced  *//
//*   or disseminated without the prior written approval of Wistron          *//
//*   Corporation. Any unauthorized use, reproduction or dissemination of    *//
//*   this program and any content hereof constitutes infringement of trade  *//
//*   secrets and will result in serious legal liabilities.                  *//
//****************************************************************************//


extern BIT_8 LedCtrlFlag1;
#define     LCF1_STDBY_LED               LedCtrlFlag1.Bit.bit0
#define     LCF1_STDBY_LED_Blink_EN      LedCtrlFlag1.Bit.bit1
#define     LCF1_WLAN_LED                LedCtrlFlag1.Bit.bit2
#define     LCF1_WLAN_LED_Blink_EN       LedCtrlFlag1.Bit.bit3
#define     LCF1_BT_LED                  LedCtrlFlag1.Bit.bit4
#define     LCF1_BT_LED_Blink_EN         LedCtrlFlag1.Bit.bit5
#define     LCF1_WWAN_LED                LedCtrlFlag1.Bit.bit6
#define     LCF1_WWAN_LED_Blink_EN       LedCtrlFlag1.Bit.bit7

extern BIT_8 LedCtrlFlag2;
#define     LCF2_TP_Lock_LED             LedCtrlFlag2.Bit.bit0
#define     LCF2_TP_Lock_LED_Blink_EN    LedCtrlFlag2.Bit.bit1
#define     LCF2_DC_BatFull_LED          LedCtrlFlag2.Bit.bit2
#define     LCF2_DC_BatFull_LED_Blink_EN LedCtrlFlag2.Bit.bit3
#define     LCF2_PWR_LED                 LedCtrlFlag2.Bit.bit4
#define     LCF2_PWR_LED_Blink_EN        LedCtrlFlag2.Bit.bit5
#define     LCF2_CHG_LED                 LedCtrlFlag2.Bit.bit6
#define     LCF2_CHG_LED_Blink_EN        LedCtrlFlag2.Bit.bit7

extern BIT_8 LedCtrlFlag3;
#define     LCF3_KB_LED_ON               LedCtrlFlag3.Bit.bit0
#define     LCF3_BackUp_LED_Blink_EN     LedCtrlFlag3.Bit.bit1
#define     LCF3_CapLock_LED             LedCtrlFlag3.Bit.bit2
#define     LCF3_CapLock_LED_Blink_EN    LedCtrlFlag3.Bit.bit3
#define     LCF3_NumLock_LED             LedCtrlFlag3.Bit.bit4
#define     LCF3_NumLock_LED_Blink_EN    LedCtrlFlag3.Bit.bit5
#define     LCF3_WL_Test_LED             LedCtrlFlag3.Bit.bit6
#define     LCF3_WL_Test_LED_Blink_EN    LedCtrlFlag3.Bit.bit7

extern BIT_8 LedCtrlFlag4;
#define     LCF4_MUTE_LED                LedCtrlFlag4.Bit.bit0
#define     LCF4_MUTE_LED_Blink_EN       LedCtrlFlag4.Bit.bit1
#define     LCF4_PWR_CONS_LED            LedCtrlFlag4.Bit.bit2
#define     LCF4_PWR_CONS_LED_Blink_EN   LedCtrlFlag4.Bit.bit3
#define     LCF4_ODD_EJECT_LED           LedCtrlFlag4.Bit.bit4
#define     LCF4_ODD_EJECT_LED_Blink_EN  LedCtrlFlag4.Bit.bit5
#define     LCF4_BACK_UP_LED             LedCtrlFlag4.Bit.bit6
#define     LCF4_BACK_UP_LED_Blink_EN    LedCtrlFlag4.Bit.bit7
extern BIT_8 LedCtrlFlag5;
#define     LCF5_MMB_LED_OFF             LedCtrlFlag5.Bit.bit0
#define     LCF5_ALL_LED_ON              LedCtrlFlag5.Bit.bit1
#define     LCF5_ALL_LED_OFF             LedCtrlFlag5.Bit.bit2

#define     PRJ_STANDBY_LED_FULL_ON                 200
#define     PRJ_STANDBY_LED_FULL_OFF                  0
#define     PRJ_STANDBY_LED_FULL_1ON1OFF_BLINK      100
#define     PRJ_STANDBY_LED_FULL_1ON3OFF_BLINK       50

extern BYTE LedCtrlTestMode;
extern BYTE BatteryLowInhibitLEDCount;
extern BYTE BackupLedCounter;

#if ANNIE_KB_BACKLIGHT_SUPPORT
extern WORD KeyboardBacklightTimer;
extern BYTE KeyboardBacklightLevel;
extern BYTE KeyboradBacklightTimerInhibit;
//---------------------- KeyboardBacklightTimer ----------------------
#define KB_BACKLIGHT_COUNT     300     // 300 * 10 = 30s
#define KB_BL_CH               1
#define KB_BL_ON               2
#define KB_BL_OFF              0
#endif

void PrjLedCtrlInit(void);
void PrjLedCtrlWarmboot(void);
void PrjLedCtrlPowerOn(void);
void PrjLedCtrlSuspend(void);
void PrjLedCtrlResume(void);
void PrjLedCtrlPowerOff(void);
void PrjLedCtrl(void);
void PrjKeyboardLedAssign(void);
void PrjKeyboardLedCtrl(void);
void PrjLedTestModeCtrl(BYTE test_mode);
#endif
