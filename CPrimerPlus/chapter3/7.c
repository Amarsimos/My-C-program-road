#include <stdio.h>

int main()
{
    int i;
    printf("Enter hight(inches):\n");
    scanf("%d", &i);
    float inch = 2.54;
    float inch2cm = inch * i;
    printf("your height is %.2f\n", inch2cm);
    return 0;
}