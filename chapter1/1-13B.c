// 练习1-13. 写一个程序，打印输入中单词长度的直方图。水平方向的直方图比较容易；垂直方向的直方图更有难度。
//*使用数组
// 输出单词长度
// 垂直方向直方图
#include <stdio.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_WORD 100 // 最多单词数
int main()
{
    int c, state = OUT;
    int word_count = 0;
    int count[MAX_WORD]; 
    //计数数组，记录每个单词的长度
    for (int i = 0; i < MAX_WORD; ++i) // 初始化count数组为0
        count[i] = 0; 
    while ((c = getchar()) != EOF)// 读取输入,检测到文件结束符时退出循环
    {
        if (!(c == ' ' || c == '\t' || c == '\n'))// 不是空格，\t,\n，则进入if语句
        {
            //putchar(c); // 打印出每一个字符（不包括if语句里面的）
            state = IN; // 进入单词状态
            count[word_count]++; // 第一个字符计数加1
        }
        else
        {
            if (state == IN) // 遇到第一个（空格，\t,\n）会进入这里，只进入一次
            {
                word_count++; // 单词数加1
            }
            state = OUT; // 将其设0，则第一个，二个，三个。。。（空格，\t,\n）都不会进入if(state==1)的语句里
        }
    }
    // 输出垂直方向直方图
    int max_word_length = 0; // 最大单词长度
    for (int i = 0; i < word_count; ++i)
        if (count[i] > max_word_length)
            max_word_length = count[i];// 找出最大单词长度
    for (int i = max_word_length; i >= 0; --i)//外层循环打印行数,从最顶层开始打印
    {
        for (int j = 0; j < word_count; ++j)//内层循环打印的元素个数,通过对比行数和单词长度，来打印*,一行内
        {
            if (count[j] > i)
                printf("*\t");
            else
                printf("\t");
        }
        printf("\n");//本行结束换行
    }
    printf("------------------------------------------------");
    // 输出单词长度
     
    return 0;
}
