


// CONFIG1
#pragma config FEXTOSC = OFF    // External Oscillator Selection (Oscillator not enabled)
#pragma config RSTOSC = HFINTOSC_64MHZ// Reset Oscillator Selection (HFINTOSC with HFFRQ = 64 MHz and CDIV = 1:1)

// CONFIG2
#pragma config CLKOUTEN = OFF   // Clock out Enable bit (CLKOUT function is disabled)
#pragma config PR1WAY = ON      // PRLOCKED One-Way Set Enable bit (PRLOCKED bit can be cleared and set only once)
#pragma config CSWEN = ON       // Clock Switch Enable bit (Writing to NOSC and NDIV is allowed)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor enabled)

// CONFIG3
#pragma config MCLRE = EXTMCLR  // MCLR Enable bit (If LVP = 0, MCLR pin is MCLR; If LVP = 1, RE3 pin function is MCLR )
#pragma config PWRTS = PWRT_OFF // Power-up timer selection bits (PWRT is disabled)
#pragma config MVECEN = OFF     // Multi-vector enable bit (Interrupt contoller does not use vector table to prioritze interrupts)
#pragma config IVT1WAY = ON     // IVTLOCK bit One-way set enable bit (IVTLOCKED bit can be cleared and set only once)
#pragma config LPBOREN = OFF    // Low Power BOR Enable bit (Low-Power BOR disabled)
#pragma config BOREN = SBORDIS  // Brown-out Reset Enable bits (Brown-out Reset enabled , SBOREN bit is ignored)

// CONFIG4
#pragma config BORV = VBOR_1P9  // Brown-out Reset Voltage Selection bits (Brown-out Reset Voltage (VBOR) set to 1.9V)
#pragma config ZCD = OFF        // ZCD Disable bit (ZCD module is disabled. ZCD can be enabled by setting the ZCDSEN bit of ZCDCON)
#pragma config PPS1WAY = ON     // PPSLOCK bit One-Way Set Enable bit (PPSLOCKED bit can be cleared and set only once; PPS registers remain locked after one clear/set cycle)
#pragma config STVREN = ON      // Stack Full/Underflow Reset Enable bit (Stack full/underflow will cause Reset)
#pragma config LVP = ON         // Low Voltage Programming Enable bit (Low voltage programming enabled. MCLR/VPP pin function is MCLR. MCLRE configuration bit is ignored)
#pragma config XINST = OFF      // Extended Instruction Set Enable bit (Extended Instruction Set and Indexed Addressing Mode disabled)

// CONFIG5
#pragma config WDTCPS = WDTCPS_31// WDT Period selection bits (Divider ratio 1:65536; software control of WDTPS)
#pragma config WDTE = OFF       // WDT operating mode (WDT Disabled; SWDTEN is ignored)

// CONFIG6
#pragma config WDTCWS = WDTCWS_7// WDT Window Select bits (window always open (100%); software control; keyed access not required)
#pragma config WDTCCS = SC      // WDT input clock selector (Software Control)

// CONFIG7
#pragma config BBSIZE = BBSIZE_512// Boot Block Size selection bits (Boot Block size is 512 words)
#pragma config BBEN = OFF       // Boot Block enable bit (Boot block disabled)
#pragma config SAFEN = OFF      // Storage Area Flash enable bit (SAF disabled)
#pragma config DEBUG = OFF      // Background Debugger (Background Debugger disabled)

// CONFIG8
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block not Write protected)
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers not Write protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not Write protected)
#pragma config WRTSAF = OFF     // SAF Write protection bit (SAF not Write Protected)
#pragma config WRTAPP = OFF     // Application Block write protection bit (Application Block not write protected)

// CONFIG10
#pragma config CP = OFF         // PFM and Data EEPROM Code Protection bit (PFM and Data EEPROM code protection disabled)


#include "Configuracion.h"

void Clock_Init(void)
{
    OSCCON1 = 0b01100000; //1 Y 0S -> 0x60
//    // NOSC HFINTOSC; NDIV 16; 
//    OSCCON1 = 0x64;
//    // CSWHOLD may proceed; SOSCPWR Low power; 
//    OSCCON3 = 0x00;
//    // MFOEN disabled; LFOEN disabled; ADOEN disabled; SOSCEN disabled; EXTOEN disabled; HFOEN disabled; 
//    OSCEN = 0x00;
//    // HFFRQ 64_MHz; 
//    OSCFRQ = 0x08;
//    // TUN 0; 
//    OSCTUNE = 0x00;
//    // ACTUD enabled; ACTEN disabled; 
//    ACTCON = 0x00;
    
}

void Puertos_Init(void){
    LATE = 0x00;
    LATD = 0x00;
    LATA = 0x00;
    LATF = 0x00;
    LATB = 0x00;
    LATC = 0x00;
    /**
    TRISx registers
    */
    TRISE = 0x07;
    TRISF = 0x00;
    TRISA = 0xFF;
    TRISB = 0xFF;
    TRISC = 0xE7;
    TRISD = 0xFF;
    /**
    ANSELx registers
    */
    ANSELD = 0xFF;
    ANSELC = 0xE7;
    ANSELB = 0x00;
    ANSELE = 0x07;
    ANSELF = 0xFD;
    ANSELA = 0xFF;
    /**
    WPUx registers
    */
    WPUD = 0x00;
    WPUF = 0x00;
    WPUE = 0x00;
    WPUB = 0xFF;
    WPUA = 0x00;
    WPUC = 0x00;
    /**
    RxyI2C registers
    */
    RB1I2C = 0x00;
    RB2I2C = 0x00;
    RC3I2C = 0x00;
    RC4I2C = 0x00;
    /**
    ODx registers
    */
    ODCONE = 0x00;
    ODCONF = 0x00;
    ODCONA = 0x00;
    ODCONB = 0x00;
    ODCONC = 0x18;
    ODCOND = 0x00;
    /**
    SLRCONx registers
    */
    SLRCONA = 0xFF;
    SLRCONB = 0xFF;
    SLRCONC = 0xFF;
    SLRCOND = 0xFF;
    SLRCONE = 0x07;
    SLRCONF = 0xFF;
    /**
    INLVLx registers
    */
    INLVLA = 0xFF;
    INLVLB = 0xFF;
    INLVLC = 0xFF;
    INLVLD = 0xFF;
    INLVLE = 0x0F;
    INLVLF = 0xFF;
//    I2C1SDAPPS = 0x14;   //RC4->I2C1:SDA1;    
//    RC3PPS = 0x37;   //RC3->I2C1:SCL1;    
//    RC4PPS = 0x38;   //RC4->I2C1:SDA1;    
//    I2C1SCLPPS = 0x13;   //RC3->I2C1:SCL1;    
    RF0PPS = 0x20;   //RF0->UART1:TX1;    
    U1RXPPS = 0x29;   //RF1->UART1:RX1;    
    //RF4PPS = 0x20;//
    //U1RXPPS = 0x2A;
}