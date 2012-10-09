//***************************************************************************************
// MSP430 PushButton that toggles LED at P1.0 On and OFF
//
// Description; PushButton in P1.3 through interrupt turns on and off the LED in P1.0
// By changing the P1.3 interrupt edge, the interrupt is called every time the button
// is pushed and pulled; toggling the LED everytime. 
// ACLK = n/a, MCLK = SMCLK = default DCO
//
// MSP430x2xx
// -----------------
// /|\| XIN|-
// | | |
// --|RST XOUT|-
// | |
// | P1.0|-->LED
//
// Built with Mspgcc
//***************************************************************************************
#include <msp430g2231.h>
#include <legacymsp430.h>
#define LED0 BIT0
#define LED1 BIT6 
#define BUTTON BIT3



int main(void)
{
WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
P1DIR |= (LED0 + LED1); // Set P1.0 to output direction 
// P1.3 must stay at input
P1OUT &= ~(LED0 + LED1); // set P1.0 to 0 (LED OFF)
P1IE |= BUTTON; // P1.3 interrupt enabled

P1IFG &= ~BUTTON; // P1.3 IFG cleared

eint(); // enable all interrupts
for(;;)
{}
}


// Port 1 interrupt service routine
interrupt (PORT1_VECTOR) Port1_Vec(void)
{
P1OUT ^= (LED0 + LED1); // P1.0 = toggle
P1IFG &= ~BUTTON; // P1.3 IFG cleared
P1IES ^= BUTTON; // toggle the interrupt edge,
// the interrupt vector will be called
// when P1.3 goes from HitoLow as well as
// LowtoHigh
}
//newer version
/* 
void __attribute__((interrupt(PORT1_VECTOR))) Port_1(void)
{
// Any normal C code 
P1OUT ^= (LED0 + LED1); // P1.0 = toggle
P1IFG &= ~BUTTON; // P1.3 IFG cleared
P1IES ^= BUTTON; // toggle the interrupt edge,
// the interrupt vector will be called
// when P1.3 goes from HitoLow as well as
// LowtoHigh
}
*/
