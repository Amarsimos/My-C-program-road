#include <stdio.h>
#define hour 60

int main()
{
    int i;
    int j;
    printf("Enter any integer: ");

    scanf("%d", &i);
    j = i;
    while (i <= j + 10)
    {
        printf("%d \t", i++);
    }

    return 0;
}