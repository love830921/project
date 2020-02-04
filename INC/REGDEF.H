#ifndef _REGDEF_H_
#define _REGDEF_H_
//****************************************************************************//
//*   REGDEF.H -- GPIO Pins Initial Definition                               *//
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

#define Enable  1
#define Disable 0
/* ---------------------------- DEVALT0 OEM Functions ----------------------

      Standard definition of DEVALT0:

      Bit     Function
      --- -----------------
       0  "0" GPIO34/CIRRXL (default)             "1" SIN1
       1  "0" GPIO67/N2TMS (default)              "1" SOUT1
       2  "0" GPIO55/IOX_DIN_DIO (default)        "1" Clock Out(see also CLKOM bit in DEVCNT)
       3  "0" GPIO77,GPO76,GPIO75,GPIO02(default) "1" SPI_MISO, SPI_MOSI, SPI_SCK, SPI_CS#
       4  Reserved
       5  Reserved
       6  Reserved
       7  Reserved
                                        Bit
                                        ---                                */
#define SSP1I_SL        Disable         //0
#define SSP1O_SL        Disable         //1
#define SCKOUT_SL       Disable         //2
#define SSPI_SL         Disable         //3

#define DEVALT0_INIT    ((SSP1I_SL<<0)+(SSP1O_SL<<1)+(SCKOUT_SL<<2)+(SSPI_SL<<3))
/* ---------------------------- DEVALT1 OEM Functions ----------------------

      Standard definition of DEVALT1:

      Bit     Function
      --- -----------------
       0  Reserved
       1  "0" GPIO87/CIRRXM (default)  "1" SIN_CR - URTI_SL (When set to 1,CIRRM1_SL bit in DEVALTA must be set to 0)
       2  "0" GPO83         (default)  "1" SOUT_CR - URTO1_SL (If URTO1_SL bit is set to 1, URTO2_SL bit must be 0)
       3  "0" GPOB0/KBSOUT0 (default)  "1" SOUT_CR - URTO2_SL (If URTO2_SL bit is set to 1, URTO1_SL bit must be 0)
       4  "0" GPIO45/E_PWM, GPIO57/KBSOUT17, GPIO60/KBSOUT16 (default) "1" DTR1_BOUT1, DCD1, DSR1
       5  Reserved
       6  Reserved
       7  Reserved.
                                        Bit
                                        ---                                */

#define SUARTI_SL       Disable         //1 (CR_UART input Select)
#define SUARTO1_SL      Enable          //2 (CR_UART output Select)
#define SUARTO2_SL      Disable         //3 (CR_UART output2 Select)
#define SSP1CTL_SL      Disable         //4 (Serial Port 1, Control Select)

#define DEVALT1_INIT  ((SUARTI_SL<<1)+(SUARTO1_SL<<2)+(SUARTO2_SL<<3)+(SSP1CTL_SL<<4))

/* ---------------------------- DEVALT2 OEM Functions ----------------------

      Standard definition of DEVALT2:

      Bit     Function
      --- -----------------
       0  Reserved
       1  "0" GPIO10 (default)                      "1" LPCPD#  - LPC interface
       2  "0" GPIO11 (default)                      "1" CLKRUN# - LPC interface
       3  "0" GPIO65 (default)                      "1" SMI#
       4  Reserved
       5  "0" GPIO54           "1" ECSCI#  - LPC interface(default)
       6  "0" GPIO17/N2TCK, GPIO22/N2TMS (default)  "1" SMBus Channel 1
       7  "0" GPIO73/N2TCK, GPIO74/N2TMS (default)  "1" SMBus Channel 2

                                        Bit
                                        ---                                */

#define SLPCPD_SL       Disable         //1
#define SCLKRN_SL       Enable          //2 (CLKRUN)
#define SSMI_SL         Disable         //3
#define SECSCI_SL       Disable         //5 (ECSCI#)
#define SSMBUS1_SL      Enable          //6 (SMBUS1)        Battery / Charger
#define SSMBUS2_SL      Enable          //7 (SMBUS2)        TypeC PD
#define DEVALT2_INIT ((SLPCPD_SL<<1)+(SCLKRN_SL<<2)+(SSMI_SL<<3)+(SECSCI_SL<<5)+(SSMBUS1_SL<<6)+(SSMBUS2_SL<<7))

/* ---------------------------- DEVALT3 OEM Functions ----------------------

      Standard definition of DEVALT3:

      Bit     Function
      --- -----------------
       0  "0" GPIO56             (default)        "1" TA1 - Timer
       1  "0" GPIO20/IOX_DIN_DIO (default)        "1" TA2 - Timer (When TA2_SL bit is set to 1, IOXIO2_SL bit in DEVALT8 register must be set to 0)
       2  "0" GPIO14             (default)        "1" TB1 - Timer
       3  "0" GPIO01             (default)        "1" TB2 - Timer
       4  "0" GPIO51/N2TCK       (default)        "1" TA3 - Timer
       5  "0" GPIO36/CTS1        (default)        "1" TB3 - Timer
       6  Reserved
       7  Reserved
                                        Bit
                                        ---                                */
#define STA1_SL     Disable             //0
#define STA2_SL     Disable             //1
#define STB1_SL     Disable             //2
#define STB2_SL     Disable             //3
#define STA3_SL     Disable             //4
#define STB3_SL     Disable             //5

#define DEVALT3_INIT ((STA1_SL<<0)+(STA2_SL<<1)+(STB1_SL<<2)+(STB2_SL<<3)+(STA3_SL<<4)+(STB3_SL<<5))

/* ---------------------------- DEVALT4 OEM Functions ----------------------

      Standard definition of DEVALT4:

      Bit     Function
      --- -----------------
       0  "0" GPIO94        (default)  "1" DA0 select - DA Interface.
       1  "0" GPIO95        (default)  "1" DA1 select - DA Interface.
       2  "0" GPIO96        (default)  "1" DA2 select - DA Interface.
       3  "0" GPIO97        (default)  "1" DA3 select - DA Interface.
       4  "0" GPIO50,GPIO52 (default)  "1" PSCLK3, PSDAT3 - PS2 Interface. (This setting works if JEN0 bit in STRAPST is 1)
       5  "0" GPIO35,GPIO37 (default)  "1" PSCLK1, PSDAT1 - PS2 Interface.
       6  "0" GPIO26,GPIO27 (default)  "1" PSCLK2, PSDAT2 - PS2 Interface.

                                        Bit
                                        ---                                */
#define SDAC0_SL        Disable         //0
#define SDAC1_SL        Disable         //1
#define SDAC2_SL        Disable         //2
#define SDAC3_SL        Disable         //3
#if WA_AUX_PORT12_SWAP
#define SPS2_1_SL       Disable         //5 (PS/2 channel 1), physical disable, logical usage Aux_Port1 enable
#define SPS2_2_SL       Enable          //6 (PS/2 channel 2), physical enable, logical usage Aux_Port2 disable
#else
#define SPS2_1_SL       Enable          //5 (PS/2 channel 1)
#if AUX_PORT2_SUPPORTED
#define SPS2_2_SL       Enable          //6 (PS/2 channel 2)
#else
#define SPS2_2_SL       Disable         //6 
#endif
#endif
#if AUX_PORT3_SUPPORTED
#define SPS2_3_SL       Enable          //4 (PS/2 channel 3)
#else
#define SPS2_3_SL       Disable         //4 
#endif

#define DEVALT4_INIT ((SDAC0_SL)+(SDAC1_SL<<1)+(SDAC2_SL<<2)+(SDAC3_SL<<3)+(SPS2_3_SL<<4)+(SPS2_1_SL<<5)+(SPS2_2_SL<<6))

/* ---------------------------- DEVALT5 OEM Functions ----------------------

      Standard definition of DEVALT5:

      Bit     Function
      --- -----------------
       0  "0" GPIO15 (default)              "1" A_PWM  - PWM Interface.The Input buffer of GPIO15 is also selected.
       1  "0" GPIO21 (default)              "1" B_PWM  - PWM Interface.The Input buffer of GPIO21 is also selected.
       2  "0" GPIO13 (default)              "1" C_PWM  - PWM Interface.The Input buffer of GPIO13 is also selected.
       3  "0" GPIO32 (default)              "1" D_PWM  - PWM Interface.The Input buffer of GPIO32 is also selected.
       4  "0" GPIO45/DTR1_BOUT (default)    "1" E_PWM  - PWM Interface.The Input buffer of GPIO45 is also selected.
       5  "0" GPIO40/1_WIRE/RI1 (default)   "1" F_PWM  - PWM Interface.The Input buffer of GPIO40 is also selected.
       6  "0" GPIO66/PSL_GPIO66 (default)   "1" G_PWM  - PWM Interface.The Input buffer of GPIO66 is also selected.
       7  "0" GPIO33 (default)              "1" H_PWM  - PWM Interface.The Input buffer of GPIO33 is also selected.

                                    Bit
                                    ---                                */
#define SAPWM_SL    Disable         //0
#define SBPWM_SL    Disable         //1
#define SCPWM_SL    Disable         //2
#define SDPWM_SL    Disable         //3
#define SEPWM_SL    Disable         //4
#define SFPWM_SL    Disable         //5
#define SGPWM_SL    Disable         //6
#define SHPWM_SL    Disable         //7
#define DEVALT5_INIT ((SAPWM_SL<<0)+(SBPWM_SL<<1)+(SCPWM_SL<<2)+(SDPWM_SL<<3)+(SEPWM_SL<<4)+(SFPWM_SL<<5)+(SGPWM_SL<<6)+(SHPWM_SL<<7))

/* ---------------------------- PWMCTLEXn OEM Functions ----------------------

      Standard definition of PWMCTLEXn:

      If PWMOCTEA_INIT enable set PWM channel A = Open Drain, Disable set channel A = Push Pull
      If PWMOCTEB_INIT enable set PWM channel B = Open Drain, Disable set channel B = Push Pull
      If PWMOCTEC_INIT enable set PWM channel C = Open Drain, Disable set channel C = Push Pull
      If PWMOCTED_INIT enable set PWM channel D = Open Drain, Disable set channel D = Push Pull
      If PWMOCTEE_INIT enable set PWM channel E = Open Drain, Disable set channel E = Push Pull
      If PWMOCTEF_INIT enable set PWM channel F = Open Drain, Disable set channel F = Push Pull
      If PWMOCTEG_INIT enable set PWM channel G = Open Drain, Disable set channel G = Push Pull
      If PWMOCTEH_INIT enable set PWM channel H = Open Drain, Disable set channel H = Push Pull
                                      ---                                  */
#define PWM_OPEN_DRAIN      0x80
#define PWM_PUSH_PULL       0x00

#define PWMOCTEA_INIT    PWM_PUSH_PULL
#define PWMOCTEB_INIT    PWM_PUSH_PULL
#define PWMOCTEC_INIT    PWM_PUSH_PULL
#define PWMOCTED_INIT    PWM_PUSH_PULL
#define PWMOCTEE_INIT    PWM_PUSH_PULL
#define PWMOCTEF_INIT    PWM_PUSH_PULL
#define PWMOCTEG_INIT    PWM_PUSH_PULL
#define PWMOCTEH_INIT    PWM_PUSH_PULL

/* ---------------------------- DEVALT6 OEM Functions ----------------------

      Standard definition of DEVALT6:

      Bit     Function
      --- -----------------
       0  "0" GPIO90 (default)              "1" AD0 - Analog to Digitial Interface.
       1  "0" GPIO91 (default)              "1" AD1 - Analog to Digitial Interface.
       2  "0" GPIO92 (default)              "1" AD2 - Analog to Digitial Interface.
       3  "0" GPIO93 (default)              "1" AD3 - Analog to Digitial Interface.
       4  "0" GPIO05 (default)              "1" AD4 - Analog to Digitial Interface.
       5  "0" GPIO04 (default)              "1" AD5 - Analog to Digitial Interface.
       6  "0" GPIO03/EXT_PURST (default)    "1" AD6 - Analog to Digitial Interface.
       7  "0" GPIO07/VD_IN2 (default)       "1" AD7 - Analog to Digitial Interface.

                                     Bit
                                     ---                                */
#define SADC0_SL     Disable         //0
#define SADC1_SL     Disable         //1
#define SADC2_SL     Disable         //2
#define SADC3_SL     Disable         //3
#define SADC4_SL     Disable         //4
#define SADC5_SL     Disable         //5
#define SADC6_SL     Disable         //6
#define SADC7_SL     Disable         //7
#define DEVALT6_INIT ((SADC0_SL<<0)+(SADC1_SL<<1)+(SADC2_SL<<2)+(SADC3_SL<<3)+(SADC4_SL<<4)+(SADC5_SL<<5)+(SADC6_SL<<6)+(SADC7_SL<<7))

/* ---------------------------- DEVALT7 OEM Functions ----------------------

      Standard definition of DEVALT7:

      Bit     Function
      --- -----------------
       0  Reserved
       1  Reserved
       2  "0" GPIO64            "1" KBSOUT12 - Keyboard Scan (default)
       3  "0" GPIO63            "1" KBSOUT13 - Keyboard Scan (default)
       4  "0" GPIO62            "1" KBSOUT14 - Keyboard Scan (default)
       5  "0" GPIO61            "1" KBSOUT15 - Keyboard Scan (default)
       6  "0" GPIO60 (default)  "1" KBSOUT16 - Keyboard Scan
       7  "0" GPIO57 (default)  "1" KBSOUT17 - Keyboard Scan

                                     Bit
                                     ---                                */
#if KEY_MATRIX_SUPPORTED
#define SKBO12_SL    Enable          //2
#define SKBO13_SL    Enable          //3
#define SKBO14_SL    Enable          //4
#define SKBO15_SL    Enable          //5
#if MATRIX_18
#if EMU16TO18
#define SKBO16_SL    Disable         //6
#define SKBO17_SL    Disable         //7
#else
#define SKBO16_SL    Enable          //6
#define SKBO17_SL    Enable          //7
#endif
#else
#define SKBO16_SL    Disable         //6
#define SKBO17_SL    Disable         //7
#endif
#else
#define SKBO12_SL    Disable         //2
#define SKBO13_SL    Disable         //3
#define SKBO14_SL    Disable         //4
#define SKBO15_SL    Disable         //5
#define SKBO16_SL    Disable         //6
#define SKBO17_SL    Disable         //7
#endif

#define DEVALT7_INIT ((SKBO12_SL<<2)+(SKBO13_SL<<3)+(SKBO14_SL<<4)+(SKBO15_SL<<5)+(SKBO16_SL<<6)+(SKBO17_SL<<7))

/* ---------------------------- DEVALT8 OEM Functions ----------------------

      Standard definition of DEVALT8:

      Bit     Function
      --- -----------------
       0  Reserved
       1  "0" GPIO85 (default)                      "1" GA20
       2  "0" GPIO86                                "1" KBRST# (default)
       3  Reserved
       4  Reserved
       5  "0" GPIO20/TA2 (default)                  "1" IOX_DIN_DIO2(if IOXIO2_SL is set to 1, IOXIO1_SL must be 0)
       6  "0" GPIO55/CLKOUT (default)               "1" IOX_DIN_DIO1(if IOXIO1_SL is set to 1,IOXIO2_SL must be 0)
       7  "0" GPO82/VD_OUT1,GPIO84/VD_OUT2 (default)"1" IOX_LDSH/IOXLC_SCLK
                                         Bit
                                         ---                                  */
#define SGA20_SL         Disable         //1 (GA20)
#define SKBRST_SL        Disable         //2 (KBRST#)
#define SIOXIO2_SL       Disable         //5
#define SIOXIO1_SL       Disable         //6
#define SIOXLC_SL        Disable         //7
#define DEVALT8_INIT ((SGA20_SL<<1)+(SKBRST_SL<<2)+(SIOXIO2_SL<<5)+(SIOXIO1_SL<<6)+(SIOXLC_SL<<7))


/* ---------------------------- DEVALT9 OEM Functions ----------------------

      Standard definition of DEVALT9:

      Bit     Function
      --- -----------------
       0  "0" KBSIN0/N2TCK,KBSIN1/N2TMS,KBSIN2,KBSIN3(default)  "1" GPIOA0-3
       1  "0" SERIRQ,LAD0-LAD3,LCLK LFRAME#,LRESET#  (default)  "1" GPIOF0-7
       2  "0" KBSIN4,KBSIN5                          (default)  "1" GPIOA4,5
       3  "0" KBSIN6,KBSIN7                          (default)  "1" GPIOA6,7
       4  "0" KBSOUT0/SOUT_CR,KBSOUT1-3              (default)  "1" GPOB0,GPIOB1-3
       5  "0" KBSOUT4-7                              (default)  "1" GPOB4,GPIOB5-7
       6  "0" KBSOUT8-9                              (default)  "1" GPIOC0,GPIOC1
       7  "0" KBSOUT10,11 P80_CLK/DAT                (default)  "1" GPIOC2,GPIOC3
                                        Bit
                                        ---                                  */
#define SGPA03_SL        Disable         //0
#define SGPF07_SL        Disable         //1
#define SGPA45_SL        Disable         //2
#define SGPA67_SL        Disable         //3
#define SGPB03_SL        Disable         //4
#define SGPB47_SL        Disable         //5
#define SGPC01_SL        Disable         //6
#define SGPC23_SL        Disable         //7
#define DEVALT9_INIT  ((SGPA03_SL<<0)+(SGPF07_SL<<1)+(SGPA45_SL<<2)+(SGPA67_SL<<3)+(SGPB03_SL<<4)+(SGPB47_SL<<5)+(SGPC01_SL<<6)+(SGPC23_SL<<7))

/* ---------------------------- DEVALTA OEM Functions ----------------------

      Standard definition of DEVALTA:

      Bit     Function
      --- -----------------
       0  Reserved
       1  Reserved
       2  Reserved
       3  "0" GPIO34SIN1 (default)     "1" CIRRXL_SL - CIR Interface
       4  "0" GPIO46/SDA4B (default)   "1" CIRRM2_SL - CIR Interface (JEN0 bit in STRPST is 1 & CIRRM1_SL must be 0)
       5  "0" GPIO87/SIN_CR (default)  "1" CIRRM1_SL - CIR Interface (URTI_SL bit in DEVALT1 must be 0 & CIRRM2_SL must be 0)
       6  "0" GPIO23/GPIO31 (default)  "1" SMB3_SL,  - SMBus Interface
       7  "0" GPIO47/GPIO53 (default)  "1" SMB4A_SL,  - SMBus Interface
                                        Bit
                                        ---                                  */

#define SCIRRL_SL       Disable         //3
#define SCIRRM2_SL      Disable         //4
#define SCIRRM1_SL      Disable         //5
#define SSMB3_SL        Enable          //6         G-Sensor
#define SSMB4_SL        Enable          //7         CPU
#define DEVALTA_INIT ((SCIRRL_SL<<3)+(SCIRRM2_SL<<4)+(SCIRRM1_SL<<5)+(SSMB3_SL<<6)+(SSMB4_SL<<7))

/* ---------------------------- DEVALTC OEM Functions ----------------------

      Standard definition of DEVALTC:

      Bit     Function
      --- -----------------
       0  Reserved
       1  Reserved
       2  Reserved
       3  Reserved
       4  Reserved
       5  Reserved
       6  "0" GPIO44/GPIO46/CIRRXM (default)    "1" SMB4A_SL,  - SMBus Interface
       7  Reserved
                                        Bit
                                        ---                                  */
#define SSMB4B_SL       Disable         //6
#define DEVALTC_INIT ((SSMB4B_SL<<6))

/* ---------------------------- DEVALTD OEM Functions ----------------------

      Standard definition of DEVALTD:

      Bit     Function
      --- -----------------
       0  "0" GPIO81/F_WP#, GPIO00/EXTCLK         (default)              "1" F_SDIO2, F_SDIO3 (set after QUAD_EN bit in RESP_CFG be set)
       2  "0" PSL_IN1#(GPIO70) active level is low(default)              "1" PSL_IN1#(GPIO70) active level is high
       3  "0" PSL_IN1#(GPIO70) input disable, can be left floating       "1" PSL_IN1#(GPIO70) input enable (default)
       4  "0" PSL_IN2#(GPIO06) active transition is high to low (default)"1" PSL_IN2#(GPIO06) active transition is low to high
       5  "0" PSL_IN2#(GPIO06) input disable, can be left floating       "1" PSL_IN2#(GPIO06) input enable (default)
       6  Reserved
       7  Reserved
                                        Bit
                                        ---                                  */
#define SF_IO23_SL      Disable         //0
#define SPSL_IN1_AHI    Disable         //2
#define SPSL_IN1_SL     Enable          //3
#define SPSL_IN2_AHI    Disable         //4
#define SPSL_IN2_SL     Enable          //5
#define DEVALTD_INIT ((SF_IO23_SL<<0)+(SPSL_IN1_AHI<<2)+(SPSL_IN1_SL<<3)+(SPSL_IN2_AHI<<4)+(SPSL_IN2_SL<<5))

/* ---------------------------- DEVALTDX OEM Functions ----------------------

      Standard definition of DEVALTDX:

      Bit     Function
      --- -----------------
       2  "0" PSL_IN3#(GPIO42) active level is low (default)
          "1" PSL_IN3#(GPIO42) active level is high
       3  "0" PSL_IN3#(GPIO42) input disable, can be left floating (default)
          "1" PSL_IN3#(GPIO42) input enable
       4  "0" PSL_IN4#(GPIO43) active transition is high to low (default)
          "1" PSL_IN4#(GPIO43) active transition is low to high
       5  "0" PSL_IN4#(GPIO43) input disable, can be left floating (default)
          "1" PSL_IN4#(GPIO43) input enable
       6  "0" GPIO41 is selected to the device pin and the pin is floating while VCC power is off (default)
          "1" GPIO41 output configuratioon and output level to the device pin are preseved while VCC power is off
       7  "0" GPIO66 is selected to the device pin and the pin is floating while VCC power is off (default)
          "1" GPIO66 output configuratioon and output level to the device pin are preseved while VCC power is off
                                        Bit
                                        ---                                  */
#define SPSL_IN3_AHI    Disable         //2
#define SPSL_IN3_SL     Disable         //3
#define SPSL_IN4_AHI    Enable          //4
#define SPSL_IN4_SL     Enable          //5
#define DEVALTDX_INIT ((SPSL_IN3_AHI<<2)+(SPSL_IN3_SL<<3)+(SPSL_IN4_AHI<<4)+(SPSL_IN4_SL<<5))

/* ---------------------------- DEVALTE OEM Functions ----------------------

      Standard definition of DEVALTE:

      Bit     Function
      --- -----------------
       0  "0" GPIO80          (default) "1" VD_IN1   (If VD1_EN bit in STRPST is 1)
       1  "0" GPIO82/IOX_LDSH (default) "1" VD_OUT1  (If VD1_EN bit in STRPST is 1)
       2  "0" GPIO07/AD7      (default) "1" VD_IN2
       3  "0" GPIO84/IOX_SCLK (default) "1" VD_OUT2
       4  "0" GPIO40/F_PWM    (default) "1" 1_WIRE function
       5  Reserved
       6  Reserved
       7  Reserved
                                        Bit
                                        ---                                  */
#define SVDI1_SL             Enable     //0
#define SVDO1_SL             Enable     //1
#define SVDI2_SL             Disable    //2
#define SVDO2_SL             Disable     //3
#define SONE_WIRE_SL         Disable     //4

#define DEVALTE_INIT ((SVDI1_SL<<0)+(SVDO1_SL<<1)+(SVDI2_SL<<2)+(SVDO2_SL<<3)+(SONE_WIRE_SL<<4))


/* ---------------------------- PWM_SEL OEM Functions ----------------------

      Standard definition of PWM_SEL:

      Bit     Function
      --- -----------------
       1-0 "0 0:No soruce" , "0 1:GPIO42 generates FORCE_PWM" , "1 0:GPIO43 generates FORCE_PWM" , "1 1:Reserved"
       2  Reserved
       3  Reserved
       4  "0" GPIO42_POL -Active Low        "1" active High
       5  "0" GPIO43_POL -Active Low        "1" active High
       6  Reserved
       7  "0" FORCE_PWM by watch dog warm reset is disable    "1" FORCE_PWM is generated by a watch dog warm reset
                                      Bit
                                      ---                                  */
#define SFPWM_SEL0    Disable          //0
#define SFPWM_SEL1    Disable          //1
#define SGPIO42_POL   Disable          //4
#define SGPIO43_POL   Disable          //5
#define SWD_RST_EN    Disable          //7
#define PWM_SEL_INIT ((SFPWM_SEL0<<0)+(SFPWM_SEL1<<1)+(SGPIO42_POL<<4)+(SGPIO43_POL<<5)+(SWD_RST_EN<<7))


/* ---------------------------- DEVPU0 ----------------------

      Standard definition of DEVPU0:

      Bit     Function
      --- -----------------
       0  "0" SCL1, SDA1 are not pulled up.  "1" SCL1, SDA1 are pulled up.
       1  "0" SCL2, SDA2 are not pulled up.  "1" SCL2, SDA2 are pulled up.
       2  "0" SCL3, SDA3 are not pulled up.  "1" SCL3, SDA3 are pulled up.
       3  "0" SCL4, SDA4 are not pulled up.  "1" SCL4, SDA4 are pulled up.
       4  Reserved
       5  Reserved
       6  "0" SCL4B, SDA4B are not pulled up."1" SCL4B, SDA4B are pulled up.
       7  Reserved
                                      Bit
                                      ---                                  */
#define SSMB1_PUE   Disable          //0
#define SSMB2_PUE   Disable          //1
#define SSMB3_PUE   Disable          //2
#define SSMB4_PUE   Disable          //3
#define SSMB4B_PUE  Disable          //6

#define DEVPU0_INIT  ((SSMB1_PUE<<0)+(SSMB2_PUE<<1)+(SSMB3_PUE<<2)+(SSMB4_PUE<<3)+(SSMB4B_PUE<<6))

/* -------------------------- A to D ------------------------- */

#define ADLYCTL_INIT ((TMPDLY_INIT << 4) + VOLDLY_INIT)
#define ADCCNF_INIT_H   0x07
#define ATCTL_INIT_H    0x03 /*WPC8768/9 bit11-8 must be 011 */
#define ADCCNF_INIT_L   0x00
#define ATCTL_INIT_L    0x00
#define ADCCS_INIT      0x00
/* ------------------------- DACCTRL -------------------------
   D to A control. */

/* DA0 and DA1 enabled. */
#define DA0_ON 0
#define DA1_ON 0
#define DA2_ON 0
#define DA3_ON 0

#define DACCTRL_INIT ((DA3_ON << 3) | (DA2_ON << 2) | (DA1_ON << 1) | (DA0_ON << 0))

/* ------------------------- DACDATx -------------------------
   D to A outputs. */

#define DACDAT0_INIT 0
#define DACDAT1_INIT 0
#define DACDAT2_INIT 0
#define DACDAT3_INIT 0

/* -------------------------- PSCON --------------------------

   Bit     Function
   --- -----------------
    0  EN
    1  XMT
    2  High drive
    3  High drive
    4  Input debouce bit 0
    5  Input debouce bit 1
    6  Input debouce bit 2
    7  Weak pullup enable

   Input debounce: 0 =  1 cycle.
                   1 =  2 cycles.
                   2 =  4 cycles.
                   3 =  8 cycles.
                   4 = 16 cycles.
                   5 = 32 cycles.

   Bit 1 and 0 must be clear. */

#define PSCON_OEM  0x40 /* Input De-Bounce set to 16 cycles. */
#define PSCON_INIT (PSCON_OEM & ~(PSCON_XMT | PSCON_EN))

/* ------------------------- SMB1CTL2 -------------------------
   SMB1 Control 2.

   Bits 7 through 1 set the SCL frequency (8 - 127 valid).
   Bit 0 set enables the module.
   Bit 0 must be set if PB_Alt bits 4 and 3 are set, else must be 0. */

#define SMB1CTL2_OEM  0xFE

#define SMB1CTL4_INIT 0x0F             //Recommened value are : 7 for F(clock) < 12MHz;  15 for F(clock) = 25MHz
#define SMB1CTL2_INIT (SMB1CTL2_OEM | 1)

/* ------------------------- SMB2CTL2 -------------------------
   SMB2 Control 2.

   Bits 7 through 1 set the SCL frequency (8 - 127 valid).
   Bit 0 set enables the module.
   Bit 0 must be set if PC_Alt bits 2 and 1 are set, else must be 0. */

#define SMB2CTL2_OEM  0xFE

#define SMB2CTL4_INIT 0x0F             //Recommened value are : 7 for F(clock) < 12MHz;  15 for F(clock) = 25MHz
#define SMB2CTL2_INIT (SMB2CTL2_OEM | 1)

#if SMBUS_CH_NUM > 2
/* ------------------------- SMB3CTL2 -------------------------
   SMB3 Control 2.

   Bits 7 through 1 set the SCL frequency (8 - 127 valid).
   Bit 0 set enables the module.
   Bit 0 must be set if PC_Alt bits 2 and 1 are set, else must be 0. */

#define SMB3CTL2_OEM  0xFE

#define SMB3CTL4_INIT 0x0F             //Recommened value are : 7 for F(clock) < 12MHz;  15 for F(clock) = 25MHz
#define SMB3CTL2_INIT (SMB3CTL2_OEM | 1)
#endif

#if SMBUS_CH_NUM > 3
/* ------------------------- SMB3CTL2 -------------------------
   SMB4 Control 2.

   Bits 7 through 1 set the SCL frequency (8 - 127 valid).
   Bit 0 set enables the module.
   Bit 0 must be set if PC_Alt bits 2 and 1 are set, else must be 0. */

#define SMB4CTL2_OEM  0xFE

#define SMB4CTL4_INIT 0x0F             //Recommened value are : 7 for F(clock) < 12MHz;  15 for F(clock) = 25MHz
#define SMB4CTL2_INIT (SMB4CTL2_OEM | 1)
#endif

/*------------------ Deep Sleep Wake Control ------------------------*/
#define SWAKE_ANYKEY 1  //"1" Any key wake up from sleep enable     / "0" Any key wake up from sleep disable
#define SWAKE_AUXP1  0  //"1" Aux Port1 wake up from sleep enable   / "0" Aux Port1 wake up from sleep disable
#define SWAKE_AUXP2  0  //"1" Aux Port2 wake up from sleep enable   / "0" Aux Port2 wake up from sleep disable
#define SWAKE_AUXP3  0  //"1" Aux Port3 wake up from sleep enable   / "0" Aux Port3 wake up from sleep disable
#define SWAKE_MSWC   0  //"1" Mobile System wake up control enable  / "0" Mobile System wake up control disable
#define SWAKE_T0OUT  0  //"1" WatchDog wake up from deep sleep enable "0" WatchDog wake up from deep sleep disable
#define SWAKE_LRESET 0  //"1" LRESET# wake up from deep sleep enable/ "0" LRESET# wake up from deep sleep disable
#define SWAKE_IBF1   1  //"1" Primary Host wake up control enable   / "0" Primary Host wake up control disable
#define SWAKE_SMBUS1 0  //"1" Smbus 1 wake up control enable        / "0" Smbus 1 wake up control disable
#define SWAKE_SMBUS2 0  //"1" Smbus 2 wake up control enable        / "0" Smbus 2 wake up control disable
#define SWAKE_VDET   0  //"1" VDET wake up control enable           / "0" VDET wake up control disable

/*------------------ Deep Sleep Wake Edge Detection Control ------------------------*/
#define SWAKE_MSWC_ED   0
#define SWAKE_T0OUT_ED  0    //Edge setting of T0OUT  must be 0
#define SWAKE_LRESET_ED 0
#define SWAKE_IBF1_ED   0    //Edge setting of IBF1   must be 0
#define SWAKE_SMBUS1_ED 0    //Edge setting of SMBUS1 must be 0
#define SWAKE_SMBUS2_ED 0    //Edge setting of SMBUS2 must be 0
#define SWAKE_VDET_ED   0    //Edge setting of VDET   must be 0

