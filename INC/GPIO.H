#ifndef _GPIO_H_
#define _GPIO_H_
//****************************************************************************//
//*   GPIO.H -- GPIO Control Macro Definition                                *//
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
#include "oem\inc\oemecram.h"

#define RESERVED_GPIO_NOP                 _nop_()

//GPIO00~GPIO07
#define GPI_DC_IN                   (GETBIT0(P0DIN) ? 1:0)   // GPIO00, 77

#define GPI_PM_SLP_S3               (GETBIT1(P0DIN) ? 1:0)   // GPIO01, 64

#define GPO_5V_CHARGE_EN            SET_PORT0_BIT2           // GPIO02, 79
#define GPO_5V_CHARGE_DIS           CLR_PORT0_BIT2
#if xP0OD_I_2
#define GPO_5V_CHARGER_STS          (GETBIT2(P0DIR)  ? 0:1)
#else
#define GPO_5V_CHARGER_STS          (GETBIT2(P0DOUT) ? 1:0)
#endif

#define GPI_PD_INT                  (GETBIT4(P0DIN)  ? 0:1)  // GPIO04, 96

#define GPI_KBC_PWRBTN              (GETBIT6(P0DIN) ? 0:1)   // GPIO06, 93

//GPIO10~GPIO17
#define GPO_SH_INT_HIGH             SET_PORT1_BIT0           // GPIO10, 124
#define GPO_SH_INT_LOW              CLR_PORT1_BIT0

#define GPO_KB_BACKLIGHT_ON         SET_PORT1_BIT3           // GPIO13, 62
#define GPO_KB_BACKLIGHT_OFF        CLR_PORT1_BIT3
#define GPO_KB_BACKLIGHT_STS        (GETBIT3(P1DOUT) ? 1:0)

#define GPO_STDBY_LED_ON            SET_PORT1_BIT4           // GPIO14, 63
#define GPO_STDBY_LED_OFF           CLR_PORT1_BIT4
#define GPO_STDBY_LED_BLINK         CPL_PORT1_BIT4

#define GPO_DC_BATFULL_LED_ON       SET_PORT1_BIT5           // GPIO15, 32
#define GPO_DC_BATFULL_LED_OFF      CLR_PORT1_BIT5
#define GPO_DC_BATFULL_LED_BLINK    CPL_PORT1_BIT5

//GPIO20~GPIO27
#define GPO_SB_PWRBTN_HIGH          SET_PORT2_BIT0           // GPIO20, 117
#define GPO_SB_PWRBTN_LOW           CLR_PORT2_BIT0
#if xP2OD_I_0
#define GPO_SB_PWRBTN_STS           (GETBIT0(P2DIR)  ? 0:1)
#else
#define GPO_SB_PWRBTN_STS           (GETBIT0(P2DOUT) ? 1:0)
#endif

//GPIO30~GPIO37
#define GPO_RTCRST_ON               SET_PORT3_BIT0           // GPIO30, 109
#define GPO_RTCRST_OFF              CLR_PORT3_BIT0

#define GPO_CHG_LED_ON              SET_PORT3_BIT2           // GPIO32, 65
#define GPO_CHG_LED_OFF             CLR_PORT3_BIT2
#define GPO_CHG_LED_BLINK           CPL_PORT3_BIT2

#define GPO_PWR_LED_ON              SET_PORT3_BIT3           // GPIO33, 66
#define GPO_PWR_LED_OFF             CLR_PORT3_BIT3
#define GPO_PWR_LED_BLINK           CPL_PORT3_BIT3

#define GPO_S5_ENABLE_HIGH          SET_PORT3_BIT4           // GPIO34, 14
#define GPO_S5_ENABLE_LOW           CLR_PORT3_BIT4
#if (xP3OD_I_4)
#define GPO_S5_ENABLE_STS           (GETBIT4(P3DIR)  ? 0:1)
#else
#define GPO_S5_ENABLE_STS           (GETBIT4(P3DOUT) ? 1:0)
#endif

#define GPO_USB_CHARGER_HIGH        SET_PORT3_BIT5           // GPIO35, 71
#define GPO_USB_CHARGER_LOW         CLR_PORT3_BIT5
#define GPO_USB_CHARGER_STS         (GETBIT5(P3DOUT) ? 1:0)

#define GPO_SB_RSMRST_HIGH          SET_PORT3_BIT6           // GPIO36, 15
#define GPO_SB_RSMRST_LOW           CLR_PORT3_BIT6

