#include <stdio.h>
#define INCH 2.54
#define FEET 36.4

double cube(double i);
int main(void)
{
    int count, sum, i, j;
    i = j = 0;
    count = 0;
    sum = 0;
    printf("Enter the 2nd number\n");
    scanf("%double", &i);
    printf("Enter the 1st number\n");
    scanf("%double", &j);
    sum = j % i;
    printf("%d %% %d= %d\n", j, i, sum);
    printf("Enter the next 1st number\n");
    scanf("%double", &j);
    while (j >= 0)
    {
        sum = j % i;
        printf("%d %% %d= %d\n", j, i, sum);
        printf("Enter the next 1st number\n");
        scanf("%double", &j);
    }

    return 0;
}
double cube(double i)
{

    i = i * i * i;
    return i;
}