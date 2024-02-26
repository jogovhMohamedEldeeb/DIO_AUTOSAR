 /**
 * @File 		Platform_Types.h                                            
 * @Version 	1.0.0                                                                                                   
 * @brief   	AUTOSAR Base - platfrom depndend data type definitions
 * @details 	AUTOSAR platfrom header file.
				it contan all platfrom depndent types and symbol
				Those types must be abstracted in order to become platfrom and compiler independent 
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



#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H



/*
 * Id for the company in the AUTOSAR
 * for example GCC ID = 1000
 */
#define PLATFORM_VENDOR_ID                     		1000

/*
 * AUTOSAR Version 4.0.3
 */
#define PLATFORM_TYPES_AR_RELEASE_MAJOR_VERSION		 4
#define PLATFORM_TYPES_AR_RELEASE_MINOR_VERSION      0
#define PLATFORM_TYPES_AR_RELEASE_PATCH_VERSION      3


/*
 * Module Version 1.0.0
 */
#define PLATFORM_TYPES_SW_MAJOR_VERSION              1
#define PLATFORM_TYPES_SW_MINOR_VERSION              0
#define PLATFORM_TYPES_SW_PATCH_VERSION              0

/**
 * @brief  8bit Type processor.
 * @implements CPU_TYPE_Enumeration
*/
#define CPU_TYPE_8		8

/**
 * @brief  16bit Type processor.
 * @implements CPU_TYPE_Enumeration
*/
#define CPU_TYPE_16		16

/**
 * @brief  32bit Type processor.
 * @implements CPU_TYPE_Enumeration
*/
#define CPU_TYPE_32		32

/**
 * @brief  64bit Type processor.
 * @implements CPU_TYPE_Enumeration
*/
#define CPU_TYPE_64		64

/**
 * @brief  MSB FIRST processor.
 * @implements CPU_BIT_ORDER_Enumeration
*/
#define MSB_FIRST		0

/**
 * @brief  LSB FIRST processor.
 * @implements CPU_BIT_ORDER_Enumeration
*/
#define LSB_FIRST		1		

/**
 * @brief  HIGH BYTE FIRST processor.
 * @implements CPU_BYTE_ORDER_Enumeration
*/
#define HIGH_BYTE_FIRST		1

/**
 * @brief  LOW BYTE FIRST processor.
 * @implements CPU_BYTE_ORDER_Enumeration
*/
#define LOW_BYTE_FIRST		0

/**
 * @brief   Type processor.
 * @implements CPU_TYPE_Enumeration
*/
#define CPU_TYPE			(CPU_TYPE_8)


/**
 * @brief   Bit order on register level.
 * @implements CPU_BIT_ORDER_Enumeration
*/
#define CPU_BIT_ORDER		(LSB_FIRST)


/**
 * @brief  the byte order on memory level shall be indicated in the platform types header fille using the symbol CPU_BYTE_ORDER.
 * @implements CPU_BYTE_ORDER_Enumeration
*/
#define CPU_BYTE_ORDER		(LOW_BYTE_FIRST)

#ifndef TRUE
	/**
	 * @brief   Boolean true value .
	 * @implements TRUE_FALSE_Enumeration
	*/
	#define TRUE 1
#endif
#ifndef FALSE
	/**
	 * @brief   Boolean false value .
	 * @implements TRUE_FALSE_Enumeration
	*/
	#define FALSE 0
#endif

