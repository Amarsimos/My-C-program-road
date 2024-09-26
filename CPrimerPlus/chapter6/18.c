#include <stdio.h>
#include <string.h>
#define DUMBAR 150

int increase(int base, int week);
float multi(float base, int year);

int main(void)
{
    int bases;
    printf("Enter the base friend:\n");
    scanf("%d", &bases);
    int weeks = 1, friends = 0;

    friends = increase(bases, weeks);
    printf("The week %4d friend increased to %4d\n", weeks++, friends);
    bases = friends;
    while (0 < friends && friends <= DUMBAR)

    {
        friends = increase(bases, weeks);
        while (0 < friends && friends <= DUMBAR) // 目前进度未到if，这里使用while测试条件，使用break跳出循环，效果与if一样
        {

            printf("The week %4d friend increased to %4d\n", weeks++, friends);
            bases = friends;
            break;
        }
    }

    return 0;
}

int increase(int base, int week)
{
    int sum = base;

    sum = (sum - week) * 2;
    // printf("The week %4d friend increased to %4d\n", week, sum);

    return sum;
}
