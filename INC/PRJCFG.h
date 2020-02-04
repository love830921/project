#ifndef _PRJCFG_H_
#define _PRJCFG_H_
//****************************************************************************//
//*   PRJCFG.H -- Project Function Configuration                             *//
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

//********************************************************************************************//
//******************************* Project Signature ******************************************//
#define DOT                             "."
#define KBC_VER_SIG                     "W!KB"
#define KBC_KN_VER                      "0E"
#define MODEL_ID                        "93"
#define OEM_SYMBOL                      "AC"
#define KBC_MAJOR_VER                   "01"
#define KBC_SUB_VER                     "00"
#define KBC_TEST_VER                    " "

//******************************* KBC Type ***************************************************//



//------- System Config
#define ENABLE                          1
#define DISABLE                         0

//********************************************************************************************//
//******************************* BIOS & Host Config *****************************************//
#define FLASH_ROM_SIZE                  2           // 1/2/4 MB
#define LPC_TYPE                        0x00        // 0x40:Intel_nVidia with ShareROM, 0x00:otherwise
#define BIOS_WDT_SUPPORT                DISABLE     // Support BIOS watchdog
#define BIOS_WDT_RETRY_COUNT            0x01        // BIOS_WDT_SUPPORT
#define SHARE_WINDOWS1_ADDRESS          0xFE802200
#define SHARE_WINDOWS2_ADDRESS          0xFE800000
#define SHARE_WINDOWS3_ADDRESS          0xFE802000

//-------- KBC Chip definition ---------------//
/* !o!o!oDon't modify following define !o!o!o */
//                 Nuvoton Chip Type(10), Write ROM by KBC(9), Auto Power On(8), Chip Vendor(7~0)
// NP791       ==>     791              , Support            , Not Support
// NP795_TYPE1 ==>     795              , Support            , Support
// NP795_TYPE2 ==>     795              , Support            , Not Support
// NP795_TYPE3 ==>     795              , Not Support        , Support
// NP795_TYPE4 ==>     795              , Not Support        , Not Support

#define ENE     0x0010
#define ENE9016                         (ENE     | (0x00 << 8))
#define H8      0x0020
#define NUVOTON 0x0030
#define NP791                           (NUVOTON | (0x02 << 8))
#define NP795_TYPE1                     (NUVOTON | (0x07 << 8))
#define NP795_TYPE2                     (NUVOTON | (0x06 << 8))
#define NP795_TYPE3                     (NUVOTON | (0x05 << 8))
#define NP795_TYPE4                     (NUVOTON | (0x04 << 8))
#define SMSC    0x0040
#define EXPLORE 0x0050
#define ITE     0x0060

#define KBC_CHIP_TYPE                  NP795_TYPE3
#define NPCE791                      !(KBC_CHIP_TYPE & 0x0400) //BIT10
#define FLASH_ROM_CODE_SUPPORT        (KBC_CHIP_TYPE & 0x0200) //BIT9
#define AUTO_POWER_ON_AFTER_FLASH     (KBC_CHIP_TYPE & 0x0100) //BIT8
#define EC_VENDOR                     (KBC_CHIP_TYPE & 0x00FF)
/* !o!o!oDon't modify following define !o!o!o */



//------- 4th I/O Status Bits Define
#define WIRELESS_BIT                    0x10        // Bit4
#define BLUETOOTH_BIT                   0x20        // Bit5
#define WWAN_BIT                        0x40        // Bit6
#define WIMAX_BIT                       0x80        // Bit7
//------- 3rd I/O Status Bits Define
#define BIOS_CRISIS_BIT                 0x40        // Bit6
#define DEBUG_BOARD_BIT                 0x80        // Bit7
//******************************** Hook Timer base *******************************************//
#define NmSEC_TIME_BASE                 1           //CmnTimerHook function hook in 1m sec => max = 23ms

