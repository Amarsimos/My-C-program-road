// 练习 1-20. 编写一个程序 detab，它将输入中的制表符替换为恰当数目的空格，使间隔达到
// 下一制表符停止位。假定一组固定的制表符停止位，比如每 n 列一个停止位。n 应当是一个变
// 量还是一个符号参数？
// n应该为符号参数。
// note:关键点在于理解制表符的停止位,即计算需要插入的空格数,以及更新列数

#include <stdio.h>
#define TABSIZE 10// 制表符的停止位数
void detab(char c);
int main()
{
    char c = 0;
    detab(c);
    return 0;
}
void detab(char c)1
{
    int Col_Num = 0;
    int Space_Num = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            Space_Num = TABSIZE - Col_Num % TABSIZE;// 计算需要插入的空格数
            for (int i = 0; i < Space_Num; i++)// 插入空格
                putchar(' ');
            Col_Num += Space_Num;// ❗更新列数❗
        }
        else if (c == '\n')
        {
            putchar(c);
            Col_Num = 0;
        }
        else
        {
            putchar(c);
            Col_Num++;
        }
    }
}