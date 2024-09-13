#include <stdio.h>
#define week 7

int main()
{
    int i;
    int days;
    int weeks;
    printf("Enter any days: ");

    scanf("%d", &i);
    while (i > 0)
    {
        weeks = i / week;
        days = i % week;
        printf("%d week(s) and %d day(s)\n", weeks, days);
        scanf("%d", &i);
    }

    return 0;
}