//******************************************************************************************************//
//*     GPIO00 Define    DC_IN_OK                                                                    *//
//******************************************************************************************************//
#define  xP0OD_I_0   0  //"1" = GPIO00 The output pin is Open_Drain / "0" = GPIO00 The output pin is Push_Pull
#if xP0OD_I_0
#define  P0DIR_I_0   0  //"0" = GPIO00 Output Data "High"           / "1" = GPIO00 Output Data "Low"
#define  P0DOUT_I_0  0  //Open Drain Mode this bit always set to "0". 
#define  SET_PORT0_BIT0       CLRBIT0(P0DIR)
#define  CLR_PORT0_BIT0       SETBIT0(P0DIR)
#define  CPL_PORT0_BIT0       CPLBIT0(P0DIR)
#else
#define  P0DIR_I_0   0  //"1" = GPIO00 is Output Pin                / "0" = GPIO00 is Input Pin
#define  P0DOUT_I_0  0  //"1" = GPIO00 Output Data "High"           / "0" = GPIO00 Output Data "Low"
#define  SET_PORT0_BIT0       SETBIT0(P0DOUT)
#define  CLR_PORT0_BIT0       CLRBIT0(P0DOUT)
#define  CPL_PORT0_BIT0       CPLBIT0(P0DOUT)
#endif
#define  P0PUE_I_0   0  //"1" = GPIO00 Pull Up/Dn Enable            / "0" = GPIO00 Pull Up/Dn Disable
#define  P0PUD_I_0   0  //"1" = GPIO00 Pull Down                    / "0" = GPIO00 Pull Up
#define  P0VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO00 Wake up from Deep Sleep Support      */
#define  P0WE_0      0  //"1" = GPIO00 wake up from sleep enable    / "0" = GPIO00 wake up from sleep disable
#define  P0WA_0      0  //"1" = GPIO00 enable any edge wake up      / "0" = GPIO00 disable any edge wake up 
#define  P0WP_0      0  //"1" = GPIO00 wake up when falling edge    / "0" = GPIO00 wake up when rising edge 
#define  P00_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO01 Define    GPI_PM_SLP_S3#(DEVALT3)                                                                *//
//******************************************************************************************************//
#define  xP0OD_I_1   0  //"1" = GPIO01 The output pin is Open_Drain / "0" = GPIO01 The output pin is Push_Pull
#if xP0OD_I_1
#define  P0DIR_I_1   0  //"0" = GPIO01 Output Data "High"           / "1" = GPIO01 Output Data "Low"
#define  P0DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT0_BIT1       CLRBIT1(P0DIR)
#define  CLR_PORT0_BIT1       SETBIT1(P0DIR)
#define  CPL_PORT0_BIT1       CPLBIT1(P0DIR)
#else
#define  P0DIR_I_1   0  //"1" = GPIO01 is Output Pin                / "0" = GPIO01 is Input Pin
#define  P0DOUT_I_1  0  //"1" = GPIO01 Output Data "High"           / "0" = GPIO01 Output Data "Low"
#define  SET_PORT0_BIT1       SETBIT1(P0DOUT)
#define  CLR_PORT0_BIT1       CLRBIT1(P0DOUT)
#define  CPL_PORT0_BIT1       CPLBIT1(P0DOUT)
#endif
#define  P0PUE_I_1   0  //"1" = GPIO01 Pull Up/Dn Enable            / "0" = GPIO01 Pull Up/Dn Disable
#define  P0PUD_I_1   0  //"1" = GPIO01 Pull Down                    / "0" = GPIO01 Pull Up
#define  P0VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO01 Wake up from Deep Sleep Support      */
#define  P0WE_1      0  //"1" = GPIO01 wake up from sleep enable    / "0" = GPIO01 wake up from sleep disable
#define  P0WA_1      0  //"1" = GPIO01 enable any edge wake up      / "0" = GPIO01 disable any edge wake up 
#define  P0WP_1      0  //"1" = GPIO01 wake up when falling edge    / "0" = GPIO01 wake up when rising edge 
#define  P01_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO02 Define   PWR_5V_EN                                                                  *//
//******************************************************************************************************//
#define  xP0OD_I_2   1  //"1" = GPIO02 The output pin is Open_Drain / "0" = GPIO02 The output pin is Push_Pull
#if xP0OD_I_2
#define  P0DIR_I_2   0  //"0" = GPIO02 Output Data "High"           / "1" = GPIO02 Output Data "Low"
#define  P0DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT0_BIT2       CLRBIT2(P0DIR)
#define  CLR_PORT0_BIT2       SETBIT2(P0DIR)
#define  CPL_PORT0_BIT2       CPLBIT2(P0DIR)
#else
#define  P0DIR_I_2   0  //"1" = GPIO02 is Output Pin                / "0" = GPIO02 is Input Pin
#define  P0DOUT_I_2  0  //"1" = GPIO02 Output Data "High"           / "0" = GPIO02 Output Data "Low"
#define  SET_PORT0_BIT2       SETBIT2(P0DOUT)
#define  CLR_PORT0_BIT2       CLRBIT2(P0DOUT)
#define  CPL_PORT0_BIT2       CPLBIT2(P0DOUT)
#endif
#define  P0PUE_I_2   0  //"1" = GPIO02 Pull Up/Dn Enable            / "0" = GPIO02 Pull Up/Dn Disable
#define  P0PUD_I_2   0  //"1" = GPIO02 Pull Down                    / "0" = GPIO02 Pull Up
#define  P0VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO02 Wake up from Deep Sleep Support      */
#define  P0WE_2      0  //"1" = GPIO02 wake up from sleep enable    / "0" = GPIO02 wake up from sleep disable
#define  P0WA_2      0  //"1" = GPIO02 enable any edge wake up      / "0" = GPIO02 disable any edge wake up 
#define  P0WP_2      0  //"1" = GPIO02 wake up when falling edge    / "0" = GPIO02 wake up when rising edge 
#define  P02_AFKEEP  1  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO03 Define    PWR_CHG_BMON (BT_IA) (DEVALT6)                                                                     *//
//******************************************************************************************************//
#define  xP0OD_I_3   0  //"1" = GPIO03 The output pin is Open_Drain / "0" = GPIO03 The output pin is Push_Pull
#if xP0OD_I_3
#define  P0DIR_I_3   0  //"0" = GPIO03 Output Data "High"           / "1" = GPIO03 Output Data "Low"
#define  P0DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT0_BIT3       CLRBIT3(P0DIR)
#define  CLR_PORT0_BIT3       SETBIT3(P0DIR)
#define  CPL_PORT0_BIT3       CPLBIT3(P0DIR)
#else
#define  P0DIR_I_3   0  //"1" = GPIO03 is Output Pin                / "0" = GPIO03 is Input Pin
#define  P0DOUT_I_3  0  //"1" = GPIO03 Output Data "High"           / "0" = GPIO03 Output Data "Low"
#define  SET_PORT0_BIT3       SETBIT3(P0DOUT)
#define  CLR_PORT0_BIT3       CLRBIT3(P0DOUT)
#define  CPL_PORT0_BIT3       CPLBIT3(P0DOUT)
#endif
#define  P0PUE_I_3   0  //"1" = GPIO03 Pull Up/Dn Enable            / "0" = GPIO03 Pull Up/Dn Disable
#define  P0PUD_I_3   0  //"1" = GPIO03 Pull Down                    / "0" = GPIO03 Pull Up
#define  P0VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO03 Wake up from Deep Sleep Support      */
#define  P0WE_3      0  //"1" = GPIO03 wake up from sleep enable    / "0" = GPIO03 wake up from sleep disable
#define  P0WA_3      0  //"1" = GPIO03 enable any edge wake up      / "0" = GPIO03 disable any edge wake up 
#define  P0WP_3      0  //"1" = GPIO03 wake up when falling edge    / "0" = GPIO03 wake up when rising edge 
#define  P03_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO04 Define   EC_I2C_INT#_PD                                                                  *//
//******************************************************************************************************//
#define  xP0OD_I_4   0  //"1" = GPIO04 The output pin is Open_Drain / "0" = GPIO04 The output pin is Push_Pull
#if xP0OD_I_4
#define  P0DIR_I_4   0  //"0" = GPIO04 Output Data "High"           / "1" = GPIO04 Output Data "Low"
#define  P0DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT0_BIT4       CLRBIT4(P0DIR)
#define  CLR_PORT0_BIT4       SETBIT4(P0DIR)
#define  CPL_PORT0_BIT4       CPLBIT4(P0DIR)
#else
#define  P0DIR_I_4   0  //"1" = GPIO04 is Output Pin                / "0" = GPIO04 is Input Pin
#define  P0DOUT_I_4  0  //"1" = GPIO04 Output Data "High"           / "0" = GPIO04 Output Data "Low"
#define  SET_PORT0_BIT4       SETBIT4(P0DOUT)
#define  CLR_PORT0_BIT4       CLRBIT4(P0DOUT)
#define  CPL_PORT0_BIT4       CPLBIT4(P0DOUT)
#endif
#define  P0PUE_I_4   0  //"1" = GPIO04 Pull Up/Dn Enable            / "0" = GPIO04 Pull Up/Dn Disable
#define  P0PUD_I_4   0  //"1" = GPIO04 Pull Down                    / "0" = GPIO04 Pull Up
#define  P0VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO04 Wake up from Deep Sleep Support      */
#define  P0WE_4      1  //"1" = GPIO04 wake up from sleep enable    / "0" = GPIO04 wake up from sleep disable
#define  P0WA_4      0  //"1" = GPIO04 enable any edge wake up      / "0" = GPIO04 disable any edge wake up 
#define  P0WP_4      1  //"1" = GPIO04 wake up when falling edge    / "0" = GPIO04 wake up when rising edge 
#define  P04_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO05 Define  MODEL_ID_AD (DEVALT6)                                                               *//
//******************************************************************************************************//
#define  xP0OD_I_5   0  //"1" = GPIO05 The output pin is Open_Drain / "0" = GPIO05 The output pin is Push_Pull
#if xP0OD_I_5
#define  P0DIR_I_5   0  //"0" = GPIO05 Output Data "High"           / "1" = GPIO05 Output Data "Low"
#define  P0DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT0_BIT5       CLRBIT5(P0DIR)
#define  CLR_PORT0_BIT5       SETBIT5(P0DIR)
#define  CPL_PORT0_BIT5       CPLBIT5(P0DIR)
#else
#define  P0DIR_I_5   0  //"1" = GPIO05 is Output Pin                / "0" = GPIO05 is Input Pin
#define  P0DOUT_I_5  0  //"1" = GPIO05 Output Data "High"           / "0" = GPIO05 Output Data "Low"
#define  SET_PORT0_BIT5       SETBIT5(P0DOUT)
#define  CLR_PORT0_BIT5       CLRBIT5(P0DOUT)
#define  CPL_PORT0_BIT5       CPLBIT5(P0DOUT)
#endif
#define  P0PUE_I_5   0  //"1" = GPIO05 Pull Up/Dn Enable            / "0" = GPIO05 Pull Up/Dn Disable
#define  P0PUD_I_5   0  //"1" = GPIO05 Pull Down                    / "0" = GPIO05 Pull Up
#define  P0VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO05 Wake up from Deep Sleep Support      */
#define  P0WE_5      0  //"1" = GPIO05 wake up from sleep enable    / "0" = GPIO05 wake up from sleep disable
#define  P0WA_5      0  //"1" = GPIO05 enable any edge wake up      / "0" = GPIO05 disable any edge wake up 
#define  P0WP_5      0  //"1" = GPIO05 wake up when falling edge    / "0" = GPIO05 wake up when rising edge 
#define  P05_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO06 Define    KBC_PWRBTN#(DEVALT8,D)                                                               *//
//******************************************************************************************************//
#define  xP0OD_I_6   0  //"1" = GPIO06 The output pin is Open_Drain / "0" = GPIO06 The output pin is Push_Pull
#if xP0OD_I_6
#define  P0DIR_I_6   0  //"0" = GPIO06 Output Data "High"           / "1" = GPIO06 Output Data "Low"
#define  P0DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT0_BIT6       CLRBIT6(P0DIR)
#define  CLR_PORT0_BIT6       SETBIT6(P0DIR)
#define  CPL_PORT0_BIT6       CPLBIT6(P0DIR)
#else
#define  P0DIR_I_6   0  //"1" = GPIO06 is Output Pin                / "0" = GPIO06 is Input Pin
#define  P0DOUT_I_6  0  //"1" = GPIO06 Output Data "High"           / "0" = GPIO06 Output Data "Low"
#define  SET_PORT0_BIT6       SETBIT6(P0DOUT)
#define  CLR_PORT0_BIT6       CLRBIT6(P0DOUT)
#define  CPL_PORT0_BIT6       CPLBIT6(P0DOUT)
#endif
#define  P0PUE_I_6   0  //"1" = GPIO06 Pull Up/Dn Enable            / "0" = GPIO06 Pull Up/Dn Disable
#define  P0PUD_I_6   0  //"1" = GPIO06 Pull Down                    / "0" = GPIO06 Pull Up
#define  P0VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO06 Wake up from Deep Sleep Support      */
#define  P0WE_6      1  //"1" = GPIO06 wake up from sleep enable    / "0" = GPIO06 wake up from sleep disable
#define  P0WA_6      0  //"1" = GPIO06 enable any edge wake up      / "0" = GPIO06 disable any edge wake up 
#define  P0WP_6      1  //"1" = GPIO06 wake up when falling edge    / "0" = GPIO06 wake up when rising edge 
#define  P06_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO07 Define    VD_IN2 (DEVALT6,E)                                                                      *//
//******************************************************************************************************//
#define  xP0OD_I_7   0  //"1" = GPIO07 The output pin is Open_Drain / "0" = GPIO07 The output pin is Push_Pull
#if xP0OD_I_7
#define  P0DIR_I_7   0  //"0" = GPIO07 Output Data "High"           / "1" = GPIO07 Output Data "Low"
#define  P0DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT0_BIT7       CLRBIT7(P0DIR)
#define  CLR_PORT0_BIT7       SETBIT7(P0DIR)
#define  CPL_PORT0_BIT7       CPLBIT7(P0DIR)
#else
#define  P0DIR_I_7   0  //"1" = GPIO07 is Output Pin                / "0" = GPIO07 is Input Pin
#define  P0DOUT_I_7  0  //"1" = GPIO07 Output Data "High"           / "0" = GPIO07 Output Data "Low"
#define  SET_PORT0_BIT7       SETBIT7(P0DOUT)
#define  CLR_PORT0_BIT7       CLRBIT7(P0DOUT)
#define  CPL_PORT0_BIT7       CPLBIT7(P0DOUT)
#endif
#define  P0PUE_I_7   0  //"1" = GPIO07 Pull Up/Dn Enable            / "0" = GPIO07 Pull Up/Dn Disable
#define  P0PUD_I_7   0  //"1" = GPIO07 Pull Down                    / "0" = GPIO07 Pull Up
#define  P0VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO07 Wake up from Deep Sleep Support      */
#define  P0WE_7      0  //"1" = GPIO07 wake up from sleep enable    / "0" = GPIO07 wake up from sleep disable
#define  P0WA_7      0  //"1" = GPIO07 enable any edge wake up      / "0" = GPIO07 disable any edge wake up 
#define  P0WP_7      0  //"1" = GPIO07 wake up when falling edge    / "0" = GPIO07 wake up when rising edge 
#define  P07_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO10 Define    SH_INT# (DEVALT2)                                                           *//
//******************************************************************************************************//
#define  xP1OD_I_0   1  //"1" = GPIO10 The output pin is Open_Drain / "0" = GPIO10 The output pin is Push_Pull
#if xP1OD_I_0
#define  P1DIR_I_0   0  //"0" = GPIO10 Output Data "High"           / "1" = GPIO10 Output Data "Low"
#define  P1DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT0       CLRBIT0(P1DIR)
#define  CLR_PORT1_BIT0       SETBIT0(P1DIR)
#define  CPL_PORT1_BIT0       CPLBIT0(P1DIR)
#else
#define  P1DIR_I_0   0  //"1" = GPIO10 is Output Pin                / "0" = GPIO10 is Input Pin
#define  P1DOUT_I_0  0  //"1" = GPIO10 Output Data "High"           / "0" = GPIO10 Output Data "Low"
#define  SET_PORT1_BIT0       SETBIT0(P1DOUT)
#define  CLR_PORT1_BIT0       CLRBIT0(P1DOUT)
#define  CPL_PORT1_BIT0       CPLBIT0(P1DOUT)
#endif
#define  P1PUE_I_0   0  //"1" = GPIO10 Pull Up/Dn Enable            / "0" = GPIO10 Pull Up/Dn Disable
#define  P1PUD_I_0   0  //"1" = GPIO10 Pull Down                    / "0" = GPIO10 Pull Up
#define  P1VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO10 Wake up from Deep Sleep Support      */
#define  P1WE_0      0  //"1" = GPIO10 wake up from sleep enable    / "0" = GPIO10 wake up from sleep disable
#define  P1WA_0      0  //"1" = GPIO10 enable any edge wake up      / "0" = GPIO10 disable any edge wake up 
#define  P1WP_0      0  //"1" = GPIO10 wake up when falling edge    / "0" = GPIO10 wake up when rising edge 
#define  P10_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO11 Define    CLKRUN# (DEVALT2)                                                             *//
//******************************************************************************************************//
#define  xP1OD_I_1   0  //"1" = GPIO11 The output pin is Open_Drain / "0" = GPIO11 The output pin is Push_Pull
#if xP1OD_I_1
#define  P1DIR_I_1   0  //"1" = GPIO11 Output Data "High"           / "0" = GPIO11 Output Data "Low"
#define  P1DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT1       CLRBIT1(P1DIR)
#define  CLR_PORT1_BIT1       SETBIT1(P1DIR)
#define  CPL_PORT1_BIT1       CPLBIT1(P1DIR)
#else
#define  P1DIR_I_1   0  //"1" = GPIO11 is Output Pin                / "0" = GPIO11 is Input Pin
#define  P1DOUT_I_1  0  //"1" = GPIO11 Output Data "High"           / "0" = GPIO11 Output Data "Low"
#define  SET_PORT1_BIT1       SETBIT1(P1DOUT)
#define  CLR_PORT1_BIT1       CLRBIT1(P1DOUT)
#define  CPL_PORT1_BIT1       CPLBIT1(P1DOUT)
#endif
#define  P1PUE_I_1   0  //"1" = GPIO11 Pull Up/Dn Enable            / "0" = GPIO11 Pull Up/Dn Disable
#define  P1PUD_I_1   0  //"1" = GPIO11 Pull Down                    / "0" = GPIO11 Pull Up
#define  P1VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO11 Wake up from Deep Sleep Support      */
#define  P1WE_1      0  //"1" = GPIO11 wake up from sleep enable    / "0" = GPIO11 wake up from sleep disable
#define  P1WA_1      0  //"1" = GPIO11 enable any edge wake up      / "0" = GPIO11 disable any edge wake up 
#define  P1WP_1      0  //"1" = GPIO11 wake up when falling edge    / "0" = GPIO11 wake up when rising edge 
#define  P11_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO12 Define      (Reserved)                                                            *//
//******************************************************************************************************//
#define  xP1OD_I_2   0  //"1" = GPIO12 The output pin is Open_Drain / "0" = GPIO12 The output pin is Push_Pull
#if xP1OD_I_2
#define  P1DIR_I_2   0  //"0" = GPIO12 Output Data "High"           / "1" = GPIO12 Output Data "Low"
#define  P1DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT2       CLRBIT2(P1DIR)
#define  CLR_PORT1_BIT2       SETBIT2(P1DIR)
#define  CPL_PORT1_BIT2       CPLBIT2(P1DIR)
#else
#define  P1DIR_I_2   0  //"1" = GPIO12 is Output Pin                / "0" = GPIO12 is Input Pin
#define  P1DOUT_I_2  0  //"1" = GPIO12 Output Data "High"           / "0" = GPIO12 Output Data "Low"
#define  SET_PORT1_BIT2       SETBIT2(P1DOUT)
#define  CLR_PORT1_BIT2       CLRBIT2(P1DOUT)
#define  CPL_PORT1_BIT2       CPLBIT2(P1DOUT)
#endif
#define  P1PUE_I_2   0  //"1" = GPIO12 Pull Up/Dn Enable            / "0" = GPIO12 Pull Up/Dn Disable
#define  P1PUD_I_2   0  //"1" = GPIO12 Pull Down                    / "0" = GPIO12 Pull Up
#define  P1VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P12_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO13 Define (DEVALT5)   KB_BL_PWM                                                              *//
//******************************************************************************************************//
#define  xP1OD_I_3   0  //"1" = GPIO13 The output pin is Open_Drain / "0" = GPIO13 The output pin is Push_Pull
#if xP1OD_I_3
#define  P1DIR_I_3   0  //"0" = GPIO13 Output Data "High"           / "1" = GPIO13 Output Data "Low"
#define  P1DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT3       CLRBIT3(P1DIR)
#define  CLR_PORT1_BIT3       SETBIT3(P1DIR)
#define  CPL_PORT1_BIT3       CPLBIT3(P1DIR)
#else
#define  P1DIR_I_3   1  //"1" = GPIO13 is Output Pin                / "0" = GPIO13 is Input Pin
#define  P1DOUT_I_3  0  //"1" = GPIO13 Output Data "High"           / "0" = GPIO13 Output Data "Low"
#define  SET_PORT1_BIT3       SETBIT3(P1DOUT)
#define  CLR_PORT1_BIT3       CLRBIT3(P1DOUT)
#define  CPL_PORT1_BIT3       CPLBIT3(P1DOUT)
#endif
#define  P1PUE_I_3   0  //"1" = GPIO13 Pull Up/Dn Enable            / "0" = GPIO13 Pull Up/Dn Disable
#define  P1PUD_I_3   0  //"1" = GPIO13 Pull Down                    / "0" = GPIO13 Pull Up
#define  P1VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO13 Wake up from Deep Sleep Support      */
#define  P1WE_3      0  //"1" = GPIO13 wake up from sleep enable    / "0" = GPIO13 wake up from sleep disable
#define  P1WA_3      0  //"1" = GPIO13 enable any edge wake up      / "0" = GPIO13 disable any edge wake up 
#define  P1WP_3      0  //"1" = GPIO13 wake up when falling edge    / "0" = GPIO13 wake up when rising edge 
#define  P13_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO14 Define    STDBY_LED(DEVALT3)                                                                     *//
//******************************************************************************************************//
#define  xP1OD_I_4   0  //"1" = GPIO14 The output pin is Open_Drain / "0" = GPIO14 The output pin is Push_Pull
#if xP1OD_I_4
#define  P1DIR_I_4   0  //"0" = GPIO14 Output Data "High"           / "1" = GPIO14 Output Data "Low"
#define  P1DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT4       CLRBIT4(P1DIR)
#define  CLR_PORT1_BIT4       SETBIT4(P1DIR)
#define  CPL_PORT1_BIT4       CPLBIT4(P1DIR)
#else
#define  P1DIR_I_4   1  //"1" = GPIO14 is Output Pin                / "0" = GPIO14 is Input Pin
#define  P1DOUT_I_4  0  //"1" = GPIO14 Output Data "High"           / "0" = GPIO14 Output Data "Low"
#define  SET_PORT1_BIT4       SETBIT4(P1DOUT)
#define  CLR_PORT1_BIT4       CLRBIT4(P1DOUT)
#define  CPL_PORT1_BIT4       CPLBIT4(P1DOUT)
#endif
#define  P1PUE_I_4   0  //"1" = GPIO14 Pull Up/Dn Enable            / "0" = GPIO14 Pull Up/Dn Disable
#define  P1PUD_I_4   0  //"1" = GPIO14 Pull Down                    / "0" = GPIO14 Pull Up
#define  P1VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO14 Wake up from Deep Sleep Support      */
#define  P1WE_4      0  //"1" = GPIO14 wake up from sleep enable    / "0" = GPIO14 wake up from sleep disable
#define  P1WA_4      0  //"1" = GPIO14 enable any edge wake up      / "0" = GPIO14 disable any edge wake up 
#define  P1WP_4      0  //"1" = GPIO14 wake up when falling edge    / "0" = GPIO14 wake up when rising edge 
#define  P14_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO15 Define (DEVALT5)   DC_BATFULL                                                       *//
//******************************************************************************************************//
#define  xP1OD_I_5   0  //"1" = GPIO15 The output pin is Open_Drain / "0" = GPIO15 The output pin is Push_Pull
#if xP1OD_I_5
#define  P1DIR_I_5   0  //"0" = GPIO15 Output Data "High"           / "1" = GPIO15 Output Data "Low"
#define  P1DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT5       CLRBIT5(P1DIR)
#define  CLR_PORT1_BIT5       SETBIT5(P1DIR)
#define  CPL_PORT1_BIT5       CPLBIT5(P1DIR)
#else
#define  P1DIR_I_5   1  //"1" = GPIO15 is Output Pin                / "0" = GPIO15 is Input Pin
#define  P1DOUT_I_5  0  //"1" = GPIO15 Output Data "High"           / "0" = GPIO15 Output Data "Low"
#define  SET_PORT1_BIT5       SETBIT5(P1DOUT)
#define  CLR_PORT1_BIT5       CLRBIT5(P1DOUT)
#define  CPL_PORT1_BIT5       CPLBIT5(P1DOUT)
#endif
#define  P1PUE_I_5   0  //"1" = GPIO15 Pull Up/Dn Enable            / "0" = GPIO15 Pull Up/Dn Disable
#define  P1PUD_I_5   0  //"1" = GPIO15 Pull Down                    / "0" = GPIO15 Pull Up
#define  P1VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO15 Wake up from Deep Sleep Support      */
#define  P1WE_5      0  //"1" = GPIO15 wake up from sleep enable    / "0" = GPIO15 wake up from sleep disable
#define  P1WA_5      0  //"1" = GPIO15 enable any edge wake up      / "0" = GPIO15 disable any edge wake up 
#define  P1WP_5      0  //"1" = GPIO15 wake up when falling edge    / "0" = GPIO15 wake up when rising edge 
#define  P15_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO16 Define          (Reserved)                                                         *//
//******************************************************************************************************//
#define  xP1OD_I_6   0  //"1" = GPIO16 The output pin is Open_Drain / "0" = GPIO16 The output pin is Push_Pull
#if xP1OD_I_6
#define  P1DIR_I_6   0  //"0" = GPIO16 Output Data "High"           / "1" = GPIO16 Output Data "Low"
#define  P1DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT6       CLRBIT6(P1DIR)
#define  CLR_PORT1_BIT6       SETBIT6(P1DIR)
#define  CPL_PORT1_BIT6       CPLBIT6(P1DIR)
#else
#define  P1DIR_I_6   0  //"1" = GPIO16 is Output Pin                / "0" = GPIO16 is Input Pin
#define  P1DOUT_I_6  0  //"1" = GPIO16 Output Data "High"           / "0" = GPIO16 Output Data "Low"
#define  SET_PORT1_BIT6       SETBIT6(P1DOUT)
#define  CLR_PORT1_BIT6       CLRBIT6(P1DOUT)
#define  CPL_PORT1_BIT6       CPLBIT6(P1DOUT)
#endif
#define  P1PUE_I_6   0  //"1" = GPIO16 Pull Up/Dn Enable            / "0" = GPIO16 Pull Up/Dn Disable
#define  P1PUD_I_6   0  //"1" = GPIO16 Pull Down                    / "0" = GPIO16 Pull Up
#define  P1VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P16_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO17 Define    PWR_SMB_SCL_CHG (DEVALT2)                                                                       *//
//******************************************************************************************************//
#define  xP1OD_I_7   0  //"1" = GPIO17 The output pin is Open_Drain / "0" = GPIO17 The output pin is Push_Pull
#if xP1OD_I_7
#define  P1DIR_I_7   0  //"0" = GPIO17 Output Data "High"           / "1" = GPIO17 Output Data "Low"
#define  P1DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT1_BIT7       CLRBIT7(P1DIR)
#define  CLR_PORT1_BIT7       SETBIT7(P1DIR)
#define  CPL_PORT1_BIT7       CPLBIT7(P1DIR)
#else
#define  P1DIR_I_7   0  //"1" = GPIO17 is Output Pin                / "0" = GPIO17 is Input Pin
#define  P1DOUT_I_7  0  //"1" = GPIO17 Output Data "High"           / "0" = GPIO17 Output Data "Low"
#define  SET_PORT1_BIT7       SETBIT7(P1DOUT)
#define  CLR_PORT1_BIT7       CLRBIT7(P1DOUT)
#define  CPL_PORT1_BIT7       CPLBIT7(P1DOUT)
#endif
#define  P1PUE_I_7   0  //"1" = GPIO17 Pull Up/Dn Enable            / "0" = GPIO17 Pull Up/Dn Disable
#define  P1PUD_I_7   0  //"1" = GPIO17 Pull Down                    / "0" = GPIO17 Pull Up
#define  P1VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO17 Wake up from Deep Sleep Support      */
#define  P1WE_7      0  //"1" = GPIO17 wake up from sleep enable    / "0" = GPIO17 wake up from sleep disable
#define  P1WA_7      0  //"1" = GPIO17 enable any edge wake up      / "0" = GPIO17 disable any edge wake up 
#define  P1WP_7      0  //"1" = GPIO17 wake up when falling edge    / "0" = GPIO17 wake up when rising edge 
#define  P17_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO20 Define    PM_PWRBTN#(DEVALT3,8)                                                                 *//
//******************************************************************************************************//
#define  xP2OD_I_0   1  //"1" = GPIO20 The output pin is Open_Drain / "0" = GPIO20 The output pin is Push_Pull
#if xP2OD_I_0
#define  P2DIR_I_0   0  //"0" = GPIO20 Output Data "High"           / "1" = GPIO20 Output Data "Low"
#define  P2DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT0       CLRBIT0(P2DIR)
#define  CLR_PORT2_BIT0       SETBIT0(P2DIR)
#define  CPL_PORT2_BIT0       CPLBIT0(P2DIR)
#else
#define  P2DIR_I_0   0  //"1" = GPIO20 is Output Pin                / "0" = GPIO20 is Input Pin
#define  P2DOUT_I_0  0  //"1" = GPIO20 Output Data "High"           / "0" = GPIO20 Output Data "Low"
#define  SET_PORT2_BIT0       SETBIT0(P2DOUT)
#define  CLR_PORT2_BIT0       CLRBIT0(P2DOUT)
#define  CPL_PORT2_BIT0       CPLBIT0(P2DOUT)
#endif
#define  P2PUE_I_0   0  //"1" = GPIO20 Pull Up/Dn Enable            / "0" = GPIO20 Pull Up/Dn Disable
#define  P2PUD_I_0   0  //"1" = GPIO20 Pull Down                    / "0" = GPIO20 Pull Up
#define  P2VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO20 Wake up from Deep Sleep Support      */
#define  P2WE_0      0  //"1" = GPIO20 wake up from sleep enable    / "0" = GPIO20 wake up from sleep disable
#define  P2WA_0      0  //"1" = GPIO20 enable any edge wake up      / "0" = GPIO20 disable any edge wake up 
#define  P2WP_0      0  //"1" = GPIO20 wake up when falling edge    / "0" = GPIO20 wake up when rising edge 
#define  P20_AFKEEP  1  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO21 Define (DEVALT5)   KBC_BEEP                                                        *//
//******************************************************************************************************//
#define  xP2OD_I_1   0  //"1" = GPIO21 The output pin is Open_Drain / "0" = GPIO21 The output pin is Push_Pull
#if xP2OD_I_1
#define  P2DIR_I_1   0  //"0" = GPIO21 Output Data "High"           / "1" = GPIO21 Output Data "Low"
#define  P2DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT1       CLRBIT1(P2DIR)
#define  CLR_PORT2_BIT1       SETBIT1(P2DIR)
#define  CPL_PORT2_BIT1       CPLBIT1(P2DIR)
#else
#define  P2DIR_I_1   0  //"1" = GPIO21 is Output Pin                / "0" = GPIO21 is Input Pin
#define  P2DOUT_I_1  0  //"1" = GPIO21 Output Data "High"           / "0" = GPIO21 Output Data "Low"
#define  SET_PORT2_BIT1       SETBIT1(P2DOUT)
#define  CLR_PORT2_BIT1       CLRBIT1(P2DOUT)
#define  CPL_PORT2_BIT1       CPLBIT1(P2DOUT)
#endif
#define  P2PUE_I_1   0  //"1" = GPIO21 Pull Up/Dn Enable            / "0" = GPIO21 Pull Up/Dn Disable
#define  P2PUD_I_1   0  //"1" = GPIO21 Pull Down                    / "0" = GPIO21 Pull Up
#define  P2VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO21 Wake up from Deep Sleep Support      */
#define  P2WE_1      0  //"1" = GPIO21 wake up from sleep enable    / "0" = GPIO21 wake up from sleep disable
#define  P2WA_1      0  //"1" = GPIO21 enable any edge wake up      / "0" = GPIO21 disable any edge wake up 
#define  P2WP_1      0  //"1" = GPIO21 wake up when falling edge    / "0" = GPIO21 wake up when rising edge 
#define  P21_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO22 Define    PWR_SMB_SDA_CHG (DEVALT2)                                                                       *//
//******************************************************************************************************//
#define  xP2OD_I_2   0  //"1" = GPIO22 The output pin is Open_Drain / "0" = GPIO22 The output pin is Push_Pull
#if xP2OD_I_2
#define  P2DIR_I_2   0  //"0" = GPIO22 Output Data "High"           / "1" = GPIO22 Output Data "Low"
#define  P2DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT2       CLRBIT2(P2DIR)
#define  CLR_PORT2_BIT2       SETBIT2(P2DIR)
#define  CPL_PORT2_BIT2       CPLBIT2(P2DIR)
#else
#define  P2DIR_I_2   0  //"1" = GPIO22 is Output Pin                / "0" = GPIO22 is Input Pin
#define  P2DOUT_I_2  0  //"1" = GPIO22 Output Data "High"           / "0" = GPIO22 Output Data "Low"
#define  SET_PORT2_BIT2       SETBIT2(P2DOUT)
#define  CLR_PORT2_BIT2       CLRBIT2(P2DOUT)
#define  CPL_PORT2_BIT2       CPLBIT2(P2DOUT)
#endif
#define  P2PUE_I_2   0  //"1" = GPIO22 Pull Up/Dn Enable            / "0" = GPIO22 Pull Up/Dn Disable
#define  P2PUD_I_2   0  //"1" = GPIO22 Pull Down                    / "0" = GPIO22 Pull Up
#define  P2VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO22 Wake up from Deep Sleep Support      */
#define  P2WE_2      0  //"1" = GPIO22 wake up from sleep enable    / "0" = GPIO22 wake up from sleep disable
#define  P2WA_2      0  //"1" = GPIO22 enable any edge wake up      / "0" = GPIO22 disable any edge wake up 
#define  P2WP_2      0  //"1" = GPIO22 wake up when falling edge    / "0" = GPIO22 wake up when rising edge 
#define  P22_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO23 Define   EC_SMB_SCL (DEVALTA,D)                                                         *//
//******************************************************************************************************//
#define  xP2OD_I_3   0  //"1" = GPIO23 The output pin is Open_Drain / "0" = GPIO23 The output pin is Push_Pull
#if xP2OD_I_3
#define  P2DIR_I_3   0  //"0" = GPIO23 Output Data "High"           / "1" = GPIO23 Output Data "Low"
#define  P2DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT3       CLRBIT3(P2DIR)
#define  CLR_PORT2_BIT3       SETBIT3(P2DIR)
#define  CPL_PORT2_BIT3       CPLBIT3(P2DIR)
#else
#define  P2DIR_I_3   0  //"1" = GPIO23 is Output Pin                / "0" = GPIO23 is Input Pin
#define  P2DOUT_I_3  0  //"1" = GPIO23 Output Data "High"           / "0" = GPIO23 Output Data "Low"
#define  SET_PORT2_BIT3       SETBIT3(P2DOUT)
#define  CLR_PORT2_BIT3       CLRBIT3(P2DOUT)
#define  CPL_PORT2_BIT3       CPLBIT3(P2DOUT)
#endif
#define  P2PUE_I_3   0  //"1" = GPIO23 Pull Up/Dn Enable            / "0" = GPIO23 Pull Up/Dn Disable
#define  P2PUD_I_3   0  //"1" = GPIO23 Pull Down                    / "0" = GPIO23 Pull Up
#define  P2VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO23 Wake up from Deep Sleep Support      */
#define  P2WE_3      0  //"1" = GPIO23 wake up from sleep enable    / "0" = GPIO23 wake up from sleep disable
#define  P2WA_3      0  //"1" = GPIO23 enable any edge wake up      / "0" = GPIO23 disable any edge wake up 
#define  P2WP_3      0  //"1" = GPIO23 wake up when falling edge    / "0" = GPIO23 wake up when rising edge 
#define  P23_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO24 Define  ESPI_ALERT#                                                                     *//
//******************************************************************************************************//
#define  xP2OD_I_4   0  //"1" = GPIO24 The output pin is Open_Drain / "0" = GPIO24 The output pin is Push_Pull
#if xP2OD_I_4
#define  P2DIR_I_4   0  //"0" = GPIO24 Output Data "High"           / "1" = GPIO24 Output Data "Low"
#define  P2DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT4       CLRBIT4(P2DIR)
#define  CLR_PORT2_BIT4       SETBIT4(P2DIR)
#define  CPL_PORT2_BIT4       CPLBIT4(P2DIR)
#else
#define  P2DIR_I_4   0  //"1" = GPIO24 is Output Pin                / "0" = GPIO24 is Input Pin
#define  P2DOUT_I_4  0  //"1" = GPIO24 Output Data "High"           / "0" = GPIO24 Output Data "Low"
#define  SET_PORT2_BIT4       SETBIT4(P2DOUT)
#define  CLR_PORT2_BIT4       CLRBIT4(P2DOUT)
#define  CPL_PORT2_BIT4       CPLBIT4(P2DOUT)
#endif
#define  P2PUE_I_4   0  //"1" = GPIO24 Pull Up/Dn Enable            / "0" = GPIO24 Pull Up/Dn Disable
#define  P2PUD_I_4   0  //"1" = GPIO24 Pull Down                    / "0" = GPIO24 Pull Up
#define  P2VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO24 Wake up from Deep Sleep Support  */
#define  P2WE_4      0  //"1" = GPIO24 wake up from sleep enable    / "0" = GPIO24 wake up from sleep disable
#define  P2WA_4      0  //"1" = GPIO24 enable any edge wake up      / "0" = GPIO24 disable any edge wake up 
#define  P2WP_4      0  //"1" = GPIO24 wake up when falling edge    / "0" = GPIO24 wake up when rising edge
#define  P24_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIO25 Define          (Reserved)                                                             *//
//******************************************************************************************************//
#define  xP2OD_I_5   0  //"1" = GPIO25 The output pin is Open_Drain / "0" = GPIO25 The output pin is Push_Pull
#if xP2OD_I_5
#define  P2DIR_I_5   0  //"0" = GPIO25 Output Data "High"           / "1" = GPIO25 Output Data "Low"
#define  P2DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT5       CLRBIT5(P2DIR)
#define  CLR_PORT2_BIT5       SETBIT5(P2DIR)
#define  CPL_PORT2_BIT5       CPLBIT5(P2DIR)
#else
#define  P2DIR_I_5   0  //"1" = GPIO25 is Output Pin                / "0" = GPIO25 is Input Pin
#define  P2DOUT_I_5  0  //"1" = GPIO25 Output Data "High"           / "0" = GPIO25 Output Data "Low"
#define  SET_PORT2_BIT5       SETBIT5(P2DOUT)
#define  CLR_PORT2_BIT5       CLRBIT5(P2DOUT)
#define  CPL_PORT2_BIT5       CPLBIT5(P2DOUT)
#endif
#define  P2PUE_I_5   0  //"1" = GPIO25 Pull Up/Dn Enable            / "0" = GPIO25 Pull Up/Dn Disable
#define  P2PUD_I_5   0  //"1" = GPIO25 Pull Down                    / "0" = GPIO25 Pull Up
#define  P2VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P25_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO26 Define    EC_PSCLK_TP (DEVALT4)                                                         *//
//******************************************************************************************************//
#define  xP2OD_I_6   0  //"1" = GPIO26 The output pin is Open_Drain / "0" = GPIO26 The output pin is Push_Pull
#if xP2OD_I_6
#define  P2DIR_I_6   0  //"0" = GPIO26 Output Data "High"           / "1" = GPIO26 Output Data "Low"
#define  P2DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT6       CLRBIT6(P2DIR)
#define  CLR_PORT2_BIT6       SETBIT6(P2DIR)
#define  CPL_PORT2_BIT6       CPLBIT6(P2DIR)
#else
#define  P2DIR_I_6   0  //"1" = GPIO26 is Output Pin                / "0" = GPIO26 is Input Pin
#define  P2DOUT_I_6  0  //"1" = GPIO26 Output Data "High"           / "0" = GPIO26 Output Data "Low"
#define  SET_PORT2_BIT6       SETBIT6(P2DOUT)
#define  CLR_PORT2_BIT6       CLRBIT6(P2DOUT)
#define  CPL_PORT2_BIT6       CPLBIT6(P2DOUT)
#endif
#define  P2PUE_I_6   0  //"1" = GPIO26 Pull Up/Dn Enable            / "0" = GPIO26 Pull Up/Dn Disable
#define  P2PUD_I_6   0  //"1" = GPIO26 Pull Down                    / "0" = GPIO26 Pull Up
#define  P2VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO26 Wake up from Deep Sleep Support  */
#define  P2WE_6      0  //"1" = GPIO26 wake up from sleep enable    / "0" = GPIO26 wake up from sleep disable
#define  P2WA_6      0  //"1" = GPIO26 enable any edge wake up      / "0" = GPIO26 disable any edge wake up 
#define  P2WP_6      0  //"1" = GPIO26 wake up when falling edge    / "0" = GPIO26 wake up when rising edge
#define  P26_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO27 Define   EC_PSDAT_TP (DEVALT4)                                                           *//
//******************************************************************************************************//
#define  xP2OD_I_7   0  //"1" = GPIO27 The output pin is Open_Drain / "0" = GPIO27 The output pin is Push_Pull
#if xP2OD_I_7
#define  P2DIR_I_7   0  //"0" = GPIO27 Output Data "High"           / "1" = GPIO27 Output Data "Low"
#define  P2DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT2_BIT7       CLRBIT7(P2DIR)
#define  CLR_PORT2_BIT7       SETBIT7(P2DIR)
#define  CPL_PORT2_BIT7       CPLBIT7(P2DIR)
#else
#define  P2DIR_I_7   0  //"1" = GPIO27 is Output Pin                / "0" = GPIO27 is Input Pin
#define  P2DOUT_I_7  0  //"1" = GPIO27 Output Data "High"           / "0" = GPIO27 Output Data "Low"
#define  SET_PORT2_BIT7       SETBIT7(P2DOUT)
#define  CLR_PORT2_BIT7       CLRBIT7(P2DOUT)
#define  CPL_PORT2_BIT7       CPLBIT7(P2DOUT)
#endif
#define  P2PUE_I_7   0  //"1" = GPIO27 Pull Up/Dn Enable            / "0" = GPIO27 Pull Up/Dn Disable
#define  P2PUD_I_7   0  //"1" = GPIO27 Pull Down                    / "0" = GPIO27 Pull Up
#define  P2VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO27 Wake up from Deep Sleep Support  */
#define  P2WE_7      0  //"1" = GPIO27 wake up from sleep enable    / "0" = GPIO27 wake up from sleep disable
#define  P2WA_7      0  //"1" = GPIO27 enable any edge wake up      / "0" = GPIO27 disable any edge wake up 
#define  P2WP_7      0  //"1" = GPIO27 wake up when falling edge    / "0" = GPIO27 wake up when rising edge
#define  P27_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO30 Define  RTCRST_ON                                                                       *//
//******************************************************************************************************//
#define  xP3OD_I_0   0  //"1" = GPIO30 The output pin is Open_Drain / "0" = GPIO30 The output pin is Push_Pull
#if xP3OD_I_0
#define  P3DIR_I_0   0  //"0" = GPIO30 Output Data "High"           / "1" = GPIO30 Output Data "Low"
#define  P3DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT0       CLRBIT0(P3DIR)
#define  CLR_PORT3_BIT0       SETBIT0(P3DIR)
#define  CPL_PORT3_BIT0       CPLBIT0(P3DIR)
#else
#define  P3DIR_I_0   1  //"1" = GPIO30 is Output Pin                / "0" = GPIO30 is Input Pin
#define  P3DOUT_I_0  0  //"1" = GPIO30 Output Data "High"           / "0" = GPIO30 Output Data "Low"
#define  SET_PORT3_BIT0       SETBIT0(P3DOUT)
#define  CLR_PORT3_BIT0       CLRBIT0(P3DOUT)
#define  CPL_PORT3_BIT0       CPLBIT0(P3DOUT)
#endif
#define  P3PUE_I_0   0  //"1" = GPIO30 Pull Up/Dn Enable            / "0" = GPIO30 Pull Up/Dn Disable
#define  P3PUD_I_0   0  //"1" = GPIO30 Pull Down                    / "0" = GPIO30 Pull Up
#define  P3VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO30 Wake up from Deep Sleep Support  */
#define  P3WE_0      0  //"1" = GPIO30 wake up from sleep enable    / "0" = GPIO30 wake up from sleep disable
#define  P3WA_0      0  //"1" = GPIO30 enable any edge wake up      / "0" = GPIO30 disable any edge wake up 
#define  P3WP_0      0  //"1" = GPIO30 wake up when falling edge    / "0" = GPIO30 wake up when rising edge
#define  P30_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO31 Define   EC_SMB_SDA (DEVALTA)                                                       *//
//******************************************************************************************************//
#define  xP3OD_I_1   0  //"1" = GPIO31 The output pin is Open_Drain / "0" = GPIO31 The output pin is Push_Pull
#if xP3OD_I_1
#define  P3DIR_I_1   0  //"0" = GPIO31 Output Data "High"           / "1" = GPIO31 Output Data "Low"
#define  P3DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT1       CLRBIT1(P3DIR)
#define  CLR_PORT3_BIT1       SETBIT1(P3DIR)
#define  CPL_PORT3_BIT1       CPLBIT1(P3DIR)
#else
#define  P3DIR_I_1   0  //"1" = GPIO31 is Output Pin                / "0" = GPIO31 is Input Pin
#define  P3DOUT_I_1  0  //"1" = GPIO31 Output Data "High"           / "0" = GPIO31 Output Data "Low"
#define  SET_PORT3_BIT1       SETBIT1(P3DOUT)
#define  CLR_PORT3_BIT1       CLRBIT1(P3DOUT)
#define  CPL_PORT3_BIT1       CPLBIT1(P3DOUT)
#endif
#define  P3PUE_I_1   0  //"1" = GPIO31 Pull Up/Dn Enable            / "0" = GPIO31 Pull Up/Dn Disable
#define  P3PUD_I_1   0  //"1" = GPIO31 Pull Down                    / "0" = GPIO31 Pull Up
#define  P3VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO31 Wake up from Deep Sleep Support  */
#define  P3WE_1      0  //"1" = GPIO31 wake up from sleep enable    / "0" = GPIO31 wake up from sleep disable
#define  P3WA_1      0  //"1" = GPIO31 enable any edge wake up      / "0" = GPIO31 disable any edge wake up 
#define  P3WP_1      0  //"1" = GPIO31 wake up when falling edge    / "0" = GPIO31 wake up when rising edge
#define  P31_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO32 Define (DEVALT5)   CHARGE_LED                                                           *//
//******************************************************************************************************//
#define  xP3OD_I_2   0  //"1" = GPIO32 The output pin is Open_Drain / "0" = GPIO32 The output pin is Push_Pull
#if xP3OD_I_2
#define  P3DIR_I_2   0  //"0" = GPIO32 Output Data "High"           / "1" = GPIO32 Output Data "Low"
#define  P3DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT2       CLRBIT2(P3DIR)
#define  CLR_PORT3_BIT2       SETBIT2(P3DIR)
#define  CPL_PORT3_BIT2       CPLBIT2(P3DIR)
#else
#define  P3DIR_I_2   1  //"1" = GPIO32 is Output Pin                / "0" = GPIO32 is Input Pin
#define  P3DOUT_I_2  0  //"1" = GPIO32 Output Data "High"           / "0" = GPIO32 Output Data "Low"
#define  SET_PORT3_BIT2       SETBIT2(P3DOUT)
#define  CLR_PORT3_BIT2       CLRBIT2(P3DOUT)
#define  CPL_PORT3_BIT2       CPLBIT2(P3DOUT)
#endif
#define  P3PUE_I_2   0  //"1" = GPIO32 Pull Up/Dn Enable            / "0" = GPIO32 Pull Up/Dn Disable
#define  P3PUD_I_2   0  //"1" = GPIO32 Pull Down                    / "0" = GPIO32 Pull Up
#define  P3VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO32 Wake up from Deep Sleep Support  */
#define  P3WE_2      0  //"1" = GPIO32 wake up from sleep enable    / "0" = GPIO32 wake up from sleep disable
#define  P3WA_2      0  //"1" = GPIO32 enable any edge wake up      / "0" = GPIO32 disable any edge wake up 
#define  P3WP_2      0  //"1" = GPIO32 wake up when falling edge    / "0" = GPIO32 wake up when rising edge
#define  P32_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO33 Define      POWER_LED (DEVALT3)                                                 *//
//******************************************************************************************************//
#define  xP3OD_I_3   0  //"1" = GPIO33 The output pin is Open_Drain / "0" = GPIO33 The output pin is Push_Pull
#if xP3OD_I_3
#define  P3DIR_I_3   0  //"0" = GPIO33 Output Data "High"           / "1" = GPIO33 Output Data "Low"
#define  P3DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT3       CLRBIT3(P3DIR)
#define  CLR_PORT3_BIT3       SETBIT3(P3DIR)
#define  CPL_PORT3_BIT3       CPLBIT3(P3DIR)
#else
#define  P3DIR_I_3   1  //"1" = GPIO33 is Output Pin                / "0" = GPIO33 is Input Pin
#define  P3DOUT_I_3  0  //"1" = GPIO33 Output Data "High"           / "0" = GPIO33 Output Data "Low"
#define  SET_PORT3_BIT3       SETBIT3(P3DOUT)
#define  CLR_PORT3_BIT3       CLRBIT3(P3DOUT)
#define  CPL_PORT3_BIT3       CPLBIT3(P3DOUT)
#endif
#define  P3PUE_I_3   0  //"1" = GPIO33 Pull Up/Dn Enable            / "0" = GPIO33 Pull Up/Dn Disable
#define  P3PUD_I_3   0  //"1" = GPIO33 Pull Down                    / "0" = GPIO33 Pull Up
#define  P3VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P33_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO34 Define  S5_ENABLE(DEVALTA)                                                            *//
//******************************************************************************************************//
#define  xP3OD_I_4   1  //"1" = GPIO34 The output pin is Open_Drain / "0" = GPIO34 The output pin is Push_Pull
#if xP3OD_I_4
#define  P3DIR_I_4   0  //"0" = GPIO34 Output Data "High"           / "1" = GPIO34 Output Data "Low"
#define  P3DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT4       CLRBIT4(P3DIR)
#define  CLR_PORT3_BIT4       SETBIT4(P3DIR)
#define  CPL_PORT3_BIT4       CPLBIT4(P3DIR)
#else
#define  P3DIR_I_4   0  //"1" = GPIO34 is Output Pin                / "0" = GPIO34 is Input Pin
#define  P3DOUT_I_4  0  //"1" = GPIO34 Output Data "High"           / "0" = GPIO34 Output Data "Low"
#define  SET_PORT3_BIT4       SETBIT4(P3DOUT)
#define  CLR_PORT3_BIT4       CLRBIT4(P3DOUT)
#define  CPL_PORT3_BIT4       CPLBIT4(P3DOUT)
#endif
#define  P3PUE_I_4   0  //"1" = GPIO34 Pull Up/Dn Enable            / "0" = GPIO34 Pull Up/Dn Disable
#define  P3PUD_I_4   0  //"1" = GPIO34 Pull Down                    / "0" = GPIO34 Pull Up
#define  P3VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO34 Wake up from Deep Sleep Support  */
#define  P3WE_4      0  //"1" = GPIO34 wake up from sleep enable    / "0" = GPIO34 wake up from sleep disable
#define  P3WA_4      0  //"1" = GPIO34 enable any edge wake up      / "0" = GPIO34 disable any edge wake up 
#define  P3WP_4      0  //"1" = GPIO34 wake up when falling edge    / "0" = GPIO34 wake up when rising edge 
#define  P34_AFKEEP  1  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO35 Define    USB_CHARGER_EN (DEVALT4)                                                                       *//
//******************************************************************************************************//
#define  xP3OD_I_5   0  //"1" = GPIO35 The output pin is Open_Drain / "0" = GPIO35 The output pin is Push_Pull
#if xP3OD_I_5
#define  P3DIR_I_5   0  //"0" = GPIO35 Output Data "High"           / "1" = GPIO35 Output Data "Low"
#define  P3DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT5       CLRBIT5(P3DIR)
#define  CLR_PORT3_BIT5       SETBIT5(P3DIR)
#define  CPL_PORT3_BIT5       CPLBIT5(P3DIR)
#else
#define  P3DIR_I_5   1  //"1" = GPIO35 is Output Pin                / "0" = GPIO35 is Input Pin
#define  P3DOUT_I_5  0  //"1" = GPIO35 Output Data "High"           / "0" = GPIO35 Output Data "Low"
#define  SET_PORT3_BIT5       SETBIT5(P3DOUT)
#define  CLR_PORT3_BIT5       CLRBIT5(P3DOUT)
#define  CPL_PORT3_BIT5       CPLBIT5(P3DOUT)
#endif
#define  P3PUE_I_5   0  //"1" = GPIO35 Pull Up/Dn Enable            / "0" = GPIO35 Pull Up/Dn Disable
#define  P3PUD_I_5   0  //"1" = GPIO35 Pull Down                    / "0" = GPIO35 Pull Up
#define  P3VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO35 Wake up from Deep Sleep Support  */
#define  P3WE_5      0  //"1" = GPIO35 wake up from sleep enable    / "0" = GPIO35 wake up from sleep disable
#define  P3WA_5      0  //"1" = GPIO35 enable any edge wake up      / "0" = GPIO35 disable any edge wake up 
#define  P3WP_5      0  //"1" = GPIO35 wake up when falling edge    / "0" = GPIO35 wake up when rising edge 
#define  P35_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO36 Define    RSMRST#_KBC                                                                   *//
//******************************************************************************************************//
#define  xP3OD_I_6   0  //"1" = GPIO36 The output pin is Open_Drain / "0" = GPIO36 The output pin is Push_Pull
#if xP3OD_I_6
#define  P3DIR_I_6   0  //"0" = GPIO36 Output Data "High"           / "1" = GPIO36 Output Data "Low"
#define  P3DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT6       CLRBIT6(P3DIR)
#define  CLR_PORT3_BIT6       SETBIT6(P3DIR)
#define  CPL_PORT3_BIT6       CPLBIT6(P3DIR)
#else
#define  P3DIR_I_6   1  //"1" = GPIO36 is Output Pin                / "0" = GPIO36 is Input Pin
#define  P3DOUT_I_6  0  //"1" = GPIO36 Output Data "High"           / "0" = GPIO36 Output Data "Low"
#define  SET_PORT3_BIT6       SETBIT6(P3DOUT)
#define  CLR_PORT3_BIT6       CLRBIT6(P3DOUT)
#define  CPL_PORT3_BIT6       CPLBIT6(P3DOUT)
#endif
#define  P3PUE_I_6   0  //"1" = GPIO36 Pull Up/Dn Enable            / "0" = GPIO36 Pull Up/Dn Disable
#define  P3PUD_I_6   0  //"1" = GPIO36 Pull Down                    / "0" = GPIO36 Pull Up
#define  P3VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO36 Wake up from Deep Sleep Support  */
#define  P3WE_6      0  //"1" = GPIO36 wake up from sleep enable    / "0" = GPIO36 wake up from sleep disable
#define  P3WA_6      0  //"1" = GPIO36 enable any edge wake up      / "0" = GPIO36 disable any edge wake up 
#define  P3WP_6      0  //"1" = GPIO36 wake up when falling edge    / "0" = GPIO36 wake up when rising edge 
#define  P36_AFKEEP  1  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO37 Define    LID_CLOSE1# (DEVALT4)                                                         *//
//******************************************************************************************************//
#define  xP3OD_I_7   0  //"1" = GPIO37 The output pin is Open_Drain / "0" = GPIO37 The output pin is Push_Pull
#if xP3OD_I_7
#define  P3DIR_I_7   0  //"0" = GPIO37 Output Data "High"           / "1" = GPIO37 Output Data "Low"
#define  P3DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT3_BIT7       CLRBIT7(P3DIR)
#define  CLR_PORT3_BIT7       SETBIT7(P3DIR)
#define  CPL_PORT3_BIT7       CPLBIT7(P3DIR)
#else
#define  P3DIR_I_7   0  //"1" = GPIO37 is Output Pin                / "0" = GPIO37 is Input Pin
#define  P3DOUT_I_7  0  //"1" = GPIO37 Output Data "High"           / "0" = GPIO37 Output Data "Low"
#define  SET_PORT3_BIT7       SETBIT7(P3DOUT)
#define  CLR_PORT3_BIT7       CLRBIT7(P3DOUT)
#define  CPL_PORT3_BIT7       CPLBIT7(P3DOUT)
#endif
#define  P3PUE_I_7   0  //"1" = GPIO37 Pull Up/Dn Enable            / "0" = GPIO37 Pull Up/Dn Disable
#define  P3PUD_I_7   0  //"1" = GPIO37 Pull Down                    / "0" = GPIO37 Pull Up
#define  P3VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO37 Wake up from Deep Sleep Support  */
#define  P3WE_7      1  //"1" = GPIO37 wake up from sleep enable    / "0" = GPIO37 wake up from sleep disable
#define  P3WA_7      1  //"1" = GPIO37 enable any edge wake up      / "0" = GPIO37 disable any edge wake up 
#define  P3WP_7      0  //"1" = GPIO37 wake up when falling edge    / "0" = GPIO37 wake up when rising edge
#define  P37_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO40 Define   Reserved (DEVALT5,E)                                                           *//
//******************************************************************************************************//
#define  xP4OD_I_0   0  //"1" = GPIO40 The output pin is Open_Drain / "0" = GPIO40 The output pin is Push_Pull
#if xP4OD_I_0
#define  P4DIR_I_0   0  //"0" = GPIO40 Output Data "High"           / "1" = GPIO40 Output Data "Low"
#define  P4DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT0       CLRBIT0(P4DIR)
#define  CLR_PORT4_BIT0       SETBIT0(P4DIR)
#define  CPL_PORT4_BIT0       CPLBIT0(P4DIR)
#else
#define  P4DIR_I_0   0  //"1" = GPIO40 is Output Pin                / "0" = GPIO40 is Input Pin
#define  P4DOUT_I_0  0  //"1" = GPIO40 Output Data "High"           / "0" = GPIO40 Output Data "Low"
#define  SET_PORT4_BIT0       SETBIT0(P4DOUT)
#define  CLR_PORT4_BIT0       CLRBIT0(P4DOUT)
#define  CPL_PORT4_BIT0       CPLBIT0(P4DOUT)
#endif
#define  P4PUE_I_0   0  //"1" = GPIO40 Pull Up/Dn Enable            / "0" = GPIO40 Pull Up/Dn Disable
#define  P4PUD_I_0   0  //"1" = GPIO40 Pull Down                    / "0" = GPIO40 Pull Up
#define  P4VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO40 Wake up from Deep Sleep Support  */
#define  P4WE_0      0  //"1" = GPIO40 wake up from sleep enable    / "0" = GPIO40 wake up from sleep disable
#define  P4WA_0      0  //"1" = GPIO40 enable any edge wake up      / "0" = GPIO40 disable any edge wake up 
#define  P4WP_0      0  //"1" = GPIO40 wake up when falling edge    / "0" = GPIO40 wake up when rising edge
#define  P40_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO41 Define    BAT_IN#                                                                 *//
//******************************************************************************************************//
#define  xP4OD_I_1   0  //"1" = GPIO41 The output pin is Open_Drain / "0" = GPIO41 The output pin is Push_Pull
#if xP4OD_I_1
#define  P4DIR_I_1   0  //"0" = GPIO41 Output Data "High"           / "1" = GPIO41 Output Data "Low"
#define  P4DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT1       CLRBIT1(P4DIR)
#define  CLR_PORT4_BIT1       SETBIT1(P4DIR)
#define  CPL_PORT4_BIT1       CPLBIT1(P4DIR)
#else
#define  P4DIR_I_1   0  //"1" = GPIO41 is Output Pin                / "0" = GPIO41 is Input Pin
#define  P4DOUT_I_1  0  //"1" = GPIO41 Output Data "High"           / "0" = GPIO41 Output Data "Low"
#define  SET_PORT4_BIT1       SETBIT1(P4DOUT)
#define  CLR_PORT4_BIT1       CLRBIT1(P4DOUT)
#define  CPL_PORT4_BIT1       CPLBIT1(P4DOUT)
#endif
#define  P4PUE_I_1   0  //"1" = GPIO41 Pull Up/Dn Enable            / "0" = GPIO41 Pull Up/Dn Disable
#define  P4PUD_I_1   0  //"1" = GPIO41 Pull Down                    / "0" = GPIO41 Pull Up
#define  P4VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO41 Wake up from Deep Sleep Support  */
#define  P4WE_1      1  //"1" = GPIO41 wake up from sleep enable    / "0" = GPIO41 wake up from sleep disable
#define  P4WA_1      0  //"1" = GPIO41 enable any edge wake up      / "0" = GPIO41 disable any edge wake up 
#define  P4WP_1      0  //"1" = GPIO41 wake up when falling edge    / "0" = GPIO41 wake up when rising edge
#define  P41_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO42 Define    USB_PWR_EN                                                                  *//
//******************************************************************************************************//
#define  xP4OD_I_2   0  //"1" = GPIO42 The output pin is Open_Drain / "0" = GPIO42 The output pin is Push_Pull
#if xP4OD_I_2
#define  P4DIR_I_2   0  //"0" = GPIO42 Output Data "High"           / "1" = GPIO42 Output Data "Low"
#define  P4DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT2       CLRBIT2(P4DIR)
#define  CLR_PORT4_BIT2       SETBIT2(P4DIR)
#define  CPL_PORT4_BIT2       CPLBIT2(P4DIR)
#else
#define  P4DIR_I_2   1  //"1" = GPIO42 is Output Pin                / "0" = GPIO42 is Input Pin
#define  P4DOUT_I_2  0  //"1" = GPIO42 Output Data "High"           / "0" = GPIO42 Output Data "Low"
#define  SET_PORT4_BIT2       SETBIT2(P4DOUT)
#define  CLR_PORT4_BIT2       CLRBIT2(P4DOUT)
#define  CPL_PORT4_BIT2       CPLBIT2(P4DOUT)
#endif
#define  P4PUE_I_2   0  //"1" = GPIO42 Pull Up/Dn Enable            / "0" = GPIO42 Pull Up/Dn Disable
#define  P4PUD_I_2   0  //"1" = GPIO42 Pull Down                    / "0" = GPIO42 Pull Up
#define  P4VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO42 Wake up from Deep Sleep Support  */
#define  P4WE_2      0  //"1" = GPIO42 wake up from sleep enable    / "0" = GPIO42 wake up from sleep disable
#define  P4WA_2      0  //"1" = GPIO42 enable any edge wake up      / "0" = GPIO42 disable any edge wake up 
#define  P4WP_2      0  //"1" = GPIO42 wake up when falling edge     / "0" = GPIO42 wake up when rising edge
#define  P42_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO43 Define       LID_CLOSE2#                                                                *//
//******************************************************************************************************//
#define  xP4OD_I_3   0  //"1" = GPIO43 The output pin is Open_Drain / "0" = GPIO43 The output pin is Push_Pull
#if xP4OD_I_3
#define  P4DIR_I_3   0  //"0" = GPIO43 Output Data "High"           / "1" = GPIO43 Output Data "Low"
#define  P4DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT3       CLRBIT3(P4DIR)
#define  CLR_PORT4_BIT3       SETBIT3(P4DIR)
#define  CPL_PORT4_BIT3       CPLBIT3(P4DIR)
#else
#define  P4DIR_I_3   0  //"1" = GPIO43 is Output Pin                / "0" = GPIO43 is Input Pin
#define  P4DOUT_I_3  0  //"1" = GPIO43 Output Data "High"           / "0" = GPIO43 Output Data "Low"
#define  SET_PORT4_BIT3       SETBIT3(P4DOUT)
#define  CLR_PORT4_BIT3       CLRBIT3(P4DOUT)
#define  CPL_PORT4_BIT3       CPLBIT3(P4DOUT)
#endif
#define  P4PUE_I_3   0  //"1" = GPIO43 Pull Up/Dn Enable            / "0" = GPIO43 Pull Up/Dn Disable
#define  P4PUD_I_3   0  //"1" = GPIO43 Pull Down                    / "0" = GPIO43 Pull Up
#define  P4VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO43 Wake up from Deep Sleep Support  */
#define  P4WE_3      1  //"1" = GPIO43 wake up from sleep enable    / "0" = GPIO43 wake up from sleep disable
#define  P4WA_3      1  //"1" = GPIO43 enable any edge wake up      / "0" = GPIO43 disable any edge wake up 
#define  P4WP_3      0  //"1" = GPIO43 wake up when falling edge    / "0" = GPIO43 wake up when rising edge
#define  P43_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO44 Define   PM_SLP_S4#                                                                *//
//******************************************************************************************************//
#define  xP4OD_I_4   0  //"1" = GPIO44 The output pin is Open_Drain / "0" = GPIO44 The output pin is Push_Pull
#if xP4OD_I_4
#define  P4DIR_I_4   0  //"0" = GPIO44 Output Data "High"           / "1" = GPIO44 Output Data "Low"
#define  P4DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT4       CLRBIT4(P4DIR)
#define  CLR_PORT4_BIT4       SETBIT4(P4DIR)
#define  CPL_PORT4_BIT4       CPLBIT4(P4DIR)
#else
#define  P4DIR_I_4   0  //"1" = GPIO44 is Output Pin                / "0" = GPIO44 is Input Pin
#define  P4DOUT_I_4  0  //"1" = GPIO44 Output Data "High"           / "0" = GPIO44 Output Data "Low"
#define  SET_PORT4_BIT4       SETBIT4(P4DOUT)
#define  CLR_PORT4_BIT4       CLRBIT4(P4DOUT)
#define  CPL_PORT4_BIT4       CPLBIT4(P4DOUT)
#endif
#define  P4PUE_I_4   0  //"1" = GPIO44 Pull Up/Dn Enable            / "0" = GPIO44 Pull Up/Dn Disable
#define  P4PUD_I_4   0  //"1" = GPIO44 Pull Down                    / "0" = GPIO44 Pull Up
#define  P4VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO44 Wake up from Deep Sleep Support  */
#define  P4WE_4      0  //"1" = GPIO44 wake up from sleep enable    / "0" = GPIO44 wake up from sleep disable
#define  P4WA_4      0  //"1" = GPIO44 enable any edge wake up      / "0" = GPIO44 disable any edge wake up 
#define  P4WP_4      0  //"1" = GPIO44 wake up when falling edge    / "0" = GPIO44 wake up when rising edge
#define  P44_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO45 Define   PROCHOT_EC (DEVALT5)                                                           *//
//******************************************************************************************************//
#define  xP4OD_I_5   0  //"1" = GPIO45 The output pin is Open_Drain / "0" = GPIO45 The output pin is Push_Pull
#if xP4OD_I_5
#define  P4DIR_I_5   0  //"0" = GPIO45 Output Data "High"           / "1" = GPIO45 Output Data "Low"
#define  P4DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT5       CLRBIT5(P4DIR)
#define  CLR_PORT4_BIT5       SETBIT5(P4DIR)
#define  CPL_PORT4_BIT5       CPLBIT5(P4DIR)
#else
#define  P4DIR_I_5   1  //"1" = GPIO45 is Output Pin                / "0" = GPIO45 is Input Pin
#define  P4DOUT_I_5  0  //"1" = GPIO45 Output Data "High"           / "0" = GPIO45 Output Data "Low"
#define  SET_PORT4_BIT5       SETBIT5(P4DOUT)
#define  CLR_PORT4_BIT5       CLRBIT5(P4DOUT)
#define  CPL_PORT4_BIT5       CPLBIT5(P4DOUT)
#endif
#define  P4PUE_I_5   0  //"1" = GPIO45 Pull Up/Dn Enable            / "0" = GPIO45 Pull Up/Dn Disable
#define  P4PUD_I_5   0  //"1" = GPIO45 Pull Down                    / "0" = GPIO45 Pull Up
#define  P4VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO45 Wake up from Deep Sleep Support  */
#define  P4WE_5      0  //"1" = GPIO45 wake up from sleep enable    / "0" = GPIO45 wake up from sleep disable
#define  P4WA_5      0  //"1" = GPIO45 enable any edge wake up      / "0" = GPIO45 disable any edge wake up 
#define  P4WP_5      0  //"1" = GPIO45 wake up when falling edge    / "0" = GPIO45 wake up when rising edge
#define  P45_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO46 Define    ME_UNLOCK (INTEL ONLY) (DEVALTA)                                                         *//
//******************************************************************************************************//
#define  xP4OD_I_6   0  //"1" = GPIO46 The output pin is Open_Drain / "0" = GPIO46 The output pin is Push_Pull
#if xP4OD_I_6
#define  P4DIR_I_6   0  //"0" = GPIO46 Output Data "High"           / "1" = GPIO46 Output Data "Low"
#define  P4DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT6       CLRBIT6(P4DIR)
#define  CLR_PORT4_BIT6       SETBIT6(P4DIR)
#define  CPL_PORT4_BIT6       CPLBIT6(P4DIR)
#else
#define  P4DIR_I_6   1  //"1" = GPIO46 is Output Pin                / "0" = GPIO46 is Input Pin
#define  P4DOUT_I_6  0  //"1" = GPIO46 Output Data "High"           / "0" = GPIO46 Output Data "Low"
#define  SET_PORT4_BIT6       SETBIT6(P4DOUT)
#define  CLR_PORT4_BIT6       CLRBIT6(P4DOUT)
#define  CPL_PORT4_BIT6       CPLBIT6(P4DOUT)
#endif
#define  P4PUE_I_6   0  //"1" = GPIO46 Pull Up/Dn Enable            / "0" = GPIO46 Pull Up/Dn Disable
#define  P4PUD_I_6   0  //"1" = GPIO46 Pull Down                    / "0" = GPIO46 Pull Up
#define  P4VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO46 Wake up from Deep Sleep Support  */
#define  P4WE_6      0  //"1" = GPIO46 wake up from sleep enable    / "0" = GPIO46 wake up from sleep disable
#define  P4WA_6      0  //"1" = GPIO46 enable any edge wake up      / "0" = GPIO46 disable any edge wake up 
#define  P4WP_6      0  //"1" = GPIO46 wake up when falling edge    / "0" = GPIO46 wake up when rising edge
#define  P46_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO47 Define  CPU_SMB_SCL_P0 (DEVALTA)                                                                     *//
//******************************************************************************************************//
#define  xP4OD_I_7   0  //"1" = GPIO47 The output pin is Open_Drain / "0" = GPIO47 The output pin is Push_Pull
#if xP4OD_I_7
#define  P4DIR_I_7   0  //"0" = GPIO47 Output Data "High"           / "1" = GPIO47 Output Data "Low"
#define  P4DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT4_BIT7       CLRBIT7(P4DIR)
#define  CLR_PORT4_BIT7       SETBIT7(P4DIR)
#define  CPL_PORT4_BIT7       CPLBIT7(P4DIR)
#else
#define  P4DIR_I_7   0  //"1" = GPIO47 is Output Pin                / "0" = GPIO47 is Input Pin
#define  P4DOUT_I_7  0  //"1" = GPIO47 Output Data "High"           / "0" = GPIO47 Output Data "Low"
#define  SET_PORT4_BIT7       SETBIT7(P4DOUT)
#define  CLR_PORT4_BIT7       CLRBIT7(P4DOUT)
#define  CPL_PORT4_BIT7       CPLBIT7(P4DOUT)
#endif
#define  P4PUE_I_7   0  //"1" = GPIO47 Pull Up/Dn Enable            / "0" = GPIO47 Pull Up/Dn Disable
#define  P4PUD_I_7   0  //"1" = GPIO47 Pull Down                    / "0" = GPIO47 Pull Up
#define  P4VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO47 Wake up from Deep Sleep Support  */
#define  P4WE_7      0  //"1" = GPIO47 wake up from sleep enable    / "0" = GPIO47 wake up from sleep disable
#define  P4WA_7      0  //"1" = GPIO47 enable any edge wake up      / "0" = GPIO47 disable any edge wake up 
#define  P4WP_7      0  //"1" = GPIO47 wake up when falling edge    / "0" = GPIO47 wake up when rising edge
#define  P47_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO50 Define   TYPEC1_VBUS20_DET# (DEVALT4)                                                   *//
//******************************************************************************************************//
#define  xP5OD_I_0   0  //"1" = GPIO50 The output pin is Open_Drain / "0" = GPIO50 The output pin is Push_Pull
#if xP5OD_I_0
#define  P5DIR_I_0   0  //"0" = GPIO50 Output Data "High"           / "1" = GPIO50 Output Data "Low"
#define  P5DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT0       CLRBIT0(P5DIR)
#define  CLR_PORT5_BIT0       SETBIT0(P5DIR)
#define  CPL_PORT5_BIT0       CPLBIT0(P5DIR)
#else
#define  P5DIR_I_0   0  //"1" = GPIO50 is Output Pin                / "0" = GPIO50 is Input Pin
#define  P5DOUT_I_0  0  //"1" = GPIO50 Output Data "High"           / "0" = GPIO50 Output Data "Low"
#define  SET_PORT5_BIT0       SETBIT0(P5DOUT)
#define  CLR_PORT5_BIT0       CLRBIT0(P5DOUT)
#define  CPL_PORT5_BIT0       CPLBIT0(P5DOUT)
#endif
#define  P5PUE_I_0   0  //"1" = GPIO50 Pull Up/Dn Enable            / "0" = GPIO50 Pull Up/Dn Disable
#define  P5PUD_I_0   0  //"1" = GPIO50 Pull Down                    / "0" = GPIO50 Pull Up
#define  P5VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO50 Wake up from Deep Sleep Support  */
#define  P5WE_0      1  //"1" = GPIO50 wake up from sleep enable    / "0" = GPIO50 wake up from sleep disable
#define  P5WA_0      1  //"1" = GPIO50 enable any edge wake up      / "0" = GPIO50 disable any edge wake up 
#define  P5WP_0      0  //"1" = GPIO50 wake up when falling edge    / "0" = GPIO50 wake up when rising edge
#define  P50_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO51 Define    eDP_BKLTEN_CPU                                                                     *//
//******************************************************************************************************//
#define  xP5OD_I_1   0  //"1" = GPIO51 The output pin is Open_Drain / "0" = GPIO51 The output pin is Push_Pull
#if xP5OD_I_1
#define  P5DIR_I_1   0  //"0" = GPIO51 Output Data "High"           / "1" = GPIO51 Output Data "Low"
#define  P5DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT1       CLRBIT1(P5DIR)
#define  CLR_PORT5_BIT1       SETBIT1(P5DIR)
#define  CPL_PORT5_BIT1       CPLBIT1(P5DIR)
#else
#define  P5DIR_I_1   0  //"1" = GPIO51 is Output Pin                / "0" = GPIO51 is Input Pin
#define  P5DOUT_I_1  0  //"1" = GPIO51 Output Data "High"           / "0" = GPIO51 Output Data "Low"
#define  SET_PORT5_BIT1       SETBIT1(P5DOUT)
#define  CLR_PORT5_BIT1       CLRBIT1(P5DOUT)
#define  CPL_PORT5_BIT1       CPLBIT1(P5DOUT)
#endif
#define  P5PUE_I_1   0  //"1" = GPIO51 Pull Up/Dn Enable            / "0" = GPIO51 Pull Up/Dn Disable
#define  P5PUD_I_1   0  //"1" = GPIO51 Pull Down                    / "0" = GPIO51 Pull Up
#define  P5VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO51 Wake up from Deep Sleep Support  */
#define  P5WE_1      0  //"1" = GPIO51 wake up from sleep enable    / "0" = GPIO51 wake up from sleep disable
#define  P5WA_1      0  //"1" = GPIO51 enable any edge wake up      / "0" = GPIO51 disable any edge wake up
#define  P5WP_1      0  //"1" = GPIO51 wake up when falling edge    / "0" = GPIO51 wake up when rising edge
#define  P51_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO52 Define    TYPEC2_VBUS20_DET# (DEVALT4)                                                             *//
//******************************************************************************************************//
#define  xP5OD_I_2   0  //"1" = GPIO52 The output pin is Open_Drain / "0" = GPIO52 The output pin is Push_Pull
#if xP5OD_I_2
#define  P5DIR_I_2   0  //"0" = GPIO52 Output Data "High"           / "1" = GPIO52 Output Data "Low"
#define  P5DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT2       CLRBIT2(P5DIR)
#define  CLR_PORT5_BIT2       SETBIT2(P5DIR)
#define  CPL_PORT5_BIT2       CPLBIT2(P5DIR)
#else
#define  P5DIR_I_2   0  //"1" = GPIO52 is Output Pin                / "0" = GPIO52 is Input Pin
#define  P5DOUT_I_2  0  //"1" = GPIO52 Output Data "High"           / "0" = GPIO52 Output Data "Low"
#define  SET_PORT5_BIT2       SETBIT2(P5DOUT)
#define  CLR_PORT5_BIT2       CLRBIT2(P5DOUT)
#define  CPL_PORT5_BIT2       CPLBIT2(P5DOUT)
#endif
#define  P5PUE_I_2   0  //"1" = GPIO52 Pull Up/Dn Enable            / "0" = GPIO52 Pull Up/Dn Disable
#define  P5PUD_I_2   0  //"1" = GPIO52 Pull Down                    / "0" = GPIO52 Pull Up
#define  P5VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO52 Wake up from Deep Sleep Support  */
#define  P5WE_2      1  //"1" = GPIO52 wake up from sleep enable    / "0" = GPIO52 wake up from sleep disable
#define  P5WA_2      1  //"1" = GPIO52 enable any edge wake up      / "0" = GPIO52 disable any edge wake up
#define  P5WP_2      0  //"1" = GPIO52 wake up when falling edge    / "0" = GPIO52 wake up when rising edge
#define  P52_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO53 Define   CPU_SMB_SDA_P0 (DEVALTA)                                                             *//
//******************************************************************************************************//
#define  xP5OD_I_3   0  //"1" = GPIO53 The output pin is Open_Drain / "0" = GPIO53 The output pin is Push_Pull
#if xP5OD_I_3
#define  P5DIR_I_3   0  //"0" = GPIO53 Output Data "High"           / "1" = GPIO53 Output Data "Low"
#define  P5DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT3       CLRBIT3(P5DIR)
#define  CLR_PORT5_BIT3       SETBIT3(P5DIR)
#define  CPL_PORT5_BIT3       CPLBIT3(P5DIR)
#else
#define  P5DIR_I_3   0  //"1" = GPIO53 is Output Pin                / "0" = GPIO53 is Input Pin
#define  P5DOUT_I_3  0  //"1" = GPIO53 Output Data "High"           / "0" = GPIO53 Output Data "Low"
#define  SET_PORT5_BIT3       SETBIT3(P5DOUT)
#define  CLR_PORT5_BIT3       CLRBIT3(P5DOUT)
#define  CPL_PORT5_BIT3       CPLBIT3(P5DOUT)
#endif
#define  P5PUE_I_3   0  //"1" = GPIO53 Pull Up/Dn Enable            / "0" = GPIO53 Pull Up/Dn Disable
#define  P5PUD_I_3   0  //"1" = GPIO53 Pull Down                    / "0" = GPIO53 Pull Up
#define  P5VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO53 Wake up from Deep Sleep Support  */
#define  P5WE_3      0  //"1" = GPIO53 wake up from sleep enable    / "0" = GPIO53 wake up from sleep disable
#define  P5WA_3      0  //"1" = GPIO53 enable any edge wake up      / "0" = GPIO53 disable any edge wake up
#define  P5WP_3      0  //"1" = GPIO53 wake up when falling edge    / "0" = GPIO53 wake up when rising edge
#define  P53_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO54 Define    EC_SCI# (DEVALT2)                                                             *//
//******************************************************************************************************//
#define  xP5OD_I_4   0  //"1" = GPIO54 The output pin is Open_Drain / "0" = GPIO54 The output pin is Push_Pull
#if xP5OD_I_4
#define  P5DIR_I_4   0  //"0" = GPIO54 Output Data "High"           / "1" = GPIO54 Output Data "Low"
#define  P5DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT4       CLRBIT4(P5DIR)
#define  CLR_PORT5_BIT4       SETBIT4(P5DIR)
#define  CPL_PORT5_BIT4       CPLBIT4(P5DIR)
#else
#define  P5DIR_I_4   0  //"1" = GPIO54 is Output Pin                / "0" = GPIO54 is Input Pin
#define  P5DOUT_I_4  0  //"1" = GPIO54 Output Data "High"           / "0" = GPIO54 Output Data "Low"
#define  SET_PORT5_BIT4       SETBIT4(P5DOUT)
#define  CLR_PORT5_BIT4       CLRBIT4(P5DOUT)
#define  CPL_PORT5_BIT4       CPLBIT4(P5DOUT)
#endif
#define  P5PUE_I_4   0  //"1" = GPIO54 Pull Up/Dn Enable            / "0" = GPIO54 Pull Up/Dn Disable
#define  P5PUD_I_4   0  //"1" = GPIO54 Pull Down                    / "0" = GPIO54 Pull Up
#define  P5VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO54 Wake up from Deep Sleep Support  */
#define  P5WE_4      0  //"1" = GPIO54 wake up from sleep enable    / "0" = GPIO54 wake up from sleep disable
#define  P5WA_4      0  //"1" = GPIO54 enable any edge wake up      / "0" = GPIO54 disable any edge wake up
#define  P5WP_4      0  //"1" = GPIO54 wake up when falling edge    / "0" = GPIO54 wake up when rising edge
#define  P54_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO55 Define    USB_CHAR_SEL (DEVALT0,8)                                                      *//
//******************************************************************************************************//
#define  xP5OD_I_5   0  //"1" = GPIO55 The output pin is Open_Drain / "0" = GPIO55 The output pin is Push_Pull
#if xP5OD_I_5
#define  P5DIR_I_5   0  //"0" = GPIO55 Output Data "High"           / "1" = GPIO55 Output Data "Low"
#define  P5DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT5       CLRBIT5(P5DIR)
#define  CLR_PORT5_BIT5       SETBIT5(P5DIR)
#define  CPL_PORT5_BIT5       CPLBIT5(P5DIR)
#else
#define  P5DIR_I_5   1  //"1" = GPIO55 is Output Pin                / "0" = GPIO55 is Input Pin
#define  P5DOUT_I_5  0  //"1" = GPIO55 Output Data "High"           / "0" = GPIO55 Output Data "Low"
#define  SET_PORT5_BIT5       SETBIT5(P5DOUT)
#define  CLR_PORT5_BIT5       CLRBIT5(P5DOUT)
#define  CPL_PORT5_BIT5       CPLBIT5(P5DOUT)
#endif
#define  P5PUE_I_5   0  //"1" = GPIO55 Pull Up/Dn Enable            / "0" = GPIO55 Pull Up/Dn Disable
#define  P5PUD_I_5   0  //"1" = GPIO55 Pull Down                    / "0" = GPIO55 Pull Up
#define  P5VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO55 Wake up from Deep Sleep Support  */
#define  P5WE_5      0  //"1" = GPIO55 wake up from sleep enable    / "0" = GPIO55 wake up from sleep disable
#define  P5WA_5      0  //"1" = GPIO55 enable any edge wake up      / "0" = GPIO55 disable any edge wake up
#define  P5WP_5      0  //"1" = GPIO55 wake up when falling edge    / "0" = GPIO55 wake up when rising edge
#define  P55_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO56 Define    FAN_TACH1 (DEVALT3)                                                        *//
//******************************************************************************************************//
#define  xP5OD_I_6   0  //"1" = GPIO56 The output pin is Open_Drain / "0" = GPIO56 The output pin is Push_Pull
#if xP5OD_I_6
#define  P5DIR_I_6   0  //"0" = GPIO56 Output Data "High"           / "1" = GPIO56 Output Data "Low"
#define  P5DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT6       CLRBIT6(P5DIR)
#define  CLR_PORT5_BIT6       SETBIT6(P5DIR)
#define  CPL_PORT5_BIT6       CPLBIT6(P5DIR)
#else
#define  P5DIR_I_6   0  //"1" = GPIO56 is Output Pin                / "0" = GPIO56 is Input Pin
#define  P5DOUT_I_6  0  //"1" = GPIO56 Output Data "High"           / "0" = GPIO56 Output Data "Low"
#define  SET_PORT5_BIT6       SETBIT6(P5DOUT)
#define  CLR_PORT5_BIT6       CLRBIT6(P5DOUT)
#define  CPL_PORT5_BIT6       CPLBIT6(P5DOUT)
#endif
#define  P5PUE_I_6   0  //"1" = GPIO56 Pull Up/Dn Enable            / "0" = GPIO56 Pull Up/Dn Disable
#define  P5PUD_I_6   0  //"1" = GPIO56 Pull Down                    / "0" = GPIO56 Pull Up
#define  P5VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO56 Wake up from Deep Sleep Support  */
#define  P5WE_6      0  //"1" = GPIO56 wake up from sleep enable    / "0" = GPIO56 wake up from sleep disable
#define  P5WA_6      0  //"1" = GPIO56 enable any edge wake up      / "0" = GPIO56 disable any edge wake up
#define  P5WP_6      0  //"1" = GPIO56 wake up when falling edge    / "0" = GPIO56 wake up when rising edge
#define  P56_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO57 Define    KBSOUT17  (DEVALT7)                                        *//
//******************************************************************************************************//
#define  xP5OD_I_7   0  //"1" = GPIO57 The output pin is Open_Drain / "0" = GPIO57 The output pin is Push_Pull
#if xP5OD_I_7
#define  P5DIR_I_7   0  //"0" = GPIO57 Output Data "High"           / "1" = GPIO57 Output Data "Low"
#define  P5DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT5_BIT7       CLRBIT7(P5DIR)
#define  CLR_PORT5_BIT7       SETBIT7(P5DIR)
#define  CPL_PORT5_BIT7       CPLBIT7(P5DIR)
#else
#define  P5DIR_I_7   0  //"1" = GPIO57 is Output Pin                / "0" = GPIO57 is Input Pin
#define  P5DOUT_I_7  0  //"1" = GPIO57 Output Data "High"           / "0" = GPIO57 Output Data "Low"
#define  SET_PORT5_BIT7       SETBIT7(P5DOUT)
#define  CLR_PORT5_BIT7       CLRBIT7(P5DOUT)
#define  CPL_PORT5_BIT7       CPLBIT7(P5DOUT)
#endif
#define  P5PUE_I_7   0  //"1" = GPIO57 Pull Up/Dn Enable            / "0" = GPIO57 Pull Up/Dn Disable
#define  P5PUD_I_7   0  //"1" = GPIO57 Pull Down                    / "0" = GPIO57 Pull Up
#define  P5VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO57 Wake up from Deep Sleep Support  */
#define  P5WE_7      0  //"1" = GPIO57 wake up from sleep enable    / "0" = GPIO57 wake up from sleep disable
#define  P5WA_7      0  //"1" = GPIO57 enable any edge wake up      / "0" = GPIO57 disable any edge wake up
#define  P5WP_7      0  //"1" = GPIO57 wake up when falling edge    / "0" = GPIO57 wake up when rising edge
#define  P57_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO60 Define    KBSOUT16 (DEVALT7)                                             *//
//******************************************************************************************************//
#define  xP6OD_I_0   0  //"1" = GPIO60 The output pin is Open_Drain / "0" = GPIO60 The output pin is Push_Pull
#if xP6OD_I_0
#define  P6DIR_I_0   0  //"0" = GPIO60 Output Data "High"           / "1" = GPIO60 Output Data "Low"
#define  P6DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT0       CLRBIT0(P6DIR)
#define  CLR_PORT6_BIT0       SETBIT0(P6DIR)
#define  CPL_PORT6_BIT0       CPLBIT0(P6DIR)
#else
#define  P6DIR_I_0   0  //"1" = GPIO60 is Output Pin                / "0" = GPIO60 is Input Pin
#define  P6DOUT_I_0  0  //"1" = GPIO60 Output Data "High"           / "0" = GPIO60 Output Data "Low"
#define  SET_PORT6_BIT0       SETBIT0(P6DOUT)
#define  CLR_PORT6_BIT0       CLRBIT0(P6DOUT)
#define  CPL_PORT6_BIT0       CPLBIT0(P6DOUT)
#endif
#define  P6PUE_I_0   0  //"1" = GPIO60 Pull Up/Dn Enable            / "0" = GPIO60 Pull Up/Dn Disable
#define  P6PUD_I_0   0  //"1" = GPIO60 Pull Down                    / "0" = GPIO60 Pull Up
#define  P6VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO60 Wake up from Deep Sleep Support  */
#define  P6WE_0      0  //"1" = GPIO60 wake up from sleep enable    / "0" = GPIO60 wake up from sleep disable
#define  P6WA_0      0  //"1" = GPIO60 enable any edge wake up      / "0" = GPIO60 disable any edge wake up
#define  P6WP_0      0  //"1" = GPIO60 wake up when falling edge    / "0" = GPIO60 wake up when rising edge
#define  P60_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO61 Define    KBSOUT15 (DEVALT7)                                                            *//
//******************************************************************************************************//
#define  xP6OD_I_1   0  //"1" = GPIO61 The output pin is Open_Drain / "0" = GPIO61 The output pin is Push_Pull
#if xP6OD_I_1
#define  P6DIR_I_1   0  //"0" = GPIO61 Output Data "High"           / "1" = GPIO61 Output Data "Low"
#define  P6DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT1       CLRBIT1(P6DIR)
#define  CLR_PORT6_BIT1       SETBIT1(P6DIR)
#define  CPL_PORT6_BIT1       CPLBIT1(P6DIR)
#else
#define  P6DIR_I_1   0  //"1" = GPIO61 is Output Pin                / "0" = GPIO61 is Input Pin
#define  P6DOUT_I_1  0  //"1" = GPIO61 Output Data "High"           / "0" = GPIO61 Output Data "Low"
#define  SET_PORT6_BIT1       SETBIT1(P6DOUT)
#define  CLR_PORT6_BIT1       CLRBIT1(P6DOUT)
#define  CPL_PORT6_BIT1       CPLBIT1(P6DOUT)
#endif
#define  P6PUE_I_1   0  //"1" = GPIO61 Pull Up/Dn Enable            / "0" = GPIO61 Pull Up/Dn Disable
#define  P6PUD_I_1   0  //"1" = GPIO61 Pull Down                    / "0" = GPIO61 Pull Up
#define  P6VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P61_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO62 Define    KBSOUT14 (DEVALT7)                                                            *//
//******************************************************************************************************//
#define  xP6OD_I_2   0  //"1" = GPIO62 The output pin is Open_Drain / "0" = GPIO62 The output pin is Push_Pull
#if xP6OD_I_2
#define  P6DIR_I_2   0  //"0" = GPIO62 Output Data "High"           / "1" = GPIO62 Output Data "Low"
#define  P6DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT2       CLRBIT2(P6DIR)
#define  CLR_PORT6_BIT2       SETBIT2(P6DIR)
#define  CPL_PORT6_BIT2       CPLBIT2(P6DIR)
#else
#define  P6DIR_I_2   0  //"1" = GPIO62 is Output Pin                / "0" = GPIO62 is Input Pin
#define  P6DOUT_I_2  0  //"1" = GPIO62 Output Data "High"           / "0" = GPIO62 Output Data "Low"
#define  SET_PORT6_BIT2       SETBIT2(P6DOUT)
#define  CLR_PORT6_BIT2       CLRBIT2(P6DOUT)
#define  CPL_PORT6_BIT2       CPLBIT2(P6DOUT)
#endif
#define  P6PUE_I_2   0  //"1" = GPIO62 Pull Up/Dn Enable            / "0" = GPIO62 Pull Up/Dn Disable
#define  P6PUD_I_2   0  //"1" = GPIO62 Pull Down                    / "0" = GPIO62 Pull Up
#define  P6VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P62_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO63 Define (DEVALT7)   KBSOUT13                                                             *//
//******************************************************************************************************//
#define  xP6OD_I_3   0  //"1" = GPIO63 The output pin is Open_Drain / "0" = GPIO63 The output pin is Push_Pull
#if xP6OD_I_3
#define  P6DIR_I_3   0  //"0" = GPIO63 Output Data "High"           / "1" = GPIO63 Output Data "Low"
#define  P6DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT3       CLRBIT3(P6DIR)
#define  CLR_PORT6_BIT3       SETBIT3(P6DIR)
#define  CPL_PORT6_BIT3       CPLBIT3(P6DIR)
#else
#define  P6DIR_I_3   0  //"1" = GPIO63 is Output Pin                / "0" = GPIO63 is Input Pin
#define  P6DOUT_I_3  0  //"1" = GPIO63 Output Data "High"           / "0" = GPIO63 Output Data "Low"
#define  SET_PORT6_BIT3       SETBIT3(P6DOUT)
#define  CLR_PORT6_BIT3       CLRBIT3(P6DOUT)
#define  CPL_PORT6_BIT3       CPLBIT3(P6DOUT)
#endif
#define  P6PUE_I_3   0  //"1" = GPIO63 Pull Up/Dn Enable            / "0" = GPIO63 Pull Up/Dn Disable
#define  P6PUD_I_3   0  //"1" = GPIO63 Pull Down                    / "0" = GPIO63 Pull Up
#define  P6VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P63_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO64 Define    KBSOUT12 (DEVALT7)/SMI Dummy                                                  *//
//******************************************************************************************************//
#define  xP6OD_I_4   0  //"1" = GPIO64 The output pin is Open_Drain / "0" = GPIO64 The output pin is Push_Pull
#if xP6OD_I_4
#define  P6DIR_I_4   0  //"0" = GPIO64 Output Data "High"           / "1" = GPIO64 Output Data "Low"
#define  P6DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT4       CLRBIT4(P6DIR)
#define  CLR_PORT6_BIT4       SETBIT4(P6DIR)
#define  CPL_PORT6_BIT4       CPLBIT4(P6DIR)
#else
#define  P6DIR_I_4   0  //"1" = GPIO64 is Output Pin                / "0" = GPIO64 is Input Pin
#define  P6DOUT_I_4  0  //"1" = GPIO64 Output Data "High"           / "0" = GPIO64 Output Data "Low"
#define  SET_PORT6_BIT4       SETBIT4(P6DOUT)
#define  CLR_PORT6_BIT4       CLRBIT4(P6DOUT)
#define  CPL_PORT6_BIT4       CPLBIT4(P6DOUT)
#endif
#define  P6PUE_I_4   0  //"1" = GPIO64 Pull Up/Dn Enable            / "0" = GPIO64 Pull Up/Dn Disable
#define  P6PUD_I_4   0  //"1" = GPIO64 Pull Down                    / "0" = GPIO64 Pull Up
#define  P6VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P64_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO65 Define   PWR_CHG_ON# (DEVALT2)                                                          *//
//******************************************************************************************************//
#define  xP6OD_I_5   1  //"1" = GPIO65 The output pin is Open_Drain / "0" = GPIO65 The output pin is Push_Pull
#if xP6OD_I_5
#define  P6DIR_I_5   0  //"0" = GPIO65 Output Data "High"           / "1" = GPIO65 Output Data "Low"
#define  P6DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT5       CLRBIT5(P6DIR)
#define  CLR_PORT6_BIT5       SETBIT5(P6DIR)
#define  CPL_PORT6_BIT5       CPLBIT5(P6DIR)
#else
#define  P6DIR_I_5   0  //"1" = GPIO65 is Output Pin                / "0" = GPIO65 is Input Pin
#define  P6DOUT_I_5  0  //"1" = GPIO65 Output Data "High"           / "0" = GPIO65 Output Data "Low"
#define  SET_PORT6_BIT5       SETBIT5(P6DOUT)
#define  CLR_PORT6_BIT5       CLRBIT5(P6DOUT)
#define  CPL_PORT6_BIT5       CPLBIT5(P6DOUT)
#endif
#define  P6PUE_I_5   0  //"1" = GPIO65 Pull Up/Dn Enable            / "0" = GPIO65 Pull Up/Dn Disable
#define  P6PUD_I_5   0  //"1" = GPIO65 Pull Down                    / "0" = GPIO65 Pull Up
#define  P6VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO65 Wake up from Deep Sleep Support  */
#define  P6WE_5      0  //"1" = GPIO65 wake up from sleep enable    / "0" = GPIO65 wake up from sleep disable
#define  P6WA_5      0  //"1" = GPIO65 enable any edge wake up      / "0" = GPIO65 disable any edge wake up 
#define  P6WP_5      0  //"1" = GPIO65 wake up when falling edge    / "0" = GPIO65 wake up when rising edge 
#define  P65_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO66 Define   FAN1_PWM (DEVALT5)                                                             *//
//******************************************************************************************************//
#define  xP6OD_I_6   0  //"1" = GPIO66 The output pin is Open_Drain / "0" = GPIO66 The output pin is Push_Pull
#if xP6OD_I_6
#define  P6DIR_I_6   0  //"0" = GPIO66 Output Data "High"           / "1" = GPIO66 Output Data "Low"
#define  P6DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT6       CLRBIT6(P6DIR)
#define  CLR_PORT6_BIT6       SETBIT6(P6DIR)
#define  CPL_PORT6_BIT6       CPLBIT6(P6DIR)
#else
#define  P6DIR_I_6   0  //"1" = GPIO66 is Output Pin                / "0" = GPIO66 is Input Pin
#define  P6DOUT_I_6  0  //"1" = GPIO66 Output Data "High"           / "0" = GPIO66 Output Data "Low"
#define  SET_PORT6_BIT6       SETBIT6(P6DOUT)
#define  CLR_PORT6_BIT6       CLRBIT6(P6DOUT)
#define  CPL_PORT6_BIT6       CPLBIT6(P6DOUT)
#endif
#define  P6PUE_I_6   0  //"1" = GPIO66 Pull Up/Dn Enable            / "0" = GPIO66 Pull Up/Dn Disable
#define  P6PUD_I_6   0  //"1" = GPIO66 Pull Down                    / "0" = GPIO66 Pull Up
#define  P6VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO66 Wake up from Deep Sleep Support  */
#define  P6WE_6      0  //"1" = GPIO66 wake up from sleep enable    / "0" = GPIO66 wake up from sleep disable
#define  P6WA_6      0  //"1" = GPIO66 enable any edge wake up      / "0" = GPIO66 disable any edge wake up
#define  P6WP_6      0  //"1" = GPIO66 wake up when falling edge    / "0" = GPIO66 wake up when rising edge
#define  P66_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO67 Define       PTP_PWR_EN (DEVALT2)                                                      *//
//******************************************************************************************************//
#define  xP6OD_I_7   0  //"1" = GPIO67 The output pin is Open_Drain / "0" = GPIO67 The output pin is Push_Pull
#if xP6OD_I_7
#define  P6DIR_I_7   0  //"0" = GPIO67 Output Data "High"           / "1" = GPIO67 Output Data "Low"
#define  P6DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT6_BIT7       CLRBIT7(P6DIR)
#define  CLR_PORT6_BIT7       SETBIT7(P6DIR)
#define  CPL_PORT6_BIT7       CPLBIT7(P6DIR)
#else
#define  P6DIR_I_7   1  //"1" = GPIO67 is Output Pin                / "0" = GPIO67 is Input Pin
#define  P6DOUT_I_7  0  //"1" = GPIO67 Output Data "High"           / "0" = GPIO67 Output Data "Low"
#define  SET_PORT6_BIT7       SETBIT7(P6DOUT)
#define  CLR_PORT6_BIT7       CLRBIT7(P6DOUT)
#define  CPL_PORT6_BIT7       CPLBIT7(P6DOUT)
#endif
#define  P6PUE_I_7   0  //"1" = GPIO67 Pull Up/Dn Enable            / "0" = GPIO67 Pull Up/Dn Disable
#define  P6PUD_I_7   0  //"1" = GPIO67 Pull Down                    / "0" = GPIO67 Pull Up
#define  P6VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO67 Wake up from Deep Sleep Support  */
#define  P6WE_7      0  //"1" = GPIO67 wake up from sleep enable    / "0" = GPIO67 wake up from sleep disable
#define  P6WA_7      0  //"1" = GPIO67 enable any edge wake up      / "0" = GPIO67 disable any edge wake up
#define  P6WP_7      0  //"1" = GPIO67 wake up when falling edge    / "0" = GPIO67 wake up when rising edge
#define  P67_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO70 Define   AC_IN#(DEVALTD)                                                                      *//
//******************************************************************************************************//
#define  xP7OD_I_0   0  //"1" = GPIO70 The output pin is Open_Drain / "0" = GPIO70 The output pin is Push_Pull
#if xP7OD_I_0
#define  P7DIR_I_0   0  //"0" = GPIO70 Output Data "High"           / "1" = GPIO70 Output Data "Low"
#define  P7DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT0       CLRBIT0(P7DIR)
#define  CLR_PORT7_BIT0       SETBIT0(P7DIR)
#define  CPL_PORT7_BIT0       CPLBIT0(P7DIR)
#else
#define  P7DIR_I_0   0  //"1" = GPIO70 is Output Pin                / "0" = GPIO70 is Input Pin
#define  P7DOUT_I_0  0  //"1" = GPIO70 Output Data "High"           / "0" = GPIO70 Output Data "Low"
#define  SET_PORT7_BIT0       SETBIT0(P7DOUT)
#define  CLR_PORT7_BIT0       CLRBIT0(P7DOUT)
#define  CPL_PORT7_BIT0       CPLBIT0(P7DOUT)
#endif
#define  P7PUE_I_0   0  //"1" = GPIO70 Pull Up/Dn Enable            / "0" = GPIO70 Pull Up/Dn Disable
#define  P7PUD_I_0   0  //"1" = GPIO70 Pull Down                    / "0" = GPIO70 Pull Up
#define  P7VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO70 Wake up from Deep Sleep Support  */
#define  P7WE_0      1  //"1" = GPIO70 wake up from sleep enable    / "0" = GPIO70 wake up from sleep disable
#define  P7WA_0      0  //"1" = GPIO70 enable any edge wake up      / "0" = GPIO70 disable any edge wake up
#define  P7WP_0      1  //"1" = GPIO70 wake up when falling edge    / "0" = GPIO70 wake up when rising edge
#define  P70_AFKEEP  1  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO71 Define    Reserved (for EC_ENABLE)                                                                    *//
//******************************************************************************************************//
#define  xP7OD_I_1   0  //"1" = GPIO71 The output pin is Open_Drain / "0" = GPIO71 The output pin is Push_Pull
#if xP7OD_I_1
#define  P7DIR_I_1   0  //"0" = GPIO71 Output Data "High"           / "1" = GPIO71 Output Data "Low"
#define  P7DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT1       CLRBIT1(P7DIR)
#define  CLR_PORT7_BIT1       SETBIT1(P7DIR)
#define  CPL_PORT7_BIT1       CPLBIT1(P7DIR)
#else
#define  P7DIR_I_1   0  //"1" = GPIO71 is Output Pin                / "0" = GPIO71 is Input Pin
#define  P7DOUT_I_1  0  //"1" = GPIO71 Output Data "High"           / "0" = GPIO71 Output Data "Low"
#define  SET_PORT7_BIT1       SETBIT1(P7DOUT)
#define  CLR_PORT7_BIT1       CLRBIT1(P7DOUT)
#define  CPL_PORT7_BIT1       CPLBIT1(P7DOUT)
#endif
#define  P7PUE_I_1   0  //"1" = GPIO71 Pull Up/Dn Enable            / "0" = GPIO71 Pull Up/Dn Disable
#define  P7PUD_I_1   0  //"1" = GPIO71 Pull Down                    / "0" = GPIO71 Pull Up
#define  P7VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P71_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIO72 Define    (Reserved)                                                                      *//
//******************************************************************************************************//
#define  xP7OD_I_2   0  //"1" = GPIO72 The output pin is Open_Drain / "0" = GPIO72 The output pin is Push_Pull
#if xP7OD_I_2
#define  P7DIR_I_2   0  //"0" = GPIO72 Output Data "High"           / "1" = GPIO72 Output Data "Low"
#define  P7DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT2       CLRBIT2(P7DIR)
#define  CLR_PORT7_BIT2       SETBIT2(P7DIR)
#define  CPL_PORT7_BIT2       CPLBIT2(P7DIR)
#else
#define  P7DIR_I_2   0  //"1" = GPIO72 is Output Pin                / "0" = GPIO72 is Input Pin
#define  P7DOUT_I_2  0  //"1" = GPIO72 Output Data "High"           / "0" = GPIO72 Output Data "Low"
#define  SET_PORT7_BIT2       SETBIT2(P7DOUT)
#define  CLR_PORT7_BIT2       CLRBIT2(P7DOUT)
#define  CPL_PORT7_BIT2       CPLBIT2(P7DOUT)
#endif
#define  P7PUE_I_2   0  //"1" = GPIO72 Pull Up/Dn Enable            / "0" = GPIO72 Pull Up/Dn Disable
#define  P7PUD_I_2   0  //"1" = GPIO72 Pull Down                    / "0" = GPIO72 Pull Up
#define  P7VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  P72_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO73 Define    EC_I2C_SCL_PD (DEVALT2)                                                      *//
//******************************************************************************************************//
#define  xP7OD_I_3   0  //"1" = GPIO73 The output pin is Open_Drain / "0" = GPIO73 The output pin is Push_Pull
#if xP7OD_I_3
#define  P7DIR_I_3   0  //"0" = GPIO73 Output Data "High"           / "1" = GPIO73 Output Data "Low"
#define  P7DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT3       CLRBIT3(P7DIR)
#define  CLR_PORT7_BIT3       SETBIT3(P7DIR)
#define  CPL_PORT7_BIT3       CPLBIT3(P7DIR)
#else
#define  P7DIR_I_3   0  //"1" = GPIO73 is Output Pin                / "0" = GPIO73 is Input Pin
#define  P7DOUT_I_3  0  //"1" = GPIO73 Output Data "High"           / "0" = GPIO73 Output Data "Low"
#define  SET_PORT7_BIT3       SETBIT3(P7DOUT)
#define  CLR_PORT7_BIT3       CLRBIT3(P7DOUT)
#define  CPL_PORT7_BIT3       CPLBIT3(P7DOUT)
#endif
#define  P7PUE_I_3   0  //"1" = GPIO73 Pull Up/Dn Enable            / "0" = GPIO73 Pull Up/Dn Disable
#define  P7PUD_I_3   0  //"1" = GPIO73 Pull Down                    / "0" = GPIO73 Pull Up
#define  P7VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO73 Wake up from Deep Sleep Support  */
#define  P7WE_3      0  //"1" = GPIO73 wake up from sleep enable    / "0" = GPIO73 wake up from sleep disable
#define  P7WA_3      0  //"1" = GPIO73 enable any edge wake up      / "0" = GPIO73 disable any edge wake up
#define  P7WP_3      0  //"1" = GPIO73 wake up when falling edge    / "0" = GPIO73 wake up when rising edge
#define  P73_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO74 Define    EC_I2C_SDA_PD (DEVALT2)                                                      *//
//******************************************************************************************************//
#define  xP7OD_I_4   0  //"1" = GPIO74 The output pin is Open_Drain / "0" = GPIO74 The output pin is Push_Pull
#if xP7OD_I_4
#define  P7DIR_I_4   0  //"0" = GPIO74 Output Data "High"           / "1" = GPIO74 Output Data "Low"
#define  P7DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT4       CLRBIT4(P7DIR)
#define  CLR_PORT7_BIT4       SETBIT4(P7DIR)
#define  CPL_PORT7_BIT4       CPLBIT4(P7DIR)
#else
#define  P7DIR_I_4   0  //"1" = GPIO74 is Output Pin                / "0" = GPIO74 is Input Pin
#define  P7DOUT_I_4  0  //"1" = GPIO74 Output Data "High"           / "0" = GPIO74 Output Data "Low"
#define  SET_PORT7_BIT4       SETBIT4(P7DOUT)
#define  CLR_PORT7_BIT4       CLRBIT4(P7DOUT)
#define  CPL_PORT7_BIT4       CPLBIT4(P7DOUT)
#endif
#define  P7PUE_I_4   0  //"1" = GPIO74 Pull Up/Dn Enable            / "0" = GPIO74 Pull Up/Dn Disable
#define  P7PUD_I_4   0  //"1" = GPIO74 Pull Down                    / "0" = GPIO74 Pull Up
#define  P7VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO74 Wake up from Deep Sleep Support  */
#define  P7WE_4      0  //"1" = GPIO74 wake up from sleep enable    / "0" = GPIO74 wake up from sleep disable
#define  P7WA_4      0  //"1" = GPIO74 enable any edge wake up      / "0" = GPIO74 disable any edge wake up
#define  P7WP_4      0  //"1" = GPIO74 wake up when falling edge    / "0" = GPIO74 wake up when rising edge
#define  P74_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO75 Define    KB_BL_DET                                                                     *//
//******************************************************************************************************//
#define  xP7OD_I_5   0  //"1" = GPIO75 The output pin is Open_Drain / "0" = GPIO75 The output pin is Push_Pull
#if xP7OD_I_5
#define  P7DIR_I_5   0  //"0" = GPIO75 Output Data "High"           / "1" = GPIO75 Output Data "Low"
#define  P7DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT5       CLRBIT5(P7DIR)
#define  CLR_PORT7_BIT5       SETBIT5(P7DIR)
#define  CPL_PORT7_BIT5       CPLBIT5(P7DIR)
#else
#define  P7DIR_I_5   0  //"1" = GPIO75 is Output Pin                / "0" = GPIO75 is Input Pin
#define  P7DOUT_I_5  0  //"1" = GPIO75 Output Data "High"           / "0" = GPIO75 Output Data "Low"
#define  SET_PORT7_BIT5       SETBIT5(P7DOUT)
#define  CLR_PORT7_BIT5       CLRBIT5(P7DOUT)
#define  CPL_PORT7_BIT5       CPLBIT5(P7DOUT)
#endif
#define  P7PUE_I_5   0  //"1" = GPIO75 Pull Up/Dn Enable            / "0" = GPIO75 Pull Up/Dn Disable
#define  P7PUD_I_5   0  //"1" = GPIO75 Pull Down                    / "0" = GPIO75 Pull Up
#define  P7VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO75 Wake up from Deep Sleep Support  */
#define  P7WE_5      0  //"1" = GPIO75 wake up from sleep enable    / "0" = GPIO75 wake up from sleep disable
#define  P7WA_5      0  //"1" = GPIO75 enable any edge wake up      / "0" = GPIO75 disable any edge wake up
#define  P7WP_5      0  //"1" = GPIO75 wake up when falling edge    / "0" = GPIO75 wake up when rising edge
#define  P75_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPO76 Define    AC_PRESENT                                                                     *//
//******************************************************************************************************//
#define  xP7OD_I_6   1  //"1" = GPIO76 The output pin is Open_Drain / "0" = GPIO76 The output pin is Push_Pull
#if xP7OD_I_6
#define  P7DIR_I_6   0  //"0" = GPIO76 Output Data "High"           / "1" = GPIO76 Output Data "Low"
#define  P7DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT6       CLRBIT6(P7DIR)
#define  CLR_PORT7_BIT6       SETBIT6(P7DIR)
#define  CPL_PORT7_BIT6       CPLBIT6(P7DIR)
#else
#define  P7DIR_I_6   0  //"1" = GPIO76 is Output Pin                / "0" = GPIO76 is Input Pin
#define  P7DOUT_I_6  0  //"1" = GPIO76 Output Data "High"           / "0" = GPIO76 Output Data "Low"
#define  SET_PORT7_BIT6       SETBIT6(P7DOUT)
#define  CLR_PORT7_BIT6       CLRBIT6(P7DOUT)
#define  CPL_PORT7_BIT6       CPLBIT6(P7DOUT)
#endif
#define  P7PUE_I_6   0  //"1" = GPIO76 Pull Up/Dn Enable            / "0" = GPIO76 Pull Up/Dn Disable
#define  P7PUD_I_6   0  //"1" = GPIO76 Pull Down                    / "0" = GPIO76 Pull Up
#define  P7VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO76 Wake up from Deep Sleep Support  */
#define  P7WE_6      0  //"1" = GPIO76 wake up from sleep enable    / "0" = GPIO76 wake up from sleep disable
#define  P7WA_6      0  //"1" = GPIO76 enable any edge wake up      / "0" = GPIO76 disable any edge wake up 
#define  P7WP_6      0  //"1" = GPIO76 wake up when falling edge    / "0" = GPIO76 wake up when rising edge 
#define  P76_AFKEEP  1  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO77 Define    SYS_PWROK (S0_PWR_GOOD)(DEVALT0)                                                                   *//
//******************************************************************************************************//
#define  xP7OD_I_7   0  //"1" = GPIO77 The output pin is Open_Drain / "0" = GPIO77 The output pin is Push_Pull
#if xP7OD_I_7
#define  P7DIR_I_7   0  //"0" = GPIO77 Output Data "High"           / "1" = GPIO77 Output Data "Low"
#define  P7DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT7_BIT7       CLRBIT7(P7DIR)
#define  CLR_PORT7_BIT7       SETBIT7(P7DIR)
#define  CPL_PORT7_BIT7       CPLBIT7(P7DIR)
#else
#define  P7DIR_I_7   1  //"1" = GPIO77 is Output Pin                / "0" = GPIO77 is Input Pin
#define  P7DOUT_I_7  0  //"1" = GPIO77 Output Data "High"           / "0" = GPIO77 Output Data "Low"
#define  SET_PORT7_BIT7       SETBIT7(P7DOUT)
#define  CLR_PORT7_BIT7       CLRBIT7(P7DOUT)
#define  CPL_PORT7_BIT7       CPLBIT7(P7DOUT)
#endif
#define  P7PUE_I_7   0  //"1" = GPIO77 Pull Up/Dn Enable            / "0" = GPIO77 Pull Up/Dn Disable
#define  P7PUD_I_7   0  //"1" = GPIO77 Pull Down                    / "0" = GPIO77 Pull Up
#define  P7VDDE_I_7  1  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO77 Wake up from Deep Sleep Support  */
#define  P7WE_7      0  //"1" = GPIO77 wake up from sleep enable    / "0" = GPIO77 wake up from sleep disable
#define  P7WA_7      0  //"1" = GPIO77 enable any edge wake up      / "0" = GPIO77 disable any edge wake up
#define  P7WP_7      0  //"1" = GPIO77 wake up when falling edge    / "0" = GPIO77 wake up when rising edge
#define  P77_AFKEEP  1  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO80 Define        VD_IN1(DEVALTE)                                                    *//
//******************************************************************************************************//
#define  xP8OD_I_0   0  //"1" = GPIO80 The output pin is Open_Drain / "0" = GPIO80 The output pin is Push_Pull
#if xP8OD_I_0
#define  P8DIR_I_0   0  //"0" = GPIO80 Output Data "High"           / "1" = GPIO80 Output Data "Low"
#define  P8DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT8_BIT0       CLRBIT0(P8DIR)
#define  CLR_PORT8_BIT0       SETBIT0(P8DIR)
#define  CPL_PORT8_BIT0       CPLBIT0(P8DIR)
#else
#define  P8DIR_I_0   0  //"1" = GPIO80 is Output Pin                / "0" = GPIO80 is Input Pin
#define  P8DOUT_I_0  0  //"1" = GPIO80 Output Data "High"           / "0" = GPIO80 Output Data "Low"
#define  SET_PORT8_BIT0       SETBIT0(P8DOUT)
#define  CLR_PORT8_BIT0       CLRBIT0(P8DOUT)
#define  CPL_PORT8_BIT0       CPLBIT0(P8DOUT)
#endif
#define  P8PUE_I_0   0  //"1" = GPIO80 Pull Up/Dn Enable            / "0" = GPIO80 Pull Up/Dn Disable
#define  P8PUD_I_0   0  //"1" = GPIO80 Pull Down                    / "0" = GPIO80 Pull Up
#define  P8VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO80 Wake up from Deep Sleep Support  */
#define  P8WE_0      0  //"1" = GPIO80 wake up from sleep enable    / "0" = GPIO80 wake up from sleep disable
#define  P8WA_0      0  //"1" = GPIO80 enable any edge wake up      / "0" = GPIO80 disable any edge wake up 
#define  P8WP_0      0  //"1" = GPIO80 wake up when falling edge    / "0" = GPIO80 wake up when rising edge 
#define  P80_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO81 Define    BLON_OUT (DEVALTD)                                                            *//
//******************************************************************************************************//
#define  xP8OD_I_1   0  //"1" = GPIO81 The output pin is Open_Drain / "0" = GPIO81 The output pin is Push_Pull
#if xP8OD_I_1
#define  P8DIR_I_1   0  //"0" = GPIO81 Output Data "High"           / "1" = GPIO81 Output Data "Low"
#define  P8DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT8_BIT1       CLRBIT1(P8DIR)
#define  CLR_PORT8_BIT1       SETBIT1(P8DIR)
#define  CPL_PORT8_BIT1       CPLBIT1(P8DIR)
#else
#define  P8DIR_I_1   1  //"1" = GPIO81 is Output Pin                / "0" = GPIO81 is Input Pin
#define  P8DOUT_I_1  0  //"1" = GPIO81 Output Data "High"           / "0" = GPIO81 Output Data "Low"
#define  SET_PORT8_BIT1       SETBIT1(P8DOUT)
#define  CLR_PORT8_BIT1       CLRBIT1(P8DOUT)
#define  CPL_PORT8_BIT1       CPLBIT1(P8DOUT)
#endif
#define  P8PUE_I_1   0  //"1" = GPIO81 Pull Up/Dn Enable            / "0" = GPIO81 Pull Up/Dn Disable
#define  P8PUD_I_1   0  //"1" = GPIO81 Pull Down                    / "0" = GPIO81 Pull Up
#define  P8VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO81 Wake up from Deep Sleep Support  */
#define  P8WE_1      0  //"1" = GPIO81 wake up from sleep enable    / "0" = GPIO81 wake up from sleep disable
#define  P8WA_1      0  //"1" = GPIO81 enable any edge wake up      / "0" = GPIO81 disable any edge wake up
#define  P8WP_1      0  //"1" = GPIO81 wake up when falling edge    / "0" = GPIO81 wake up when rising edge
#define  P81_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPO82  Define    VD_OUT1(DEVALT8,E)                                                              *//
//******************************************************************************************************//
#define  xP8OD_I_2   0  //"1" = GPIO82 The output pin is Open_Drain / "0" = GPIO82 The output pin is Push_Pull
#if xP8OD_I_2
#define  P8DIR_I_2   0  //"0" = GPIO82 Output Data "High"           / "1" = GPIO82 Output Data "Low"
#define  P8DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT8_BIT2       CLRBIT2(P8DIR)
#define  CLR_PORT8_BIT2       SETBIT2(P8DIR)
#define  CPL_PORT8_BIT2       CPLBIT2(P8DIR)
#else
#define  P8DIR_I_2   0  //"1" = GPIO82 is Output Pin                / "0" = GPIO82 is Input Pin
#define  P8DOUT_I_2  0  //"1" = GPIO82 Output Data "High"           / "0" = GPIO82 Output Data "Low"
#define  SET_PORT8_BIT2       SETBIT2(P8DOUT)
#define  CLR_PORT8_BIT2       CLRBIT2(P8DOUT)
#define  CPL_PORT8_BIT2       CPLBIT2(P8DOUT)
#endif
#define  P8PUE_I_2   0  //"1" = GPIO82 Pull Up/Dn Enable            / "0" = GPIO82 Pull Up/Dn Disable
#define  P8PUD_I_2   0  //"1" = GPIO82 Pull Down                    / "0" = GPIO82 Pull Up
#define  P8VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO82 Wake up from Deep Sleep Support  */
#define  P8WE_2      0  //"1" = GPIO82 wake up from sleep enable    / "0" = GPIO82 wake up from sleep disable
#define  P8WA_2      0  //"1" = GPIO82 enable any edge wake up      / "0" = GPIO82 disable any edge wake up 
#define  P8WP_2      0  //"1" = GPIO82 wake up when falling edge    / "0" = GPIO82 wake up when rising edge 
#define  P82_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO83 Define /*Output Only*/ TxD(DEVALT1)                                                              *//
//******************************************************************************************************//
#define  xP8OD_I_3   0  //"1" = GPIO83 The output pin is Open_Drain / "0" = GPIO83 The output pin is Push_Pull
#if xP8OD_I_3
#define  P8DIR_I_3   0  //"0" = GPIO83 Output Data "High"           / "1" = GPIO83 Output Data "Low"
#define  P8DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT8_BIT3       CLRBIT3(P8DIR)
#define  CLR_PORT8_BIT3       SETBIT3(P8DIR)
#define  CPL_PORT8_BIT3       CPLBIT3(P8DIR)
#else
#define  P8DIR_I_3   0  //"1" = GPIO83 is Output Pin                / "0" = GPIO83 is Input Pin
#define  P8DOUT_I_3  0  //"1" = GPIO83 Output Data "High"           / "0" = GPIO83 Output Data "Low"
#define  SET_PORT8_BIT3       SETBIT3(P8DOUT)
#define  CLR_PORT8_BIT3       CLRBIT3(P8DOUT)
#define  CPL_PORT8_BIT3       CPLBIT3(P8DOUT)
#endif
#define  P8PUE_I_3   0  //"1" = GPIO83 Pull Up/Dn Enable            / "0" = GPIO83 Pull Up/Dn Disable
#define  P8PUD_I_3   0  //"1" = GPIO83 Pull Down                    / "0" = GPIO83 Pull Up
#define  P8VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO83 Wake up from Deep Sleep Support  */
#define  P8WE_3      0  //"1" = GPIO83 wake up from sleep enable    / "0" = GPIO83 wake up from sleep disable
#define  P8WA_3      0  //"1" = GPIO83 enable any edge wake up      / "0" = GPIO83 disable any edge wake up 
#define  P8WP_3      0  //"1" = GPIO83 wake up when falling edge    / "0" = GPIO83 wake up when rising edge 
#define  P83_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPO84 Define    /*Output Only*/ FUN_OFF#(DEVALT8,E)                                                        *//
//******************************************************************************************************//
#define  xP8OD_I_4   0  //"1" = GPIO84 The output pin is Open_Drain / "0" = GPIO84 The output pin is Push_Pull
#if xP8OD_I_4
#define  P8DIR_I_4   0  //"0" = GPIO84 Output Data "High"           / "1" = GPIO84 Output Data "Low"
#define  P8DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT8_BIT4       CLRBIT4(P8DIR)
#define  CLR_PORT8_BIT4       SETBIT4(P8DIR)
#define  CPL_PORT8_BIT4       CPLBIT4(P8DIR)
#else
#define  P8DIR_I_4   1  //"1" = GPIO84 is Output Pin                / "0" = GPIO84 is Input Pin
#define  P8DOUT_I_4  0  //"1" = GPIO84 Output Data "High"           / "0" = GPIO84 Output Data "Low"
#define  SET_PORT8_BIT4       SETBIT4(P8DOUT)
#define  CLR_PORT8_BIT4       CLRBIT4(P8DOUT)
#define  CPL_PORT8_BIT4       CPLBIT4(P8DOUT)
#endif
#define  P8PUE_I_4   0  //"1" = GPIO84 Pull Up/Dn Enable            / "0" = GPIO84 Pull Up/Dn Disable
#define  P8PUD_I_4   0  //"1" = GPIO84 Pull Down                    / "0" = GPIO84 Pull Up
#define  P8VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO84 Wake up from Deep Sleep Support  */
#define  P8WE_4      0  //"1" = GPIO84 wake up from sleep enable    / "0" = GPIO84 wake up from sleep disable
#define  P8WA_4      0  //"1" = GPIO84 enable any edge wake up      / "0" = GPIO84 disable any edge wake up 
#define  P8WP_4      0  //"1" = GPIO84 wake up when falling edge    / "0" = GPIO84 wake up when rising edge 
#define  P84_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO85 Define    GSR_INT1# (DEVALT8)                                                           *//
//******************************************************************************************************//
#define  xP8OD_I_5   0  //"1" = GPIO85 The output pin is Open_Drain / "0" = GPIO85 The output pin is Push_Pull
#if xP8OD_I_5
#define  P8DIR_I_5   0  //"0" = GPIO85 Output Data "High"           / "1" = GPIO85 Output Data "Low"
#define  P8DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT8_BIT5       CLRBIT5(P8DIR)
#define  CLR_PORT8_BIT5       SETBIT5(P8DIR)
#define  CPL_PORT8_BIT5       CPLBIT5(P8DIR)
#else
#define  P8DIR_I_5   0  //"1" = GPIO85 is Output Pin                / "0" = GPIO85 is Input Pin
#define  P8DOUT_I_5  0  //"1" = GPIO85 Output Data "High"           / "0" = GPIO85 Output Data "Low"
#define  SET_PORT8_BIT5       SETBIT5(P8DOUT)
#define  CLR_PORT8_BIT5       CLRBIT5(P8DOUT)
#define  CPL_PORT8_BIT5       CPLBIT5(P8DOUT)
#endif
#define  P8PUE_I_5   0  //"1" = GPIO85 Pull Up/Dn Enable            / "0" = GPIO85 Pull Up/Dn Disable
#define  P8PUD_I_5   0  //"1" = GPIO85 Pull Down                    / "0" = GPIO85 Pull Up
#define  P8VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO85 Wake up from Deep Sleep Support  */
#define  P8WE_5      1  //"1" = GPIO85 wake up from sleep enable    / "0" = GPIO85 wake up from sleep disable
#define  P8WA_5      0  //"1" = GPIO85 enable any edge wake up      / "0" = GPIO85 disable any edge wake up 
#define  P8WP_5      1  //"1" = GPIO85 wake up when falling edge    / "0" = GPIO85 wake up when rising edge 
#define  P85_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO86 Define    TS_RST# (DEVALT8)                                                          *//
//******************************************************************************************************//
#define  xP8OD_I_6   0  //"1" = GPIO86 The output pin is Open_Drain / "0" = GPIO86 The output pin is Push_Pull
#if xP8OD_I_6
#define  P8DIR_I_6   0  //"0" = GPIO86 Output Data "High"           / "1" = GPIO86 Output Data "Low"
#define  P8DOUT_I_6  0  //Open Drain Mode this bit always set to "0".            
#define  SET_PORT8_BIT6       CLRBIT6(P8DIR)
#define  CLR_PORT8_BIT6       SETBIT6(P8DIR)
#define  CPL_PORT8_BIT6       CPLBIT6(P8DIR)
#else
#define  P8DIR_I_6   1  //"1" = GPIO86 is Output Pin                / "0" = GPIO86 is Input Pin
#define  P8DOUT_I_6  0  //"1" = GPIO86 Output Data "High"           / "0" = GPIO86 Output Data "Low"
#define  SET_PORT8_BIT6       SETBIT6(P8DOUT)
#define  CLR_PORT8_BIT6       CLRBIT6(P8DOUT)
#define  CPL_PORT8_BIT6       CPLBIT6(P8DOUT)
#endif
#define  P8PUE_I_6   0  //"1" = GPIO86 Pull Up/Dn Enable            / "0" = GPIO86 Pull Up/Dn Disable
#define  P8PUD_I_6   0  //"1" = GPIO86 Pull Down                    / "0" = GPIO86 Pull Up
#define  P8VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO86 Wake up from Deep Sleep Support  */
#define  P8WE_6      0  //"1" = GPIO86 wake up from sleep enable    / "0" = GPIO86 wake up from sleep disable
#define  P8WA_6      0  //"1" = GPIO86 enable any edge wake up      / "0" = GPIO86 disable any edge wake up 
#define  P8WP_6      0  //"1" = GPIO86 wake up when falling edge    / "0" = GPIO86 wake up when rising edge 
#define  P86_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO87 Define    USB_CHAR_CT1 (DEVALT1,A)                                         *//
//******************************************************************************************************//
#define  xP8OD_I_7   0  //"1" = GPIO87 The output pin is Open_Drain / "0" = GPIO87 The output pin is Push_Pull
#if xP8OD_I_7
#define  P8DIR_I_7   0  //"0" = GPIO87 Output Data "High"           / "1" = GPIO87 Output Data "Low"
#define  P8DOUT_I_7  0  //Open Drain Mode this bit always set to "0".            
#define  SET_PORT8_BIT7       CLRBIT7(P8DIR)
#define  CLR_PORT8_BIT7       SETBIT7(P8DIR)
#define  CPL_PORT8_BIT7       CPLBIT7(P8DIR)
#else
#define  P8DIR_I_7   1  //"1" = GPIO87 is Output Pin                / "0" = GPIO87 is Input Pin
#define  P8DOUT_I_7  0  //"1" = GPIO87 Output Data "High"           / "0" = GPIO87 Output Data "Low"
#define  SET_PORT8_BIT7       SETBIT7(P8DOUT)
#define  CLR_PORT8_BIT7       CLRBIT7(P8DOUT)
#define  CPL_PORT8_BIT7       CPLBIT7(P8DOUT)
#endif
#define  P8PUE_I_7   0  //"1" = GPIO87 Pull Up/Dn Enable            / "0" = GPIO87 Pull Up/Dn Disable
#define  P8PUD_I_7   0  //"1" = GPIO87 Pull Down                    / "0" = GPIO87 Pull Up
#define  P8VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO87 Wake up from Deep Sleep Support  */
#define  P8WE_7      0  //"1" = GPIO87 wake up from sleep enable    / "0" = GPIO87 wake up from sleep disable
#define  P8WA_7      0  //"1" = GPIO87 enable any edge wake up      / "0" = GPIO87 disable any edge wake up
#define  P8WP_7      0  //"1" = GPIO87 wake up when falling edge    / "0" = GPIO87 wake up when rising edge
#define  P87_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO90 Define    PWR_CHG_IMON (AD_IA)(DEVALT6)                                                                         *//
//******************************************************************************************************//
#define  xP9OD_I_0   0  //"1" = GPIO90 The output pin is Open_Drain / "0" = GPIO90 The output pin is Push_Pull
#if xP9OD_I_0
#define  P9DIR_I_0   0  //"0" = GPIO90 Output Data "High"           / "1" = GPIO90 Output Data "Low"
#define  P9DOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT0       CLRBIT0(P9DIR)
#define  CLR_PORT9_BIT0       SETBIT0(P9DIR)
#define  CPL_PORT9_BIT0       CPLBIT0(P9DIR)
#else
#define  P9DIR_I_0   0  //"1" = GPIO90 is Output Pin                / "0" = GPIO90 is Input Pin
#define  P9DOUT_I_0  0  //"1" = GPIO90 Output Data "High"           / "0" = GPIO90 Output Data "Low"
#define  SET_PORT9_BIT0       SETBIT0(P9DOUT)
#define  CLR_PORT9_BIT0       CLRBIT0(P9DOUT)
#define  CPL_PORT9_BIT0       CPLBIT0(P9DOUT)
#endif
#define  P9PUE_I_0   0  //"1" = GPIO90 Pull Up/Dn Enable            / "0" = GPIO90 Pull Up/Dn Disable
#define  P9PUD_I_0   0  //"1" = GPIO90 Pull Down                    / "0" = GPIO90 Pull Up
#define  P9VDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO90 Wake up from Deep Sleep Support  */
#define  P9WE_0      0  //"1" = GPIO90 wake up from sleep enable    / "0" = GPIO90 wake up from sleep disable
#define  P9WA_0      0  //"1" = GPIO90 enable any edge wake up      / "0" = GPIO90 disable any edge wake up
#define  P9WP_0      0  //"1" = GPIO90 wake up when falling edge    / "0" = GPIO90 wake up when rising edge
#define  P90_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO91 Define    PCB_VER_AD(DEVALT6)                                                                    *//
//******************************************************************************************************//
#define  xP90D_I_1   0  //"1" = GPIO91 The output pin is Open_Drain / "0" = GPIO91 The output pin is Push_Pull
#if xP90D_I_1
#define  P9DIR_I_1   0  //"0" = GPIO91 Output Data "High"           / "1" = GPIO91 Output Data "Low"
#define  P9DOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT1       CLRBIT1(P9DIR)
#define  CLR_PORT9_BIT1       SETBIT1(P9DIR)
#define  CPL_PORT9_BIT1       CPLBIT1(P9DIR)
#else
#define  P9DIR_I_1   0  //"1" = GPIO91 is Output Pin                / "0" = GPIO91 is Input Pin
#define  P9DOUT_I_1  0  //"1" = GPIO91 Output Data "High"           / "0" = GPIO91 Output Data "Low"
#define  SET_PORT9_BIT1       SETBIT1(P9DOUT)
#define  CLR_PORT9_BIT1       CLRBIT1(P9DOUT)
#define  CPL_PORT9_BIT1       CPLBIT1(P9DOUT)
#endif
#define  P9PUE_I_1   0  //"1" = GPIO91 Pull Up/Dn Enable            / "0" = GPIO91 Pull Up/Dn Disable
#define  P9PUD_I_1   0  //"1" = GPIO91 Pull Down                    / "0" = GPIO91 Pull Up
#define  P9VDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO91 Wake up from Deep Sleep Support  */
#define  P9WE_1      0  //"1" = GPIO91 wake up from sleep enable    / "0" = GPIO91 wake up from sleep disable
#define  P9WA_1      0  //"1" = GPIO91 enable any edge wake up      / "0" = GPIO91 disable any edge wake up
#define  P9WP_1      0  //"1" = GPIO91 wake up when falling edge    / "0" = GPIO91 wake up when rising edge
#define  P91_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO92 Define    ADT_TYPE_AD(DEVALT6)                                                                      *//
//******************************************************************************************************//
#define  xP9OD_I_2   0  //"1" = GPIO92 The output pin is Open_Drain / "0" = GPIO92 The output pin is Push_Pull
#if xP9OD_I_2
#define  P9DIR_I_2   0  //"0" = GPIO92 Output Data "High"           / "1" = GPIO92 Output Data "Low"
#define  P9DOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT2       CLRBIT2(P9DIR)
#define  CLR_PORT9_BIT2       SETBIT2(P9DIR)
#define  CPL_PORT9_BIT2       CPLBIT2(P9DIR)
#else
#define  P9DIR_I_2   0  //"1" = GPIO92 is Output Pin                / "0" = GPIO92 is Input Pin
#define  P9DOUT_I_2  0  //"1" = GPIO92 Output Data "High"           / "0" = GPIO92 Output Data "Low"
#define  SET_PORT9_BIT2       SETBIT2(P9DOUT)
#define  CLR_PORT9_BIT2       CLRBIT2(P9DOUT)
#define  CPL_PORT9_BIT2       CPLBIT2(P9DOUT)
#endif
#define  P9PUE_I_2   0  //"1" = GPIO92 Pull Up/Dn Enable            / "0" = GPIO92 Pull Up/Dn Disable
#define  P9PUD_I_2   0  //"1" = GPIO92 Pull Down                    / "0" = GPIO92 Pull Up
#define  P9VDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO92 Wake up from Deep Sleep Support  */
#define  P9WE_2      0  //"1" = GPIO92 wake up from sleep enable    / "0" = GPIO92 wake up from sleep disable
#define  P9WA_2      0  //"1" = GPIO92 enable any edge wake up      / "0" = GPIO92 disable any edge wake up
#define  P9WP_2      0  //"1" = GPIO92 wake up when falling edge    / "0" = GPIO92 wake up when rising edge
#define  P92_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO93 Define    EC_TP_IN# (DEVALT6)                                                                   *//
//******************************************************************************************************//
#define  xP9OD_I_3   0  //"1" = GPIO93 The output pin is Open_Drain / "0" = GPIO93 The output pin is Push_Pull
#if xP9OD_I_3
#define  P9DIR_I_3   0  //"0" = GPIO93 Output Data "High"           / "1" = GPIO93 Output Data "Low"
#define  P9DOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT3       CLRBIT3(P9DIR)
#define  CLR_PORT9_BIT3       SETBIT3(P9DIR)
#define  CPL_PORT9_BIT3       CPLBIT3(P9DIR)
#else
#define  P9DIR_I_3   0  //"1" = GPIO93 is Output Pin                / "0" = GPIO93 is Input Pin
#define  P9DOUT_I_3  0  //"1" = GPIO93 Output Data "High"           / "0" = GPIO93 Output Data "Low"
#define  SET_PORT9_BIT3       SETBIT3(P9DOUT)
#define  CLR_PORT9_BIT3       CLRBIT3(P9DOUT)
#define  CPL_PORT9_BIT3       CPLBIT3(P9DOUT)
#endif
#define  P9PUE_I_3   0  //"1" = GPIO93 Pull Up/Dn Enable            / "0" = GPIO93 Pull Up/Dn Disable
#define  P9PUD_I_3   0  //"1" = GPIO93 Pull Down                    / "0" = GPIO93 Pull Up
#define  P9VDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO93 Wake up from Deep Sleep Support  */
#define  P9WE_3      0  //"1" = GPIO93 wake up from sleep enable    / "0" = GPIO93 wake up from sleep disable
#define  P9WA_3      0  //"1" = GPIO93 enable any edge wake up      / "0" = GPIO93 disable any edge wake up
#define  P9WP_3      0  //"1" = GPIO93 wake up when falling edge    / "0" = GPIO93 wake up when rising edge
#define  P93_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO94 Define    AMP_MUTE# (DEVALT4)                                                           *//
//******************************************************************************************************//
#define  xP9OD_I_4   0  //"1" = GPIO94 The output pin is Open_Drain / "0" = GPIO94 The output pin is Push_Pull
#if xP9OD_I_4
#define  P9DIR_I_4   0  //"0" = GPIO94 Output Data "High"           / "1" = GPIO94 Output Data "Low"
#define  P9DOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT4       CLRBIT4(P9DIR)
#define  CLR_PORT9_BIT4       SETBIT4(P9DIR)
#define  CPL_PORT9_BIT4       CPLBIT4(P9DIR)
#else
#define  P9DIR_I_4   1  //"1" = GPIO94 is Output Pin                / "0" = GPIO94 is Input Pin
#define  P9DOUT_I_4  0  //"1" = GPIO94 Output Data "High"           / "0" = GPIO94 Output Data "Low"
#define  SET_PORT9_BIT4       SETBIT4(P9DOUT)
#define  CLR_PORT9_BIT4       CLRBIT4(P9DOUT)
#define  CPL_PORT9_BIT4       CPLBIT4(P9DOUT)
#endif
#define  P9PUE_I_4   0  //"1" = GPIO94 Pull Up/Dn Enable            / "0" = GPIO94 Pull Up/Dn Disable
#define  P9PUD_I_4   0  //"1" = GPIO94 Pull Down                    / "0" = GPIO94 Pull Up
#define  P9VDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO94 Wake up from Deep Sleep Support  */
#define  P9WE_4      0  //"1" = GPIO94 wake up from sleep enable    / "0" = GPIO94 wake up from sleep disable
#define  P9WA_4      0  //"1" = GPIO94 enable any edge wake up      / "0" = GPIO94 disable any edge wake up
#define  P9WP_4      0  //"1" = GPIO94 wake up when falling edge    / "0" = GPIO94 wake up when rising edge
#define  P94_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO95 Define    AD_OFF (DEVALT4)                                                          *//
//******************************************************************************************************//
#define  xP9OD_I_5   0  //"1" = GPIO95 The output pin is Open_Drain / "0" = GPIO95 The output pin is Push_Pull
#if xP9OD_I_5
#define  P9DIR_I_5   0  //"0" = GPIO95 Output Data "High"           / "1" = GPIO95 Output Data "Low"
#define  P9DOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT5       CLRBIT5(P9DIR)
#define  CLR_PORT9_BIT5       SETBIT5(P9DIR)
#define  CPL_PORT9_BIT5       CPLBIT5(P9DIR)
#else
#define  P9DIR_I_5   1  //"1" = GPIO95 is Output Pin                / "0" = GPIO95 is Input Pin
#define  P9DOUT_I_5  0  //"1" = GPIO95 Output Data "High"           / "0" = GPIO95 Output Data "Low"
#define  SET_PORT9_BIT5       SETBIT5(P9DOUT)
#define  CLR_PORT9_BIT5       CLRBIT5(P9DOUT)
#define  CPL_PORT9_BIT5       CPLBIT5(P9DOUT)
#endif
#define  P9PUE_I_5   0  //"1" = GPIO95 Pull Up/Dn Enable            / "0" = GPIO95 Pull Up/Dn Disable
#define  P9PUD_I_5   0  //"1" = GPIO95 Pull Down                    / "0" = GPIO95 Pull Up
#define  P9VDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO95 Wake up from Deep Sleep Support  */
#define  P9WE_5      0  //"1" = GPIO95 wake up from sleep enable    / "0" = GPIO95 wake up from sleep disable
#define  P9WA_5      0  //"1" = GPIO95 enable any edge wake up      / "0" = GPIO95 disable any edge wake up
#define  P9WP_5      0  //"1" = GPIO95 wake up when falling edge    / "0" = GPIO95 wake up when rising edge
#define  P95_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO96 Define    Reserved (DEVALT4)                                                                  *//
//******************************************************************************************************//
#define  xP9OD_I_6   0  //"1" = GPIO96 The output pin is Open_Drain / "0" = GPIO96 The output pin is Push_Pull
#if xP9OD_I_6
#define  P9DIR_I_6   0  //"0" = GPIO96 Output Data "High"           / "1" = GPIO96 Output Data "Low"
#define  P9DOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT6       CLRBIT6(P9DIR)
#define  CLR_PORT9_BIT6       SETBIT6(P9DIR)
#define  CPL_PORT9_BIT6       CPLBIT6(P9DIR)
#else
#define  P9DIR_I_6   0  //"1" = GPIO96 is Output Pin                / "0" = GPIO96 is Input Pin
#define  P9DOUT_I_6  0  //"1" = GPIO96 Output Data "High"           / "0" = GPIO96 Output Data "Low"
#define  SET_PORT9_BIT6       SETBIT6(P9DOUT)
#define  CLR_PORT9_BIT6       CLRBIT6(P9DOUT)
#define  CPL_PORT9_BIT6       CPLBIT6(P9DOUT)
#endif
#define  P9PUE_I_6   0  //"1" = GPIO96 Pull Up/Dn Enable            / "0" = GPIO96 Pull Up/Dn Disable
#define  P9PUD_I_6   0  //"1" = GPIO96 Pull Down                    / "0" = GPIO96 Pull Up
#define  P9VDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO96 Wake up from Deep Sleep Support  */
#define  P9WE_6      0  //"1" = GPIO96 wake up from sleep enable    / "0" = GPIO96 wake up from sleep disable
#define  P9WA_6      0  //"1" = GPIO96 enable any edge wake up      / "0" = GPIO96 disable any edge wake up
#define  P9WP_6      0  //"1" = GPIO96 wake up when falling edge    / "0" = GPIO96 wake up when rising edge
#define  P96_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIO97 Define    ALL_SYS_PWRGD (DEVALT4)                                                       *//
//******************************************************************************************************//
#define  xP9OD_I_7   0  //"1" = GPIO97 The output pin is Open_Drain / "0" = GPIO97 The output pin is Push_Pull
#if xP9OD_I_7
#define  P9DIR_I_7   0  //"0" = GPIO97 Output Data "High"           / "1" = GPIO97 Output Data "Low"
#define  P9DOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORT9_BIT7       CLRBIT7(P9DIR)
#define  CLR_PORT9_BIT7       SETBIT7(P9DIR)
#define  CPL_PORT9_BIT7       CPLBIT7(P9DIR)
#else
#define  P9DIR_I_7   0  //"1" = GPIO97 is Output Pin                / "0" = GPIO97 is Input Pin
#define  P9DOUT_I_7  0  //"1" = GPIO97 Output Data "High"           / "0" = GPIO97 Output Data "Low"
#define  SET_PORT9_BIT7       SETBIT7(P9DOUT)
#define  CLR_PORT9_BIT7       CLRBIT7(P9DOUT)
#define  CPL_PORT9_BIT7       CPLBIT7(P9DOUT)
#endif
#define  P9PUE_I_7   0  //"1" = GPIO97 Pull Up/Dn Enable            / "0" = GPIO97 Pull Up/Dn Disable
#define  P9PUD_I_7   0  //"1" = GPIO97 Pull Down                    / "0" = GPIO97 Pull Up
#define  P9VDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIO97 Wake up from Deep Sleep Support  */
#define  P9WE_7      0  //"1" = GPIO97 wake up from sleep enable    / "0" = GPIO97 wake up from sleep disable
#define  P9WA_7      0  //"1" = GPIO97 enable any edge wake up      / "0" = GPIO97 disable any edge wake up
#define  P9WP_7      0  //"1" = GPIO97 wake up when falling edge    / "0" = GPIO97 wake up when rising edge
#define  P97_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOA0 Define (DEVALT9)   KBSIN0                                                           (54)*//
//******************************************************************************************************//
#define  xPAOD_I_0   0  //"1" = GPIOA0 The output pin is Open_Drain / "0" = GPIOA0 The output pin is Push_Pull
#if xPAOD_I_0
#define  PADIR_I_0   0  //"0" = GPIOA0 Output Data "High"           / "1" = GPIOA0 Output Data "Low"
#define  PADOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT0       CLRBIT0(PADIR)
#define  CLR_PORTA_BIT0       SETBIT0(PADIR)
#define  CPL_PORTA_BIT0       CPLBIT0(PADIR)
#else
#define  PADIR_I_0   0  //"1" = GPIOA0 is Output Pin                / "0" = GPIOA0 is Input Pin
#define  PADOUT_I_0  0  //"1" = GPIOA0 Output Data "High"           / "0" = GPIOA0 Output Data "Low"
#define  SET_PORTA_BIT0       SETBIT0(PADOUT)
#define  CLR_PORTA_BIT0       CLRBIT0(PADOUT)
#define  CPL_PORTA_BIT0       CPLBIT0(PADOUT)
#endif
#define  PAPUE_I_0   0  //"1" = GPIOA0 Pull Up/Dn Enable            / "0" = GPIOA0 Pull Up/Dn Disable
#define  PAPUD_I_0   0  //"1" = GPIOA0 Pull Down                    / "0" = GPIOA0 Pull Up
#define  PAVDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA0 Wake up from Deep Sleep Support  */
#define  PAWE_0      1  //"1" = GPIOA0 wake up from sleep enable    / "0" = GPIOA0 wake up from sleep disable
#define  PAWA_0      0  //"1" = GPIOA0 enable any edge wake up      / "0" = GPIOA0 disable any edge wake up
#define  PAWP_0      1  //"1" = GPIOA0 wake up when falling edge    / "0" = GPIOA0 wake up when rising edge
#define  PA0_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 

