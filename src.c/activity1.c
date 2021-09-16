/**
 * @file activity1.c 
 * @author SHAIKMUZEEBURRAHIMAN (https://github.com/SHAIKMUZEEBURRAHIMAN/embedded_c_LTTS.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
// include files
#include<avr/io.h>
#include "activity1.h"
/**
 * @brief Change the state of the LED Pin according to the value of state
 * 
 * @param state Pin level to which the LED Pin should be set
 */
void ledstat(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void InitLED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);
}