//********************************************************************************************//
//******************************* Keyboard & Mouse Config ************************************//
#define MATRIX_ID_16KEY                 0           // ID0 --> 16KEY.Bin
#define MATRIX_ID_INIT                  1           // ID1 --> SCANTAB1.Bin -->
#define NUMLOCK_ASYNCHRONOUS            DISABLE
#define TP_SUPPORT_S3_WAKE              DISABLE     // S3 resume kb tp lock
#define TP_POWER_ON_S0                  ENABLE
#define PS2_PORT2_SUPPORT               DISABLE
#define PS2_PORT3_SUPPORT               DISABLE
#define TOUCHPAD_MULTIPLEXING           DISABLE
#define FN_STICKY_SUPPORT               DISABLE
#define FN_WAKE_MASK                    DISABLE
#define FN_PRESS_NOT_SEND_KEY           DISABLE
#define FN_STATUS_KEEP                  DISABLE
#define HOTKEY_SWAP_ENABLE              ENABLE
#define KEY_RIGHT_CTRL_DETECT           DISABLE
#define KEYBOARD_TEST_SUPPORTED         DISABLE

// enable/disable for the H/W automatic matrix scan
#define AUTOMATIC_KB_SCAN               DISABLE      //Enable just for Nuvonton 88x

//********************************************************************************************//
//******************************* Power On & Wakeup Config ***********************************//
#define S3_ANYKEY_WAKEUP                ENABLE      // S3 Any Key Wake Up.
#define LID_OPEN_WAKEUP                 DISABLE     // S3 Lid Open Wake Up.
#define LID_CLOSE_POWER_ON_INHIBIT      ENABLE      // Lid Close System Power On Inhibit.
#define LID_CLOSE_S3_RESUME_INHIBIT     ENABLE      // Lid close S3 Power Button Resume Inhibit.
#define BAT_LOW_POWER_ON_INHIBIT        ENABLE      // Battery Low Power On Inhibit.
#define HOKEY_BACKLIGHT_ON_OFF          ENABLE      // Hotkey back light on/off.
#define BATTERY_CRITIAL_WAKEUP          ENABLE      // support battery critical low wakeup from S3.
#define CRISIS_POWER_ON_SUPPORT         ENABLE      // Support crisis mode power on if manual condition holds.

//********************************************************************************************//
//******************************* ADC Function Config ****************************************//
#define ADC_FUNC_SUPPORT                ENABLE      // AD Convert function support.
//-------- ADC Function ID (The ID *MUST* be the same as that in ADCServiceHook() of PrjADC.C)
#define NOT_USED                        0x00
#define AD_IA                           0x01
#define PCB_VERSION                     0x02
#define ADT_TYPE                        0x03
#define MODEL_ID_AD                     0x04
#define T8_THRM                         0x05
#define VGA_THRM                        0x06
#define SYS_THRM                        0x07
#define VD_IN1                          0x08
#define VD_IN2                          0x09
#define BT_IA                           0x0A
//-------- ADC Channel Service Assignment
#define ADC_CH0_SERVICE                 AD_IA
#define ADC_CH1_SERVICE                 PCB_VERSION
#define ADC_CH2_SERVICE                 ADT_TYPE
#define ADC_CH3_SERVICE                 NOT_USED
#define ADC_CH4_SERVICE                 MODEL_ID_AD
#define ADC_CH5_SERVICE                 NOT_USED
#define ADC_CH6_SERVICE                 BT_IA
#define ADC_CH7_SERVICE                 VD_IN2
#define ADC_CH15_SERVICE                VD_IN1
/****************** P2800 Sensor Setting***************************/
#define ADC_REFERENCE_VOLTAGE       3.3                   //ADC reference voltage.


