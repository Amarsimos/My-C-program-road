#include <stdio.h>

int count();
int main(void)
{
    int i = 0;
    i = count();
    printf("The number of characters entered is %d\n", i - 1);
    return 0;
}
int count()
{
    int i = 0;
    int j = 0;
    while (i != EOF)
    {
        i = getchar();
        if (i == '\n') // 跳过换行符
            continue;  // 跳过本次循环
        j++;
    }
    return j;
}