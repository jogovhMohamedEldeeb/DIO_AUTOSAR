 /**
 * @File 		Dio_PBcfg.c                                           
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR Post Build header file.
 * @details 	Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Dio Driver
 * @Author  	Mohamed Eldeeb                                         
 */
  

 
  
 /******************************************************************************
 * Project 			 : AUTOSAR 4.4.0 MCAL 								       
 * Platform 		 : AVR                 								   
 * Board  			 : ATMEGA32       								           
 * Autosar Version   : 4.4.0   
 * Autosar Revision  : ASR_REL_4_0_REV_000
 * SW Version  		 : 1.0.0               								   
 ******************************************************************************/

#include "Dio.h"
#include "MemMap.h"
#include "Std_Types.h"



/* =====================================================================================================
 * 										VERSION DEFINITION
 * =====================================================================================================*/

/*
 * Module Version 1.0.0
 */
#define DIO_PBCFG_SW_MAJOR_VERSION              (1U)
#define DIO_PBCFG_SW_MINOR_VERSION              (0U)
#define DIO_PBCFG_SW_PATCH_VERSION              (0U)


/*
 * AUTOSAR Version 4.0.3
 */
#define DIO_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define DIO_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define DIO_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)



/* =====================================================================================================
 * 										VERSION CHECK
 * =====================================================================================================*/

/*
 * AUTOSAR Version checking between Dio_PBcfg.c and Dio.h files
 */
#if ((DIO_PBCFG_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION) || \
	 (DIO_PBCFG_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION) || \
	 (DIO_PBCFG_AR_RELEASE_PATCH_VERSION != DIO_AR_RELEASE_PATCH_VERSION))
	#error "The SW version of PBcfg.c does not match the expected version"
#endif

/*
 * Software Version checking between Dio_PBcfg.c and Dio.h files
 */
#if ((DIO_PBCFG_SW_MAJOR_VERSION != DIO_SW_MAJOR_VERSION) || \
	 (DIO_PBCFG_SW_MINOR_VERSION != DIO_SW_MINOR_VERSION) || \
	 (DIO_PBCFG_SW_PATCH_VERSION != DIO_SW_PATCH_VERSION))
	#error "The SW version of PBcfg.c does not match the expected version"
#endif
	
/*
 * PB structure used with Dio_Init API
 */
 
const Dio_ConfigChannel Dio_Configuration[] =
{
	/* Port number	Pin number	Direction	State		*/
	{PORTA_ID,	PIN_A_0,	OUTPUT,		STD_HIGH},
	{PORTA_ID,	PIN_A_1,	OUTPUT,		STD_HIGH},
	{PORTA_ID,	PIN_A_2,	OUTPUT,		STD_HIGH},
	{PORTA_ID,	PIN_A_3,	OUTPUT,		STD_HIGH},
	{PORTA_ID,	PIN_A_4,	OUTPUT,		STD_HIGH},
	{PORTA_ID,	PIN_A_5,	OUTPUT,		STD_HIGH},
	{PORTA_ID,	PIN_A_6,	OUTPUT,		STD_HIGH},
	{PORTA_ID,	PIN_A_7,	OUTPUT,		STD_HIGH},
	
	{PORTB_ID,	PIN_B_0,	OUTPUT,		STD_HIGH},
	{PORTB_ID,	PIN_B_1,	OUTPUT,		STD_HIGH},
	{PORTB_ID,	PIN_B_2,	OUTPUT,		STD_HIGH},
	{PORTB_ID,	PIN_B_3,	OUTPUT,		STD_HIGH},
	{PORTB_ID,	PIN_B_4,	OUTPUT,		STD_HIGH},
	{PORTB_ID,	PIN_B_5,	OUTPUT,		STD_HIGH},
	{PORTB_ID,	PIN_B_6,	OUTPUT,		STD_HIGH},
	{PORTB_ID,	PIN_B_7,	OUTPUT,		STD_HIGH},
	
	{PORTC_ID,	PIN_C_0,	OUTPUT,		STD_HIGH},
	{PORTC_ID,	PIN_C_1,	OUTPUT,		STD_HIGH},
	{PORTC_ID,	PIN_C_2,	OUTPUT,		STD_HIGH},
	{PORTC_ID,	PIN_C_3,	OUTPUT,		STD_HIGH},
	{PORTC_ID,	PIN_C_4,	OUTPUT,		STD_HIGH},
	{PORTC_ID,	PIN_C_5,	OUTPUT,		STD_HIGH},
	{PORTC_ID,	PIN_C_6,	OUTPUT,		STD_HIGH},
	{PORTC_ID,	PIN_C_7,	OUTPUT,		STD_HIGH},
	
	{PORTD_ID,	PIN_D_0,	OUTPUT,		STD_HIGH},
	{PORTD_ID,	PIN_D_1,	OUTPUT,		STD_HIGH},
	{PORTD_ID,	PIN_D_2,	OUTPUT,		STD_HIGH},
	{PORTD_ID,	PIN_D_3,	OUTPUT,		STD_HIGH},
	{PORTD_ID,	PIN_D_4,	OUTPUT,		STD_HIGH},
	{PORTD_ID,	PIN_D_5,	OUTPUT,		STD_HIGH},
	{PORTD_ID,	PIN_D_6,	OUTPUT,		STD_HIGH},
	{PORTD_ID,	PIN_D_7,	OUTPUT,		STD_HIGH},
}