//********************************************************************************************//
//******************************* Test & Debug Config ****************************************//
#define HW_SHUTDOWN_TEST                DISABLE      // Support H/W T8 Shutdown Test
#define THERMAL_TEST_ENABLE             DISABLE
#define MINI_PCIE_DEBUG_CARD            ENABLE      // Support MiniPCIe Debug Card
#define P80_SUPPORT                     ENABLE      // For P80 recevie issue
#define P80_BUF_LENGTH                  128         // Set P80 buffer size
#define P80_RECORD_SIZE                 6           // 6 bytes / 3 words
#define UART_DEBUG_COMMAND_EN           DISABLE     // Using UART Debug
#define UART_DEBUG_6064                 DISABLE
#define UART_DEBUG_6266                 DISABLE
#define UART_DEBUG_686C                 DISABLE
#define UART_DEBUG_6A6E                 DISABLE
#define UART_DEBUG_TOUCH_PAD            DISABLE
#define UART_DEBUG_LOG_IBF_OBF          DISABLE
#define UART_DEBUG_SENT_SCI             DISABLE
#define UART_DEBUG_POWER_SEQUENCE       DISABLE
#define UART_DEBUG_KERNEL_SMBUS         DISABLE
#define UART_DEBUG_KEYBOARD             DISABLE
#define UART_DEBUG_UCSI                 DISABLE

//********************************************************************************************//
//******************************* Thermal Config *********************************************//
#define DTS_CPU_TEMP              THERMAL_SENSOR0
#define SYSTEM_VD_IN2             THERMAL_SENSOR1  //VD_IN2_TEMP System
#define T8_VD_IN1                 THERMAL_SENSOR2  //VD_IN1_TEMP T8
#define MXM_VGA_THRM              THERMAL_SENSOR3
#define MAIN_BAT_THERMAL          THERMAL_SENSOR4  /* DXP2_ID_Number */
#define MAIN_BAT_CURRENT          THERMAL_SENSOR5
#define MAIN_BAT_CAPACITY         THERMAL_SENSOR6
#define ADT_IA_Value              THERMAL_SENSOR7
#define PCH_TEMP                  THERMAL_SENSOR8
#define SECOND_BAT_THERMAL        THERMAL_SENSOR9
#define SECOND_BAT_CURRENT        THERMAL_SENSOR10
#define SECOND_BAT_CAPACITY       THERMAL_SENSOR11
//------- Thermal sensor maximum support to 12
#define THRM_SENSOR_NUMBER              9
#define THRM_TABLE_NUMBER               4
#define THRM_POLLING_TIME               (500/(THRM_SENSOR_NUMBER + 1))
#define SMBUS_THERMAL_SUPPORT           DISABLE     // Enable Thermal control from SMBUS function.
#define NV_VGA_SUPPORT                  ENABLE
#define ATI_VGA_SUPPORT                 DISABLE

