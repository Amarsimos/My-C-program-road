#include <stdio.h>
#define MAX_SIZE 100

float avarage_even(int total[MAX_SIZE], int even_count);
float avarage_odd(int total[MAX_SIZE], int odd_count);

int main(void)
{
    int c = 0;
    int even_total[MAX_SIZE] = {0};
    int odd_total[MAX_SIZE] = {0};
    int even_count = 0;
    int odd_count = 0;
    printf("Enter a number:\n");
    while (scanf("%d", &c) && c != 0)
    {
        if (c % 2 == 0)
        {
            even_total[even_count++] = c;
        }
        else
        {
            odd_total[odd_count++] = c;
        }
    }
    float a = avarage_even(even_total, even_count);
    float b = avarage_odd(odd_total, odd_count);
    if (a != 0) // 当计数为0时,显示另一种提示信息
        printf("even_count:%d\teven_avarage:%.2f\n", even_count, a);
    else
        printf("no even number\n");
    if (b != 0)
        printf("odd_count:%d\todd_avarage:%.2f\n", odd_count, b);
    else
        printf("no odd number\n");
    return 0;
}
float avarage_even(int total[MAX_SIZE], int even_count)
{
    int sum = 0;
    float avarage = 0;
    if (even_count == 0) // 需要处理计数为0的情况
    {
        return 0;
    }
    for (int i = 0; i < even_count; i++)
    {
        sum += total[i];
    }
    avarage = (float)sum / even_count;
    return avarage;
}
float avarage_odd(int total[MAX_SIZE], int odd_count)
{
    int sum = 0;
    float avarage = 0;
    if (odd_count == 0)
    {
        return 0;
    }
    for (int i = 0; i < odd_count; i++)
    {
        sum += total[i];
    }
    avarage = (float)sum / odd_count;
    return avarage;
}