#include <xc.h>
#define _XTAL_FREQ 20000000
void System_init();          //Initialize GIE and PEIE interrupts in system initialization
void CAN_init();                //we initialize Tx and Rx of CAN bus
void Set_baudrate();
void CAN_write();
void CAN_write2();
int main()
{
    System_init();         //calling
    CAN_init();           //calling function
    Set_baudrate();        //calling
    while(1){
    CAN_write();
    __delay_ms(1000);            //delay 
    CAN_write2();      
    }
}
void System_init()
{
    GIE = 1;          //enable the global 
    PEIE = 1;         //enable pheripherial
}
void  CAN_init()
{
    TRISBbits.RB2 = 0;     //transmitting pin in MCU  Tx
    TRISBbits.RB3 = 1;     //receiving pin in MCU Rx  
}
void Set_baudrate()
{
    CANCON = 0x80;      //setting the configuration mode to set baud rate
    while(CANSTAT != 0x80);      //setting the status register
    BRGCON1 = 0XC1;        //r
    BRGCON2 = 0XAE;        
    BRGCON3 = 0X45;
    CIOCON = 0X20;
    CANCON = 0x08;
}
void CAN_write()
{
     CANCON = 0x08;
     TXB0SIDH = 0x11;                   //Transmitting to address  8F 
     TXB0SIDL = 0xE0;     //
     TXB0DLC = 0X08;
     TXB0D0  = 0X00;
     TXB0D1  = 0X00;
     TXB0D2  = 0X00;
     TXB0D3  = 0XFF;
     TXB0D4  = 0XFF;
     TXB0D5  = 0X00;
     TXB0D6  = 0X00;
     TXB0D7  = 0X00;
     TXB0CON = 0X08;
     CANCON = 0x08;
     
}
void CAN_write2()
{
     CANCON = 0x08;
     TXB0SIDH = 0x13;                   //Transmitting to  address 9F 
     TXB0SIDL = 0xE0;
     TXB0DLC = 0X08;
     TXB0D0  = 0X00;
     TXB0D1  = 0X00;
     TXB0D2  = 0X00;
     TXB0D3  = 0XFF;
     TXB0D4  = 0XFF;
     TXB0D5  = 0X00;
     TXB0D6  = 0X00;
     TXB0D7  = 0X00;
     TXB0CON = 0X08;
     CANCON = 0x08;
     
}