const Dio_ConfigType Dio_ConfigurationSet =
{
	NULL_PTR,       		         /* PORTA  PIN_A_0 */	/* &Dio_Configuration[PIN_A_0] */
	NULL_PTR,       		         /* PORTA  PIN_A_1 */	/* &Dio_Configuration[PIN_A_1] */
	NULL_PTR,       		         /* PORTA  PIN_A_2 */	/* &Dio_Configuration[PIN_A_2] */
	NULL_PTR,       		         /* PORTA  PIN_A_3 */	/* &Dio_Configuration[PIN_A_3] */
	NULL_PTR,    					 /* PORTA  PIN_A_4 */	/* &Dio_Configuration[PIN_A_4] */
	NULL_PTR,       		         /* PORTA  PIN_A_5 */	/* &Dio_Configuration[PIN_A_5] */
	NULL_PTR,       		         /* PORTA  PIN_A_6 */	/* &Dio_Configuration[PIN_A_6] */
	NULL_PTR,       		         /* PORTA  PIN_A_7 */	/* &Dio_Configuration[PIN_A_7] */
	&Dio_Configuration[PIN_B_0],     /* PORTB  PIN_B_0 */	/* &Dio_Configuration[PIN_B_0] */
	NULL_PTR,       		         /* PORTB  PIN_B_1 */	/* &Dio_Configuration[PIN_B_1] */
	&Dio_Configuration[PIN_B_2],     /* PORTB  PIN_B_2 */	/* &Dio_Configuration[PIN_B_2] */
	NULL_PTR,       		         /* PORTB  PIN_B_3 */	/* &Dio_Configuration[PIN_B_3] */
	&Dio_Configuration[PIN_B_4],     /* PORTB  PIN_B_4 */	/* &Dio_Configuration[PIN_B_4] */
	NULL_PTR,       		         /* PORTB  PIN_B_5 */	/* &Dio_Configuration[PIN_B_5] */
	NULL_PTR,       		         /* PORTB  PIN_B_6 */	/* &Dio_Configuration[PIN_B_6] */
	NULL_PTR,       		         /* PORTB  PIN_B_7 */	/* &Dio_Configuration[PIN_B_7] */
	NULL_PTR,     					 /* PORTC  PIN_C_0 */	/* &Dio_Configuration[PIN_C_0] */
	NULL_PTR,     					 /* PORTC  PIN_C_1 */	/* &Dio_Configuration[PIN_C_1] */
	NULL_PTR,     					 /* PORTC  PIN_C_2 */	/* &Dio_Configuration[PIN_C_2] */
	NULL_PTR,       		         /* PORTC  PIN_C_3 */	/* &Dio_Configuration[PIN_C_3] */
	NULL_PTR,       		         /* PORTC  PIN_C_4 */	/* &Dio_Configuration[PIN_C_4] */
	NULL_PTR,       		         /* PORTC  PIN_C_5 */	/* &Dio_Configuration[PIN_C_5] */
	NULL_PTR,       		         /* PORTC  PIN_C_6 */	/* &Dio_Configuration[PIN_C_6] */
	NULL_PTR,       		         /* PORTC  PIN_C_7 */	/* &Dio_Configuration[PIN_C_7] */
	NULL_PTR,       		         /* PORTD  PIN_D_0 */	/* &Dio_Configuration[PIN_D_0] */
	NULL_PTR,       		         /* PORTD  PIN_D_1 */	/* &Dio_Configuration[PIN_D_1] */
	NULL_PTR,      		             /* PORTD  PIN_D_2 */	/* &Dio_Configuration[PIN_D_2] */
	NULL_PTR,       		         /* PORTD  PIN_D_3 */	/* &Dio_Configuration[PIN_D_3] */
	NULL_PTR,       		         /* PORTD  PIN_D_4 */	/* &Dio_Configuration[PIN_D_4] */
	NULL_PTR,       		         /* PORTD  PIN_D_5 */	/* &Dio_Configuration[PIN_D_5] */
	NULL_PTR,       		         /* PORTD  PIN_D_6 */	/* &Dio_Configuration[PIN_D_6] */
	NULL_PTR       		             /* PORTD  PIN_D_7 */	/* &Dio_Configuration[PIN_D_7] */
};
	


