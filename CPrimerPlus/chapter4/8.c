#include <stdio.h>
#include <string.h>
#define gallon 3.785 // 加仑量(单位:升)
#define mile 1.609   // 英里(单位:米)
int main()
{
    float miles, gallons;

    printf("Enter mile\n");
    scanf("%f", &miles);
    printf("Enter oil\n");
    scanf("%f", &gallons);
    printf(" per gallon you drive: %.1f\n", miles / gallons);
    float km = miles * mile;
    float L = gallons * gallon;
    float per = (L / km) * 100;
    printf(" per 100km you use: %.10f\n", per);

    // printf("%*s %*s", a, a, b, b);
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}