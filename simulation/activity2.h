/**
 * @file activity2.h
 * @author shaikmuzeeburrahiman (https://github.com/shaikmuzeeburrahiman/Embedded_C_LTTS.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _activity2_h_
#define _activity2_h_

/**
 * @brief Reading the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);
void InitADC(); 
#endif /** __activity2_h_ */
