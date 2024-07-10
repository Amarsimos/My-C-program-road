// 练习1-22. 编写一个程序，其将一个长输入行“折”为较短的几行，折行的位置为输入的第n
// 列之前的最后一个非空白符之后。确保你的程序能够智能地处理很长的输入行，以及在指定列
// 之前没有空格或制表符的情况

#include <stdio.h>
#include <string.h>

#define MAXLINE 20

void cutline(char line) 
int main() 
{
    catline(line);
    printf("The line is:\n");
    printf("%s", line);
    return 0;
    
}

void cutline(char line) 
{
    int col_count = 1;
    int word_count = 0;
    while ((line = getchar()) != '\0' && line != 'EOF') 
    {
        col_count++;
        if (line == '\n')
        {
            putchar('\n');
        }
        else if (line == ' ')
        {
            word_count++;
            if (MAXLINE - (word_count + col_count) < 0)
            putchar('\n');
            else if 
                for (int i = 0; i < MAXLINE - (word_count + col_count); i++)
                {
                    putchar(' ');
                }

        }
        else if (line == )
    }
    
}