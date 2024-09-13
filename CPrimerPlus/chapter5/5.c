#include <stdio.h>
#define INCH 2.54
#define FEET 36.4

int main(void)
{
    int count, sum, i;
    i = 0;
    count = 0;
    sum = 0;
    printf("Enter the count\n");
    scanf("%d", &i);
    while (count++ < i)
    {
        sum += 100;
    }
    printf("Sum = %d\n", sum);
    return 0;
}