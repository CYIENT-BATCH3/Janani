*/Algorithm:
1.start
2.set configuration bits for PIC18f458.
3.set crystal frequency to 2mhz.
4.perform functions for CAN operations modes like set mode,get mode,initialize,,set baud rate,set mask
  set filter mask, CAN read and CAN write.
5.consider a message of 0x432 to ECU of bus master is tranmsmitted in that bits 3 to 7 consider as data (AA).
  Other bits consider as 0x00.
6.consider another message of 0x932 from other ECU for recieving purpose.here the the third bit is considerd for 
  checking the status of the door.
7.if the message ID 432 from ECU1 is true then the reciever ECUs third bit will tell the staus of the door.
8.the door status be 0x01 for opening of door and 0x00 for closing of door.
9.stop.
/*


#include <xc.h>
#define _XTAL_FREQ 20000000
char data_array[11];
void System_init()
{
    GIE = 1;          //enable the global 
    PEIE = 1;         //enable peripheral
    
}
void  CAN_init()
{
    TRISBbits.RB2 = 0;     //transmitting pin in MCU  Tx
    TRISBbits.RB3 = 1;     //receiving pin in MCU Rx  
    PIE3bits.RXB0IE=1;
    IPR3bits.RXB0IP=1;
}
void Set_baudrate()
{
    CANCON = 0x80;      //setting the configuration mode to set baud rate
    while(CANSTAT != 0x80);      //setting the status register
    BRGCON1 = 0XC1;        //r
    BRGCON2 = 0XAE;        
    BRGCON3 = 0X45;
   // CIOCON = 0X20;
    CANCON = 0x0E;
}

void CAN_mf()
{
    //CANCON=0x80;
    RXM0SIDH=0X00;
    RXM0SIDL=0X00;
    RXF0SIDH= 0X00;
    RXF0SIDL= 0X00;
    RXB0CON=0x00;  
   // CANCON=0x0E;//
    
}

void CAN_read()
{
    CANCON=0x0E;
    RXB0CON=0X00;
    data_array[0]=RXB0D0;
    data_array[1]=RXB0D1;
    data_array[2]=RXB0D2;
    data_array[3]=RXB0D3;
    data_array[4]=RXB0D4;
    data_array[5]=RXB0D5;
    data_array[6]=RXB0D6;
    data_array[7]=RXB0D7;
    data_array[8]=RXB0DLC;
    data_array[9]=RXB0SIDL;
    data_array[10]=RXB0SIDH;
    RXB0CONbits.RXFUL=0;
    //PORTBbits.RB0=0;
    
}
void __interrupt() ISR1()
{
    if(RXB0IF)
    {
        RXB0IF=0;
    CAN_read(); 
    }
}

void CAN_write()
{
     CANCON = 0x08;
     TXB0SIDH = 0x00;                   //Transmitting to  address 932 
     TXB0SIDL = 0x08;
     TXB0EIDH=0x09;
     TXB0EIDL=0x32;
     TXB0DLC = 0X08;
     TXB0D0  = 0X22;
     TXB0D1  = 0X22;
     TXB0D2  = 0X22;
     TXB0D3  = 0X01;
     TXB0D4  = 0X22;
     TXB0D5  = 0X22;
     TXB0D6  = 0X22;
     TXB0D7  = 0X22;
     TXB0CON = 0X08;
     CANCON = 0x08;
     
}
void CAN_write2()
{
     CANCON = 0x08;
     TXB0SIDH = 0x00;                   //Transmitting to  address 932
     TXB0SIDL = 0x08;
     TXB0EIDH= 0x09;
     TXB0EIDL= 0x32;
     TXB0DLC = 0X08;
     TXB0D0  = 0X11;
     TXB0D1  = 0X11;
     TXB0D2  = 0X11;
     TXB0D3  = 0X00;
     TXB0D4  = 0X11;
     TXB0D5  = 0X11;
     TXB0D6  = 0X11;
     TXB0D7  = 0X11;
     TXB0CON = 0X08;
     CANCON = 0x08;
     
}
int main()//receiver function main
{
    TRISDbits.RD0=0;                //door is locked initially
    System_init();         //calling 
    CAN_mf();               //mask and filter calling
    CAN_init();           //calling function
    Set_baudrate();        //callings
    //CAN_read();
    
    while(1)
    {
        if(data_array[3] == 0xAA && data_array[4] == 0xAA && data_array[5] == 0xAA && data_array[6] == 0xAA && data_array[7] == 0xAA)
        {
            PORTDbits.RD0=1;                //door is opened in ecu
            __delay_ms(2000);
            CAN_write();                        //TX + RESPONCE to BM
        }
        else
        {
            PORTDbits.RD0=0;                        //door is closed in ecu
            __delay_ms(2000);
            CAN_write2();                               //tx responce to BM
        }
    }
}

