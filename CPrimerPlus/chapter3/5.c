#include <stdio.h>
#define SEC 3.156e9
int main()
{
    int i;
    printf("Enter you year:\n");
    scanf("%d", &i);
    int yr2sec = SEC * i;
    int b = SEC * 100; // b overflow
    printf("year to second is %dor %d\n", yr2sec, b);
    return 0;
}