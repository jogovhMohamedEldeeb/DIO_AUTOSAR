/**
 * @File 		MemMap.h                                            
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR Dio Register header.
 * @details 	This file contains the adresses of the register of ECU.
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

#ifndef DIO_REGS_H
#define DIO_REGS_H


/* =====================================================================================================
 * 										VERSION DEFINITION
 * =====================================================================================================*/

/*
 * Module Version 1.0.0
 */
#define DIO_REGS_SW_MAJOR_VERSION           (1U)
#define DIO_REGS_SW_MINOR_VERSION           (0U)
#define DIO_REGS_SW_PATCH_VERSION           (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define DIO_REGS_AR_RELEASE_MAJOR_VERSION   (4U)
#define DIO_REGS_AR_RELEASE_MINOR_VERSION   (0U)
#define DIO_REGS_AR_RELEASE_PATCH_VERSION   (3U)


/* =====================================================================================================
 * 										VERSION CHECK
 * =====================================================================================================*/
 /*
 * AUTOSAR checking between Std_Types and Dio Modules
 */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != DIO_REGS_AR_RELEASE_MAJOR_VERSION) || \
	 (STD_TYPES_AR_RELEASE_MINOR_VERSION != DIO_REGS_AR_RELEASE_MINOR_VERSION) || \
	 (STD_TYPES_AR_RELEASE_PATCH_VERSION != DIO_REGS_AR_RELEASE_PATCH_VERSION))
	#error "The AR version of Std_Types.h does not match the expected version"
#endif

typedef union PORT_UNION 
{
	volatile uint8 Register;
	struct BitField
	{
		volatile uint8 PIN_0 : 1;
		volatile uint8 PIN_1 : 1;
		volatile uint8 PIN_2 : 1;
		volatile uint8 PIN_3 : 1;
		volatile uint8 PIN_4 : 1;
		volatile uint8 PIN_5 : 1;
		volatile uint8 PIN_6 : 1;
		volatile uint8 PIN_7 : 1;
	}BitField;
}PORT_UNION;




#define PORTA          *((volatile uint8 *)(0X3B))
#define PORTB          *((volatile uint8 *)(0X38))
#define PORTC          *((volatile uint8 *)(0X35))
#define PORTD          *((volatile uint8 *)(0X32))


#define PINA           *((volatile uint8 *)(0X39))
#define PINB           *((volatile uint8 *)(0X36))
#define PINC           *((volatile uint8 *)(0X33))
#define PIND           *((volatile uint8 *)(0X30))


#define DDRA          *((volatile uint8 *)(0X3A))
#define DDRB          *((volatile uint8 *)(0X37))
#define DDRC          *((volatile uint8 *)(0X34))
#define DDRD          *((volatile uint8 *)(0X31))

#endif	/* DIO_REGS_H */