//******************************************************************************************************//
//*     GPIOA1 Define (DEVALT9)   KBSIN1                                                           (55)*//
//******************************************************************************************************//
#define  xPAOD_I_1   0  //"1" = GPIOA1 The output pin is Open_Drain / "0" = GPIOA1 The output pin is Push_Pull
#if xPAOD_I_1
#define  PADIR_I_1   0  //"0" = GPIOA1 Output Data "High"           / "1" = GPIOA1 Output Data "Low"
#define  PADOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT1       CLRBIT1(PADIR)
#define  CLR_PORTA_BIT1       SETBIT1(PADIR)
#define  CPL_PORTA_BIT1       CPLBIT1(PADIR)
#else
#define  PADIR_I_1   0  //"1" = GPIOA1 is Output Pin                / "0" = GPIOA1 is Input Pin
#define  PADOUT_I_1  0  //"1" = GPIOA1 Output Data "High"           / "0" = GPIOA1 Output Data "Low"
#define  SET_PORTA_BIT1       SETBIT1(PADOUT)
#define  CLR_PORTA_BIT1       CLRBIT1(PADOUT)
#define  CPL_PORTA_BIT1       CPLBIT1(PADOUT)
#endif
#define  PAPUE_I_1   0  //"1" = GPIOA1 Pull Up/Dn Enable            / "0" = GPIOA1 Pull Up/Dn Disable
#define  PAPUD_I_1   0  //"1" = GPIOA1 Pull Down                    / "0" = GPIOA1 Pull Up
#define  PAVDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA1 Wake up from Deep Sleep Support  */
#define  PAWE_1      0  //"1" = GPIOA1 wake up from sleep enable    / "0" = GPIOA1 wake up from sleep disable
#define  PAWA_1      0  //"1" = GPIOA1 enable any edge wake up      / "0" = GPIOA1 disable any edge wake up
#define  PAWP_1      0  //"1" = GPIOA1 wake up when falling edge    / "0" = GPIOA1 wake up when rising edge
#define  PA1_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 

