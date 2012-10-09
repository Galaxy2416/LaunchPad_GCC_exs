鉴于MSPGCC的相关资料太少了，共享一下.
一小部本使用了较为老的用法，包含头<legacymsp430.h>,然而这些确是较为常见的
其他一部分较新的使用方式，参考了系统头文件来使用～～。
采用了MSPGCC的编译器，烧录MSPDEBUG。
程序参考很大一部分TI所给例程的CCS和IAR集成IDE的C语言源码。

每个都包括MAKEFILE，./下的*.h都是一些MSPGCC库的定义。比较实用。
其中串口模拟的程序（mspg2231无硬件串口）有两个其中一个是网上某组织做的比较类似大型工程构架的一个版本，没有读过。但都可以用。
推荐使用screen，查看命令screen ttyACM0 9600
没有的话 sudo apt-get install screen
不知道是TI的问题还是Ubuntu的问题，又或者我这个12.04测试版的原因。
screen，minicom，xgcom等经常会无法识别ttyACM0。minicom并且乱码出现率很高。所以建议用screen。

有问题欢迎交流
e-mail:sunxiao.gin@gmail.com
qq:346940792

内有有待后续...
