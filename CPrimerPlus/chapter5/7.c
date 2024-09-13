#include <stdio.h>
#define INCH 2.54
#define FEET 36.4

double cube(double i);
int main(void)
{
    int count, sum, i;
    i = 0;
    count = 0;
    sum = 0;
    printf("Enter the double\n");
    scanf("%double", &i);
    sum = cube(i);
    printf("Sum = %d\n", sum);
    return 0;
}
double cube(double i)
{

    i = i * i * i;
    return i;
}