//******************************************************************************************************//
//*     GPIOA2 Define (DEVALT9)   KBSIN2                                                           (56)*//
//******************************************************************************************************//
#define  xPAOD_I_2   0  //"1" = GPIOA2 The output pin is Open_Drain / "0" = GPIOA2 The output pin is Push_Pull
#if xPAOD_I_2
#define  PADIR_I_2   0  //"0" = GPIOA2 Output Data "High"           / "1" = GPIOA2 Output Data "Low"
#define  PADOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT2       CLRBIT2(PADIR)
#define  CLR_PORTA_BIT2       SETBIT2(PADIR)
#define  CPL_PORTA_BIT2       CPLBIT2(PADIR)
#else
#define  PADIR_I_2   0  //"1" = GPIOA2 is Output Pin                / "0" = GPIOA2 is Input Pin
#define  PADOUT_I_2  0  //"1" = GPIOA2 Output Data "High"           / "0" = GPIOA2 Output Data "Low"
#define  SET_PORTA_BIT2       SETBIT2(PADOUT)
#define  CLR_PORTA_BIT2       CLRBIT2(PADOUT)
#define  CPL_PORTA_BIT2       CPLBIT2(PADOUT)
#endif
#define  PAPUE_I_2   0  //"1" = GPIOA2 Pull Up/Dn Enable            / "0" = GPIOA2 Pull Up/Dn Disable
#define  PAPUD_I_2   0  //"1" = GPIOA2 Pull Down                    / "0" = GPIOA2 Pull Up
#define  PAVDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA2 Wake up from Deep Sleep Support  */
#define  PAWE_2      0  //"1" = GPIOA2 wake up from sleep enable    / "0" = GPIOA2 wake up from sleep disable
#define  PAWA_2      0  //"1" = GPIOA2 enable any edge wake up      / "0" = GPIOA2 disable any edge wake up
#define  PAWP_2      0  //"1" = GPIOA2 wake up when falling edge    / "0" = GPIOA2 wake up when rising edge
#define  PA2_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 

