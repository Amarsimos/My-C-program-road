#include <stdio.h>
#define hour 60

int main()
{
    int min;
    int hours;
    printf("Enter the number of minutes: ");
    scanf("%d", &min);
    while (min >= 0)
    {
        hours = min / hour;
        min %= hour;
        printf("%d hours and %d minutes\n", hours, min);
        scanf("%d", &min);
    }
    return 0;
}