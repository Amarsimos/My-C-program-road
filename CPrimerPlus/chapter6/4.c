#include <stdio.h>
#define ROW 6
#define COL 6

int main(void)
{
    // int rows;
    char ch = 'A';
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j <= i; ch++, j++) // 关键在于字符的递增与打印的计数分开
            printf("%c", ch);

        printf("\n");
    }
    return 0;
}