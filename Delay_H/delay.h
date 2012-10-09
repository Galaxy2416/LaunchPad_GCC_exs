
#ifndef  _DELAT_H__INC
#define  _DELAT_H__INC

#include <msp430g2231.h>
#define MCLOCK 1000000
/*  If the Clock make the counter more than 0Xff , some function need to be changed  */ 

/** Delay function.ASM **/
static void __inline__ brief_pause(register unsigned int n)
{
__asm__ __volatile__ (
"1: \n"
" dec %[n] \n" /* The instruction(1 Cycle) + Address of a register(1 Cycle) = 2 Cycle */
" jne 1b \n"   /*  Jump instructions need 2 Cycle  */
: [n] "+r"(n));
/* Ingnore instructions out of the loop , It's 4 Cycle , 1s is 4/MCLOCK */
} 

/*  Is not strict   */
static void inline _delay_1ms()
{
	volatile int i = 0 ;
	for(i=0;i!=10;i++)
		brief_pause(MCLOCK/4000);
}

static void inline _delay_100ms()
{
	volatile int i = 0 ;
	for(i=0;i!=10;i++)
		brief_pause(MCLOCK/40);
}

static void inline _delay_1s()
{
	volatile int i = 0 ;
	for(i=0;i!=10;i++)
		_delay_100ms();
}

#endif   /* ----- #ifndef _DELAT_H__INC  ----- */