//******************************************************************************************************//
//*     GPIOA3 Define (DEVALT9)   KBSIN3                                                           (57)*//
//******************************************************************************************************//
#define  xPAOD_I_3   0  //"1" = GPIOA3 The output pin is Open_Drain / "0" = GPIOA3 The output pin is Push_Pull
#if xPAOD_I_3
#define  PADIR_I_3   0  //"0" = GPIOA3 Output Data "High"           / "1" = GPIOA3 Output Data "Low"
#define  PADOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT3       CLRBIT3(PADIR)
#define  CLR_PORTA_BIT3       SETBIT3(PADIR)
#define  CPL_PORTA_BIT3       CPLBIT3(PADIR)
#else
#define  PADIR_I_3   0  //"1" = GPIOA3 is Output Pin                / "0" = GPIOA3 is Input Pin
#define  PADOUT_I_3  0  //"1" = GPIOA3 Output Data "High"           / "0" = GPIOA3 Output Data "Low"
#define  SET_PORTA_BIT3       SETBIT3(PADOUT)
#define  CLR_PORTA_BIT3       CLRBIT3(PADOUT)
#define  CPL_PORTA_BIT3       CPLBIT3(PADOUT)
#endif
#define  PAPUE_I_3   0  //"1" = GPIOA3 Pull Up/Dn Enable            / "0" = GPIOA3 Pull Up/Dn Disable
#define  PAPUD_I_3   0  //"1" = GPIOA3 Pull Down                    / "0" = GPIOA3 Pull Up
#define  PAVDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA3 Wake up from Deep Sleep Support  */
#define  PAWE_3      0  //"1" = GPIOA3 wake up from sleep enable    / "0" = GPIOA3 wake up from sleep disable
#define  PAWA_3      0  //"1" = GPIOA3 enable any edge wake up      / "0" = GPIOA3 disable any edge wake up
#define  PAWP_3      0  //"1" = GPIOA3 wake up when falling edge    / "0" = GPIOA3 wake up when rising edge
#define  PA3_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 

