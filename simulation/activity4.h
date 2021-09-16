/**
 * @file activity4.c
 * @author SHAIKMUZEEBURRAHIMAN (https://github.com/SHAIKMUZEEBURRAHIMAN/embedded_c_LTTS.git)
 * @brief Function definition of UART serial communication
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include"activity4.h"
/**
 * @brief Port initialization
 * 
 * @param ubrr_value 
 */
void InitUART(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01);

    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

/**
 * @brief write data on UART ports
 * 
 * @param data 
 */
void UARTwrite(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = data;
}