/**********************************************************************
					STRUCTURES AND OTHER TYPEDEFS
***********************************************************************/
#if (CPU_TYPE == CPU_TYPE_64)
	/**
	 * @brief   the satndard AUTOSAR type boolean shall be implemented basis of an eight bits long unsigned interger.
	 * @implements boolean_type
	*/
	typedef unsigned char         boolean;
	/**
	 * @brief   unsigned 8 bit integer with range of 0 .. 255 (0x00..0xFF)  - 8 bit .
	 * @implements uint8_type
	*/
	typedef unsigned char         uint8;
	/**
	 * @brief   unsigned 16 bit integer with range of 0 .. 65535 (0x0000..0xFFFF) - 16 bit .
	 * @implements uint16_type
	*/
	typedef unsigned short         uint16;
	/**
	 * @brief   unsigned 32 bit integer with range of  0 .. 4294967295 (0x000000..0xFFFFFFFF) - 32 bit .
	 * @implements uint32_type
	*/
	typedef unsigned int         uint32;
	/**
	 * @brief   unsigned 64 bit integer with range of  0 .. 18446744073709551615 (0x000000000000..0xFFFFFFFFFFFFFFFF) - 64 bit .
	 * @implements uint64_type
	*/
	typedef unsigned long long   uint64;
	/**
	 * @brief   signed 8 bit integer with range of  -128..+127 (0x80..0x7F) - 7 bit + 1 sign bit .
	 * @implements sint8_type
	*/
	typedef signed char         sint8;
	/**
	 * @brief   signed 16 bit integer with range of  -32768..+32767 (0x8000..0x7FFF) - 15 bit + 1 sign bit .
	 * @implements sint16_type
	*/
	typedef signed short        sint16;
	/**
	 * @brief   signed 32 bit integer with range of  -2147483648..+2147483647 (0x80000000..0x7FFFFFFF) - 31 bit + 1 sign bit .
	 * @implements sint32_type
	*/
	typedef signed int         sint32;
	/**
	 * @brief   signed 64 bit integer with range of  -9223372036854775808..9223372036854775807 (0x8000000000000000 ..0x7FFFFFFFFFFFFFFF) - 63 bit + 1 sign bit .
	 * @implements sint64_type
	*/
	typedef signed long long   sint64;
	/**
	 * @brief   unsigned integer at least 8 bit long . Range of at least  0..255(0x00..0xFF) - 8 bit .
	 * @implements uint8_least_type
	*/
	typedef unsigned int   uint8_least;
	/**
	 * @brief   unsigned integer at least 32 bit long . Range of at least   0..4294967295(0x00000000..0xFFFFFFFF) - 32 bit .
	 * @implements uint32_least_type
	*/
	typedef unsigned int   uint32_least;
	/**
	 * @brief    32 bit floating point data type.
	 * @implements float32_least_type
	*/
	typedef unsigned float   float32;
	/**
	 * @brief   64 bit floating point data type.
	 * @implements float64_least_type
	*/
	typedef unsigned double   float64;
#elif (CPU_TYPE == CPU_TYPE_32)
	/**
	 * @brief   the satndard AUTOSAR type boolean shall be implemented basis of an eight bits long unsigned interger.
	 * @implements boolean_type
	*/
	typedef unsigned char         boolean;
	/**
	 * @brief   unsigned 8 bit integer with range of 0 .. 255 (0x00..0xFF)  - 8 bit .
	 * @implements uint8_type
	*/
	typedef unsigned char         uint8;
	/**
	 * @brief   unsigned 16 bit integer with range of 0 .. 65535 (0x0000..0xFFFF) - 16 bit .
	 * @implements uint16_type
	*/
	typedef unsigned short         uint16;
	/**
	 * @brief   unsigned 32 bit integer with range of  0 .. 4294967295 (0x000000..0xFFFFFFFF) - 32 bit .
	 * @implements uint32_type
	*/
	typedef unsigned int         uint32;
	/**
	 * @brief   unsigned 64 bit integer with range of  0 .. 18446744073709551615 (0x000000000000..0xFFFFFFFFFFFFFFFF) - 64 bit .
	 * @implements uint64_type
	*/
	typedef unsigned long long   uint64;
	/**
	 * @brief   signed 8 bit integer with range of  -128..+127 (0x80..0x7F) - 7 bit + 1 sign bit .
	 * @implements sint8_type
	*/
	typedef signed char         sint8;
	/**
	 * @brief   signed 16 bit integer with range of  -32768..+32767 (0x8000..0x7FFF) - 15 bit + 1 sign bit .
	 * @implements sint16_type
	*/
	typedef signed short        sint16;
	/**
	 * @brief   signed 32 bit integer with range of  -2147483648..+2147483647 (0x80000000..0x7FFFFFFF) - 31 bit + 1 sign bit .
	 * @implements sint32_type
	*/
	typedef signed int         sint32;
	/**
	 * @brief   signed 64 bit integer with range of  -9223372036854775808..9223372036854775807 (0x8000000000000000 ..0x7FFFFFFFFFFFFFFF) - 63 bit + 1 sign bit .
	 * @implements sint64_type
	*/
	typedef signed long long   sint64;
	/**
	 * @brief   unsigned integer at least 8 bit long . Range of at least  0..255(0x00..0xFF) - 8 bit .
	 * @implements uint8_least_type
	*/
	typedef unsigned int   uint8_least;
	/**
	 * @brief   unsigned integer at least 32 bit long . Range of at least   0..4294967295(0x00000000..0xFFFFFFFF) - 32 bit .
	 * @implements uint32_least_type
	*/
	typedef unsigned int   uint32_least;
	/**
	 * @brief    32 bit floating point data type.
	 * @implements float32_least_type
	*/
	typedef unsigned float   float32;
	/**
	 * @brief   64 bit floating point data type.
	 * @implements float64_least_type
	*/
	typedef unsigned double   float64;
