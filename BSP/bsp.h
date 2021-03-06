/*
*********************************************************************************************************
*
*                                        BOARD SUPPORT PACKAGE
*
*                                     ST Microelectronics STM32
*                                              with the
*                                   STM3210B-EVAL Evaluation Board
*
* Filename      : bsp.h
* Version       : V1.00 
* Programmer(s) : Brian Nagel
* Modified By   : gnlin
*********************************************************************************************************
*/

#ifndef __BSP_H
#define __BSP_H

/*
*********************************************************************************************************
*                                                 EXTERNS
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                              INCLUDE FILES
*********************************************************************************************************
*/
#include <includes.h>

/*
*********************************************************************************************************
*                                               INT DEFINES
*********************************************************************************************************
*/
#define  BSP_INT_ID_WWDG								   0
#define  BSP_INT_ID_PVD									   1
#define  BSP_INT_ID_TAMPER								   2
#define  BSP_INT_ID_RTC									   3	/* RTC global Interrupt                                 */

#define  RTC_Second_Prio                                   3

void     BSP_IntHandlerRTC           (void);
void     rtc_isr(void);
void     BSP_IntHandlerWWDG          (void);
void     BSP_IntHandlerPVD           (void); 
void     BSP_IntHandlerTAMPER        (void);  
/*
*********************************************************************************************************
*                                           FUNCTION PROTOTYPES
*********************************************************************************************************
*/

void        BSP_Init(void);
void        BSP_IntDisAll(void);
CPU_INT32U  BSP_CPU_ClkFreq(void);
INT32U      OS_CPU_SysTickClkFreq(void);

/*
*********************************************************************************************************
*                                              LED SERVICES
*********************************************************************************************************
*/
void        BSP_Led(BOOLEAN Light);
void        BSP_Led_Toggle(void);
void        BSP_Led_Init(void);

#endif /* __BSP_H */
