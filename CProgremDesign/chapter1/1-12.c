/* 编写一个程序，以每行一个单词的形式打印其输入 */
//检测到space或换行符时，打印换行符，并将state置为OUT，否则正常输出
#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
	int c, state;
	state = OUT;//初始化状态为OUT
	while ((c = getchar()) != EOF)// 读取输入字符,检测到EOF时退出循环
	{
		if (c == ' ' || c == '\n' || c == '\t')// 检测到空格或换行符或制表符
		{
			if (state == IN)//单词内打印换行，单词外则忽略,注意不能打“；”，否则会执行空语句
			{
			printf("\n"); // 每当输入一个空格打印一个换行符
			state = OUT; // 状态置为OUT
			}
		}

		else //if (state == OUT && ((c != ' ' )||(c != '\n' )|| (c != '\t')))// 不是空格或换行符或制表符
		{
			putchar(c); // 不是空格则正常输出
			if (state == OUT) // 如果单词外，则进入单词状态
			{
				state = IN; // 进入单词状态
			}
		}
	}
	return 0;
}
