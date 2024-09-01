// 练习1-13. 写一个程序，打印输入中单词长度的直方图。水平方向的直方图比较容易；垂直方向的直方图更有难度。
//*使用数组
// 输出单词长度
// 水平方向直方图
#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
int main()
{
    int c, state = OUT;
    int count = 0; // 累加单词字符个数
    while ((c = getchar()) != EOF)// 读取输入,检测到文件结束符时退出循环
    {
        if (!(c == ' ' || c == '\t' || c == '\n'))// 不是空格，\t,\n，则进入if语句
        {
            state = IN;
            //putchar(c); // 打印出每一个字符（不包括if语句里面的）
            ++count;    // count最终存放的是一个单词字符的个数
        }
        else
        {
            if (state == IN) // 遇到第一个（空格，\t,\n）会进入这里，只进入一次
            {
                //printf("\t\t\t");
                for (int i = 0; i < count; ++i) // 根据字符个数输出一样的*号
                    printf("*");
                printf("\t\t\t%d个", count);
                putchar('\n');
                count = 0; // 将count设0，累加下一个单词的字符个数
            }
            state = OUT; // 将其设0，则第一个，二个，三个。。。（空格，\t,\n）都不会进入if(state==1)的语句里
        }
    }
    return 0;
}
