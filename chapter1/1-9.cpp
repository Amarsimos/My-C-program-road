#include <stdio.h>
/* 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代*/
main()
{
int c,ns;//ns为标志位 
ns = 0;//0时不在空格中 
while ((c = getchar()) != EOF) {
	
	if(c == ' '){
		if(ns == 1){
			ns = 0;//当输入space时,判断ns值,若ns=1,执行语句,输出一个space,并使ns=0无效化该判断 
			putchar(c);
		}
	}
		
	else {
			ns = 1;//输入其他键时,令ns=1,等待下一次空格输入判断 
			putchar(c);	
	}
}
}
