/**
 * @file activity3.c
 * @author SHAIKMUZEEBURAHIMAN (https://github.com/SHAIKMUZEEBURRAHIMAN/embedded_c_LTTS.git)
 * @brief Configure the PWM wave according to temperature
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"activity3.h"
#include<util/delay.h>
#include<avr/io.h>

/**
 * @brief initializing timer and counter register
 * 
 */
void InitPWM(void)
{
    /*Configuring the registers and ports*/
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);

}
/**
 * @brief Output with respect to analog input
 * 
 * @param ADC_val 
 */
char OutPWM (uint16_t ADC_val)
{
    
    char temperature;

    if((ADC_val>=0) && (ADC_val<=209)){

        OCR1A = 205; //20% duty cycle
        temperature = 20;
        _delay_ms(20);
    }
    else if((ADC_val>=210) && (ADC_val<=509)){

        OCR1A = 410; //40% duty cycle
        temperature = 25;
       _delay_ms(20);
    }
    else if((ADC_val>=510) && (ADC_val<=709)){

        OCR1A = 717;//70% duty cycle
        temperature = 29;
        _delay_ms(20);
    }
    else if((ADC_val>=710) && (ADC_val<=1024)){

        OCR1A = 973; //95% duty cycle
        temperature = 33;
        _delay_ms(20);
    }
    else{
        OCR1A = 0; //0% output
        temperature = 0;
    }
    return temperature;
}
