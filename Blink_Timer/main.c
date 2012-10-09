//***************************************************************************************
// MSP430 Timer Blink LED Demo - Timer A Software Toggle P1.0 & P1.6
//
// Description; Toggle P1.0 and P1.6 by xor'ing them inside of a software loop. 
// Since the clock is running at 1Mhz, an overflow counter will count to 8 and then toggle
// the LED. This way the LED toggles every 0.5s. 
// ACLK = n/a, MCLK = SMCLK = default DCO 
//
// MSP430G2xx
// -----------------
// /|\| XIN|-
// | | |
// --|RST XOUT|-
// | P1.6|-->LED
// | P1.0|-->LED
// Built with Mspgcc
//***************************************************************************************
#include <msp430g2231.h>
#include <legacymsp430.h>

#define LED_0 BIT0 
#define LED_1 BIT6
#define LED_OUT P1OUT
#define LED_DIR P1DIR



unsigned int timerCount = 0;
void main(void)
{
WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
LED_DIR |= (LED_0 + LED_1); // Set P1.0 and P1.6 to output direction
LED_OUT &= ~(LED_0 + LED_1); // Set the LEDs off

CCTL0 = CCIE;
TACTL = TASSEL_2 + MC_2; // Set the timer A to SMCLCK, Continuous
// Clear the timer and enable timer interrupt

eint();
//dint();

//_BIS_SR_IRQ(LPM0_bits); // LPM0 with interrupts enabled , must be in a interrupt routine

for(;;);

} 


// Timer A0 interrupt service routine
interrupt (TIMERA0_VECTOR)  Timer_A (void)
{
timerCount = (timerCount + 1) % 8;
if(timerCount == 0)
P1OUT ^= (LED_0 + LED_1);
}

