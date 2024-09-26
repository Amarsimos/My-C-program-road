#include <stdio.h>
#include <string.h>

float mono(float base, int year);
float multi(float base, int year);

int main(void)
{
    float bases;
    printf("Enter the base money:\n");
    scanf("%f", &bases);
    int years = 0;
    float sum1 = bases;
    do
    {
        float sum2 = mono(sum1, years);
        sum1 = mono(sum1, years++) - 8.0001;
    } while (sum1 >= 0);
    printf("The year is %d\n", years - 1); // 年份多记了一年

    return 0;
}

float mono(float base, int year)
{
    float sum = base;
    sum *= 1.08;
    return sum;
}

float multi(float base, int year)
{
    float sum = base;
    for (int i = 0; i < year; i++)
    {
        sum *= 1.1;
    }
    return sum;
}