//******************************************************************************************************//
//*     GPIOA4 Define (DEVALT9)   KBSIN4                                                           (58)*//
//******************************************************************************************************//
#define  xPAOD_I_4   0  //"1" = GPIOA4 The output pin is Open_Drain / "0" = GPIOA4 The output pin is Push_Pull
#if xPAOD_I_4
#define  PADIR_I_4   0  //"0" = GPIOA4 Output Data "High"           / "1" = GPIOA4 Output Data "Low"
#define  PADOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT4       CLRBIT4(PADIR)
#define  CLR_PORTA_BIT4       SETBIT4(PADIR)
#define  CPL_PORTA_BIT4       CPLBIT4(PADIR)
#else
#define  PADIR_I_4   0  //"1" = GPIOA4 is Output Pin                / "0" = GPIOA4 is Input Pin
#define  PADOUT_I_4  0  //"1" = GPIOA4 Output Data "High"           / "0" = GPIOA4 Output Data "Low"
#define  SET_PORTA_BIT4       SETBIT4(PADOUT)
#define  CLR_PORTA_BIT4       CLRBIT4(PADOUT)
#define  CPL_PORTA_BIT4       CPLBIT4(PADOUT)
#endif
#define  PAPUE_I_4   0  //"1" = GPIOA4 Pull Up/Dn Enable            / "0" = GPIOA4 Pull Up/Dn Disable
#define  PAPUD_I_4   0  //"1" = GPIOA4 Pull Down                    / "0" = GPIOA4 Pull Up
#define  PAVDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA4 Wake up from Deep Sleep Support  */
#define  PAWE_4      0  //"1" = GPIOA4 wake up from sleep enable    / "0" = GPIOA4 wake up from sleep disable
#define  PAWA_4      0  //"1" = GPIOA4 enable any edge wake up      / "0" = GPIOA4 disable any edge wake up
#define  PAWP_4      0  //"1" = GPIOA4 wake up when falling edge    / "0" = GPIOA4 wake up when rising edge
#define  PA4_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 

//******************************************************************************************************//
//*     GPIOA5 Define (DEVALT9)   KBSIN5                                                           (59)*//
//******************************************************************************************************//
#define  xPAOD_I_5   0  //"1" = GPIOA5 The output pin is Open_Drain / "0" = GPIOA5 The output pin is Push_Pull
#if xPAOD_I_5
#define  PADIR_I_5   0  //"0" = GPIOA5 Output Data "High"           / "1" = GPIOA5 Output Data "Low"
#define  PADOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT5       CLRBIT5(PADIR)
#define  CLR_PORTA_BIT5       SETBIT5(PADIR)
#define  CPL_PORTA_BIT5       CPLBIT5(PADIR)
#else
#define  PADIR_I_5   0  //"1" = GPIOA5 is Output Pin                / "0" = GPIOA5 is Input Pin
#define  PADOUT_I_5  0  //"1" = GPIOA5 Output Data "High"           / "0" = GPIOA5 Output Data "Low"
#define  SET_PORTA_BIT5       SETBIT5(PADOUT)
#define  CLR_PORTA_BIT5       CLRBIT5(PADOUT)
#define  CPL_PORTA_BIT5       CPLBIT5(PADOUT)
#endif
#define  PAPUE_I_5   0  //"1" = GPIOA5 Pull Up/Dn Enable            / "0" = GPIOA5 Pull Up/Dn Disable
#define  PAPUD_I_5   0  //"1" = GPIOA5 Pull Down                    / "0" = GPIOA5 Pull Up
#define  PAVDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA5 Wake up from Deep Sleep Support  */
#define  PAWE_5      0  //"1" = GPIOA5 wake up from sleep enable    / "0" = GPIOA5 wake up from sleep disable
#define  PAWA_5      0  //"1" = GPIOA5 enable any edge wake up      / "0" = GPIOA5 disable any edge wake up
#define  PAWP_5      0  //"1" = GPIOA5 wake up when falling edge    / "0" = GPIOA5 wake up when rising edge
#define  PA5_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash

//******************************************************************************************************//
//*     GPIOA6 Define (DEVALT9)   KBSIN6                                                           (60)*//
//******************************************************************************************************//
#define  xPAOD_I_6   0  //"1" = GPIOA6 The output pin is Open_Drain / "0" = GPIOA6 The output pin is Push_Pull
#if xPAOD_I_6
#define  PADIR_I_6   0  //"0" = GPIOA6 Output Data "High"           / "1" = GPIOA6 Output Data "Low"
#define  PADOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT6       CLRBIT6(PADIR)
#define  CLR_PORTA_BIT6       SETBIT6(PADIR)
#define  CPL_PORTA_BIT6       CPLBIT6(PADIR)
#else
#define  PADIR_I_6   0  //"1" = GPIOA6 is Output Pin                / "0" = GPIOA6 is Input Pin
#define  PADOUT_I_6  0  //"1" = GPIOA6 Output Data "High"           / "0" = GPIOA6 Output Data "Low"
#define  SET_PORTA_BIT6       SETBIT6(PADOUT)
#define  CLR_PORTA_BIT6       CLRBIT6(PADOUT)
#define  CPL_PORTA_BIT6       CPLBIT6(PADOUT)
#endif
#define  PAPUE_I_6   0  //"1" = GPIOA6 Pull Up/Dn Enable            / "0" = GPIOA6 Pull Up/Dn Disable
#define  PAPUD_I_6   0  //"1" = GPIOA6 Pull Down                    / "0" = GPIOA6 Pull Up
#define  PAVDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA6 Wake up from Deep Sleep Support  */
#define  PAWE_6      0  //"1" = GPIOA6 wake up from sleep enable    / "0" = GPIOA6 wake up from sleep disable
#define  PAWA_6      0  //"1" = GPIOA6 enable any edge wake up      / "0" = GPIOA6 disable any edge wake up
#define  PAWP_6      0  //"1" = GPIOA6 wake up when falling edge    / "0" = GPIOA6 wake up when rising edge
#define  PA6_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash

//******************************************************************************************************//
//*     GPIOA7 Define (DEVALT9)   KBSIN7                                                           (61)*//
//******************************************************************************************************//
#define  xPAOD_I_7   0  //"1" = GPIOA7 The output pin is Open_Drain / "0" = GPIOA7 The output pin is Push_Pull
#if xPAOD_I_7
#define  PADIR_I_7   0  //"0" = GPIOA7 Output Data "High"           / "1" = GPIOA7 Output Data "Low"
#define  PADOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTA_BIT7       CLRBIT7(PADIR)
#define  CLR_PORTA_BIT7       SETBIT7(PADIR)
#define  CPL_PORTA_BIT7       CPLBIT7(PADIR)
#else
#define  PADIR_I_7   0  //"1" = GPIOA7 is Output Pin                / "0" = GPIOA7 is Input Pin
#define  PADOUT_I_7  0  //"1" = GPIOA7 Output Data "High"           / "0" = GPIOA7 Output Data "Low"
#define  SET_PORTA_BIT7       SETBIT7(PADOUT)
#define  CLR_PORTA_BIT7       CLRBIT7(PADOUT)
#define  CPL_PORTA_BIT7       CPLBIT7(PADOUT)
#endif
#define  PAPUE_I_7   0  //"1" = GPIOA7 Pull Up/Dn Enable            / "0" = GPIOA7 Pull Up/Dn Disable
#define  PAPUD_I_7   0  //"1" = GPIOA7 Pull Down                    / "0" = GPIOA7 Pull Up
#define  PAVDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
/*        GPIOA7 Wake up from Deep Sleep Support  */
#define  PAWE_7      0  //"1" = GPIOA7 wake up from sleep enable    / "0" = GPIOA7 wake up from sleep disable
#define  PAWA_7      0  //"1" = GPIOA7 enable any edge wake up      / "0" = GPIOA7 disable any edge wake up
#define  PAWP_7      0  //"1" = GPIOA7 wake up when falling edge    / "0" = GPIOA7 wake up when rising edge
#define  PA7_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash

//******************************************************************************************************//
//*     GPOB0 Define (DEVALT1,9)   KBSOUT0                                                         (53)*//
//******************************************************************************************************//
#define  xPBOD_I_0   0  //"1" = GPIOB0 The output pin is Open_Drain / "0" = GPIOB0 The output pin is Push_Pull
#if xPBOD_I_0
#define  PBDIR_I_0   0  //"0" = GPIOB0 Output Data "High"           / "1" = GPIOB0 Output Data "Low"
#define  PBDOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT0       CLRBIT0(PBDIR)
#define  CLR_PORTB_BIT0       SETBIT0(PBDIR)
#define  CPL_PORTB_BIT0       CPLBIT0(PBDIR)
#else
#define  PBDIR_I_0   0  //"1" = GPIOB0 is Output Pin                / "0" = GPIOB0 is Input Pin
#define  PBDOUT_I_0  0  //"1" = GPIOB0 Output Data "High"           / "0" = GPIOB0 Output Data "Low"
#define  SET_PORTB_BIT0       SETBIT0(PBDOUT)
#define  CLR_PORTB_BIT0       CLRBIT0(PBDOUT)
#define  CPL_PORTB_BIT0       CPLBIT0(PBDOUT)
#endif
#define  PBPUE_I_0   0  //"1" = GPIOB0 Pull Up/Dn Enable            / "0" = GPIOB0 Pull Up/Dn Disable
#define  PBPUD_I_0   0  //"1" = GPIOB0 Pull Down                    / "0" = GPIOB0 Pull Up
#define  PBVDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB0_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOB1 Define (DEVALT9)   KBSOUT1                                                          (52)*//
//******************************************************************************************************//
#define  xPB0D_I_1   0  //"1" = GPIOB1 The output pin is Open_Drain / "0" = GPIOB1 The output pin is Push_Pull
#if xPB0D_I_1
#define  PBDIR_I_1   0  //"0" = GPIOB1 Output Data "High"           / "1" = GPIOB1 Output Data "Low"
#define  PBDOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT1       CLRBIT1(PBDIR)
#define  CLR_PORTB_BIT1       SETBIT1(PBDIR)
#define  CPL_PORTB_BIT1       CPLBIT1(PBDIR)
#else
#define  PBDIR_I_1   0  //"1" = GPIOB1 is Output Pin                / "0" = GPIOB1 is Input Pin
#define  PBDOUT_I_1  0  //"1" = GPIOB1 Output Data "High"           / "0" = GPIOB1 Output Data "Low"
#define  SET_PORTB_BIT1       SETBIT1(PBDOUT)
#define  CLR_PORTB_BIT1       CLRBIT1(PBDOUT)
#define  CPL_PORTB_BIT1       CPLBIT1(PBDOUT)
#endif
#define  PBPUE_I_1   0  //"1" = GPIOB1 Pull Up/Dn Enable            / "0" = GPIOB1 Pull Up/Dn Disable
#define  PBPUD_I_1   0  //"1" = GPIOB1 Pull Down                    / "0" = GPIOB1 Pull Up
#define  PBVDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB1_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOB2 Define (DEVALT9)   KBSOUT2                                                         (51) *//
//******************************************************************************************************//
#define  xPBOD_I_2   0  //"1" = GPIOB2 The output pin is Open_Drain / "0" = GPIOB2 The output pin is Push_Pull
#if xPBOD_I_2
#define  PBDIR_I_2   0  //"0" = GPIOB2 Output Data "High"           / "1" = GPIOB2 Output Data "Low"
#define  PBDOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT2       CLRBIT2(PBDIR)
#define  CLR_PORTB_BIT2       SETBIT2(PBDIR)
#define  CPL_PORTB_BIT2       CPLBIT2(PBDIR)
#else
#define  PBDIR_I_2   0  //"1" = GPIOB2 is Output Pin                / "0" = GPIOB2 is Input Pin
#define  PBDOUT_I_2  0  //"1" = GPIOB2 Output Data "High"           / "0" = GPIOB2 Output Data "Low"
#define  SET_PORTB_BIT2       SETBIT2(PBDOUT)
#define  CLR_PORTB_BIT2       CLRBIT2(PBDOUT)
#define  CPL_PORTB_BIT2       CPLBIT2(PBDOUT)
#endif
#define  PBPUE_I_2   0  //"1" = GPIOB2 Pull Up/Dn Enable            / "0" = GPIOB2 Pull Up/Dn Disable
#define  PBPUD_I_2   0  //"1" = GPIOB2 Pull Down                    / "0" = GPIOB2 Pull Up
#define  PBVDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB2_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOB3 Define (DEVALT9)   KBSOUT3                                                          (50)*//
//******************************************************************************************************//
#define  xPBOD_I_3   0  //"1" = GPIOB3 The output pin is Open_Drain / "0" = GPIOB3 The output pin is Push_Pull
#if xPBOD_I_3
#define  PBDIR_I_3   0  //"0" = GPIOB3 Output Data "High"           / "1" = GPIOB3 Output Data "Low"
#define  PBDOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT3       CLRBIT3(PBDIR)
#define  CLR_PORTB_BIT3       SETBIT3(PBDIR)
#define  CPL_PORTB_BIT3       CPLBIT3(PBDIR)
#else
#define  PBDIR_I_3   0  //"1" = GPIOB3 is Output Pin                / "0" = GPIOB3 is Input Pin
#define  PBDOUT_I_3  0  //"1" = GPIOB3 Output Data "High"           / "0" = GPIOB3 Output Data "Low"
#define  SET_PORTB_BIT3       SETBIT3(PBDOUT)
#define  CLR_PORTB_BIT3       CLRBIT3(PBDOUT)
#define  CPL_PORTB_BIT3       CPLBIT3(PBDOUT)
#endif
#define  PBPUE_I_3   0  //"1" = GPIOB3 Pull Up/Dn Enable            / "0" = GPIOB3 Pull Up/Dn Disable
#define  PBPUD_I_3   0  //"1" = GPIOB3 Pull Down                    / "0" = GPIOB3 Pull Up
#define  PBVDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB3_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIB4 Define (DEVALT9)   KBSOUT4                                                           (49)*//
//******************************************************************************************************//
#define  xPBOD_I_4   0  //"1" = GPIOB4 The output pin is Open_Drain / "0" = GPIOB4 The output pin is Push_Pull
#if xPBOD_I_4
#define  PBDIR_I_4   0  //"0" = GPIOB4 Output Data "High"           / "1" = GPIOB4 Output Data "Low"
#define  PBDOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT4       CLRBIT4(PBDIR)
#define  CLR_PORTB_BIT4       SETBIT4(PBDIR)
#define  CPL_PORTB_BIT4       CPLBIT4(PBDIR)
#else
#define  PBDIR_I_4   0  //"1" = GPIOB4 is Output Pin                / "0" = GPIOB4 is Input Pin
#define  PBDOUT_I_4  0  //"1" = GPIOB4 Output Data "High"           / "0" = GPIOB4 Output Data "Low"
#define  SET_PORTB_BIT4       SETBIT4(PBDOUT)
#define  CLR_PORTB_BIT4       CLRBIT4(PBDOUT)
#define  CPL_PORTB_BIT4       CPLBIT4(PBDOUT)
#endif
#define  PBPUE_I_4   0  //"1" = GPIOB4 Pull Up/Dn Enable            / "0" = GPIOB4 Pull Up/Dn Disable
#define  PBPUD_I_4   0  //"1" = GPIOB4 Pull Down                    / "0" = GPIOB4 Pull Up
#define  PBVDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB4_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOB5 Define (DEVALT9)   KBSOUT5                                                          (48)*//
//******************************************************************************************************//
#define  xPBOD_I_5   0  //"1" = GPIOB5 The output pin is Open_Drain / "0" = GPIOB5 The output pin is Push_Pull
#if xPBOD_I_5
#define  PBDIR_I_5   0  //"0" = GPIOB5 Output Data "High"           / "1" = GPIOB5 Output Data "Low"
#define  PBDOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT5       CLRBIT5(PBDIR)
#define  CLR_PORTB_BIT5       SETBIT5(PBDIR)
#define  CPL_PORTB_BIT5       CPLBIT5(PBDIR)
#else
#define  PBDIR_I_5   0  //"1" = GPIOB5 is Output Pin                / "0" = GPIOB5 is Input Pin
#define  PBDOUT_I_5  0  //"1" = GPIOB5 Output Data "High"           / "0" = GPIOB5 Output Data "Low"
#define  SET_PORTB_BIT5       SETBIT5(PBDOUT)
#define  CLR_PORTB_BIT5       CLRBIT5(PBDOUT)
#define  CPL_PORTB_BIT5       CPLBIT5(PBDOUT)
#endif
#define  PBPUE_I_5   0  //"1" = GPIOB5 Pull Up/Dn Enable            / "0" = GPIOB5 Pull Up/Dn Disable
#define  PBPUD_I_5   0  //"1" = GPIOB5 Pull Down                    / "0" = GPIOB5 Pull Up
#define  PBVDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB5_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOB6 Define (DEVALT9)   KBSOUT6                                                          (47)*//
//******************************************************************************************************//
#define  xPBOD_I_6   0  //"1" = GPIOB6 The output pin is Open_Drain / "0" = GPIOB6 The output pin is Push_Pull
#if xPBOD_I_6
#define  PBDIR_I_6   0  //"0" = GPIOB6 Output Data "High"           / "1" = GPIOB6 Output Data "Low"
#define  PBDOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT6       CLRBIT6(PBDIR)
#define  CLR_PORTB_BIT6       SETBIT6(PBDIR)
#define  CPL_PORTB_BIT6       CPLBIT6(PBDIR)
#else
#define  PBDIR_I_6   0  //"1" = GPIOB6 is Output Pin                / "0" = GPIOB6 is Input Pin
#define  PBDOUT_I_6  0  //"1" = GPIOB6 Output Data "High"           / "0" = GPIOB6 Output Data "Low"
#define  SET_PORTB_BIT6       SETBIT6(PBDOUT)
#define  CLR_PORTB_BIT6       CLRBIT6(PBDOUT)
#define  CPL_PORTB_BIT6       CPLBIT6(PBDOUT)
#endif
#define  PBPUE_I_6   0  //"1" = GPIOB6 Pull Up/Dn Enable            / "0" = GPIOB6 Pull Up/Dn Disable
#define  PBPUD_I_6   0  //"1" = GPIOB6 Pull Down                    / "0" = GPIOB6 Pull Up
#define  PBVDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB6_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOB7 Define (DEVALT9)   KBSOUT7                                                         ( 43)*//
//******************************************************************************************************//
#define  xPBOD_I_7   0  //"1" = GPIOB7 The output pin is Open_Drain / "0" = GPIOB7 The output pin is Push_Pull
#if xPBOD_I_7
#define  PBDIR_I_7   0  //"0" = GPIOB7 Output Data "High"           / "1" = GPIOB7 Output Data "Low"
#define  PBDOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTB_BIT7       CLRBIT7(PBDIR)
#define  CLR_PORTB_BIT7       SETBIT7(PBDIR)
#define  CPL_PORTB_BIT7       CPLBIT7(PBDIR)
#else
#define  PBDIR_I_7   0  //"1" = GPIOB7 is Output Pin                / "0" = GPIOB7 is Input Pin
#define  PBDOUT_I_7  0  //"1" = GPIOB7 Output Data "High"           / "0" = GPIOB7 Output Data "Low"
#define  SET_PORTB_BIT7       SETBIT7(PBDOUT)
#define  CLR_PORTB_BIT7       CLRBIT7(PBDOUT)
#define  CPL_PORTB_BIT7       CPLBIT7(PBDOUT)
#endif
#define  PBPUE_I_7   0  //"1" = GPIOB7 Pull Up/Dn Enable            / "0" = GPIOB7 Pull Up/Dn Disable
#define  PBPUD_I_7   0  //"1" = GPIOB7 Pull Down                    / "0" = GPIOB7 Pull Up
#define  PBVDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PB7_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 

