#include <stdio.h>
#define INCH 2.54
#define FEET 36.4

int main()
{
    float cm;
    float feets;
    float inchs;
    printf("Enter your height: ");

    scanf("%f", &cm);
    while (cm > 0)
    {
        feets = cm / FEET;
        inchs = cm / INCH;
        printf("%.2f cm is  %.2f feet and %.2f inch\n", cm, feets, inchs);
        printf("Enter your height: ");
        scanf("%f", &cm);
    }

    return 0;
}