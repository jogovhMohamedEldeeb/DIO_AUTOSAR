 /**
 * @File 		Compiler.h                                            
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR Base - sws compiler abstraction
 * @details 	the file compiler.h provides macros for rhe encapculation of definition and declaration 
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


#ifndef COMPILER_H
#define COMPILER_H
 
#include "Compiler_Cfg.h"

/*
 * Id for the company in the AUTOSAR
 * for example GCC ID = 1000
 */
#define COMPILER_VENDOR_ID                     		1000
/*
 * AUTOSAR Version 4.0.3
 */
#define COMPILER_TYPES_AR_RELEASE_MAJOR_VERSION		 4
#define COMPILER_TYPES_AR_RELEASE_MINOR_VERSION      0
#define COMPILER_TYPES_AR_RELEASE_PATCH_VERSION      3


/*
 * Module Version 1.0.0
 */
#define COMPILER_TYPES_SW_MAJOR_VERSION              1
#define COMPILER_TYPES_SW_MINOR_VERSION              0
#define COMPILER_TYPES_SW_PATCH_VERSION              0


/**
 * @brief The memory class AUTOMATIC shall be provided as empty definition, used for
 *		 the declaration of local pointers.
*/
#define AUTOMATIC 

/**
 * @brief he memory class TYPEDEF shall be provided as empty definition. This memory
 *		  class shall be used within type definitions, where no memory qualifier can be
 *		  specified. This can be necessary for defining pointer types, with e.g. P2VAR,
 *		  where the macros require two parameters. First parameter can be specified in the
 *		  type definition (distance to the memory location referenced by the pointer), but
 *		  the second one (memory allocation of the pointer itself) cannot be defined at this
 *  	  time. Hence, memory class TYPEDEF shall be applied
*/
#define TYPEDEF

/**
 * @brief The compiler abstraction shall provide the NULL_PTR define with a void pointer
 * 		to zero definition.
*/
#define NULL_PTR          ((void *)0)

/* This is used to define the abstraction of compiler keyword inline */
#define INLINE            inline

/* This is used to define the local inline function */
#define LOCAL_INLINE      static inline

/* This is used to define the abstraction of compiler keyword static */
#define STATIC            static

#endif /* ifndef COMPILER_H */