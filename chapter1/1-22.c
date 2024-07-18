// 练习1-22. 编写一个程序，其将一个长输入行“折”为较短的几行，折行的位置为输入的第n
// 列之前的最后一个非空白符之后。确保你的程序能够智能地处理很长的输入行，以及在指定列
// 之前没有空格或制表符的情况

#include <stdio.h>
#include <string.h>

// #define MAXLINE 20
#define MAXCOL 10

void cutline(int input);
int main()
{
    int input = 0;
    int line = 0;

    // printf("The line is:\n");
    cutline(input);
    // printf("%s", line);
    return 0;
}

void cutline(int input)
{
    int col_count = 0;
    int word_count = 0;
    int word[MAXCOL] = {0};
    int c = 0;
    while ((input = getchar()) != EOF)
    {
        if (input == ' ')
        {
            c = (col_count % MAXCOL);
            if (0 < c && c < MAXCOL)
            {
                putchar(input);
                col_count++;
            }
            else if (0 == c && col_count != 0)
            {
                putchar('\n');
                printf("%s", word);
                col_count = 0;
                word_count = 0;
            }
            else
            {
                putchar(input);
                col_count++;
            }
        }
        else if (input == '\n')
        {
            putchar(input);
            col_count = 0;
            word_count = 0;
        }
        else
        {
            c = (col_count % MAXCOL);
            if (0 < c && c < MAXCOL)
            {
                putchar(input);
                col_count++;
            }
            else if (0 == col_count % MAXCOL && col_count != 0)
            {
                putchar(input);
                putchar('\n');
            }
            word[word_count] = input;
            col_count++;
            word_count++;
        }
    }
    // {
    //     if (0 < col_count % MAXCOL < MAXCOL)
    //     {
    //         putchar(input);
    //         col_count++;
    //     }
    //     else if (0 == col_count % MAXCOL && col_count != 0)
    //     {
    //         putchar('\n');
    //     }
    //     word[word_count] = input;
    //     col_count++;
    //     word_count++;
    // }
}