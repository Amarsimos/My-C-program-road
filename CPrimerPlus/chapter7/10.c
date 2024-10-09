#include <stdio.h>
#include <math.h>

#define TYPEA 17850
#define TYPEB 23900
#define TYPEC 29750
#define TYPED 14875
#define TYPE_RATE 0.15
#define OVER_RATE 0.28

float Tex(int type, int money);

int main()
{
    int i = 1;
    int money = 0;
    int type = 0;
    float tex = 0;

    while (1 == i) // 注意赋值符号
    {
        printf("Enter the type of the tex (1,2,3,4): \n");
        scanf("%d", &type);
        printf("Enter the amount of money:\n");
        scanf("%d", &money);
        tex = Tex(type, money);
        printf("The tex is: %.2f\n", tex);
        printf("Continue? (1:yes, 0:no)\n"); // 流程控制返回可以添加一个用户确认按钮
        scanf("%d", &i);
    }
    return 0;
}

float Tex(int type, int money)
{
    float sum;
    switch (type) // 使用switch对type进行赋值
    {
    case 1:
        type = TYPEA;
        break;
    case 2:
        type = TYPEB;
        break;
    case 3:
        type = TYPEC;
        break;
    case 4:
        type = TYPED;
        break;
    default:
        printf("Invalid type!\n");
    }
    if (money <= type)
        sum = money * TYPE_RATE;
    else
        sum = type * TYPE_RATE + (money - type) * OVER_RATE;
    return sum;
}