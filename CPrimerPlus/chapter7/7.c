#include <stdio.h>
#define FIRST 0.15
#define SECOND 0.2
#define THIRD 0.25

float TotalRevenue(int hours);
float Tex(int money);
float Bare(float money, float tex);

int main(void)
{
    int hours = 0;
    float texes = {0};
    float money = 0;
    printf("Enter work hours : \n");
    scanf("%d", &hours);
    money = TotalRevenue(hours);
    texes = Tex(money);
    printf("Total revenue : %.2f\n", money);
    printf("Tex : %.2f\n", texes);
    printf("Bare : %.2f\n", Bare(money, texes));
    return 0;
}

float TotalRevenue(int hours)
{
    float overwork_money = 0;
    if (hours >= 40)
        overwork_money = (hours - 40) * 1.5 * 1000;
    float sum = 1000 * hours + overwork_money;
    return sum;
}
float Tex(int money)
{
    float sum = 0;
    float sum1 = 300 * FIRST;
    float sum2 = sum1 + 150 * SECOND;
    if (money < 300 && money >= 0)
        sum = money * FIRST;
    else if (money >= 300 && money < 450)
        sum = sum1 + (money - 300) * SECOND;
    else if (money >= 450)
        sum = sum2 + (money - 450) * THIRD;
    else
        return -1;
    return sum;
}
float Bare(float money, float tex)
{
    float sum = 0;
    sum = money - tex;
    return sum;
}
