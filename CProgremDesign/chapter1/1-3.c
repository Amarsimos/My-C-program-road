// 练习1-3. 修改温度转换程序，在输出的转换表前加一个标题

#include <stdio.h>

int main()
{
	float f, c;
	int upper, lower, step;
	upper = 300;
	lower = 0;
	step = 10;
	f = lower;
	printf("F to C Table\n"); // 标题
	printf("F \t|C\n");		  // 表头
	printf("----------\n");	  // 分隔符
	while (f <= upper)
	{
		c = (5.0 / 9.0) * (f - 32.0);
		printf("%1.0d\t|%6.2f\n", f, c);
		f = f + step;
	}
}
