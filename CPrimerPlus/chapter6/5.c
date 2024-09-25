#include <stdio.h>
#define ROW 6
#define COL 6

int main(void)
{
    // int rows;
    char ch = 'A';
    char chs;
    printf("Enter the Caps characters: \n");
    scanf("%c", &chs);
    int line = chs - 'A' + 1;      // 计算行数
    for (int i = 0; i < line; i++) // 打印行数
    {
        for (int j = 0; j < line - i - 1; j++) // 打印空格
            printf("*");
        for (ch = 'A'; ch <= 'A' + i; ch++) // 正序打印字母，使用字符变量进行比较，注意根据行数进行调整
            printf("%c", ch);
        for (ch = 'A' + i - 1; ch >= 'A'; ch--) // 倒序打印字母，同上
            printf("%c", ch);
        for (int j = 0; j < line - i - 1; j++) // 可有可无
            printf("*");
        printf("\n");
    }
    return 0;
}