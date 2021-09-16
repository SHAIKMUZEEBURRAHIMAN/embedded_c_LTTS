/**
 * @file activity3.h
 * @author shaikmuzeeburrahiman (https://github.com/shaikmuzeeburrahiman/Embedded_C_LTTS.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __activity3_h__
#define __activity3_h__
#include<avr/io.h>
/**
 * @brief Function definition
 * 
 * @param temp_value 
 * @return char
 */
char OutPWM(uint16_t temp_value);
void InitPWM(void);
#endif