//********************************************************************************************//
//******************************* FAN Config *************************************************//
#define FAN2_FUNCTION_SUPPORT           DISABLE
#define FAN3_FUNCTION_SUPPORT           DISABLE
#define FAN_NUMBER                      (1 + FAN2_FUNCTION_SUPPORT + FAN3_FUNCTION_SUPPORT)
#define FAN_CTRL_BY_KBC                 ENABLE
#define FAN_ERROR_PROTECTION            ENABLE
#define PWM_FAN                         0
#define DAC_FAN                         1
#define FAN_TYPE                        PWM_FAN     // Suppot linear fan
#define FAN1_ID                         0           // Fan1 array position
#define FAN2_ID                         1           // Fan2 array position
#define FAN3_ID                         2           // Fan2 array position
#define FAN_SPEED_UPDATE_TIME           50          // It will meet fan speed //50*10ms
#define FAN_DUTY_STEP_HIGH              5           // It will set fan duty step when the speed is more than 2000 rpm between current speed and target speed
#define FAN_DUTY_STEP_MIDDLE            3           // It will set fan duty step when the speed is more than 1000 rpm and less than 2000 rpm between current speed and target speed
#define FAN_DUTY_STEP_LOW               1           // It will set fan duty step when the speed is less than 1000 rpm between current speed and target speed
#define FAN1_PWM_CH                     6           // the PWM channel of the FAN1 control
#define FAN2_PWM_CH                     5           // the PWM channel of the FAN2 control
#define FAN3_PWM_CH                     1           // the PWM channel of the FAN3 control
#define FAN1_DAC_CH                     0           // the DAC channel of the FAN1 control
#define FAN2_DAC_CH                     1           // the DAC channel of the FAN2 control
#define FAN3_DAC_CH                     2           // the DAC channel of the FAN2 control
//         FAN Duty
//
//         A  +-----+
//            |     |
//            |     |            ....
//         B  |     +----------- ....
//            |                  ....
//         0  +----------------------------------------  Time
//            <----->            <-------------------
//               X                Normal FAN Control Algorithm
//            <---------------->
//                    Y
//   A: SPIN_UP_DUTY_S1
//   B: SPIN_UP_DUTY_S2
//   X: SPIN_UP_TIME_S1_MAX
//   Y: SPIN_UP_TIME_TOTAL
#define FAN_SPIN_UP_TIME_TOTAL          100         // the total spin up time (1st step + 2nd step) //100*10ms
#define FAN_SPIN_UP_TIME_S1_MAX         20          // the max 1st step spin up time (MUST less than FAN_SPIN_UP_TIME_TOTAL) // 20*10ms
#define FAN1_SPIN_UP_DUTY_S1            30          // the 1st step spin up duty cycle of FAN1
#define FAN1_SPIN_UP_DUTY_S2            25          // the 2nd step spin up duty cycle of FAN1
#define FAN2_SPIN_UP_DUTY_S1            30         // the 1st step spin up duty cycle of FAN2
#define FAN2_SPIN_UP_DUTY_S2            25          // the 2nd step spin up duty cycle of FAN2
#define FAN3_SPIN_UP_DUTY_S1            30         // the 1st step spin up duty cycle of FAN3
#define FAN3_SPIN_UP_DUTY_S2            25          // the 2nd step spin up duty cycle of FAN3
#define FAN_PWM_FREQUENCY               26000       // the FAN PWM frequency, suggest define higher than 16K or lower than 1K
#define FAN_RPM_TOLERANCE               100         // the tolerance define of the FAN RPM feedback
#define FAN_TACHOMETER_POLES            4           // define the phase count of each FAN cycle
#define FAN_CAPATURE_AVERAGE_COUNT      8           // define the average count for the FAN speed check
#define FAN_CAPATURE_MA_COUNT           8           // define the average count for the FAN speed check

