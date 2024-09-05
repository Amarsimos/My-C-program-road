#include <stdio.h>
int main(void)
{
    float a, b;
    b = __FLT_MIN__;
    a = b - 1.0;
    printf("%x %x\n", a, b);
    return 0;
}