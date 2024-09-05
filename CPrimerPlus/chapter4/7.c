#include <stdio.h>
#include <string.h>
#include <float.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float i;
    double j;
    i = 1.0 / 3.0;
    j = 1.0 / 3.0;
    printf("i = %.6f, j = %.6f\n", i, j);
    printf("i = %.12f, j = %.12f\n", i, j);
    printf("i = %.16f, j = %.16f\n", i, j);
    printf("i = %d, j = %d\n", FLT_DIG, DBL_DIG);

    // printf("%*s %*s", a, a, b, b);
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}