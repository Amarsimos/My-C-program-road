#include <stdio.h>

int main()
{
    float e;
    printf("Enter a float\n");
    scanf("%f", &e);
    printf("is %.2f or is %.2e or is %.2p\n", e, e, e);
    return 0;
}