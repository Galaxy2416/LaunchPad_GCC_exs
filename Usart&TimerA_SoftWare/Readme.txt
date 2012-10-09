Msp430g2231 dose not have the hardware usart
So there are two methods : 
	1 using the IO pins to simulate .
	2 using the TimerA's Output ~ to do this (recommend).
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
File Name                         Description
--------------------------------------------------------------------------------
msp430g2xx1_ta_uart2400.c         Timer_A, Ultra-Low Pwr UART 2400 Echo, 32kHz ACLK
msp430g2xx1_ta_uart9600.c         Timer_A, Ultra-Low Pwr Full-duplex UART 9600, 32kHz ACLK
--------------------------------------------------------------------------------
