//blink the led using POT

#include<stdio.h>
#define _XTAL_FREQ 20000000
#define led1 RC0
#define led2 RC1
void main()
{
    TRISA=0x01;
    TRISC=0x00;
    PORTC=0x00;
    ADCON0=0x41;//41
    ADCON1=0xC0;//c0
    unsigned int a=0;
    while(1)
    {
       // ADCON0=0x09;
        __delay_ms(200);
        GO_nDONE=1;
        while(GO_nDONE);
        a=(ADRESH<<8)+ADRESL;
        PORTC =a;
        
    }
    
}
