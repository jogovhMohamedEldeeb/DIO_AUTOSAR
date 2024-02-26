 /**
 * @File 		Compiler_Cfg.h                                            
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR 
 * @details 	
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


#ifndef COMMON_MACROS_H
#define COMMON_MACROS_H


/* =============================================================================
 * 							    MACROS
 * ============================================================================*/
 
#define GET_BIT(_REG,_BIT) 			((_REG&(1<<_BIT))>>_BIT)
#define SET_BIT(_REG,_BIT) 			(_REG|=(1<<_BIT))
#define CLEAR_BIT(_REG,_BIT) 		(_REG&=(~(1<<_BIT)))
#define TOGGLE_BIT(_REG,_BIT) 		(_REG^=(1<<_BIT))

#define ROR(_REG,num) 				( _REG = (_REG>>num) | (_REG << ((sizeof(_REG) * 8)-num)) ) /* right rotation */
#define ROL(_REG,num) 				( _REG = (_REG<<num) | (_REG >> ((sizeof(_REG) * 8)-num)) )
#define BIT_IS_SET(_REG,_BIT) 		( _REG & (1<<_BIT) )
#define BIT_IS_CLEAR(_REG,_BIT) 	( !(_REG & (1<<_BIT)) )

#endif /* COMMON_MACROS_H */