//******************************************************************************************************//
//*     GPIOC0 Define (DEVALT9)   KBSOUT8                                                          (42)*//
//******************************************************************************************************//
#define  xPCOD_I_0   0  //"1" = GPIOC0 The output pin is Open_Drain / "0" = GPIOC0 The output pin is Push_Pull
#if xPCOD_I_0
#define  PCDIR_I_0   0  //"0" = GPIOC0 Output Data "High"           / "1" = GPIOC0 Output Data "Low"
#define  PCDOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT0       CLRBIT0(PCDIR)
#define  CLR_PORTC_BIT0       SETBIT0(PCDIR)
#define  CPL_PORTC_BIT0       CPLBIT0(PCDIR)
#else
#define  PCDIR_I_0   0  //"1" = GPIOC0 is Output Pin                / "0" = GPIOC0 is Input Pin
#define  PCDOUT_I_0  0  //"1" = GPIOC0 Output Data "High"           / "0" = GPIOC0 Output Data "Low"
#define  SET_PORTC_BIT0       SETBIT0(PCDOUT)
#define  CLR_PORTC_BIT0       CLRBIT0(PCDOUT)
#define  CPL_PORTC_BIT0       CPLBIT0(PCDOUT)
#endif
#define  PCPUE_I_0   0  //"1" = GPIOC0 Pull Up/Dn Enable            / "0" = GPIOC0 Pull Up/Dn Disable
#define  PCPUD_I_0   0  //"1" = GPIOC0 Pull Down                    / "0" = GPIOC0 Pull Up
#define  PCVDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC0_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOC1 Define (DEVALT9)   KBSOUT9                                                          (41)*//
//******************************************************************************************************//
#define  xPC0D_I_1   0  //"1" = GPIOC1 The output pin is Open_Drain / "0" = GPIOC1 The output pin is Push_Pull
#if xPC0D_I_1
#define  PCDIR_I_1   0  //"0" = GPIOC1 Output Data "High"           / "1" = GPIOC1 Output Data "Low"
#define  PCDOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT1       CLRBIT1(PCDIR)
#define  CLR_PORTC_BIT1       SETBIT1(PCDIR)
#define  CPL_PORTC_BIT1       CPLBIT1(PCDIR)
#else
#define  PCDIR_I_1   0  //"1" = GPIOC1 is Output Pin                / "0" = GPIOC1 is Input Pin
#define  PCDOUT_I_1  0  //"1" = GPIOC1 Output Data "High"           / "0" = GPIOC1 Output Data "Low"
#define  SET_PORTC_BIT1       SETBIT1(PCDOUT)
#define  CLR_PORTC_BIT1       CLRBIT1(PCDOUT)
#define  CPL_PORTC_BIT1       CPLBIT1(PCDOUT)
#endif
#define  PCPUE_I_1   0  //"1" = GPIOC1 Pull Up/Dn Enable            / "0" = GPIOC1 Pull Up/Dn Disable
#define  PCPUD_I_1   0  //"1" = GPIOC1 Pull Down                    / "0" = GPIOC1 Pull Up
#define  PCVDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC1_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOC2 Define (DEVALT9)   KBSOUT10                                                        (40) *//
//******************************************************************************************************//
#define  xPCOD_I_2   0  //"1" = GPIOC2 The output pin is Open_Drain / "0" = GPIOC2 The output pin is Push_Pull
#if xPCOD_I_2
#define  PCDIR_I_2   0  //"0" = GPIOC2 Output Data "High"           / "1" = GPIOC2 Output Data "Low"
#define  PCDOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT2       CLRBIT2(PCDIR)
#define  CLR_PORTC_BIT2       SETBIT2(PCDIR)
#define  CPL_PORTC_BIT2       CPLBIT2(PCDIR)
#else
#define  PCDIR_I_2   0  //"1" = GPIOC2 is Output Pin                / "0" = GPIOC2 is Input Pin
#define  PCDOUT_I_2  0  //"1" = GPIOC2 Output Data "High"           / "0" = GPIOC2 Output Data "Low"
#define  SET_PORTC_BIT2       SETBIT2(PCDOUT)
#define  CLR_PORTC_BIT2       CLRBIT2(PCDOUT)
#define  CPL_PORTC_BIT2       CPLBIT2(PCDOUT)
#endif
#define  PCPUE_I_2   0  //"1" = GPIOC2 Pull Up/Dn Enable            / "0" = GPIOC2 Pull Up/Dn Disable
#define  PCPUD_I_2   0  //"1" = GPIOC2 Pull Down                    / "0" = GPIOC2 Pull Up
#define  PCVDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC2_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOC3 Define (DEVALT9)   KBSOUT11                                                         (39)*//
//******************************************************************************************************//
#define  xPCOD_I_3   0  //"1" = GPIOC3 The output pin is Open_Drain / "0" = GPIOC3 The output pin is Push_Pull
#if xPCOD_I_3
#define  PCDIR_I_3   0  //"0" = GPIOC3 Output Data "High"           / "1" = GPIOC3 Output Data "Low"
#define  PCDOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT3       CLRBIT3(PCDIR)
#define  CLR_PORTC_BIT3       SETBIT3(PCDIR)
#define  CPL_PORTC_BIT3       CPLBIT3(PCDIR)
#else
#define  PCDIR_I_3   0  //"1" = GPIOC3 is Output Pin                / "0" = GPIOC3 is Input Pin
#define  PCDOUT_I_3  0  //"1" = GPIOC3 Output Data "High"           / "0" = GPIOC3 Output Data "Low"
#define  SET_PORTC_BIT3       SETBIT3(PCDOUT)
#define  CLR_PORTC_BIT3       CLRBIT3(PCDOUT)
#define  CPL_PORTC_BIT3       CPLBIT3(PCDOUT)
#endif
#define  PCPUE_I_3   0  //"1" = GPIOC3 Pull Up/Dn Enable            / "0" = GPIOC3 Pull Up/Dn Disable
#define  PCPUD_I_3   0  //"1" = GPIOC3 Pull Down                    / "0" = GPIOC3 Pull Up
#define  PCVDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC3_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash
//******************************************************************************************************//
//*     GPIOC4 Define       KBC_SPI_SO                                                         (39)*//
//******************************************************************************************************//
#define  xPCOD_I_4   0  //"1" = GPIOC4 The output pin is Open_Drain / "0" = GPIOC4 The output pin is Push_Pull
#if xPCOD_I_4
#define  PCDIR_I_4   0  //"0" = GPIOC4 Output Data "High"           / "1" = GPIOC4 Output Data "Low"
#define  PCDOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT4       CLRBIT4(PCDIR)
#define  CLR_PORTC_BIT4       SETBIT4(PCDIR)
#define  CPL_PORTC_BIT4       CPLBIT4(PCDIR)
#else
#define  PCDIR_I_4   0  //"1" = GPIOC4 is Output Pin                / "0" = GPIOC4 is Input Pin
#define  PCDOUT_I_4  0  //"1" = GPIOC4 Output Data "High"           / "0" = GPIOC4 Output Data "Low"
#define  SET_PORTC_BIT4       SETBIT4(PCDOUT)
#define  CLR_PORTC_BIT4       CLRBIT4(PCDOUT)
#define  CPL_PORTC_BIT4       CPLBIT4(PCDOUT)
#endif
#define  PCPUE_I_4   0  //"1" = GPIOC4 Pull Up/Dn Enable            / "0" = GPIOC4 Pull Up/Dn Disable
#define  PCPUD_I_4   0  //"1" = GPIOC4 Pull Down                    / "0" = GPIOC4 Pull Up
#define  PCVDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC4_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash
//******************************************************************************************************//
//*     GPIOC5 Define       KBC_SPI_SI                                                         (39)*//
//******************************************************************************************************//
#define  xPCOD_I_5   0  //"1" = GPIOC5 The output pin is Open_Drain / "0" = GPIOC5 The output pin is Push_Pull
#if xPCOD_I_5
#define  PCDIR_I_5   0  //"0" = GPIOC5 Output Data "High"           / "1" = GPIOC5 Output Data "Low"
#define  PCDOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT5       CLRBIT5(PCDIR)
#define  CLR_PORTC_BIT5       SETBIT5(PCDIR)
#define  CPL_PORTC_BIT5       CPLBIT5(PCDIR)
#else
#define  PCDIR_I_5   0  //"1" = GPIOC5 is Output Pin                / "0" = GPIOC5 is Input Pin
#define  PCDOUT_I_5  0  //"1" = GPIOC5 Output Data "High"           / "0" = GPIOC5 Output Data "Low"
#define  SET_PORTC_BIT5       SETBIT5(PCDOUT)
#define  CLR_PORTC_BIT5       CLRBIT5(PCDOUT)
#define  CPL_PORTC_BIT5       CPLBIT5(PCDOUT)
#endif
#define  PCPUE_I_5   0  //"1" = GPIOC5 Pull Up/Dn Enable            / "0" = GPIOC5 Pull Up/Dn Disable
#define  PCPUD_I_5   0  //"1" = GPIOC5 Pull Down                    / "0" = GPIOC5 Pull Up
#define  PCVDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC5_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash
//******************************************************************************************************//
//*     GPIOC6 Define       KBC_SPI_CS#                                                         (39)*//
//******************************************************************************************************//
#define  xPCOD_I_6   0  //"1" = GPIOC6 The output pin is Open_Drain / "0" = GPIOC6 The output pin is Push_Pull
#if xPCOD_I_6
#define  PCDIR_I_6   0  //"0" = GPIOC6 Output Data "High"           / "1" = GPIOC6 Output Data "Low"
#define  PCDOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT6       CLRBIT6(PCDIR)
#define  CLR_PORTC_BIT6       SETBIT6(PCDIR)
#define  CPL_PORTC_BIT6       CPLBIT6(PCDIR)
#else
#define  PCDIR_I_6   0  //"1" = GPIOC6 is Output Pin                / "0" = GPIOC6 is Input Pin
#define  PCDOUT_I_6  0  //"1" = GPIOC6 Output Data "High"           / "0" = GPIOC6 Output Data "Low"
#define  SET_PORTC_BIT6       SETBIT6(PCDOUT)
#define  CLR_PORTC_BIT6       CLRBIT6(PCDOUT)
#define  CPL_PORTC_BIT6       CPLBIT6(PCDOUT)
#endif
#define  PCPUE_I_6   0  //"1" = GPIOC6 Pull Up/Dn Enable            / "0" = GPIOC6 Pull Up/Dn Disable
#define  PCPUD_I_6   0  //"1" = GPIOC6 Pull Down                    / "0" = GPIOC6 Pull Up
#define  PCVDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC6_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash
//******************************************************************************************************//
//*     GPIOC7 Define       KBC_SPI_CLK                                                         (39)*//
//******************************************************************************************************//
#define  xPCOD_I_7   0  //"1" = GPIOC7 The output pin is Open_Drain / "0" = GPIOC7 The output pin is Push_Pull
#if xPCOD_I_7
#define  PCDIR_I_7   0  //"0" = GPIOC3 Output Data "High"           / "1" = GPIOC7 Output Data "Low"
#define  PCDOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTC_BIT7       CLRBIT7(PCDIR)
#define  CLR_PORTC_BIT7       SETBIT7(PCDIR)
#define  CPL_PORTC_BIT7       CPLBIT7(PCDIR)
#else
#define  PCDIR_I_7   0  //"1" = GPIOC7 is Output Pin                / "0" = GPIOC7 is Input Pin
#define  PCDOUT_I_7  0  //"1" = GPIOC7 Output Data "High"           / "0" = GPIOC7 Output Data "Low"
#define  SET_PORTC_BIT7       SETBIT7(PCDOUT)
#define  CLR_PORTC_BIT7       CLRBIT7(PCDOUT)
#define  CPL_PORTC_BIT7       CPLBIT7(PCDOUT)
#endif
#define  PCPUE_I_7   0  //"1" = GPIOC7 Pull Up/Dn Enable            / "0" = GPIOC7 Pull Up/Dn Disable
#define  PCPUD_I_7   0  //"1" = GPIOC7 Pull Down                    / "0" = GPIOC7 Pull Up
#define  PCVDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PC7_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash  
//******************************************************************************************************//
//**     GPIOD0 Define (DEVALTC)   Reserved                                                             *//
//******************************************************************************************************//
#define  xPDOD_I_0   0  //"1" = GPIOD0 The output pin is Open_Drain / "0" = GPIOD0 The output pin is Push_Pull
#if xPDOD_I_0
#define  PDDIR_I_0   0  //"0" = GPIOD0 Output Data "High"           / "1" = GPIOD0 Output Data "Low"
#define  PDDOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT0       CLRBIT0(PDDIR)
#define  CLR_PORTD_BIT0       SETBIT0(PDDIR)
#define  CPL_PORTD_BIT0       CPLBIT0(PDDIR)
#else
#define  PDDIR_I_0   0  //"1" = GPIOD0 is Output Pin                / "0" = GPIOD0 is Input Pin
#define  PDDOUT_I_0  0  //"1" = GPIOD0 Output Data "High"           / "0" = GPIOD0 Output Data "Low"
#define  SET_PORTD_BIT0       SETBIT0(PDDOUT)
#define  CLR_PORTD_BIT0       CLRBIT0(PDDOUT)
#define  CPL_PORTD_BIT0       CPLBIT0(PDDOUT)
#endif
#define  PDPUE_I_0   0  //"1" = GPIOD0 Pull Up/Dn Enable            / "0" = GPIOD0 Pull Up/Dn Disable
#define  PDPUD_I_0   0  //"1" = GPIOD0 Pull Down                    / "0" = GPIOD0 Pull Up
#define  PDVDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD0_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOD1 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPD0D_I_1   0  //"1" = GPIOD1 The output pin is Open_Drain / "0" = GPIOD1 The output pin is Push_Pull
#if xPD0D_I_1
#define  PDDIR_I_1   0  //"0" = GPIOD1 Output Data "High"           / "1" = GPIOD1 Output Data "Low"
#define  PDDOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT1       CLRBIT1(PDDIR)
#define  CLR_PORTD_BIT1       SETBIT1(PDDIR)
#define  CPL_PORTD_BIT1       CPLBIT1(PDDIR)
#else
#define  PDDIR_I_1   0  //"1" = GPIOD1 is Output Pin                / "0" = GPIOD1 is Input Pin
#define  PDDOUT_I_1  0  //"1" = GPIOD1 Output Data "High"           / "0" = GPIOD1 Output Data "Low"
#define  SET_PORTD_BIT1       SETBIT1(PDDOUT)
#define  CLR_PORTD_BIT1       CLRBIT1(PDDOUT)
#define  CPL_PORTD_BIT1       CPLBIT1(PDDOUT)
#endif
#define  PDPUE_I_1   0  //"1" = GPIOD1 Pull Up/Dn Enable            / "0" = GPIOD1 Pull Up/Dn Disable
#define  PDPUD_I_1   0  //"1" = GPIOD1 Pull Down                    / "0" = GPIOD1 Pull Up
#define  PDVDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD1_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOD2 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPDOD_I_2   0  //"1" = GPIOD2 The output pin is Open_Drain / "0" = GPIOD2 The output pin is Push_Pull
#if xPDOD_I_2
#define  PDDIR_I_2   0  //"0" = GPIOD2 Output Data "High"           / "1" = GPIOD2 Output Data "Low"
#define  PDDOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT2       CLRBIT2(PDDIR)
#define  CLR_PORTD_BIT2       SETBIT2(PDDIR)
#define  CPL_PORTD_BIT2       CPLBIT2(PDDIR)
#else
#define  PDDIR_I_2   0  //"1" = GPIOD2 is Output Pin                / "0" = GPIOD2 is Input Pin
#define  PDDOUT_I_2  0  //"1" = GPIOD2 Output Data "High"           / "0" = GPIOD2 Output Data "Low"
#define  SET_PORTD_BIT2       SETBIT2(PDDOUT)
#define  CLR_PORTD_BIT2       CLRBIT2(PDDOUT)
#define  CPL_PORTD_BIT2       CPLBIT2(PDDOUT)
#endif
#define  PDPUE_I_2   0  //"1" = GPIOD2 Pull Up/Dn Enable            / "0" = GPIOD2 Pull Up/Dn Disable
#define  PDPUD_I_2   0  //"1" = GPIOD2 Pull Down                    / "0" = GPIOD2 Pull Up
#define  PDVDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD2_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOD3 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPDOD_I_3   0  //"1" = GPIOD3 The output pin is Open_Drain / "0" = GPIOD3 The output pin is Push_Pull
#if xPDOD_I_3
#define  PDDIR_I_3   0  //"0" = GPIOD3 Output Data "High"           / "1" = GPIOD3 Output Data "Low"
#define  PDDOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT3       CLRBIT3(PDDIR)
#define  CLR_PORTD_BIT3       SETBIT3(PDDIR)
#define  CPL_PORTD_BIT3       CPLBIT3(PDDIR)
#else
#define  PDDIR_I_3   0  //"1" = GPIOD3 is Output Pin                / "0" = GPIOD3 is Input Pin
#define  PDDOUT_I_3  0  //"1" = GPIOD3 Output Data "High"           / "0" = GPIOD3 Output Data "Low"
#define  SET_PORTD_BIT3       SETBIT3(PDDOUT)
#define  CLR_PORTD_BIT3       CLRBIT3(PDDOUT)
#define  CPL_PORTD_BIT3       CPLBIT3(PDDOUT)
#endif
#define  PDPUE_I_3   0  //"1" = GPIOD3 Pull Up/Dn Enable            / "0" = GPIOD3 Pull Up/Dn Disable
#define  PDPUD_I_3   0  //"1" = GPIOD3 Pull Down                    / "0" = GPIOD3 Pull Up
#define  PDVDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD3_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOD4 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPDOD_I_4   0  //"1" = GPIOD4 The output pin is Open_Drain / "0" = GPIOD4 The output pin is Push_Pull
#if xPDOD_I_4
#define  PDDIR_I_4   0  //"0" = GPIOD4 Output Data "High"           / "1" = GPIOD4 Output Data "Low"
#define  PDDOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT4       CLRBIT4(PDDIR)
#define  CLR_PORTD_BIT4       SETBIT4(PDDIR)
#define  CPL_PORTD_BIT4       CPLBIT4(PDDIR)
#else
#define  PDDIR_I_4   0  //"1" = GPIOD4 is Output Pin                / "0" = GPIOD4 is Input Pin
#define  PDDOUT_I_4  0  //"1" = GPIOD4 Output Data "High"           / "0" = GPIOD4 Output Data "Low"
#define  SET_PORTD_BIT4       SETBIT4(PDDOUT)
#define  CLR_PORTD_BIT4       CLRBIT4(PDDOUT)
#define  CPL_PORTD_BIT4       CPLBIT4(PDDOUT)
#endif
#define  PDPUE_I_4   0  //"1" = GPIOD4 Pull Up/Dn Enable            / "0" = GPIOD4 Pull Up/Dn Disable
#define  PDPUD_I_4   0  //"1" = GPIOD4 Pull Down                    / "0" = GPIOD4 Pull Up
#define  PDVDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD4_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOD5 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPDOD_I_5   0  //"1" = GPIOD5 The output pin is Open_Drain / "0" = GPIOD5 The output pin is Push_Pull
#if xPDOD_I_5
#define  PDDIR_I_5   0  //"0" = GPIOD5 Output Data "High"           / "1" = GPIOD5 Output Data "Low"
#define  PDDOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT5       CLRBIT5(PDDIR)
#define  CLR_PORTD_BIT5       SETBIT5(PDDIR)
#define  CPL_PORTD_BIT5       CPLBIT5(PDDIR)
#else
#define  PDDIR_I_5   0  //"1" = GPIOD5 is Output Pin                / "0" = GPIOD5 is Input Pin
#define  PDDOUT_I_5  0  //"1" = GPIOD5 Output Data "High"           / "0" = GPIOD5 Output Data "Low"
#define  SET_PORTD_BIT5       SETBIT5(PDDOUT)
#define  CLR_PORTD_BIT5       CLRBIT5(PDDOUT)
#define  CPL_PORTD_BIT5       CPLBIT5(PDDOUT)
#endif
#define  PDPUE_I_5   0  //"1" = GPIOD5 Pull Up/Dn Enable            / "0" = GPIOD5 Pull Up/Dn Disable
#define  PDPUD_I_5   0  //"1" = GPIOD5 Pull Down                    / "0" = GPIOD5 Pull Up
#define  PDVDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD5_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOD6 Define   Reserved                                                                       *//
//******************************************************************************************************//
#define  xPDOD_I_6   0  //"1" = GPIOD6 The output pin is Open_Drain / "0" = GPIOD6 The output pin is Push_Pull
#if xPDOD_I_6
#define  PDDIR_I_6   0  //"0" = GPIOD6 Output Data "High"           / "1" = GPIOD6 Output Data "Low"
#define  PDDOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT6       CLRBIT6(PDDIR)
#define  CLR_PORTD_BIT6       SETBIT6(PDDIR)
#define  CPL_PORTD_BIT6       CPLBIT6(PDDIR)
#else
#define  PDDIR_I_6   0  //"1" = GPIOD6 is Output Pin                / "0" = GPIOD6 is Input Pin
#define  PDDOUT_I_6  0  //"1" = GPIOD6 Output Data "High"           / "0" = GPIOD6 Output Data "Low"
#define  SET_PORTD_BIT6       SETBIT6(PDDOUT)
#define  CLR_PORTD_BIT6       CLRBIT6(PDDOUT)
#define  CPL_PORTD_BIT6       CPLBIT6(PDDOUT)
#endif
#define  PDPUE_I_6   0  //"1" = GPIOD6 Pull Up/Dn Enable            / "0" = GPIOD6 Pull Up/Dn Disable
#define  PDPUD_I_6   0  //"1" = GPIOD6 Pull Down                    / "0" = GPIOD6 Pull Up
#define  PDVDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD6_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOD7 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPDOD_I_7   0  //"1" = GPIOD7 The output pin is Open_Drain / "0" = GPIOD7 The output pin is Push_Pull
#if xPDOD_I_7
#define  PDDIR_I_7   0  //"0" = GPIOD7 Output Data "High"           / "1" = GPIOD7 Output Data "Low"
#define  PDDOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTD_BIT7       CLRBIT7(PDDIR)
#define  CLR_PORTD_BIT7       SETBIT7(PDDIR)
#define  CPL_PORTD_BIT7       CPLBIT7(PDDIR)
#else
#define  PDDIR_I_7   0  //"1" = GPIOD7 is Output Pin                / "0" = GPIOD7 is Input Pin
#define  PDDOUT_I_7  0  //"1" = GPIOD7 Output Data "High"           / "0" = GPIOD7 Output Data "Low"
#define  SET_PORTD_BIT7       SETBIT7(PDDOUT)
#define  CLR_PORTD_BIT7       CLRBIT7(PDDOUT)
#define  CPL_PORTD_BIT7       CPLBIT7(PDDOUT)
#endif
#define  PDPUE_I_7   0  //"1" = GPIOD7 Pull Up/Dn Enable            / "0" = GPIOD7 Pull Up/Dn Disable
#define  PDPUD_I_7   0  //"1" = GPIOD7 Pull Down                    / "0" = GPIOD7 Pull Up
#define  PDVDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PD7_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOE0 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPEOD_I_0   0  //"1" = GPIOE0 The output pin is Open_Drain / "0" = GPIOE0 The output pin is Push_Pull
#if xPEOD_I_0
#define  PEDIR_I_0   0  //"0" = GPIOE0 Output Data "High"           / "1" = GPIOE0 Output Data "Low"
#define  PEDOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT0       CLRBIT0(PEDIR)
#define  CLR_PORTE_BIT0       SETBIT0(PEDIR)
#define  CPL_PORTE_BIT0       CPLBIT0(PEDIR)
#else
#define  PEDIR_I_0   0  //"1" = GPIOE0 is Output Pin                / "0" = GPIOE0 is Input Pin
#define  PEDOUT_I_0  0  //"1" = GPIOE0 Output Data "High"           / "0" = GPIOE0 Output Data "Low"
#define  SET_PORTE_BIT0       SETBIT0(PEDOUT)
#define  CLR_PORTE_BIT0       CLRBIT0(PEDOUT)
#define  CPL_PORTE_BIT0       CPLBIT0(PEDOUT)
#endif
#define  PEPUE_I_0   0  //"1" = GPIOE0 Pull Up/Dn Enable            / "0" = GPIOE0 Pull Up/Dn Disable
#define  PEPUD_I_0   0  //"1" = GPIOE0 Pull Down                    / "0" = GPIOE0 Pull Up
#define  PEVDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE0_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOE1 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPE0D_I_1   0  //"1" = GPIOE1 The output pin is Open_Drain / "0" = GPIOE1 The output pin is Push_Pull
#if xPE0D_I_1
#define  PEDIR_I_1   0  //"0" = GPIOE1 Output Data "High"           / "1" = GPIOE1 Output Data "Low"
#define  PEDOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT1       CLRBIT1(PEDIR)
#define  CLR_PORTE_BIT1       SETBIT1(PEDIR)
#define  CPL_PORTE_BIT1       CPLBIT1(PEDIR)
#else
#define  PEDIR_I_1   0  //"1" = GPIOE1 is Output Pin                / "0" = GPIOE1 is Input Pin
#define  PEDOUT_I_1  0  //"1" = GPIOE1 Output Data "High"           / "0" = GPIOE1 Output Data "Low"
#define  SET_PORTE_BIT1       SETBIT1(PEDOUT)
#define  CLR_PORTE_BIT1       CLRBIT1(PEDOUT)
#define  CPL_PORTE_BIT1       CPLBIT1(PEDOUT)
#endif
#define  PEPUE_I_1   0  //"1" = GPIOE1 Pull Up/Dn Enable            / "0" = GPIOE1 Pull Up/Dn Disable
#define  PEPUD_I_1   0  //"1" = GPIOE1 Pull Down                    / "0" = GPIOE1 Pull Up
#define  PEVDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE1_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOE2 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPEOD_I_2   0  //"1" = GPIOE2 The output pin is Open_Drain / "0" = GPIOE2 The output pin is Push_Pull
#if xPEOD_I_2
#define  PEDIR_I_2   0  //"0" = GPIOE2 Output Data "High"           / "1" = GPIOE2 Output Data "Low"
#define  PEDOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT2       CLRBIT2(PEDIR)
#define  CLR_PORTE_BIT2       SETBIT2(PEDIR)
#define  CPL_PORTE_BIT2       CPLBIT2(PEDIR)
#else
#define  PEDIR_I_2   0  //"1" = GPIOE2 is Output Pin                / "0" = GPIOE2 is Input Pin
#define  PEDOUT_I_2  0  //"1" = GPIOE2 Output Data "High"           / "0" = GPIOE2 Output Data "Low"
#define  SET_PORTE_BIT2       SETBIT2(PEDOUT)
#define  CLR_PORTE_BIT2       CLRBIT2(PEDOUT)
#define  CPL_PORTE_BIT2       CPLBIT2(PEDOUT)
#endif
#define  PEPUE_I_2   0  //"1" = GPIOE2 Pull Up/Dn Enable            / "0" = GPIOE2 Pull Up/Dn Disable
#define  PEPUD_I_2   0  //"1" = GPIOE2 Pull Down                    / "0" = GPIOE2 Pull Up
#define  PEVDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE2_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOE3 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPEOD_I_3   0  //"1" = GPIOE3 The output pin is Open_Drain / "0" = GPIOE3 The output pin is Push_Pull
#if xPEOD_I_3
#define  PEDIR_I_3   0  //"0" = GPIOE3 Output Data "High"           / "1" = GPIOE3 Output Data "Low"
#define  PEDOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT3       CLRBIT3(PEDIR)
#define  CLR_PORTE_BIT3       SETBIT3(PEDIR)
#define  CPL_PORTE_BIT3       CPLBIT3(PEDIR)
#else
#define  PEDIR_I_3   0  //"1" = GPIOE3 is Output Pin                / "0" = GPIOE3 is Input Pin
#define  PEDOUT_I_3  0  //"1" = GPIOE3 Output Data "High"           / "0" = GPIOE3 Output Data "Low"
#define  SET_PORTE_BIT3       SETBIT3(PEDOUT)
#define  CLR_PORTE_BIT3       CLRBIT3(PEDOUT)
#define  CPL_PORTE_BIT3       CPLBIT3(PEDOUT)
#endif
#define  PEPUE_I_3   0  //"1" = GPIOE3 Pull Up/Dn Enable            / "0" = GPIOE3 Pull Up/Dn Disable
#define  PEPUD_I_3   0  //"1" = GPIOE3 Pull Down                    / "0" = GPIOE3 Pull Up
#define  PEVDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE3_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOE4 Define    Reserved                                                                      *//
//******************************************************************************************************//
#define  xPEOD_I_4   0  //"1" = GPIOE4 The output pin is Open_Drain / "0" = GPIOE4 The output pin is Push_Pull
#if xPEOD_I_4
#define  PEDIR_I_4   0  //"0" = GPIOE4 Output Data "High"           / "1" = GPIOE4 Output Data "Low"
#define  PEDOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT4       CLRBIT4(PEDIR)
#define  CLR_PORTE_BIT4       SETBIT4(PEDIR)
#define  CPL_PORTE_BIT4       CPLBIT4(PEDIR)
#else
#define  PEDIR_I_4   0  //"1" = GPIOE4 is Output Pin                / "0" = GPIOE4 is Input Pin
#define  PEDOUT_I_4  0  //"1" = GPIOE4 Output Data "High"           / "0" = GPIOE4 Output Data "Low"
#define  SET_PORTE_BIT4       SETBIT4(PEDOUT)
#define  CLR_PORTE_BIT4       CLRBIT4(PEDOUT)
#define  CPL_PORTE_BIT4       CPLBIT4(PEDOUT)
#endif
#define  PEPUE_I_4   0  //"1" = GPIOE4 Pull Up/Dn Enable            / "0" = GPIOE4 Pull Up/Dn Disable
#define  PEPUD_I_4   0  //"1" = GPIOE4 Pull Down                    / "0" = GPIOE4 Pull Up
#define  PEVDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE4_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOE5 Define (DEVALTC)  Reserved                                                              *//
//******************************************************************************************************//
#define  xPEOD_I_5   0  //"1" = GPIOE5 The output pin is Open_Drain / "0" = GPIOE5 The output pin is Push_Pull
#if xPEOD_I_5
#define  PEDIR_I_5   0  //"0" = GPIOE5 Output Data "High"           / "1" = GPIOE5 Output Data "Low"
#define  PEDOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT5       CLRBIT5(PEDIR)
#define  CLR_PORTE_BIT5       SETBIT5(PEDIR)
#define  CPL_PORTE_BIT5       CPLBIT5(PEDIR)
#else
#define  PEDIR_I_5   0  //"1" = GPIOE5 is Output Pin                / "0" = GPIOE5 is Input Pin
#define  PEDOUT_I_5  0  //"1" = GPIOE5 Output Data "High"           / "0" = GPIOE5 Output Data "Low"
#define  SET_PORTE_BIT5       SETBIT5(PEDOUT)
#define  CLR_PORTE_BIT5       CLRBIT5(PEDOUT)
#define  CPL_PORTE_BIT5       CPLBIT5(PEDOUT)
#endif
#define  PEPUE_I_5   0  //"1" = GPIOE5 Pull Up/Dn Enable            / "0" = GPIOE5 Pull Up/Dn Disable
#define  PEPUD_I_5   0  //"1" = GPIOE5 Pull Down                    / "0" = GPIOE5 Pull Up
#define  PEVDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE5_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOE6 Define (DEVALTC)  Reserved                                                              *//
//******************************************************************************************************//
#define  xPEOD_I_6   0  //"1" = GPIOE6 The output pin is Open_Drain / "0" = GPIOE6 The output pin is Push_Pull
#if xPEOD_I_6
#define  PEDIR_I_6   0  //"0" = GPIOE6 Output Data "High"           / "1" = GPIOE6 Output Data "Low"
#define  PEDOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT6       CLRBIT6(PEDIR)
#define  CLR_PORTE_BIT6       SETBIT6(PEDIR)
#define  CPL_PORTE_BIT6       CPLBIT6(PEDIR)
#else
#define  PEDIR_I_6   0  //"1" = GPIOE6 is Output Pin                / "0" = GPIOE6 is Input Pin
#define  PEDOUT_I_6  0  //"1" = GPIOE6 Output Data "High"           / "0" = GPIOE6 Output Data "Low"
#define  SET_PORTE_BIT6       SETBIT6(PEDOUT)
#define  CLR_PORTE_BIT6       CLRBIT6(PEDOUT)
#define  CPL_PORTE_BIT6       CPLBIT6(PEDOUT)
#endif
#define  PEPUE_I_6   0  //"1" = GPIOE6 Pull Up/Dn Enable            / "0" = GPIOE6 Pull Up/Dn Disable
#define  PEPUD_I_6   0  //"1" = GPIOE6 Pull Down                    / "0" = GPIOE6 Pull Up
#define  PEVDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE6_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//**     GPIOE7 Define (DEVALTC)                                                                        *//
//******************************************************************************************************//
#define  xPEOD_I_7   0  //"1" = GPIOE7 The output pin is Open_Drain / "0" = GPIOE7 The output pin is Push_Pull
#if xPEOD_I_7
#define  PEDIR_I_7   0  //"0" = GPIOE7 Output Data "High"           / "1" = GPIOE7 Output Data "Low"
#define  PEDOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTE_BIT7       CLRBIT7(PEDIR)
#define  CLR_PORTE_BIT7       SETBIT7(PEDIR)
#define  CPL_PORTE_BIT7       CPLBIT7(PEDIR)
#else
#define  PEDIR_I_7   0  //"1" = GPIOE7 is Output Pin                / "0" = GPIOE7 is Input Pin
#define  PEDOUT_I_7  0  //"1" = GPIOE7 Output Data "High"           / "0" = GPIOE7 Output Data "Low"
#define  SET_PORTE_BIT7       SETBIT7(PEDOUT)
#define  CLR_PORTE_BIT7       CLRBIT7(PEDOUT)
#define  CPL_PORTE_BIT7       CPLBIT7(PEDOUT)
#endif
#define  PEPUE_I_7   0  //"1" = GPIOE7 Pull Up/Dn Enable            / "0" = GPIOE7 Pull Up/Dn Disable
#define  PEPUD_I_7   0  //"1" = GPIOE7 Pull Down                    / "0" = GPIOE7 Pull Up
#define  PEVDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PE7_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF0 Define   SERIRQ/ESPI_RST# (DEVALT9)                                                (125)*//
//******************************************************************************************************//
#define  xPFOD_I_0   0  //"1" = GPIOF0 The output pin is Open_Drain / "0" = GPIOF0 The output pin is Push_Pull
#if xPFOD_I_0
#define  PFDIR_I_0   0  //"0" = GPIOF0 Output Data "High"           / "1" = GPIOF0 Output Data "Low"
#define  PFDOUT_I_0  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT0       CLRBIT0(PFDIR)
#define  CLR_PORTF_BIT0       SETBIT0(PFDIR)
#define  CPL_PORTF_BIT0       CPLBIT0(PFDIR)
#else
#define  PFDIR_I_0   0  //"1" = GPIOF0 is Output Pin                / "0" = GPIOF0 is Input Pin
#define  PFDOUT_I_0  0  //"1" = GPIOF0 Output Data "High"           / "0" = GPIOF0 Output Data "Low"
#define  SET_PORTF_BIT0       SETBIT0(PFDOUT)
#define  CLR_PORTF_BIT0       CLRBIT0(PFDOUT)
#define  CPL_PORTF_BIT0       CPLBIT0(PFDOUT)
#endif
#define  PFPUE_I_0   0  //"1" = GPIOF0 Pull Up/Dn Enable            / "0" = GPIOF0 Pull Up/Dn Disable
#define  PFPUD_I_0   0  //"1" = GPIOF0 Pull Down                    / "0" = GPIOF0 Pull Up
#define  PFVDDE_I_0  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF0_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF1 Define   ESPI_CPU_IO0 (DEVALT9)                                                    (126)*//
//******************************************************************************************************//
#define  xPF0D_I_1   0  //"1" = GPIOF1 The output pin is Open_Drain / "0" = GPIOF1 The output pin is Push_Pull
#if xPF0D_I_1
#define  PFDIR_I_1   0  //"0" = GPIOF1 Output Data "High"           / "1" = GPIOF1 Output Data "Low"
#define  PFDOUT_I_1  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT1       CLRBIT1(PFDIR)
#define  CLR_PORTF_BIT1       SETBIT1(PFDIR)
#define  CPL_PORTF_BIT1       CPLBIT1(PFDIR)
#else
#define  PFDIR_I_1   0  //"1" = GPIOF1 is Output Pin                / "0" = GPIOF1 is Input Pin
#define  PFDOUT_I_1  0  //"1" = GPIOF1 Output Data "High"           / "0" = GPIOF1 Output Data "Low"
#define  SET_PORTF_BIT1       SETBIT1(PFDOUT)
#define  CLR_PORTF_BIT1       CLRBIT1(PFDOUT)
#define  CPL_PORTF_BIT1       CPLBIT1(PFDOUT)
#endif
#define  PFPUE_I_1   0  //"1" = GPIOF1 Pull Up/Dn Enable            / "0" = GPIOF1 Pull Up/Dn Disable
#define  PFPUD_I_1   0  //"1" = GPIOF1 Pull Down                    / "0" = GPIOF1 Pull Up
#define  PFVDDE_I_1  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF1_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF2 Define   ESPI_CPU_IO1(DEVALT9)                                                    (127) *//
//******************************************************************************************************//
#define  xPFOD_I_2   0  //"1" = GPIOF2 The output pin is Open_Drain / "0" = GPIOF2 The output pin is Push_Pull
#if xPFOD_I_2
#define  PFDIR_I_2   0  //"0" = GPIOF2 Output Data "High"           / "1" = GPIOF2 Output Data "Low"
#define  PFDOUT_I_2  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT2       CLRBIT2(PFDIR)
#define  CLR_PORTF_BIT2       SETBIT2(PFDIR)
#define  CPL_PORTF_BIT2       CPLBIT2(PFDIR)
#else
#define  PFDIR_I_2   0  //"1" = GPIOF2 is Output Pin                / "0" = GPIOF2 is Input Pin
#define  PFDOUT_I_2  0  //"1" = GPIOF2 Output Data "High"           / "0" = GPIOF2 Output Data "Low"
#define  SET_PORTF_BIT2       SETBIT2(PFDOUT)
#define  CLR_PORTF_BIT2       CLRBIT2(PFDOUT)
#define  CPL_PORTF_BIT2       CPLBIT2(PFDOUT)
#endif
#define  PFPUE_I_2   0  //"1" = GPIOF2 Pull Up/Dn Enable            / "0" = GPIOF2 Pull Up/Dn Disable
#define  PFPUD_I_2   0  //"1" = GPIOF2 Pull Down                    / "0" = GPIOF2 Pull Up
#define  PFVDDE_I_2  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF2_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF3 Define   ESPI_CPU_IO2 (DEVALT9)                                                    (128)*//
//******************************************************************************************************//
#define  xPFOD_I_3   0  //"1" = GPIOF3 The output pin is Open_Drain / "0" = GPIOF3 The output pin is Push_Pull
#if xPFOD_I_3
#define  PFDIR_I_3   0  //"0" = GPIOF3 Output Data "High"           / "1" = GPIOF3 Output Data "Low"
#define  PFDOUT_I_3  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT3       CLRBIT3(PFDIR)
#define  CLR_PORTF_BIT3       SETBIT3(PFDIR)
#define  CPL_PORTF_BIT3       CPLBIT3(PFDIR)
#else
#define  PFDIR_I_3   0  //"1" = GPIOF3 is Output Pin                / "0" = GPIOF3 is Input Pin
#define  PFDOUT_I_3  0  //"1" = GPIOF3 Output Data "High"           / "0" = GPIOF3 Output Data "Low"
#define  SET_PORTF_BIT3       SETBIT3(PFDOUT)
#define  CLR_PORTF_BIT3       CLRBIT3(PFDOUT)
#define  CPL_PORTF_BIT3       CPLBIT3(PFDOUT)
#endif
#define  PFPUE_I_3   0  //"1" = GPIOF3 Pull Up/Dn Enable            / "0" = GPIOF3 Pull Up/Dn Disable
#define  PFPUD_I_3   0  //"1" = GPIOF3 Pull Down                    / "0" = GPIOF3 Pull Up
#define  PFVDDE_I_3  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF3_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF4 Define   ESPI_CPU_IO3 (DEVALT9)                                                      (1)*//
//******************************************************************************************************//
#define  xPFOD_I_4   0  //"1" = GPIOF4 The output pin is Open_Drain / "0" = GPIOF4 The output pin is Push_Pull
#if xPFOD_I_4
#define  PFDIR_I_4   0  //"0" = GPIOF4 Output Data "High"           / "1" = GPIOF4 Output Data "Low"
#define  PFDOUT_I_4  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT4       CLRBIT4(PFDIR)
#define  CLR_PORTF_BIT4       SETBIT4(PFDIR)
#define  CPL_PORTF_BIT4       CPLBIT4(PFDIR)
#else
#define  PFDIR_I_4   0  //"1" = GPIOF4 is Output Pin                / "0" = GPIOF4 is Input Pin
#define  PFDOUT_I_4  0  //"1" = GPIOF4 Output Data "High"           / "0" = GPIOF4 Output Data "Low"
#define  SET_PORTF_BIT4       SETBIT4(PFDOUT)
#define  CLR_PORTF_BIT4       CLRBIT4(PFDOUT)
#define  CPL_PORTF_BIT4       CPLBIT4(PFDOUT)
#endif
#define  PFPUE_I_4   0  //"1" = GPIOF4 Pull Up/Dn Enable            / "0" = GPIOF4 Pull Up/Dn Disable
#define  PFPUD_I_4   0  //"1" = GPIOF4 Pull Down                    / "0" = GPIOF4 Pull Up
#define  PFVDDE_I_4  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF4_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF5 Define   ESPI_CPU_CLK (DEVALT9)                                                      (2)*//
//******************************************************************************************************//
#define  xPFOD_I_5   0  //"1" = GPIOF5 The output pin is Open_Drain / "0" = GPIOF5 The output pin is Push_Pull
#if xPFOD_I_5
#define  PFDIR_I_5   0  //"0" = GPIOF5 Output Data "High"           / "1" = GPIOF5 Output Data "Low"
#define  PFDOUT_I_5  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT5       CLRBIT5(PFDIR)
#define  CLR_PORTF_BIT5       SETBIT5(PFDIR)
#define  CPL_PORTF_BIT5       CPLBIT5(PFDIR)
#else
#define  PFDIR_I_5   0  //"1" = GPIOF5 is Output Pin                / "0" = GPIOF5 is Input Pin
#define  PFDOUT_I_5  0  //"1" = GPIOF5 Output Data "High"           / "0" = GPIOF5 Output Data "Low"
#define  SET_PORTF_BIT5       SETBIT5(PFDOUT)
#define  CLR_PORTF_BIT5       CLRBIT5(PFDOUT)
#define  CPL_PORTF_BIT5       CPLBIT5(PFDOUT)
#endif
#define  PFPUE_I_5   0  //"1" = GPIOF5 Pull Up/Dn Enable            / "0" = GPIOF5 Pull Up/Dn Disable
#define  PFPUD_I_5   0  //"1" = GPIOF5 Pull Down                    / "0" = GPIOF5 Pull Up
#define  PFVDDE_I_5  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF5_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF6 Define   ESPI_CPU_CS# (DEVALT9)                                                      (3)*//
//******************************************************************************************************//
#define  xPFOD_I_6   0  //"1" = GPIOF6 The output pin is Open_Drain / "0" = GPIOF6 The output pin is Push_Pull
#if xPFOD_I_6
#define  PFDIR_I_6   0  //"0" = GPIOF6 Output Data "High"           / "1" = GPIOF6 Output Data "Low"
#define  PFDOUT_I_6  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT6       CLRBIT6(PFDIR)
#define  CLR_PORTF_BIT6       SETBIT6(PFDIR)
#define  CPL_PORTF_BIT6       CPLBIT6(PFDIR)
#else
#define  PFDIR_I_6   0  //"1" = GPIOF6 is Output Pin                / "0" = GPIOF6 is Input Pin
#define  PFDOUT_I_6  0  //"1" = GPIOF6 Output Data "High"           / "0" = GPIOF6 Output Data "Low"
#define  SET_PORTF_BIT6       SETBIT6(PFDOUT)
#define  CLR_PORTF_BIT6       CLRBIT6(PFDOUT)
#define  CPL_PORTF_BIT6       CPLBIT6(PFDOUT)
#endif
#define  PFPUE_I_6   0  //"1" = GPIOF6 Pull Up/Dn Enable            / "0" = GPIOF6 Pull Up/Dn Disable
#define  PFPUD_I_6   0  //"1" = GPIOF6 Pull Down                    / "0" = GPIOF6 Pull Up
#define  PFVDDE_I_6  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF6_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 
//******************************************************************************************************//
//*     GPIOF7 Define   PLTRST#_CPU (DEVALT9)                                                       (7)*//
//******************************************************************************************************//
#define  xPFOD_I_7   0  //"1" = GPIOF7 The output pin is Open_Drain / "0" = GPIOF7 The output pin is Push_Pull
#if xPFOD_I_7
#define  PFDIR_I_7   0  //"0" = GPIOF7 Output Data "High"           / "1" = GPIOF7 Output Data "Low"
#define  PFDOUT_I_7  0  //Open Drain Mode this bit always set to "0".
#define  SET_PORTF_BIT7       CLRBIT7(PFDIR)
#define  CLR_PORTF_BIT7       SETBIT7(PFDIR)
#define  CPL_PORTF_BIT7       CPLBIT7(PFDIR)
#else
#define  PFDIR_I_7   0  //"1" = GPIOF7 is Output Pin                / "0" = GPIOF7 is Input Pin
#define  PFDOUT_I_7  0  //"1" = GPIOF7 Output Data "High"           / "0" = GPIOF7 Output Data "Low"
#define  SET_PORTF_BIT7       SETBIT7(PFDOUT)
#define  CLR_PORTF_BIT7       CLRBIT7(PFDOUT)
#define  CPL_PORTF_BIT7       CPLBIT7(PFDOUT)
#endif
#define  PFPUE_I_7   0  //"1" = GPIOF7 Pull Up/Dn Enable            / "0" = GPIOF7 Pull Up/Dn Disable
#define  PFPUD_I_7   0  //"1" = GPIOF7 Pull Down                    / "0" = GPIOF7 Pull Up
#define  PFVDDE_I_7  0  //"1" = Pin Power control By VDD            / "0" = Control by Output buffer
#define  PF7_AFKEEP  0  //"1" = Keeping pin level after flash       / "0" = Not keeping pin level after flash 


