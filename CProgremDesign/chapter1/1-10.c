/* c编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，把回退符替换为\b，把反斜杠替按为\\。这样可以将制表符和回退符以可见的方式显示出来 */

#include <stdio.h>
#include <conio.h>
main()
{
	int c;

	while ((c = getch()) != EOF)//检测到输入结束符退出循环
	{
		if (c == '\t')//检测到制表符
		{
			printf("\\t");
		}
		else if (c == '\b')//检测到回退符
		{
			printf("\\b");
		}
		else if (c == '\\')//检测到反斜杠
		{
			printf("\\\\");
		}
		else//其他字符直接输出
		{
			putchar(c);
		}
	}
}
