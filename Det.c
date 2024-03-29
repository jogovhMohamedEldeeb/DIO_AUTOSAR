 /**
 * @File 		Det.c                                           
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR 
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
 
 #include "Det.h"
 
 
/* Variables to store last DET error */
uint16 Det_ModuleId = 0;       /*DET module ID*/
uint8 Det_InstanceId = 0;      /*DET instance ID*/
uint8 Det_ApiId = 0;           /* DET API ID*/
uint8 Det_ErrorId = 0;         /* DET Error ID*/


Std_ReturnType Det_ReportError( uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId )
{
    Det_ModuleId = ModuleId; 
    Det_InstanceId = InstanceId;
    Det_ApiId = ApiId; 
    Det_ErrorId = ErrorId;
    return E_OK;
}