#define GPI_COVER_UP                (GETBIT7(P3DIN) ? 1:0)   // GPIO37, 72

//GPIO40~GPIO47
#define GPI_BAT_A_IN                (GETBIT1(P4DIN) ? 0:1)   // GPIO41, 80

#define GPO_USB_POWER_HIGH          SET_PORT4_BIT2           // GPIO42, 17
#define GPO_USB_POWER_LOW           CLR_PORT4_BIT2
#define GPO_USB_POWER_ENABLE        GPO_USB_POWER_HIGH
#define GPO_USB_POWER_DISABLE       GPO_USB_POWER_LOW
#define GPO_USB_POWER_STS           (GETBIT2(P4DOUT)? 1:0)

#define GPI_COVER2_UP               (GETBIT3(P4DIN) ? 1:0)   // GPIO43, 20

#define GPI_PM_SLP_S4               (GETBIT4(P4DIN) ? 1:0)   // GPIO44, 21

#define GPO_PROCHOT_ON              SET_PORT4_BIT5           // GPIO45, 22
#define GPO_PROCHOT_OFF             CLR_PORT4_BIT5
#define GPO_PROCHOT_STS             (GETBIT5(P4DOUT) ? 1:0)

#define GPO_ME_UNLOCK               SET_PORT4_BIT6           // GPIO46, 23
#define GPO_ME_LOCK                 CLR_PORT4_BIT6
#define GPO_ME_LOCK_LOW             CLR_PORT4_BIT6

//GPIO50~GPIO57
#define GPI_TYPEC1_VBUS20_DET       (GETBIT0(P5DIN) ? 0:1)   // GPIO50, 25

#define GPI_NB_BL_ON                (GETBIT1(P5DIN) ? 1:0)   // GPIO51, 26

#define GPI_TYPEC2_VBUS20_DET       (GETBIT2(P5DIN) ? 0:1)   // GPIO52, 27

#define GPO_USB_CHARGER_SEL_HIGH    SET_PORT5_BIT5           // GPIO55, 30
#define GPO_USB_CHARGER_SEL_LOW     CLR_PORT5_BIT5

//GPIO60~GPIO67
#define GPO_CHG_ON                  CLR_PORT6_BIT5           // GPIO65, 9
#define GPO_CHG_OFF                 SET_PORT6_BIT5

#define GPO_PTP_PWR_HIGH            SET_PORT6_BIT7           // GPIO67, 123
#define GPO_PTP_PWR_LOW             CLR_PORT6_BIT7
#define GPO_PTP_PWR_ENABLE          GPO_PTP_PWR_HIGH
#define GPO_PTP_PWR_DISABLE         GPO_PTP_PWR_LOW

//GPIO70~GPIO77
#define GPI_AC_IN                   (GETBIT0(P7DIN) ? 0:1)   // GPIO70, 73

#define GPI_KB_BACKLIGHT_DETECT     (GETBIT5(P7DIN) ? 1:0)   // GPIO75, 82

#define GPO_AC_PRESENT_HIGH         SET_PORT7_BIT6           // GPIO76, 83
#define GPO_AC_PRESENT_LOW          CLR_PORT7_BIT6

#define GPO_S0_PWR_GOOD_ON          SET_PORT7_BIT7           // GPIO77, 84
#define GPO_S0_PWR_GOOD_OFF         CLR_PORT7_BIT7
#define GPO_S0_PWR_GOOD_STS         (GETBIT7(P7DOUT) ? 1:0)

//GPIO80~GPIO87
#define GPO_BL_ON                   SET_PORT8_BIT1           // GPIO81, 91
#define GPO_BL_OFF                  CLR_PORT8_BIT1
#define GPO_BL_STS                  (GETBIT1(P8DOUT) ? 1:0)

#define GPO_TP_FUN_ON               SET_PORT8_BIT4           // GPIO84, 112
#define GPO_TP_FUN_OFF              CLR_PORT8_BIT4
#define GPO_TP_FUN_STS              (GETBIT4(P8DOUT) ? 1:0)

#define GPI_GSR_INT                 (GETBIT5(P8DIN)  ? 0:1)  // GPIO85, 121

#define GPO_WACOM_TS_RST_ON         CLR_PORT8_BIT6           // GPIO86, 122     Touch panel vendor : WACOM
#define GPO_WACOM_TS_RST_OFF        SET_PORT8_BIT6

