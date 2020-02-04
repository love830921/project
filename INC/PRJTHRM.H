#ifndef _PRJTHRM_H_
#define _PRJTHRM_H_
//****************************************************************************//
//*   PRJTHRM.H -- Header File of PRJTHRM.C                                  *//
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
#include "project\inc\prjcfg.h"

#define UP_RETRY        0x00
#define DOWN_RETRY      0x01

#define T0L_DEFAULT     0x00           // Default Level T0
#define T0L_UP_RETRY    0x0A           // Retry count < 0x0F (Level change time = X * 500ms)
#define T0L_DOWN_RETRY  0x0A

#define T1L_DEFAULT     0x00           // Default Level T0
#define T1L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define T1L_DOWN_RETRY  0x04

#define T2L_DEFAULT     0x00           // Default Level T0
#define T2L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define T2L_DOWN_RETRY  0x04

#define T3L_DEFAULT     0x00           // Default Level T0
#define T3L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define T3L_DOWN_RETRY  0x04

#define T4L_DEFAULT     0x00           // Default Level T1
#define T4L_UP_RETRY    0x04            // Retry count < 0x0F (Level change time = X * 500ms)
#define T4L_DOWN_RETRY  0x04

#define T5L_DEFAULT     0x00           // Default Level T1
#define T5L_UP_RETRY    0x01           // Retry count < 0x0F (Level change time = X * 500ms)
#define T5L_DOWN_RETRY  0x04

#define T6L_DEFAULT     0x00
#define T6L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define T6L_DOWN_RETRY  0x04

#define T7L_DEFAULT     0x00           // Default Level T0
#define T7L_UP_RETRY    0x01           // Retry count < 0x0F (Level change time = X * 500ms)
#define T7L_DOWN_RETRY  0x04

#define T8L_DEFAULT     0x00           // Default Level T0
#define T8L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define T8L_DOWN_RETRY  0x04

#define T9L_DEFAULT     0x00           // Default Level T0
#define T9L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define T9L_DOWN_RETRY  0x04

#define T10L_DEFAULT    0x00           // Default Level T0
#define T10L_UP_RETRY   0x02           // Retry count < 0x0F (Level change time = X * 500ms)
#define T10L_DOWN_RETRY 0x04

#define T11L_DEFAULT    0x00           // Default Level T0
#define T11L_UP_RETRY   0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define T11L_DOWN_RETRY 0x04

//------------------------------------------------------------------------------------------//
//   Thermal Action                                                                         //
//------------------------------------------------------------------------------------------//

#define A0L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A0L_DOWN_RETRY  0x04

#define A1L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A1L_DOWN_RETRY  0x04

#define A2L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A2L_DOWN_RETRY  0x04

#define A3L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A3L_DOWN_RETRY  0x04

#define A4L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A4L_DOWN_RETRY  0x04

#define A5L_UP_RETRY    0x01           // Retry count < 0x0F (Level change time = X * 500ms)
#define A5L_DOWN_RETRY  0x04

#define A6L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A6L_DOWN_RETRY  0x04

#define A7L_UP_RETRY    0x01           // Retry count < 0x0F (Level change time = X * 500ms)
#define A7L_DOWN_RETRY  0x04

#define A8L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A8L_DOWN_RETRY  0x04

#define A9L_UP_RETRY    0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A9L_DOWN_RETRY  0x04

#define A10L_UP_RETRY   0x02           // Retry count < 0x0F (Level change time = X * 500ms)
#define A10L_DOWN_RETRY 0x04

#define A11L_UP_RETRY   0x04           // Retry count < 0x0F (Level change time = X * 500ms)
#define A11L_DOWN_RETRY 0x04

extern BYTE PrjFan1LvlKeepCnt;
extern BYTE PrjFan2LvlKeepCnt;
extern BYTE PrjFan1SmoothCtrlCnt;
extern BYTE PrjFan2SmoothCtrlCnt;
extern BYTE PrjFan1SmoothUp;
extern BYTE PrjFan1SmoothDn;
extern BYTE PrjFan2SmoothUp;
extern BYTE PrjFan2SmoothDn;
extern BYTE PrjFan1LvlBak;
extern BYTE PrjFan2LvlBak;

extern _CONST_ THERMAL_TABLE ThermalTable[THRM_TABLE_NUMBER][THRM_SENSOR_NUMBER];
extern _CONST_ FAN_SPEED_TABLE Fan1SpeedTable[THRM_TABLE_NUMBER];
extern _CONST_ FAN_SPEED_TABLE FanKeepTimeTable[THRM_TABLE_NUMBER];
extern _CONST_ FAN_SPEED_TABLE FanKeepFallingTimeTable[THRM_TABLE_NUMBER];
extern _CONST_ FAN_SPEED_TABLE FanRisingTimeTable[THRM_TABLE_NUMBER];
extern _CONST_ FAN_SPEED_TABLE FanFallingTimeTable[THRM_TABLE_NUMBER];

#if FAN2_FUNCTION_SUPPORT
extern _CONST_ FAN_SPEED_TABLE Fan2SpeedTable[THRM_TABLE_NUMBER];
#endif
extern BIT_8 PrjDgpuHotEvent; //for control dDGPUHOT
#define PRJ_VR_DGPUHOT_CTL              PrjDgpuHotEvent.Bit.bit0
#define PRJ_IOAC_DGPUHOT_CTL            PrjDgpuHotEvent.Bit.bit1
#define PRJ_DC_DGPUHOT_CTL              PrjDgpuHotEvent.Bit.bit2
#define PRJ_ECRAM_DGPUHOT_CTL           PrjDgpuHotEvent.Bit.bit3
#define PRJ_BAT_DGPUHOT_CTL             PrjDgpuHotEvent.Bit.bit4
#define PRJ_BATTHRM_LOW_DGPUHOT_CTL     PrjDgpuHotEvent.Bit.bit5

extern BYTE PrjVgaType;
#define VGA_TYPE_N13MGS  0x01
#define VGA_TYPE_N13PGL  0x02

extern BYTE PrjCpuTempReportCnt;
void PrjCpuTempatureReqCtrl(void);
void PrjWriteCpuTemperature(BYTE);

signed char PrjThermalReadTemperature(BYTE thm_sens_id);

void PrjUpdateThermalSensorRamTable(void);
#if ANNIE_AC_DC_BOOST_SUPPORT
extern BYTE AcDcBoostSts;
void PrjAcDcBoostMoniter(void);
void PrjAcDcBoostCtrl(BYTE type);
#endif
void PrjFanLevelDebounceCtrl(void) ;
BYTE PrjFanLevelDebounceCheck(void);
#endif
