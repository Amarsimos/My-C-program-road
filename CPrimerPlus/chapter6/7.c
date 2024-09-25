#include <stdio.h>
#include <string.h>
#define ROW 6
#define COL 6

int main(void)
{
    // int rows;
    char ch[20];
    printf("Enter the string: \n");
    scanf("%19s", &ch);
    int a = strlen(ch);
    for (int i = a - 1; i >= 0; i--) // 打印行数
    {

        printf("%c", ch[i]);

        // for (ch = 'A'; ch <= 'A' + i; ch++) // 正序打印字母，使用字符变量进行比较，注意根据行数进行调整
        //     printf("%c", ch);
        // for (ch = 'A' + i - 1; ch >= 'A'; ch--) // 倒序打印字母，同上
        //     printf("%c", ch);
        // for (int j = 0; j < line - i - 1; j++) // 可有可无
        //     printf("*");
        // printf("\n");
    }
    return 0;
}