#define GPO_USB_CHARGER_CTL1_HIGH   SET_PORT8_BIT7           // GPIO87, 113
#define GPO_USB_CHARGER_CTL1_LOW    CLR_PORT8_BIT7

//GPIO90~GPIO97
#define GPO_AMP_MUTE_ENABLE         CLR_PORT9_BIT4           // GPIO94, 101
#define GPO_AMP_MUTE_DISABLE        SET_PORT9_BIT4
#define GPO_AMP_MUTE_STS            (GETBIT4(P9DOUT)? 0:1)

#define GPO_AD_OFF_ENABLE           SET_PORT9_BIT5           // GPIO95, 105
#define GPO_AD_OFF_DISABLE          CLR_PORT9_BIT5
#define GPO_AD_OFF_STS              (GETBIT5(P9DOUT) ? 1:0)

#define GPI_ALL_SYS_PWROK           (GETBIT7(P9DIN) ? 1:0)   // GPIO97, 107

/*****************************Project Setting****************************/
//Macro GPIO Setting
#define GPO_USB_CHARGER_CTL2_HIGH   0
#define GPO_USB_CHARGER_CTL2_LOW    0
#if ANNIE_USB_CHARGER_CONTROL
#define GPO_USB_CHARGER_SDP         {GPO_USB_CHARGER_CTL1_HIGH;GPO_USB_CHARGER_CTL2_HIGH;GPO_USB_CHARGER_SEL_LOW;GPO_USB_CHARGER_HIGH;}
#define GPO_USB_CHARGER_CDP         {GPO_USB_CHARGER_CTL1_HIGH;GPO_USB_CHARGER_CTL2_HIGH;GPO_USB_CHARGER_SEL_HIGH;GPO_USB_CHARGER_HIGH;}
#define GPO_USB_CHARGER_DCP         {GPO_USB_CHARGER_CTL1_LOW;GPO_USB_CHARGER_CTL2_LOW;GPO_USB_CHARGER_SEL_LOW;GPO_USB_CHARGER_HIGH;}
#define GPO_USB_CHARGER_DIS         {GPO_USB_CHARGER_CTL1_LOW;GPO_USB_CHARGER_CTL2_LOW;GPO_USB_CHARGER_SEL_LOW;GPO_USB_CHARGER_LOW;}
#endif
/***************************** Reserved *********************************/
#define GPO_KBC_RTCRST_HIGH     0
#define GPO_KBC_RTCRST_LOW      0
#define GPI_SUS_POWER_ACK       0
#define GPI_DOCK_IN             0
#define GPI_BAT_B_IN            0
#define GPO_SPI_WP_ENABLE       0
#define GPO_SPI_WP_DISABLE      0
#define GPI_ISCT_WLAN_WAKE      0
#define BT_LED_ON               0
#define BT_LED_OFF              0
#define BT_LED_BLINK            0
#define GPI_BT_BTN              0
#define GPI_WIRELESS_BTN        0
#define GPI_INSTANT_ON_BTN      0
#define GPO_LAN_PWR_EN          0
#define GPO_LAN_PWR_DIS         0
#define GPO_LAN_PWR_LOW         0
//#define GPI_DISCRETE_UMA        0
//#define DISCRETE                (!GPI_DISCRETE_UMA)
//#define UMA                      GPI_DISCRETE_UMA
#define GPO_NUMLOCK_LED_ON      0
#define GPO_NUMLOCK_LED_OFF     0
#define GPO_NUMLOCK_LED_BLINK   0
#define GPO_CAPLOCK_LED_ON      0
#define GPO_CAPLOCK_LED_OFF     0
#define GPO_CAPLOCK_LED_BLINK   0
#define GPO_EC_SWI_LOW          0
#define GPO_WWAN_LED_ON         0
#define GPO_WWAN_LED_OFF        0
#define GPO_WWAN_LED_BLINK      0
#define GPO_WLAN_LED_ON         0
#define GPO_WLAN_LED_OFF        0
#define GPO_WLAN_LED_BLINK      0
#define GPI_WIRELESS_BTN        0
#define GPI_TP_LOCK_BTN         0
#define GPI_CRT_IN              0
#define GPI_TOUCH_DET           0
#define GPI_AP_DET_STS          0

#define GPI_WLAN_PCIE_WAKE      0
#define GPI_LAN_PCIE_WAKE       0

