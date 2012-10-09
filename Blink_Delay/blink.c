/* Blink LED example */
#include <msp430g2231.h>
//The defual clock after the PUC is about 1MHz
#define MCLOCK 1000000
/** Delay function.C **/
volatile int i,j;
delay(unsigned int d) {
for (i = 0; i<d; i++) {
	for(j = 0;j!=500;j++)
		nop();
}
}
  
/** Delay function.ASM **/
static void __inline__ brief_pause(register unsigned int n)
{
__asm__ __volatile__ (
"1: \n"
" dec %[n] \n" /*  此指令本身需要一个时钟周期，加载一个地址需要一个，因此应2个Cycle  */
" jne 1b \n"   /*  跳转指令2个Cycle  */
: [n] "+r"(n));
//执行一次需求4个Cycle , 时间为4/MCLOCK,非循环内的指令可忽略
} 




int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;
	P1DIR = 0xFF;
	P1OUT = 0x01;
	for (;;)
   	{
		P1OUT = ~P1OUT;
		int TestDelay = 0;
		for(TestDelay = 0;TestDelay!=10;TestDelay++)
		brief_pause(MCLOCK/40);//1s 左右
		//delay(400); 
	}
}
