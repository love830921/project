#ifndef _PRJSENSE_H_
#define _PRJSENSE_H_
//****************************************************************************//
//*   PRJSENSE.H -- Header File of PRJSENSE.C                                *//
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
#if ANNIE_USB_CHARGER_CONTROL
extern BIT_8 PrjUsbChargeSetting;
#define USB_CHG_AC_MODE_ENABLE           PrjUsbChargeSetting.Bit.bit5
#define USB_CHG_DC_MODE_ENABLE           PrjUsbChargeSetting.Bit.bit7
#define USB_CHG_DC_THRESHOLD             (PrjUsbChargeSetting.Byte & 0x03)
#define RSOC30                           0x02
#define RSOC20                           0x01
#define RSOC10                           0x00
extern BYTE PrjUsbChargeThreshHold;
#endif

extern VBIT_16 LaunchKeyStatus;
#define LKS_WLAN                LaunchKeyStatus.Bit.bit0
#define LKS_BT                  LaunchKeyStatus.Bit.bit1
#define LKS_TP_LOCK             LaunchKeyStatus.Bit.bit2
#define LKS_WWAN                LaunchKeyStatus.Bit.bit3
#define LKS_FN_KEY              LaunchKeyStatus.Bit.bit4
#define LKS_CRT_IN              LaunchKeyStatus.Bit.bit5
#define LKS_DGPU_ON             LaunchKeyStatus.Bit.bit6
#if ANNIE_AC_DC_BOOST_SUPPORT
#define LKS_PWR_CHG_BM_ON       LaunchKeyStatus.Bit.bit7
#endif
#define LKS_FN_KEY_RECORD       LaunchKeyStatus.Bit.bit8
#define LKS_VOLUME_UP           LaunchKeyStatus.Bit.bit9
#define LKS_VOLUME_DOWN         LaunchKeyStatus.Bit.bit10

extern VBIT_16 LaunchKeyStatusTemp;
#define LKT_WLAN                LaunchKeyStatusTemp.Bit.bit0
#define LKT_BT                  LaunchKeyStatusTemp.Bit.bit1
#define LKT_TP_LOCK             LaunchKeyStatusTemp.Bit.bit2
#define LKT_WWAN                LaunchKeyStatusTemp.Bit.bit3
#define LKT_FN_KEY              LaunchKeyStatusTemp.Bit.bit4
#define LKT_CRT_IN              LaunchKeyStatusTemp.Bit.bit5
#define LKT_DGPU_ON             LaunchKeyStatusTemp.Bit.bit6
#if ANNIE_AC_DC_BOOST_SUPPORT
#define LKT_PWR_CHG_BM_ON       LaunchKeyStatusTemp.Bit.bit7
#endif
#define LKT_FN_KEY_RECORD       LaunchKeyStatusTemp.Bit.bit8
#define LKT_VOLUME_UP           LaunchKeyStatusTemp.Bit.bit9
#define LKT_VOLUME_DOWN         LaunchKeyStatusTemp.Bit.bit10

extern VBIT_16 LaunchKeyControl;

#define LKC_INITIAL_DONE        LaunchKeyControl.Bit.bit15

extern BYTE UsbChargerTest;

extern BYTE PrjKeyBoardType;

//-- power button timer, can't be 0, base: 5 ms--
#define PWRBTN_TRIGGER_EVENT        (5 / 5)                                 // timer of power button event trigger, immediately
#define PWRBTN_TRIGGER_RDY_TO_SD    (9500 / 5)                              // timer of power button preparing shut down with driver on, 9.5 sec
#define PWRBTN_TRIGGER_FORCE_SD     (10000 / 5)                             // timer of power button going shut down with driver on, 10 sec
#define PWRBTN_TRIGGER_PCH_SD       (10000 / 5)                             // timer of power button going shut down with driver off/ no driver, 10 sec
#define PWRBTN_TRIGGER_RTC_RST      (16000 / 5)                             // timer of power button going RTC reset, 16 sec
#define PWRBTN_OVERRIDE_DEBOUNCE    18
#define PWRBTN_TRIGGER_EC_RST       ((PWRBTN_OVERRIDE_DEBOUNCE * 1000) / 5) // timer of power button going EC reset, 18 sec, only record, ENE in kernalcfg.h, Nuvoton in oemtoknl.c
//-- end of power button timer

#define USB_POWER_DISCHARGE_THRESHHOLD  5               //default USB charger battery threshHold 5%

extern BYTE PrjTypeCPortPowerStatus;
extern BYTE TypecpwrRestrictStatus;

extern BIT_8 PrjTypeCLimitedCurrent;
#define TYPEC_CHARGE_LIMIT              PrjTypeCLimitedCurrent.Bit.bit0
#define TYPEC_DC_MODE_LIMIT             PrjTypeCLimitedCurrent.Bit.bit1
#define TYPEC_ADIA_LIMIT                PrjTypeCLimitedCurrent.Bit.bit2

void PrjAcerAlsCallBack(BYTE);
void PrjAcerAlsCtrl(void);
void PrjAcerElCallback(BYTE);
void PrjAcerElCtrl(void);

void LaunchKeyStatusChange(void);
void AcStatusChange(void);
void LidStatusChange(void);
void BatteryStatusChange(BYTE battery_id);
void PowerButtonStatusChange(void);
void PowerButtonTimerHook(void);
void HookProjectGpioAssign(void);
void DockStatusChange(void);
void InstantOnStatusChange(void);
void PrjSenseInit(void);
void PrjSensePowerOn(void);
void PrjSenseSuspend(void);
void PrjSenseResume(void);
void PrjSensePowerOff(void);
void PrjSenseCtrl(void);
void PrjLaunchKeyInit(void);
void OemSystemWarmBootHook(void);
void OemServicePcirstInterrupt(void);
void OemPcirstHighSrv1ms(void);
void WirelessStatusChange(void);
void WwanStatusChange(void);
void BluetoothStatusChange(void);
void TouchPadOnOff(void);
void FnKeyStatusChange(void);
void PrjUsbPortControl(void);
#if ANNIE_PTP_SUPPORT
void PrecisionTPFunctionCtrl(void);
#endif

void PrjDcProtectSendSciEvent(BYTE sci_num, WORD *sci_repeat_timer, WORD *sci_change_timer);
void PrjDcProtectEcCtrl(void);

WORD GetLaunchKeyStatus(void);
void PrjLaunchKeyCtrl(void);

extern BYTE PwrConsModeEnable;

BYTE PrjSenseBackLightInhibit(void);

//------Oem Wake Up Id------------------------
#define WAKEUP_ID_TOUCHPAD 0x30         //Wake up by touch pad
//--------------------------------------------

extern WORD VolumeUpCount;
extern WORD VolumeDownCount;

#if ANNIE_HID_DRIVER_SUPPORT
void PrjSendHidFilterEvent(unsigned char SCIID);
#endif
void PrjVolumeControl(void);

extern BYTE LeavePost;

#if ANNIE_DOUBLE_POWER_SOURCE
void DcStatusChange(void);
#endif

#if ANNIE_MORDEN_STANDBY_SUPPORT
//------Modern Standby------------------------
#define ENTER_MODERN_STANDBY_DELAY        1000                      // Delay 1 sec to re-entry MS
extern BIT_8 EnterMsControl;
#define BEFORE_ENTER_MODERN_STANDBY       EnterMsControl.Bit.bit0
#define ENTER_MODERN_STANDBY              EnterMsControl.Bit.bit1
//--------------------------------------------
#endif

#if RTCRST_SUPPORT
extern BYTE RtcPwrBtnInhibit;
#endif

#endif
