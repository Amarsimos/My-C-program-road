// 练习 1-21. 编写一个程序 entab，它将***一连串***空格替换为相同间隔的最小数目的制表符和空格。
// 使用与detab 相同的制表符停止位。当单个制表符或者单个空格都能达到制表符停止位时，选用哪一种更好
//
#include <stdio.h>
#define TABSIZE 8

void entab(char c);
int main()
{
    char c = 0;
    entab(c);
    return 0;
}

void entab(char c)
{
    int space_count = 0;
    int col_count = 0;
    int col_sign =0;//8个空格为一个制表符,col_sign表示为其中第几位空格
    while ((c = getchar()) != 'EOF')
    {
        if (col_count >= TABSIZE)
        {
            col_sign = 0;
        }
        if (c == ' ') // 对空格和字数进行计数
        {
            space_count++;
            col_count++;
        }
        // else if (space_count < TABSIZE)
        // {
        //     putchar(c);
        //     space_count++;
        //     col_count++;
        // }
        else if (col_sign < TABSIZE) // 空格数小于8时，直接输出
        {

        }
        else if ((0 == space_count % TABSIZE) && space_count >= TABSIZE) // 达到制表位停止
        {
            putchar('\t');
            putchar(c);
            space_count = 0;
            col_count++;
            col_sign++;
        }
        else if (c == '\n')
        {
            col_count = 0;
            col_sign = 0;
            space_count = 0;
        }
        else
        {

            for (int j = 0; j < space_count / TABSIZE; j++)
            {
                putchar('\t');
            }
            for (int j = 0; j < space_count % TABSIZE; j++)
            {
                putchar('*');
            }
            putchar(c);
            space_count = 0;
            col_count++;
            col_sign++;
        }
    }
    // return 0;
}