#define  P0DOUT_INIT (P0DOUT_I_0+(P0DOUT_I_1<<1)+(P0DOUT_I_2<<2)+(P0DOUT_I_3<<3)+(P0DOUT_I_4<<4)+(P0DOUT_I_5<<5)+(P0DOUT_I_6<<6)+(P0DOUT_I_7<<7))
#define  P1DOUT_INIT (P1DOUT_I_0+(P1DOUT_I_1<<1)+(P1DOUT_I_2<<2)+(P1DOUT_I_3<<3)+(P1DOUT_I_4<<4)+(P1DOUT_I_5<<5)+(P1DOUT_I_6<<6)+(P1DOUT_I_7<<7))
#define  P2DOUT_INIT (P2DOUT_I_0+(P2DOUT_I_1<<1)+(P2DOUT_I_2<<2)+(P2DOUT_I_3<<3)+(P2DOUT_I_4<<4)+(P2DOUT_I_5<<5)+(P2DOUT_I_6<<6)+(P2DOUT_I_7<<7))
#define  P3DOUT_INIT (P3DOUT_I_0+(P3DOUT_I_1<<1)+(P3DOUT_I_2<<2)+(P3DOUT_I_3<<3)+(P3DOUT_I_4<<4)+(P3DOUT_I_5<<5)+(P3DOUT_I_6<<6)+(P3DOUT_I_7<<7))
#define  P4DOUT_INIT (P4DOUT_I_0+(P4DOUT_I_1<<1)+(P4DOUT_I_2<<2)+(P4DOUT_I_3<<3)+(P4DOUT_I_4<<4)+(P4DOUT_I_5<<5)+(P4DOUT_I_6<<6)+(P4DOUT_I_7<<7))
#define  P5DOUT_INIT (P5DOUT_I_0+(P5DOUT_I_1<<1)+(P5DOUT_I_2<<2)+(P5DOUT_I_3<<3)+(P5DOUT_I_4<<4)+(P5DOUT_I_5<<5)+(P5DOUT_I_6<<6)+(P5DOUT_I_7<<7))
#define  P6DOUT_INIT (P6DOUT_I_0+(P6DOUT_I_1<<1)+(P6DOUT_I_2<<2)+(P6DOUT_I_3<<3)+(P6DOUT_I_4<<4)+(P6DOUT_I_5<<5)+(P6DOUT_I_6<<6)+(P6DOUT_I_7<<7))
#define  P7DOUT_INIT (P7DOUT_I_0+(P7DOUT_I_1<<1)+(P7DOUT_I_2<<2)+(P7DOUT_I_3<<3)+(P7DOUT_I_4<<4)+(P7DOUT_I_5<<5)+(P7DOUT_I_6<<6)+(P7DOUT_I_7<<7))
#define  P8DOUT_INIT (P8DOUT_I_0+(P8DOUT_I_1<<1)+(P8DOUT_I_2<<2)+(P8DOUT_I_3<<3)+(P8DOUT_I_4<<4)+(P8DOUT_I_5<<5)+(P8DOUT_I_6<<6)+(P8DOUT_I_7<<7))
#define  P9DOUT_INIT (P9DOUT_I_0+(P9DOUT_I_1<<1)+(P9DOUT_I_2<<2)+(P9DOUT_I_3<<3)+(P9DOUT_I_4<<4)+(P9DOUT_I_5<<5)+(P9DOUT_I_6<<6)+(P9DOUT_I_7<<7))
#define  PADOUT_INIT (PADOUT_I_0+(PADOUT_I_1<<1)+(PADOUT_I_2<<2)+(PADOUT_I_3<<3)+(PADOUT_I_4<<4)+(PADOUT_I_5<<5)+(PADOUT_I_6<<6)+(PADOUT_I_7<<7))
#define  PBDOUT_INIT (PBDOUT_I_0+(PBDOUT_I_1<<1)+(PBDOUT_I_2<<2)+(PBDOUT_I_3<<3)+(PBDOUT_I_4<<4)+(PBDOUT_I_5<<5)+(PBDOUT_I_6<<6)+(PBDOUT_I_7<<7))
#define  PCDOUT_INIT (PCDOUT_I_0+(PCDOUT_I_1<<1)+(PCDOUT_I_2<<2)+(PCDOUT_I_3<<3))
#define  PDDOUT_INIT (PDDOUT_I_0+(PDDOUT_I_1<<1)+(PDDOUT_I_2<<2)+(PDDOUT_I_3<<3)+(PDDOUT_I_4<<4)+(PDDOUT_I_5<<5)+(PDDOUT_I_6<<6)+(PDDOUT_I_7<<7))
#define  PEDOUT_INIT (PEDOUT_I_0+(PEDOUT_I_1<<1)+(PEDOUT_I_2<<2)+(PEDOUT_I_3<<3)+(PEDOUT_I_4<<4)+(PEDOUT_I_5<<5)+(PEDOUT_I_6<<6)+(PEDOUT_I_7<<7))
#define  PFDOUT_INIT (PFDOUT_I_0+(PFDOUT_I_1<<1)+(PFDOUT_I_2<<2)+(PFDOUT_I_3<<3)+(PFDOUT_I_4<<4)+(PFDOUT_I_5<<5)+(PFDOUT_I_6<<6)+(PFDOUT_I_7<<7))

#define  P0DIR_INIT  (P0DIR_I_0+(P0DIR_I_1<<1)+(P0DIR_I_2<<2)+(P0DIR_I_3<<3)+(P0DIR_I_4<<4)+(P0DIR_I_5<<5)+(P0DIR_I_6<<6)+(P0DIR_I_7<<7))
#define  P1DIR_INIT  (P1DIR_I_0+(P1DIR_I_1<<1)+(P1DIR_I_2<<2)+(P1DIR_I_3<<3)+(P1DIR_I_4<<4)+(P1DIR_I_5<<5)+(P1DIR_I_6<<6)+(P1DIR_I_7<<7))
#define  P2DIR_INIT  (P2DIR_I_0+(P2DIR_I_1<<1)+(P2DIR_I_2<<2)+(P2DIR_I_3<<3)+(P2DIR_I_4<<4)+(P2DIR_I_5<<5)+(P2DIR_I_6<<6)+(P2DIR_I_7<<7))
#define  P3DIR_INIT  (P3DIR_I_0+(P3DIR_I_1<<1)+(P3DIR_I_2<<2)+(P3DIR_I_3<<3)+(P3DIR_I_4<<4)+(P3DIR_I_5<<5)+(P3DIR_I_6<<6)+(P3DIR_I_7<<7))
#define  P4DIR_INIT  (P4DIR_I_0+(P4DIR_I_1<<1)+(P4DIR_I_2<<2)+(P4DIR_I_3<<3)+(P4DIR_I_4<<4)+(P4DIR_I_5<<5)+(P4DIR_I_6<<6)+(P4DIR_I_7<<7))
#define  P5DIR_INIT  (P5DIR_I_0+(P5DIR_I_1<<1)+(P5DIR_I_2<<2)+(P5DIR_I_3<<3)+(P5DIR_I_4<<4)+(P5DIR_I_5<<5)+(P5DIR_I_6<<6)+(P5DIR_I_7<<7))
#define  P6DIR_INIT  (P6DIR_I_0+(P6DIR_I_1<<1)+(P6DIR_I_2<<2)+(P6DIR_I_3<<3)+(P6DIR_I_4<<4)+(P6DIR_I_5<<5)+(P6DIR_I_6<<6)+(P6DIR_I_7<<7))
#define  P7DIR_INIT  (P7DIR_I_0+(P7DIR_I_1<<1)+(P7DIR_I_2<<2)+(P7DIR_I_3<<3)+(P7DIR_I_4<<4)+(P7DIR_I_5<<5)+(P7DIR_I_6<<6)+(P7DIR_I_7<<7))
#define  P8DIR_INIT  (P8DIR_I_0+(P8DIR_I_1<<1)+(P8DIR_I_2<<2)+(P8DIR_I_3<<3)+(P8DIR_I_4<<4)+(P8DIR_I_5<<5)+(P8DIR_I_6<<6)+(P8DIR_I_7<<7))
#define  P9DIR_INIT  (P9DIR_I_0+(P9DIR_I_1<<1)+(P9DIR_I_2<<2)+(P9DIR_I_3<<3)+(P9DIR_I_4<<4)+(P9DIR_I_5<<5)+(P9DIR_I_6<<6)+(P9DIR_I_7<<7))
#define  PADIR_INIT  (PADIR_I_0+(PADIR_I_1<<1)+(PADIR_I_2<<2)+(PADIR_I_3<<3)+(PADIR_I_4<<4)+(PADIR_I_5<<5)+(PADIR_I_6<<6)+(PADIR_I_7<<7))
#define  PBDIR_INIT  (PBDIR_I_0+(PBDIR_I_1<<1)+(PBDIR_I_2<<2)+(PBDIR_I_3<<3)+(PBDIR_I_4<<4)+(PBDIR_I_5<<5)+(PBDIR_I_6<<6)+(PBDIR_I_7<<7))
#define  PCDIR_INIT  (PCDIR_I_0+(PCDIR_I_1<<1)+(PCDIR_I_2<<2)+(PCDIR_I_3<<3))
#define  PDDIR_INIT  (PDDIR_I_0+(PDDIR_I_1<<1)+(PDDIR_I_2<<2)+(PDDIR_I_3<<3)+(PDDIR_I_4<<4)+(PDDIR_I_5<<5)+(PDDIR_I_6<<6)+(PDDIR_I_7<<7))
#define  PEDIR_INIT  (PEDIR_I_0+(PEDIR_I_1<<1)+(PEDIR_I_2<<2)+(PEDIR_I_3<<3)+(PEDIR_I_4<<4)+(PEDIR_I_5<<5)+(PEDIR_I_6<<6)+(PEDIR_I_7<<7))
#define  PFDIR_INIT  (PFDIR_I_0+(PFDIR_I_1<<1)+(PFDIR_I_2<<2)+(PFDIR_I_3<<3)+(PFDIR_I_4<<4)+(PFDIR_I_5<<5)+(PFDIR_I_6<<6)+(PFDIR_I_7<<7))

#define  P0PULL_INIT (P0PUE_I_0+(P0PUE_I_1<<1)+(P0PUE_I_2<<2)+(P0PUE_I_3<<3)+(P0PUE_I_4<<4)+(P0PUE_I_5<<5)+(P0PUE_I_6<<6)+(P0PUE_I_7<<7))
#define  P1PULL_INIT (P1PUE_I_0+(P1PUE_I_1<<1)+(P1PUE_I_2<<2)+(P1PUE_I_3<<3)+(P1PUE_I_4<<4)+(P1PUE_I_5<<5)+(P1PUE_I_6<<6)+(P1PUE_I_7<<7))
#define  P2PULL_INIT (P2PUE_I_0+(P2PUE_I_1<<1)+(P2PUE_I_2<<2)+(P2PUE_I_3<<3)+(P2PUE_I_4<<4)+(P2PUE_I_5<<5)+(P2PUE_I_6<<6)+(P2PUE_I_7<<7))
#define  P3PULL_INIT (P3PUE_I_0+(P3PUE_I_1<<1)+(P3PUE_I_2<<2)+(P3PUE_I_3<<3)+(P3PUE_I_4<<4)+(P3PUE_I_5<<5)+(P3PUE_I_6<<6)+(P3PUE_I_7<<7))
#define  P4PULL_INIT (P4PUE_I_0+(P4PUE_I_1<<1)+(P4PUE_I_2<<2)+(P4PUE_I_3<<3)+(P4PUE_I_4<<4)+(P4PUE_I_5<<5)+(P4PUE_I_6<<6)+(P4PUE_I_7<<7))
#define  P5PULL_INIT (P5PUE_I_0+(P5PUE_I_1<<1)+(P5PUE_I_2<<2)+(P5PUE_I_3<<3)+(P5PUE_I_4<<4)+(P5PUE_I_5<<5)+(P5PUE_I_6<<6)+(P5PUE_I_7<<7))
#define  P6PULL_INIT (P6PUE_I_0+(P6PUE_I_1<<1)+(P6PUE_I_2<<2)+(P6PUE_I_3<<3)+(P6PUE_I_4<<4)+(P6PUE_I_5<<5)+(P6PUE_I_6<<6)+(P6PUE_I_7<<7))
#define  P7PULL_INIT (P7PUE_I_0+(P7PUE_I_1<<1)+(P7PUE_I_2<<2)+(P7PUE_I_3<<3)+(P7PUE_I_4<<4)+(P7PUE_I_5<<5)+(P7PUE_I_6<<6)+(P7PUE_I_7<<7))
#define  P8PULL_INIT (P8PUE_I_0+(P8PUE_I_1<<1)+(P8PUE_I_2<<2)+(P8PUE_I_3<<3)+(P8PUE_I_4<<4)+(P8PUE_I_5<<5)+(P8PUE_I_6<<6)+(P8PUE_I_7<<7))
#define  P9PULL_INIT (P9PUE_I_0+(P9PUE_I_1<<1)+(P9PUE_I_2<<2)+(P9PUE_I_3<<3)+(P9PUE_I_4<<4)+(P9PUE_I_5<<5)+(P9PUE_I_6<<6)+(P9PUE_I_7<<7))
#define  PAPULL_INIT (PAPUE_I_0+(PAPUE_I_1<<1)+(PAPUE_I_2<<2)+(PAPUE_I_3<<3)+(PAPUE_I_4<<4)+(PAPUE_I_5<<5)+(PAPUE_I_6<<6)+(PAPUE_I_7<<7))
#define  PBPULL_INIT (PBPUE_I_0+(PBPUE_I_1<<1)+(PBPUE_I_2<<2)+(PBPUE_I_3<<3)+(PBPUE_I_4<<4)+(PBPUE_I_5<<5)+(PBPUE_I_6<<6)+(PBPUE_I_7<<7))
#define  PCPULL_INIT (PCPUE_I_0+(PCPUE_I_1<<1)+(PCPUE_I_2<<2)+(PCPUE_I_3<<3))
#define  PDPULL_INIT (PDPUE_I_0+(PDPUE_I_1<<1)+(PDPUE_I_2<<2)+(PDPUE_I_3<<3)+(PDPUE_I_4<<4)+(PDPUE_I_5<<5)+(PDPUE_I_6<<6)+(PDPUE_I_7<<7))
#define  PEPULL_INIT (PEPUE_I_0+(PEPUE_I_1<<1)+(PEPUE_I_2<<2)+(PEPUE_I_3<<3)+(PEPUE_I_4<<4)+(PEPUE_I_5<<5)+(PEPUE_I_6<<6)+(PEPUE_I_7<<7))
#define  PFPULL_INIT (PFPUE_I_0+(PFPUE_I_1<<1)+(PFPUE_I_2<<2)+(PFPUE_I_3<<3)+(PFPUE_I_4<<4)+(PFPUE_I_5<<5)+(PFPUE_I_6<<6)+(PFPUE_I_7<<7))

#define  P0PUD_INIT  (P0PUD_I_0+(P0PUD_I_1<<1)+(P0PUD_I_2<<2)+(P0PUD_I_3<<3)+(P0PUD_I_4<<4)+(P0PUD_I_5<<5)+(P0PUD_I_6<<6)+(P0PUD_I_7<<7))
#define  P1PUD_INIT  (P1PUD_I_0+(P1PUD_I_1<<1)+(P1PUD_I_2<<2)+(P1PUD_I_3<<3)+(P1PUD_I_4<<4)+(P1PUD_I_5<<5)+(P1PUD_I_6<<6)+(P1PUD_I_7<<7))
#define  P2PUD_INIT  (P2PUD_I_0+(P2PUD_I_1<<1)+(P2PUD_I_2<<2)+(P2PUD_I_3<<3)+(P2PUD_I_4<<4)+(P2PUD_I_5<<5)+(P2PUD_I_6<<6)+(P2PUD_I_7<<7))
#define  P3PUD_INIT  (P3PUD_I_0+(P3PUD_I_1<<1)+(P3PUD_I_2<<2)+(P3PUD_I_3<<3)+(P3PUD_I_4<<4)+(P3PUD_I_5<<5)+(P3PUD_I_6<<6)+(P3PUD_I_7<<7))
#define  P4PUD_INIT  (P4PUD_I_0+(P4PUD_I_1<<1)+(P4PUD_I_2<<2)+(P4PUD_I_3<<3)+(P4PUD_I_4<<4)+(P4PUD_I_5<<5)+(P4PUD_I_6<<6)+(P4PUD_I_7<<7))
#define  P5PUD_INIT  (P5PUD_I_0+(P5PUD_I_1<<1)+(P5PUD_I_2<<2)+(P5PUD_I_3<<3)+(P5PUD_I_4<<4)+(P5PUD_I_5<<5)+(P5PUD_I_6<<6)+(P5PUD_I_7<<7))
#define  P6PUD_INIT  (P6PUD_I_0+(P6PUD_I_1<<1)+(P6PUD_I_2<<2)+(P6PUD_I_3<<3)+(P6PUD_I_4<<4)+(P6PUD_I_5<<5)+(P6PUD_I_6<<6)+(P6PUD_I_7<<7))
#define  P7PUD_INIT  (P7PUD_I_0+(P7PUD_I_1<<1)+(P7PUD_I_2<<2)+(P7PUD_I_3<<3)+(P7PUD_I_4<<4)+(P7PUD_I_5<<5)+(P7PUD_I_6<<6)+(P7PUD_I_7<<7))
#define  P8PUD_INIT  (P8PUD_I_0+(P8PUD_I_1<<1)+(P8PUD_I_2<<2)+(P8PUD_I_3<<3)+(P8PUD_I_4<<4)+(P8PUD_I_5<<5)+(P8PUD_I_6<<6)+(P8PUD_I_7<<7))
#define  P9PUD_INIT  (P9PUD_I_0+(P9PUD_I_1<<1)+(P9PUD_I_2<<2)+(P9PUD_I_3<<3)+(P9PUD_I_4<<4)+(P9PUD_I_5<<5)+(P9PUD_I_6<<6)+(P9PUD_I_7<<7))
#define  PAPUD_INIT  (PAPUD_I_0+(PAPUD_I_1<<1)+(PAPUD_I_2<<2)+(PAPUD_I_3<<3)+(PAPUD_I_4<<4)+(PAPUD_I_5<<5)+(PAPUD_I_6<<6)+(PAPUD_I_7<<7))
#define  PBPUD_INIT  (PBPUD_I_0+(PBPUD_I_1<<1)+(PBPUD_I_2<<2)+(PBPUD_I_3<<3)+(PBPUD_I_4<<4)+(PBPUD_I_5<<5)+(PBPUD_I_6<<6)+(PBPUD_I_7<<7))
#define  PCPUD_INIT  (PCPUD_I_0+(PCPUD_I_1<<1)+(PCPUD_I_2<<2)+(PCPUD_I_3<<3))
#define  PDPUD_INIT  (PDPUD_I_0+(PDPUD_I_1<<1)+(PDPUD_I_2<<2)+(PDPUD_I_3<<3)+(PDPUD_I_4<<4)+(PDPUD_I_5<<5)+(PDPUD_I_6<<6)+(PDPUD_I_7<<7))
#define  PEPUD_INIT  (PEPUD_I_0+(PEPUD_I_1<<1)+(PEPUD_I_2<<2)+(PEPUD_I_3<<3)+(PEPUD_I_4<<4)+(PEPUD_I_5<<5)+(PEPUD_I_6<<6)+(PEPUD_I_7<<7))
#define  PFPUD_INIT  (PFPUD_I_0+(PFPUD_I_1<<1)+(PFPUD_I_2<<2)+(PFPUD_I_3<<3)+(PFPUD_I_4<<4)+(PFPUD_I_5<<5)+(PFPUD_I_6<<6)+(PFPUD_I_7<<7))

#define  P0ENVDD_INIT (P0VDDE_I_0+(P0VDDE_I_1<<1)+(P0VDDE_I_2<<2)+(P0VDDE_I_3<<3)+(P0VDDE_I_4<<4)+(P0VDDE_I_5<<5)+(P0VDDE_I_6<<6)+(P0VDDE_I_7<<7))
#define  P1ENVDD_INIT (P1VDDE_I_0+(P1VDDE_I_1<<1)+(P1VDDE_I_2<<2)+(P1VDDE_I_3<<3)+(P1VDDE_I_4<<4)+(P1VDDE_I_5<<5)+(P1VDDE_I_6<<6)+(P1VDDE_I_7<<7))
#define  P2ENVDD_INIT (P2VDDE_I_0+(P2VDDE_I_1<<1)+(P2VDDE_I_2<<2)+(P2VDDE_I_3<<3)+(P2VDDE_I_4<<4)+(P2VDDE_I_5<<5)+(P2VDDE_I_6<<6)+(P2VDDE_I_7<<7))
#define  P3ENVDD_INIT (P3VDDE_I_0+(P3VDDE_I_1<<1)+(P3VDDE_I_2<<2)+(P3VDDE_I_3<<3)+(P3VDDE_I_4<<4)+(P3VDDE_I_5<<5)+(P3VDDE_I_6<<6)+(P3VDDE_I_7<<7))
#define  P4ENVDD_INIT (P4VDDE_I_0+(P4VDDE_I_1<<1)+(P4VDDE_I_2<<2)+(P4VDDE_I_3<<3)+(P4VDDE_I_4<<4)+(P4VDDE_I_5<<5)+(P4VDDE_I_6<<6)+(P4VDDE_I_7<<7))
#define  P5ENVDD_INIT (P5VDDE_I_0+(P5VDDE_I_1<<1)+(P5VDDE_I_2<<2)+(P5VDDE_I_3<<3)+(P5VDDE_I_4<<4)+(P5VDDE_I_5<<5)+(P5VDDE_I_6<<6)+(P5VDDE_I_7<<7))
#define  P6ENVDD_INIT (P6VDDE_I_0+(P6VDDE_I_1<<1)+(P6VDDE_I_2<<2)+(P6VDDE_I_3<<3)+(P6VDDE_I_4<<4)+(P6VDDE_I_5<<5)+(P6VDDE_I_6<<6)+(P6VDDE_I_7<<7))
#define  P7ENVDD_INIT (P7VDDE_I_0+(P7VDDE_I_1<<1)+(P7VDDE_I_2<<2)+(P7VDDE_I_3<<3)+(P7VDDE_I_4<<4)+(P7VDDE_I_5<<5)+(P7VDDE_I_6<<6)+(P7VDDE_I_7<<7))
#define  P8ENVDD_INIT (P8VDDE_I_0+(P8VDDE_I_1<<1)+(P8VDDE_I_2<<2)+(P8VDDE_I_3<<3)+(P8VDDE_I_4<<4)+(P8VDDE_I_5<<5)+(P8VDDE_I_6<<6)+(P8VDDE_I_7<<7))
#define  P9ENVDD_INIT (P9VDDE_I_0+(P9VDDE_I_1<<1)+(P9VDDE_I_2<<2)+(P9VDDE_I_3<<3)+(P9VDDE_I_4<<4)+(P9VDDE_I_5<<5)+(P9VDDE_I_6<<6)+(P9VDDE_I_7<<7))
#define  PAENVDD_INIT (PAVDDE_I_0+(PAVDDE_I_1<<1)+(PAVDDE_I_2<<2)+(PAVDDE_I_3<<3)+(PAVDDE_I_4<<4)+(PAVDDE_I_5<<5)+(PAVDDE_I_6<<6)+(PAVDDE_I_7<<7))
#define  PBENVDD_INIT (PBVDDE_I_0+(PBVDDE_I_1<<1)+(PBVDDE_I_2<<2)+(PBVDDE_I_3<<3)+(PBVDDE_I_4<<4)+(PBVDDE_I_5<<5)+(PBVDDE_I_6<<6)+(PBVDDE_I_7<<7))
#define  PCENVDD_INIT (PCVDDE_I_0+(PCVDDE_I_1<<1)+(PCVDDE_I_2<<2)+(PCVDDE_I_3<<3))
#define  PDENVDD_INIT (PDVDDE_I_0+(PDVDDE_I_1<<1)+(PDVDDE_I_2<<2)+(PDVDDE_I_3<<3)+(PDVDDE_I_4<<4)+(PDVDDE_I_5<<5)+(PDVDDE_I_6<<6)+(PDVDDE_I_7<<7))
#define  PEENVDD_INIT (PEVDDE_I_0+(PEVDDE_I_1<<1)+(PEVDDE_I_2<<2)+(PEVDDE_I_3<<3)+(PEVDDE_I_4<<4)+(PEVDDE_I_5<<5)+(PEVDDE_I_6<<6)+(PEVDDE_I_7<<7))
#define  PFENVDD_INIT (PFVDDE_I_0+(PFVDDE_I_1<<1)+(PFVDDE_I_2<<2)+(PFVDDE_I_3<<3)+(PFVDDE_I_4<<4)+(PFVDDE_I_5<<5)+(PFVDDE_I_6<<6)+(PFVDDE_I_7<<7))

#define  P0AFKEEP     (P00_AFKEEP+(P01_AFKEEP<<1)+(P02_AFKEEP<<2)+(P03_AFKEEP<<3)+(P04_AFKEEP<<4)+(P05_AFKEEP<<5)+(P06_AFKEEP<<6)+(P07_AFKEEP<<7))
#define  P1AFKEEP     (P10_AFKEEP+(P11_AFKEEP<<1)+(P12_AFKEEP<<2)+(P13_AFKEEP<<3)+(P14_AFKEEP<<4)+(P15_AFKEEP<<5)+(P16_AFKEEP<<6)+(P17_AFKEEP<<7))
#define  P2AFKEEP     (P20_AFKEEP+(P21_AFKEEP<<1)+(P22_AFKEEP<<2)+(P23_AFKEEP<<3)+(P24_AFKEEP<<4)+(P25_AFKEEP<<5)+(P26_AFKEEP<<6)+(P27_AFKEEP<<7))
#define  P3AFKEEP     (P30_AFKEEP+(P31_AFKEEP<<1)+(P32_AFKEEP<<2)+(P33_AFKEEP<<3)+(P34_AFKEEP<<4)+(P35_AFKEEP<<5)+(P36_AFKEEP<<6)+(P37_AFKEEP<<7))
#define  P4AFKEEP     (P40_AFKEEP+(P11_AFKEEP<<1)+(P42_AFKEEP<<2)+(P43_AFKEEP<<3)+(P44_AFKEEP<<4)+(P45_AFKEEP<<5)+(P46_AFKEEP<<6)+(P47_AFKEEP<<7))
#define  P5AFKEEP     (P50_AFKEEP+(P51_AFKEEP<<1)+(P52_AFKEEP<<2)+(P53_AFKEEP<<3)+(P54_AFKEEP<<4)+(P55_AFKEEP<<5)+(P56_AFKEEP<<6)+(P57_AFKEEP<<7))
#define  P6AFKEEP     (P60_AFKEEP+(P61_AFKEEP<<1)+(P62_AFKEEP<<2)+(P63_AFKEEP<<3)+(P64_AFKEEP<<4)+(P65_AFKEEP<<5)+(P66_AFKEEP<<6)+(P67_AFKEEP<<7))
#define  P7AFKEEP     (P70_AFKEEP+(P71_AFKEEP<<1)+(P72_AFKEEP<<2)+(P73_AFKEEP<<3)+(P74_AFKEEP<<4)+(P75_AFKEEP<<5)+(P76_AFKEEP<<6)+(P77_AFKEEP<<7))
#define  P8AFKEEP     (P80_AFKEEP+(P81_AFKEEP<<1)+(P82_AFKEEP<<2)+(P83_AFKEEP<<3)+(P84_AFKEEP<<4)+(P85_AFKEEP<<5)+(P86_AFKEEP<<6)+(P87_AFKEEP<<7))
#define  P9AFKEEP     (P90_AFKEEP+(P91_AFKEEP<<1)+(P92_AFKEEP<<2)+(P93_AFKEEP<<3)+(P94_AFKEEP<<4)+(P95_AFKEEP<<5)+(P96_AFKEEP<<6)+(P97_AFKEEP<<7))
#define  PAAFKEEP     (PA0_AFKEEP+(PA1_AFKEEP<<1)+(PA2_AFKEEP<<2)+(PA3_AFKEEP<<3)+(PA4_AFKEEP<<4)+(PA5_AFKEEP<<5)+(PA6_AFKEEP<<6)+(PA7_AFKEEP<<7))
#define  PBAFKEEP     (PB0_AFKEEP+(PB1_AFKEEP<<1)+(PB2_AFKEEP<<2)+(PB3_AFKEEP<<3)+(PB4_AFKEEP<<4)+(PB5_AFKEEP<<5)+(PB6_AFKEEP<<6)+(PB7_AFKEEP<<7))
#define  PCAFKEEP     (PC0_AFKEEP+(PC1_AFKEEP<<1)+(PC2_AFKEEP<<2)+(PC3_AFKEEP<<3))
#define  PDAFKEEP     (PD0_AFKEEP+(PD1_AFKEEP<<1)+(PD2_AFKEEP<<2)+(PD3_AFKEEP<<3)+(PD4_AFKEEP<<4)+(PD5_AFKEEP<<5)+(PD6_AFKEEP<<6)+(PD7_AFKEEP<<7))
#define  PEAFKEEP     (PE0_AFKEEP+(PE1_AFKEEP<<1)+(PE2_AFKEEP<<2)+(PE3_AFKEEP<<3)+(PE4_AFKEEP<<4)+(PE5_AFKEEP<<5)+(PE6_AFKEEP<<6)+(PE7_AFKEEP<<7))
#define  PFAFKEEP     (PF0_AFKEEP+(PF1_AFKEEP<<1)+(PF2_AFKEEP<<2)+(PF3_AFKEEP<<3)+(PF4_AFKEEP<<4)+(PF5_AFKEEP<<5)+(PF6_AFKEEP<<6)+(PF7_AFKEEP<<7))


#define  SWAKEUP_EN1  ((SPS2_1_SL?SWAKE_AUXP1:P3WE_7)+((SPS2_2_SL?SWAKE_AUXP2:P2WE_6)<<1)+((SPS2_3_SL?SWAKE_AUXP3:P5WE_0)<<2)+((SPS2_1_SL?SWAKE_AUXP1:P3WE_5)<<3)+((SPS2_2_SL?SWAKE_AUXP2:P2WE_7)<<4)+((SPS2_3_SL?SWAKE_AUXP3:P5WE_2)<<5)+(P4WE_2<<6)+(P4WE_3<<7))
#define  SWAKEUP_EN2  (P4WE_4+(P0WE_1<<1)+(P4WE_6<<2)+(P0WE_3<<3)+(P0WE_4<<4)+(P0WE_5<<5)+(SWAKE_MSWC<<6)+(SWAKE_T0OUT<<7))
#define  SWAKEUP_EN3  (SWAKE_ANYKEY ? 0xFF : (PAWE_0+(PAWE_1<<1)+(PAWE_2<<2)+(PAWE_3<<3)+(PAWE_4<<4)+(PAWE_5<<5)+(PAWE_6<<6)+(PAWE_7<<7)))
#define  SWAKEUP_EN4  (P0WE_6+(P4WE_1<<1)+(P6WE_0<<2)+(SWAKE_SMBUS1<<3)+(SWAKE_SMBUS2<<4)+(P0WE_7<<5)+(P1WE_0<<6)+(P1WE_1<<7))
#define  SWAKEUP_EN5  (P2WE_4+(P1WE_3<<1)+(P1WE_4<<2)+(P1WE_5<<3)+(P1WE_7<<5)+(SWAKE_IBF1<<6)+(SWAKE_LRESET<<7))
#define  SWAKEUP_EN6  (P3WE_2+(SWAKE_VDET<<1)+(P7WE_5<<2)+(P2WE_0<<3)+(P7WE_7<<4)+(P5WE_1<<5)+(P5WE_7<<6)+(P5WE_6<<7))
#define  SWAKEUP_EN7  (P7WE_0+(P9WE_0<<3)+(P9WE_1<<4)+(P9WE_2<<5)+(P9WE_3<<6)+(P9WE_4<<7))
#define  SWAKEUP_EN8  (P9WE_5+(P9WE_6<<1)+(P9WE_7<<2)+(P3WE_6<<3)+(P4WE_7<<4)+(P5WE_3<<5)+(P6WE_7<<6)+(P8WE_1<<7))
#define  SWAKEUP_EN9  (P0WE_0+(P0WE_2<<1)+(P2WE_1<<2)+(P2WE_2<<3)+(P2WE_3<<4)+(P3WE_0<<5)+(P3WE_1<<6)+(P3WE_4<<7))
#define  SWAKEUP_ENA  (P4WE_0+(P4WE_5<<1)+(P5WE_4<<2)+(P5WE_5<<3)+(P6WE_6<<4)+(P7WE_3<<5)+(P7WE_4<<6)+(P8WE_7<<7))
#define  SWAKEUP_ENB  (P6WE_5+(P7WE_6<<1)+(P8WE_0<<2)+(P8WE_2<<3)+(P8WE_3<<4)+(P8WE_4<<5)+(P8WE_5<<6)+(P8WE_6<<7))

#define  SWAKEUP_DG1  (P3WP_7+(P2WP_6<<1)+(P5WP_0<<2)+(P3WP_5<<3)+(P2WP_7<<4)+(P5WP_2<<5)+(P4WP_2<<6)+(P4WP_3<<7))
#define  SWAKEUP_DG2  (P4WP_4+(P0WP_1<<1)+(P4WP_6<<2)+(P0WP_3<<3)+(P0WP_4<<4)+(P0WP_5<<5)+(SWAKE_MSWC_ED<<6)+(SWAKE_T0OUT_ED<<7))
#define  SWAKEUP_DG3  (PAWP_0+(PAWP_1<<1)+(PAWP_2<<2)+(PAWP_3<<3)+(PAWP_4<<4)+(PAWP_5<<5)+(PAWP_6<<6)+(PAWP_7<<7))
#define  SWAKEUP_DG4  (P0WP_6+(P4WP_1<<1)+(P6WP_0<<2)+(SWAKE_SMBUS1_ED<<3)+(SWAKE_SMBUS2_ED<<4)+(P0WP_7<<5)+(P1WP_0<<6)+(P1WP_1<<7))
#define  SWAKEUP_DG5  (P2WP_4+(P1WP_3<<1)+(P1WP_4<<2)+(P1WP_5<<3)+(P1WP_7<<5)+(SWAKE_IBF1_ED<<6)+(SWAKE_LRESET_ED<<7))
#define  SWAKEUP_DG6  (P3WP_2+(SWAKE_VDET_ED<<1)+(P7WP_5<<2)+(P2WP_0<<3)+(P7WP_7<<4)+(P5WP_1<<5)+(P5WP_7<<6)+(P5WP_6<<7))
#define  SWAKEUP_DG7  (P7WP_0+(P9WP_0<<3)+(P9WP_1<<4)+(P9WP_2<<5)+(P9WP_3<<6)+(P9WP_4<<7))
#define  SWAKEUP_DG8  (P9WP_5+(P9WP_6<<1)+(P9WP_7<<2)+(P3WP_6<<3)+(P4WP_7<<4)+(P5WP_3<<5)+(P6WP_7<<6)+(P8WP_1<<7))
#define  SWAKEUP_DG9  (P0WP_0+(P0WP_2<<1)+(P2WP_1<<2)+(P2WP_2<<3)+(P2WP_3<<4)+(P3WP_0<<5)+(P3WP_1<<6)+(P3WP_4<<7))
#define  SWAKEUP_DGA  (P4WP_0+(P4WP_5<<1)+(P5WP_4<<2)+(P5WP_5<<3)+(P6WP_6<<4)+(P7WP_3<<5)+(P7WP_4<<6)+(P8WE_7<<7))
#define  SWAKEUP_DGB  (P6WP_5+(P7WP_6<<1)+(P8WP_0<<2)+(P8WP_2<<3)+(P8WP_3<<4)+(P8WP_4<<5)+(P8WP_5<<6)+(P8WE_6<<7))

#define  SWAKEUP_ADG1 (P3WA_7+(P2WA_6<<1)+(P5WA_0<<2)+(P3WA_5<<3)+(P2WA_7<<4)+(P5WA_2<<5)+(P4WA_2<<6)+(P4WA_3<<7))
#define  SWAKEUP_ADG2 (P4WA_4+(P0WA_1<<1)+(P4WA_6<<2)+(P0WA_3<<3)+(P0WA_4<<4)+(P0WA_5<<5))
#define  SWAKEUP_ADG3 (PAWA_0+(PAWA_1<<1)+(PAWA_2<<2)+(PAWA_3<<3)+(PAWA_4<<4)+(PAWA_5<<5)+(PAWA_6<<6)+(PAWA_7<<7))
#define  SWAKEUP_ADG4 (P0WA_6+(P4WA_1<<1)+(P6WA_0<<2)+(P0WA_7<<5)+(P1WA_0<<6)+(P1WA_1<<7))
#define  SWAKEUP_ADG5 (P2WA_4+(P1WA_3<<1)+(P1WA_4<<2)+(P1WA_5<<3)+(P1WA_7<<5))
#define  SWAKEUP_ADG6 (P3WA_2+(P7WA_5<<2)+(P2WA_0<<3)+(P7WA_7<<4)+(P5WA_1<<5)+(P5WA_7<<6)+(P5WA_6<<7))
#define  SWAKEUP_ADG7 (P7WA_0+(P9WA_0<<3)+(P9WA_1<<4)+(P9WA_2<<5)+(P9WA_3<<6)+(P9WA_4<<7))
#define  SWAKEUP_ADG8 (P9WA_5+(P9WA_6<<1)+(P9WA_7<<2)+(P3WA_6<<3)+(P4WA_7<<4)+(P5WA_3<<5)+(P6WA_7<<6)+(P8WA_1<<7))
#define  SWAKEUP_ADG9 (P0WA_0+(P0WA_2<<1)+(P2WA_1<<2)+(P2WA_2<<3)+(P2WA_3<<4)+(P3WA_0<<5)+(P3WA_1<<6)+(P3WA_4<<7))
#define  SWAKEUP_ADGA (P4WA_0+(P4WA_5<<1)+(P5WA_4<<2)+(P5WA_5<<3)+(P6WA_6<<4)+(P7WA_3<<5)+(P7WA_4<<6)+(P8WA_7<<7))
#define  SWAKEUP_ADGB (P6WA_5+(P7WA_6<<1)+(P8WA_0<<2)+(P8WA_2<<3)+(P8WA_3<<4)+(P8WA_4<<5)+(P8WA_5<<6)+(P8WA_6<<7))

#endif
