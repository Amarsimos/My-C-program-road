#include <stdio.h>
#include <string.h>
#define INDEX 8
#define COL 6

float plus_plus(int count);
float plus_minus(int count);
int odd(int base);

int main(void)
{
    int count;
    printf("Enter count : \n");
    scanf("%d", &count);
    while (count >= 0)
    {
        float a = plus_plus(count); // 数据类型要匹配
        float b = plus_minus(count);
        printf("plus_plus result is : %.3f\n", a);
        printf("plus_minus result is : %.3f\n", b);
        printf("Enter count : \n");
        scanf("%d", &count);
    }

    return 0;
}

float plus_plus(int count)
{
    float sum = 0.0;
    int i;
    float j = 1.0;
    for (i = 1; i <= count; i++, j++)
        sum += 1.0 / j;
    return sum;
}

float plus_minus(int count)
{
    float sum = 0.0;
    int i;
    float j = 1.0;
    for (i = 1; i <= count; i++, j++)
        sum += 1.0 / (odd(i) * j);
    return sum;
}
int odd(int base)
{
    if (1 == base)
        return 1;
    else if (0 == base % 2)
        return -1;
    else
        return 1;
}
