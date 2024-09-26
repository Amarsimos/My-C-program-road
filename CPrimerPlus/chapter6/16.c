#include <stdio.h>
#include <string.h>
#define INDEX 8
#define COL 6

float mono(float base, int year);
float multi(float base, int year);

int main(void)
{
    float bases;
    printf("Enter the base money:\n");
    scanf("%f", &bases);
    int years = 0;
    float sum1 = bases, sum2 = bases;
    do
    {
        sum1 = mono(bases, years);
        sum2 = multi(bases, years++);
    } while (sum1 >= sum2);
    printf("The year is %d\n", years - 1); // 年份多记了一年
    printf("The total money of Daphne is %.2f\n", sum1);
    printf("The total money of Deirdre is %.2f\n", sum2);

    return 0;
}
float mono(float base, int year)
{
    float sum = base + (base * 0.1) * year;
    return sum;
}
float multi(float base, int year)
{
    float sum = base;
    for (int i = 0; i < year; i++)
    {
        sum *= 1.05;
    }
    return sum;
}
