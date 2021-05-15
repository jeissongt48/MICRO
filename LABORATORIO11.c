#include <xc.h>
#define _XTAL_FREQ 4000000


void main(void) {
    TRISD = 0b00000000;
    TRISA=0b00000001;
    PORTD=0b00000000;
    PORTA=0b00000001;
    ADCON1 = 0b1111;
    if (PORTAbits.RA2==1)
    {
        PORTDbits.RD0=0b00000001;
        PORTDbits.RD7=0b00000001;
        __delay_ms(800);
        PORTDbits.RD0=0b00000000;
        PORTDbits.RD7=0b00000000;
        __delay_ms(800);
        PORTDbits.RD1=0b00000001;
        PORTDbits.RD6=0b00000001;
        __delay_ms(800);
        PORTDbits.RD1=0b00000000;
        PORTDbits.RD6=0b00000000;
        __delay_ms(800);
        PORTDbits.RD2=0b00000001;
        PORTDbits.RD5=0b00000001;
        __delay_ms(800);
        PORTDbits.RD2=0b00000000;
        PORTDbits.RD5=0b00000000;
        __delay_ms(800);
        PORTDbits.RD3=0b00000001;
        PORTDbits.RD4=0b00000001;
        __delay_ms(800);
        PORTDbits.RD3=0b00000000;
        PORTDbits.RD4=0b00000000;
        __delay_ms(800);
        PORTDbits.RD5=0b00000001;
        PORTDbits.RD2=0b00000001;
        __delay_ms(800);
        PORTDbits.RD5=0b00000000;
        PORTDbits.RD2=0b00000000;
        __delay_ms(800);
        PORTDbits.RD6=0b00000001;
        PORTDbits.RD1=0b00000001;
        __delay_ms(800);
        PORTDbits.RD6=0b00000000;
        PORTDbits.RD1=0b00000000;
        __delay_ms(800);
        PORTDbits.RD7=0b00000001;
        PORTDbits.RD0=0b00000001;
        __delay_ms(800);
        PORTDbits.RD7=0b00000000;
        PORTDbits.RD0=0b00000000;
        
    }
  
  
    return ;
}