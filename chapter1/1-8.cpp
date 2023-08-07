#include <stdio.h>
 /* count lines in input */
 //编写一个统计空格、制表符与换行符个数的程序。
main()
{
int c,nk,nt,nn;
nk = 0;
nt = 0;
nn = 0;
while ((c = getchar()) != EOF)
if (c == '\n')
++nn;
	else if (c == ' ')
	++nk;
 	else if(c == '\t')
	++nt;
printf("k:%3d  t:%3d  n:%3d", nk,nt,nn);
}
