#include <stdio.h>

int main()
{

    printf("Enter cups:\n");
    float cup;
    scanf("%f", &cup);
    float pint, angs, spoon, teaspoon;
    pint = cup / 2;
    angs = cup * 8;
    spoon = angs * 2;
    teaspoon = spoon * 3;

    printf("pint  is %.2f\n", pint);
    printf("angs  is %.2f\n", angs);
    printf("spoon  is %.2f\n", spoon);
    printf("teaspoon  is %.2f\n", teaspoon);
    return 0;
}
