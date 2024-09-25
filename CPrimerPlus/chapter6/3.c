#include <stdio.h>
#define ROW 6
#define COL 6

int main(void)
{
    // int rows;
    char ch;
    for (int i = 0; i < ROW; i++)
    {
        for (ch = 'F'; ch >= 'F' - i; ch--) // 字符ASCII码可作为测试条件
            printf("%c", ch);

        printf("\n");
    }
    return 0;
}