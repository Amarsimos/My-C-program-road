#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */
 /* 编写一个程序，以每行一个单词的形式打印其输入 */
main()
{
int c, nl, nw, nc, state;
state = OUT;
while ((c = getchar()) != EOF) {
if (c == ' ' || c == '\n' || c == '\t'){
	state = OUT;
	printf("\n");//每当输入一个空格打印一个换行符 
	//state = IN;
}
 
else if (state == OUT) {
//state = IN;
//printf("1");
putchar(c);//不是空格则正常输出 
}


}
//printf("%d\n", c);
}
