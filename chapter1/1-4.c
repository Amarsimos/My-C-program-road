//练习1-4. 编写一个程序，打印出摄氏温度到华氏温度的对照表。

#include <stdio.h>

int main()
{
	float f, c;
	int upper,lower,step;
	upper = 300;
	lower = 0;
	step = 10;
	c = lower;
	printf("C to F Table\n\n");//标题
	printf("----------\n");//分隔线
	while (c<=upper){
		f = c * 9.0 / 5.0 + 32.0;
		printf("c %6.2f is f %6.2f\n",c,f);
		c = c+step;
	}
}
