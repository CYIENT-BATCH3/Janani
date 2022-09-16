#include<stdio.h>
#define _XTAL_FREQ 20000000
int main()
{
TRISCbits.TRISC0=0;//setting direction as output
TRISDbits.TRISD0=0;//setting direction as output
PORTBbits.RB0=1;//switch 1
PORTBbits.RB1=1;//switch 2
RBPU=0;
while(1)
{
    if(RB0==0)
    {
        for(int i=0;i<5;i++)
        {
         PORTCbits.RC0= 1;__delay_ms(500);
         PORTCbits.RC0= 0;__delay_ms(500);
        }
    
        for(int i=0;i<3;i++)
        {
          PORTDbits.RD0= 1;__delay_ms(500);
          PORTDbits.RD0= 0; __delay_ms(500);
        }
    }
    if(RB1==0)
    {
        for(int i=0;i<3;i++)
        {
        PORTCbits.RC0=1;__delay_ms(500);
        PORTCbits.RC0=0;__delay_ms(500);
        }
   
        for(int i=0;i<5;i++)
        {
       PORTDbits.RD0=1;__delay_ms(500);
       PORTDbits.RD0=0;__delay_ms(500);
        }
    }
}
}
