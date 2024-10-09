#include <stdio.h>
#include <math.h>

int is_int(int num);
int find_prime(int num);

int main()
{
    int i = 0;
    int num;
    int flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (!is_int(num))
    {
        printf("not a integer number,\n");
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    printf("2 ");
    for (i = 3; i <= num; i++)
    {
        flag = find_prime(i);
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }
    printf("are a prime number.\n", i);
}

int is_int(int num)
{

    if (num > 0)
        return 1;
    else
        return 0;
}
int find_prime(int num)
{
    if (num < 2)
        return 0;

    int j;
    for (j = 2; j <= sqrt(num); j++)
    {
        if (num % j == 0)
        {
            return 0;
        }
    }

    return 1;
}