#define GPO_PCIE_WAKE_HIGH      0
#define GPO_PCIE_WAKE_LOW       0
#define GPO_PCIE_WAKE_EN            GPO_PCIE_WAKE_LOW
#define GPO_PCIE_WAKE_DIS           GPO_PCIE_WAKE_HIGH
#define GPO_PCIE_WAKE_STS       0

#define GPI_RTC_DET             0
#define GPI_VOLUME_UP           0
#define GPI_VOLUME_DOWN         0

#define GPI_DGPU_HOLD_RST       0
#define GPI_DGPU_ON             0   //(GPI_DGPU_HOLD_RST ? 0:1)
#define GPO_WIRELESS_TEST_LED_ON    0
#define GPO_WIRELESS_TEST_LED_OFF   0
#define GPO_WIRELESS_TEST_LED_BLINK 0
#define GPI_1D2V_S5_PWRGD       0

#define GPI_DISCRETE            0           //Weebill decrete function

#define GPO_WIRELESS_RST_ON     0
#define GPO_WIRELESS_RST_OFF    0
#define GPO_WLAN_PWR_HIGH       0
#define GPO_WLAN_PWR_LOW        0
#define GPO_WLAN_PWR_ENABLE     0
#define GPO_WLAN_PWR_DISABLE    0
#define GPO_WLAN_PWR_STS        0
#define GPO_DPWROK_ON           0
#define GPO_DPWROK_OFF          0
#define GPO_SUSACK_ON           0
#define GPO_SUSACK_OFF          0
#define GPO_SUSACK_STS          0
#define GPI_TP_INT              0
#define GPI_DGPU_PWROK          0
#define GPO_WIRELESS_ON         0
#define GPO_WIRELESS_OFF        0
#define GPO_WIRELESS_LOW        0
#define GPO_WIRELESS_STS        0
#define GPO_FAN1_VSET_HIGH      0
#define GPO_FAN1_VSET_LOW       0
#define GPO_BLUETOOTH_ON        0
#define GPO_BLUETOOTH_OFF       0
#define GPO_BLUETOOTH_LOW       0
#define GPO_BLUETOOTH_STS       0
#define GPO_AC_DC_BOOST_EN      0
#define GPO_AC_DC_BOOST_DIS     0
#define GPO_HDD_PWR_EN          0
#define GPO_HDD_PWR_DIS         0
#define GPO_DGPUHOT_ON          0
#define GPO_DGPUHOT_OFF         0
#define GPO_DGPUHOT_STS         0
#define GPI_CHG_BM_ON           0
#define GPO_TOUCHPANEL_EN       0           // Touch panel vendor : ELAN
#define GPO_TOUCHPANEL_DIS      0
#define GPO_TOUCHPANEL_STS      0
/***************************** Reserved *********************************/
#define THERMAL_EN_LOW                RESERVED_GPIO_NOP
#define THERMAL_EN_HIGH               RESERVED_GPIO_NOP
#define GPO_FAN_PWR_EN_ON             RESERVED_GPIO_NOP
#define GPO_FAN_PWR_EN_OFF            RESERVED_GPIO_NOP
#define GPI_FB_CLAMP_TGL_REQ          RESERVED_GPIO_NOP
#define GPO_FB_CLAMP_ON               RESERVED_GPIO_NOP
#define GPO_FB_CLAMP_OFF              RESERVED_GPIO_NOP
#define GPO_FB_CLAMP_STS              RESERVED_GPIO_NOP
#define GPO_DRAMRST_GATE_CONNECT      RESERVED_GPIO_NOP
#define GPO_DRAMRST_GATE_DISCONNECT   RESERVED_GPIO_NOP
#define GPO_EN_3G                     RESERVED_GPIO_NOP
#define GPO_DIS_3G                    RESERVED_GPIO_NOP
#define GPO_LOW_3G                    RESERVED_GPIO_NOP
#define GPO_TYPEC_PWR_ENABLE          RESERVED_GPIO_NOP
#define GPO_TYPEC_PWR_DISABLE         RESERVED_GPIO_NOP
#define GPO_TYPEC_PWR_STS             GPO_S5_ENABLE_STS
#define GPO_TYPEC_PWR_LIMIT_ON        RESERVED_GPIO_NOP
#define GPO_TYPEC_PWR_LIMIT_OFF       RESERVED_GPIO_NOP
#endif
