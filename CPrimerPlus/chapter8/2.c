#include <stdio.h>

void Print_ASCII(char ch);
int main(void)
{
    char ch = 0;
    int i = 0;
    printf("Enter a string: \n");
    ch = getchar(); // goto 进行流程控制有太多不确定性,还是使用while循环
    while (ch != EOF)
    {
        Print_ASCII(ch);
        i++;
        if (i % 10 == 0)
        {
            printf("\n");
        }
        if (ch == '\n') // 换行符为单次输入结尾,计数器归零,并且换行
        {
            printf("\n");
            i = 0;
        }
        ch = getchar(); // 跳转回上一次输入的位置
    }
    return 0;
}

void Print_ASCII(char ch)
{
    switch (ch)
    {
    case '\n':
        printf("\\n");
        break;
    case '\t':
        printf("\\t");
        break;
    case 1:
        printf("^A");
        break;
    case 2:
        printf("^B");
        break;
    case 32:
        printf("\\s");
        break;
    default:
        printf("%c", ch);
        break;
    }
    printf(":%d\t", ch);
    return;
}