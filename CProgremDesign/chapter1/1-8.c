// 练习 1-8. 写一个程序，统计输入中的空格、制表符和换行符的个数。

#include <stdio.h>

main()
{
	int char_get, num_space, num_tab, num_next;
	num_space = 0;
	num_tab = 0;
	num_next = 0;
	while ((char_get = getchar()) != EOF)//检测到EOF时退出循环
		if (char_get == '\n')
			++num_next; 
		else if (char_get == ' ')
			++num_space;
		else if (char_get == '\t')
			++num_tab;
	printf("number of spaces:%3d  tabs:%3d  next:%3d", num_space, num_tab, num_next);
}
