//******************************************************************************
//  MSP430G2xx1 Demo - Timer_A, Toggle P1.0, Overflow ISR, DCO SMCLK
//
//  Description: Toggle P1.0 using software and Timer_A overflow ISR.
//  In this example an ISR triggers when TA overflows. Inside the TA
//  overflow ISR P1.0 is toggled. Toggle rate is approximatlely 12Hz.
//  Proper use of TAIV interrupt vector generator is demonstrated.
//  ACLK = n/a, MCLK = SMCLK = TACLK = default DCO
//
//           MSP430G2xx1
//         ---------------
//     /|\|            XIN|-
//      | |               |
//      --|RST        XOUT|-
//        |               |
//        |           P1.0|-->LED
//
//  Texas Instruments Inc.
//  Built with Mspgcc
//******************************************************************************

#include <msp430g2231.h>
#include <legacymsp430.h>
void main(void)
{
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
  P1DIR |= 0x01;                            // P1.0 output
  TACTL = TASSEL_2 + MC_2 + TAIE;           // SMCLK, contmode, interrupt        //page371

  _BIS_SR(LPM0_bits + GIE);                 // Enter LPM0 w/ interrupt
}

// Timer_A3 Interrupt Vector (TAIV) handler
interrupt(TIMERA1_VECTOR) Timer_A(void)
{
 switch( TAIV )
 {
   case  2: break;                          // CCR1 not used
   case  4: break;                          // CCR2 not used
   case 10: P1OUT ^= 0x01;                  // overflow
            break;
 }
}