#elif (CPU_TYPE == CPU_TYPE_16)
	/**
	 * @brief   the satndard AUTOSAR type boolean shall be implemented basis of an eight bits long unsigned interger.
	 * @implements boolean_type
	*/
	typedef unsigned char         boolean;
	/**
	 * @brief   unsigned 8 bit integer with range of 0 .. 255 (0x00..0xFF)  - 8 bit .
	 * @implements uint8_type
	*/
	typedef unsigned char         uint8;
	/**
	 * @brief   unsigned 16 bit integer with range of 0 .. 65535 (0x0000..0xFFFF) - 16 bit .
	 * @implements uint16_type
	*/
	typedef unsigned short         uint16;
	/**
	 * @brief   unsigned 32 bit integer with range of  0 .. 4294967295 (0x000000..0xFFFFFFFF) - 32 bit .
	 * @implements uint32_type
	*/
	typedef unsigned int         uint32;
	/**
	 * @brief   unsigned 64 bit integer with range of  0 .. 18446744073709551615 (0x000000000000..0xFFFFFFFFFFFFFFFF) - 64 bit .
	 * @implements uint64_type
	*/
	typedef unsigned long long   uint64;
	/**
	 * @brief   signed 8 bit integer with range of  -128..+127 (0x80..0x7F) - 7 bit + 1 sign bit .
	 * @implements sint8_type
	*/
	typedef signed char         sint8;
	/**
	 * @brief   signed 16 bit integer with range of  -32768..+32767 (0x8000..0x7FFF) - 15 bit + 1 sign bit .
	 * @implements sint16_type
	*/
	typedef signed short        sint16;
	/**
	 * @brief   signed 32 bit integer with range of  -2147483648..+2147483647 (0x80000000..0x7FFFFFFF) - 31 bit + 1 sign bit .
	 * @implements sint32_type
	*/
	typedef signed int         sint32;
	/**
	 * @brief   signed 64 bit integer with range of  -9223372036854775808..9223372036854775807 (0x8000000000000000 ..0x7FFFFFFFFFFFFFFF) - 63 bit + 1 sign bit .
	 * @implements sint64_type
	*/
	typedef signed long long   sint64;
	/**
	 * @brief   unsigned integer at least 8 bit long . Range of at least  0..255(0x00..0xFF) - 8 bit .
	 * @implements uint8_least_type
	*/
	typedef unsigned int   uint8_least;
	/**
	 * @brief   unsigned integer at least 32 bit long . Range of at least   0..4294967295(0x00000000..0xFFFFFFFF) - 32 bit .
	 * @implements uint32_least_type
	*/
	typedef unsigned int   uint32_least;
	/**
	 * @brief    32 bit floating point data type.
	 * @implements float32_least_type
	*/
	typedef unsigned float   float32;
	/**
	 * @brief   64 bit floating point data type.
	 * @implements float64_least_type
	*/
	typedef unsigned double   float64;
#endif

#endif  /* ifndef PLATFORM_TYPES_H */