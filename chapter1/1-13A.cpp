
#include <stdio.h>
//输出单词长度
//直方图
int main()
{
    int c ,state = 0;
    int number = 0;// 累加单词字符个数
    while((c=getchar()) != EOF)
    {
       if(!(c == ' ' || c == '\t' || c == '\n'))
       {
           state = 1;
           putchar(c); //打印出每一个字符（不包括if语句里面的）
           ++number;// number最终存放的是一个单词字符的个数
       }
       else
       {
           if(state == 1)//遇到第一个（空格，\t,\n）会进入这里，只进入一次
           {
               printf("\t\t\t");
               for(int i = 0;i<number;++i)//根据字符个数输出一样的*号
                   printf("*");
               printf("\t\t\t%d个",number);
               putchar('\n');
               number = 0;//将number设0，累加下一个单词的字符个数
           }
           state = 0;//将其设0，则第一个，二个，三个。。。（空格，\t,\n）都不会进入if(state==1)的语句里
       }
    }
    return 0;
}
