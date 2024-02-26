 /**
 * @File 		Std_Types.h                                            
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR Base - Satandard types definition
 * @details 	AUTOSAR Satandard types header file.
				it contain all types that are used across several modules of the basic software and that are platfrom and compiler independent
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



#ifndef STD_TYPES_H
#define STD_TYPES_H

#include "Platform_Types.h"
#include "Compiler.h"



/*
 * Id for the company in the AUTOSAR
 * for example GCC ID = 1000
 */
#define STD_VENDOR_ID                     		1000

/*
 * AUTOSAR Version 4.0.3
 */
#define STD_TYPES_AR_RELEASE_MAJOR_VERSION		4
#define STD_TYPES_AR_RELEASE_MINOR_VERSION      0
#define STD_TYPES_AR_RELEASE_PATCH_VERSION      3


/*
 * Module Version 1.0.0
 */
#define STD_TYPES_SW_MAJOR_VERSION              1
#define STD_TYPES_SW_MINOR_VERSION              0
#define STD_TYPES_SW_PATCH_VERSION              0

/**
 * @brief  Physical state 5V or 3.3V. 
 * @implements symbolDefinition_enumeration
*/
#define STD_HIGH 		0x01u

/**
 * @brief  Physical state 0v.
 * @implements symbolDefinition_enumeration
*/
#define STD_LOW 		0x00u

/**
 * @brief  logical state active. 
 * @implements symbolDefinition_enumeration
*/
#define STD_ACTIVE 		0x01u

/**
 * @brief  Logical state idle.
 * @implements symbolDefinition_enumeration
*/
#define STD_IDLE 		0x00u

/**
 * @brief  ON state.
 * @implements symbolDefinition_enumeration
*/
#define STD_ON 		   0x01u

/**
 * @brief  OFF state.
 * @implements symbolDefinition_enumeration
*/
#define STD_OFF 	  0x00u

/**
 * @brief  return code for failuer/error.
 * @implements symbolDefinition_enumeration
*/
#define E_NOT_OK 	  0x01u

/**
 * @brief  Because E_OK is already defined within OSEK, the symbol E_OK has to be shared. 
			To avoid name clashes and redefinition problems, the symbols have to be defined in the following way
*/

#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
	/**
	 * @brief success return code.
	*/
	#define E_OK 0x00u
	/**
	 * @brief this type is defined for OSEK compliance.
	*/
	typedef unsigned char StatusType; 
#endif

/**
 * @brief  this type can be used as standard type which with is shared between RTE and BSW module.
 * @implements Std_ReturnType
*/
typedef uint8 Std_ReturnType;

/**
 * @brief  This type shall be used to request the version of a BSW module using the <Module name>_GetVersionInfo() function.
 * @implements Std_VersionInfoType
*/
typedef struct
{
  uint16  vendorID;				/**<@brief vendor ID */
  uint16  moduleID;				/**<@brief BSW module ID */
  uint8  sw_major_version;		/**<@brief BSW module software major version */ 
  uint8  sw_minor_version;		/**<@brief BSW module software minor_version */ 
  uint8  sw_patch_version;		/**<@brief BSW module software patch_version */ 
} Std_VersionInfoType;


#endif /* ifndef STD_TYPES_H */
