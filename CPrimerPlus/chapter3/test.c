
#include <stdio.h>
int main(void)
{
    int ten = 2147483647;
    unsigned int two = 4294967295;
    printf("%d minus %d is %d\n", ten, ten + 1, ten + 2);
    printf("%d minus %d is %d\n", two, two + 1, two + 2);
    return 0;
}