//********************************************************************************************//
//******************************* ENE FAN Setting ********************************************//
#define ENE_DAC_CHANNEL0                1
#define ENE_DAC_CHANNEL1                2
#define ENE_DAC_CHANNEL2                4
#define ENE_DAC_CHANNEL3                8
//********************************************************************************************//
//******************************* Power & Battery & Charger Config ***************************//
#define ADAPTER_A8_PROTECT              DISABLE     // For A8 protect function
#define SUPPORT_BAT_B                   DISABLE     // Second Battery Support.
#define SMART_CHARGER_SUPPORT           ENABLE      // Enable:Smart Charger, Disable:Dump Charger.
#define FULLY_CHARGED_CHEAT             ENABLE
#define BATTERY_THERMAL_SUPPORT         ENABLE
#define TWO_BATTERY_CHARGE_PRIORITY     DISABLE     // charge priority check.
#define BATTERY_CURRENT_ALARM           ENABLE
#define BATTERY_MODE_VALUE              0x6000      // Generic:0x6000, Lily:0xE000
#define BATTERY_CRITIAL_CAPACITY        50          // 50mW/H
#define BATTERY_LOW_RSOC                6           // 7%
#define BATTERY_CRITIAL_RSOC            3           // 3%
#define BATTERY_POWER_PROTECT           ENABLE
//------- Dump Charger Only
#define CHARGE_VOLTAGE_PWM_CHANNEL      0
#define CHARGE_VOLTAGE_PWM_FREQUENCY    1000
#define CHARGE_CURRENT_PWM_CHANNEL      1
#define CHARGE_CURRENT_PWM_FREQUENCY    1000
//********************************************************************************************//
//******************************* MISC Config ************************************************//
#define INTEL_ISCT_SUPPORT              DISABLE
#define INTEL_ISCT_TO_IOAC_SUPPORT      DISABLE
#define DEEP_IDLE_SUPPORT               ENABLE
#define WDT_SUPPORT                     ENABLE      // Support watchdog warm reset
#define WDT_WAKE_SUPPORT                ENABLE
#define WDT_WAKE_SHORT_TIMER            150         // unit: sec
#define WDT_WAKE_MIDDLE_TIMER           600         // unit: sec
#define WDT_WAKE_LONG_TIMER             (30 * 60)   // unit: sec
#if (EC_VENDOR == NUVOTON) && (WDT_WAKE_LONG_TIMER > 2040)
#error "Must not over 34 mins with Nuvoton WDT timer."
#endif
#define BEEP_PWM_CHANNEL                1
#define S0_UNMUTE_TIMER                 200         // *5ms
#define CRT_IN_Support                  DISABLE      // GPI_CRT_IN function support.
#define INSTANT_ON_SUPPORT              DISABLE
#define DOCK_SUPPORT                    DISABLE     // Dock Function.
#define AMD_CPU_THERMAL_SUPPORT         DISABLE
#define AC_IN_HIGHT_ACTIVE              DISABLE      // If AC_IN pin status is high active must enable this flag.
#define IKB_RAM_SCAN_TABLE_SUPPORT      DISABLE      // Mapping to kernel code RAM_SCAN_TABLE flag.
#define PWRBTN_ECRESET_SUPPORT          ENABLE
#define RTCRST_SUPPORT                  ENABLE
#define RUNTIME_DEEP_IDLE_SUPPORT       DISABLE
#define DEEP_SX_SUPPORT                 DISABLE
#define USR_SUPPORT_GSENSOR             ENABLE
#define ESPI_SUPPORT                    ENABLE
//------- Intel Function
#define INTEL_ME_SUPPORT                ENABLE      // ME function support
#define PECI_SUPPORT                    ENABLE
#define INTEL_ME_THERMAL_SUPPORT        DISABLE
#define PECI_CPU_POWER_READ             DISABLE
// If "PECI_DEBUG_MODE" was enabled, "PECI_SUPPORT" must be enabled too.
#define PECI_DEBUG_MODE                 DISABLE     // PECI debug service via ECRAM interface and PECI stress tool
#define PECI_AC_OUT_PROCHOT_TIME        30         // AC out enable PROCHOT timer, this value must * 10ms
#define PECI_CPU_ENERGY_READ            DISABLE
#define UART_DEBUG_PECI_Data            DISABLE
#define UART_DEBUG_PECI_Main            DISABLE
#define UART_DEBUG_PECI_Command         DISABLE
#define PECI_ICCMAX_SUPPORT             ENABLE
//------- LED Function
#define LED_POLLING_TIME                100
#define LED_MAX_BLINK_COUNT             (1000/LED_POLLING_TIME)
//------- Clock Calibrate
#define CLK_32K                         0x01
#define CLK_LPC                         0x00
#define REF_CLK_TYPE                    CLK_32K
//------- SMBus data buffer size
#define MAX_SMBUS_DATA_BUFFER           20 //SMBus data buffer maximum support to 32
//------- SMBus Channel Numbers
#define SMBUS_CH_NUM                    4  //SMBus Channel number used.

#define OEM_HID_OVER_I2C_SUPPORTED      DISABLE     //------- I2C HID_Support
#define OEM_I2C_SLAVE_MODE_SUPPORTED    ENABLE      //------- I2C SLAVE_MODE support
#if OEM_I2C_SLAVE_MODE_SUPPORTED                    //slected by project
#define OEM_SMB_FLUPDATE_SUPPORTED      DISABLE
#define OEM_SMB_ECDT_SUPPORTED          ENABLE
#else                                               //auto select
#define OEM_SMB_FLUPDATE_SUPPORTED      DISABLE
#define OEM_SMB_ECDT_SUPPORTED          DISABLE
#endif
// assign Smbus Slave mode stting, if you want to set SMBus to Slave mode, must assign address
#define SMB_MAST_MODE           0x00

