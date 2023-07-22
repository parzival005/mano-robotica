/* 
 * File:   main.c
 * Author: joeds
 *
 * Created on 23 de mayo de 2022, 11:12 PM
 */

#include "Manorobotica.h"
#include "servo.h"

void main()
{
    ADCON1bits.PCFG = 0x0F;             // Coloca todos los pines como digitales
    Servo_Init();                       // Inicializa la funcion de los servos
    
    while(1)
    {
        Servo_2_Write(0);               // Servo 1, 0°
        __delay_ms(1000);
        
        Servo_2_Write(90);              // Servo 1, 90°
        __delay_ms(1000);
        
        Servo_2_Write(180);             // Servo 1, 180°
        __delay_ms(1000);
    }
}