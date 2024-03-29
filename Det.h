 /**
 * @File 		Det.h                                           
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR Det header file.
 * @details 	Det stores the development errors reported by other modules.
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
 

#ifndef DET_H
#define DET_H


/*
 * Id for the company in the AUTOSAR
 * for example GCC ID = 1000
 */
#define DET_VENDOR_ID                 (1000U)


/*
 * Det Module Id
 */
#define DET_MODULE_ID                 (15U)


/*
 * Instance Id
 */
#define DET_INSTANCE_ID               (0U)


/*
 * Det Software Module Version 1.0.0
 */
#define DET_SW_MAJOR_VERSION          (1U)
#define DET_SW_MINOR_VERSION          (0U)
#define DET_SW_PATCH_VERSION          (0U)


/*
 * AUTOSAR Version 4.0.3
 */
#define DET_AR_MAJOR_VERSION          (4U)
#define DET_AR_MINOR_VERSION          (0U)
#define DET_AR_PATCH_VERSION          (3U)


/*
 * Standard AUTOSAR types
 */
#include "Std_Types.h"

/*
 * AUTOSAR checking between Std Types and Det Modules
 */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != DET_AR_MAJOR_VERSION) || \
	 (STD_TYPES_AR_RELEASE_MINOR_VERSION != DET_AR_MINOR_VERSION) || \
	 (STD_TYPES_AR_RELEASE_PATCH_VERSION != DET_AR_PATCH_VERSION))
	#error "The AR version of Std_Types.h does not match the expected version"
#endif

/*******************************************************************************
 *                      External Variables                                     
 *******************************************************************************/ 

extern uint16 Det_ModuleId;       /*DET module ID*/
extern uint8 Det_InstanceId;      /*DET instance ID*/
extern uint8 Det_ApiId;           /* DET API ID*/
extern uint8 Det_ErrorId;         /* DET Error ID*/

Std_ReturnType Det_ReportError(uint16 ModuleId,
							   uint8 InstanceId,
							   uint8 ApiId,
							   uint8 ErrorId );
#endif /* DET_H */