// 练习 1-21. 编写一个程序 entab，它将***一连串***空格替换为相同间隔的最小数目的制表符和空格。
// 使用与detab 相同的制表符停止位。当单个制表符或者单个空格都能达到制表符停止位时，选用哪一种更好
// note：耗时2天终于编写完成了，具体思路为：
// 1. 读取输入字符，判断是否为空格，是则进行空格计数和字符数量，并等待非空格字符读取；
// 1.1若在等待过程中,字符数量达到制表符停止位,则输出制表符,并将空格计数清零,制表符计数加一
// 1.2否则持续计数
// 2. 若为非空格字符，则判断是否为换行符，若是，则清空空格计数和制表符计数；
// 3. 若为其他字符，则判断是否已经超过第一个制表位，若是，则输出除去制表符的空格，并将空格计数清零；若否,则输出字符.
// 4. 重复步骤1-3，直到输入结束。
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
    int space_count = 0;//空格计数
    int col_count = 1;//字符位置计数
    int col_sign = 0;//字符在制表位的位置
    int tab_count = 0;//制表符计数
    while ((c = getchar()) != 'EOF')
    {
        if (col_count <= TABSIZE - 1)//对字符位置计数进行初始化
        {
            col_sign = col_count;
        }
        else if (0 == col_count % TABSIZE)
            col_sign = TABSIZE;
        else
            col_sign = col_count % TABSIZE;

        if (c == ' ') // 对空格和字数进行计数
        {
            if (TABSIZE == col_sign && col_count >= TABSIZE)
            {
                putchar('\t');
                space_count = 0;
                tab_count++;
                col_count++;
            }
            else
            {
                space_count++;
                col_count++;
            }
        }
        else if (c == '\n') // 换行时计数清零
        {
            col_count = 1;
            space_count = 0;
            tab_count = 0;
        }
        else if (0 == tab_count) // 非space时，判断是否已经达到制表位，未到达时，直接输出space
        {
            for (int j = 0; j < space_count; j++)
            {
                putchar('*');
            }
            putchar(c);
            space_count = 0;
            col_count++;
        }
        else if (0 < tab_count) // 达到制表位时，输出除去制表符的空格
        {
            if (space_count > 0)// 若有空格，则输出空格
            {
                for (int j = 0; j < space_count; j++)
                {
                    putchar('*');
                }
                putchar(c);
            }
            else// 若无空格，则直接输出
                putchar(c);
            space_count = 0;
            col_count++;
        }
        else
        {
            putchar(c);
            space_count = 0;
            col_count++;
        }
    }
    // return 0;
}