#define OEM_SMB0_MYADR1         SMB_MAST_MODE
#define OEM_SMB0_MYADR2         SMB_MAST_MODE
#define OEM_SMB1_MYADR1         SMB_MAST_MODE
#define OEM_SMB1_MYADR2         SMB_MAST_MODE
#define OEM_SMB2_MYADR1         SMB_MAST_MODE
#define OEM_SMB2_MYADR2         SMB_MAST_MODE
#define OEM_SMB3_MYADR1         SMB_MAST_MODE
#define OEM_SMB3_MYADR2         SMB_MAST_MODE
#define OEM_SMBUS3_SUPPORT      (OEM_SMB2_MYADR1 | OEM_SMB2_MYADR2)
#define OEM_SMBUS4_SUPPORT      (OEM_SMB3_MYADR1 | OEM_SMB3_MYADR2)
//********************************************************************************************//
//******************************* Project Special Config *************************************//
#define EVENTLOG_SUPPORT                DISABLE
#define ANNIE_BATTERY_ID_SUPPORT        ENABLE      // support battery id default it to Disable
#define ANNIE_USB_CHARGER_CONTROL       ENABLE
#define ANNIE_KB_BACKLIGHT_SUPPORT      ENABLE
#define ANNIE_AC_DC_BOOST_SUPPORT       ENABLE
#define ANNIE_PTP_SUPPORT               ENABLE
#define ANNIE_DOUBLE_POWER_SOURCE       ENABLE
#define ANNIE_ADVANCE_CHARGE_THRESHOLD  ENABLE
#define VGA_GC6_SUPPORT                 DISABLE
#define EC_FOUR_SEC_OVERWRITE_SUPPORT   DISABLE
#define ANNIE_NORMAL_TYPE               0x00
#define ANNIE_QUICK_ACCESS_DRIVER       0x01
#define ANNIE_HID_FILTER_DRIVER         0x02
#define ANNIE_PWRBTN_DRIVER_TYPE        ANNIE_HID_FILTER_DRIVER
#define ANNIE_HID_DRIVER_SUPPORT        ENABLE
#define GAMEING_KEYBOARD_LED_SUPPORT    ENABLE
#if (ANNIE_PWRBTN_DRIVER_TYPE == ANNIE_HID_FILTER_DRIVER) && (!ANNIE_HID_DRIVER_SUPPORT)
#error "Must enable HID driver support when pwrbtn driver is HID"
#endif
#define ENE_AUTO_LOAD_CODE              DISABLE
#define INTEL_UCSI_SUPPORT              ENABLE
#define PD_TYPEC_SUPPORT                ENABLE
#define PD_TYPEC_PDO_SUPPORT            ENABLE
#define PD_TI_FLASH_INTERFACE_SUPPORT   ENABLE
#define ANNIE_MORDEN_STANDBY_SUPPORT    ENABLE
#define ANNIE_DOCKING_SUPPORT           ENABLE
#define ANNIE_CHARGER_AD_OFF_SUPPORT    DISABLE
#define SUPPORT_WASD_KEY_GPIO           DISABLE
#define TMR_WAKEUP_ENABLE               DISABLE
#define ANNIE_RTCRST_IO_MESSAGE         ENABLE
#define TURBOKEY_SUPPORT                DISABLE
#define ANNIE_BAT_HEALTHY_SUPPORT       ENABLE
#define ANNIE_BAT_CALIBRAT_SUPPORT      ENABLE
//***************************** Workaround Special Config ************************************//
#define WA_AUX_PORT12_SWAP              ENABLE      // same config with AUX_PORT12_SWAP in NS_REGS.H
#define WA_S4_KEEP_TBT_POWER            ENABLE
#define WA_S4_PWRON_FAIL      ENABLE      // Workaround for lenny & cabboom S4 press power button trigger RTC reset 
#endif
