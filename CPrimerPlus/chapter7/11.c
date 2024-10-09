#include <stdio.h>
#include <math.h>

#define TYPEA 2.05   // 洋蓟
#define TYPEB 1.15   // 甜菜
#define TYPEC 1.09   // 萝卜
#define SELLOFF 0.05 // 100磅运费打折
#define FEE 6.5      // 低于5磅服务费
#define FEE2 14      // 5-20磅服务费
#define FEE3 0.5     // 超过20磅服务费/磅

void Menu();                                                                                                                                               // 显示菜单
void Counter(float yangji, float tiancai, float lobo, float total_weight, float stock_money, float total_price, float payment, float discount, float fee); // 计算数量
// float choose(choice);                                                                                               // 选择菜单项
float Total_Weight(float yangji, float tiancai, float lobo); // 总重量
float Stock_Money(float yangji, float tiancai, float lobo);  // 货物总价
float Total_Price(float stockmoney, float fee);              // 订单总价
float Payment(float total, float discount);                  // 实付款 = 总价 - 运费 - 折扣
float Discount(float total);                                 // 折扣
float Fee(float weight);                                     // 服务费

int main()
{
    int num = 0;
    int money = 0;
    int type = 0;
    int yangji_weight = 0;
    int tiancai_weight = 0;
    int lobo_weight = 0;

    Menu();             // 显示菜单
    scanf("%d", &type); // 选择菜单项
    while (type != 0)
    {

        switch (type)
        {
        case 1:
            printf("您选择了洋蓟\n");
            printf("您需要的数量是：");
            scanf("%d", &num);
            yangji_weight += num;
            break;
        case 2:
            printf("您选择了甜菜\n");
            printf("您需要的数量是：");
            scanf("%d", &num);
            tiancai_weight += num;
            break;
        case 3:
            printf("您选择了萝卜\n");
            printf("您需要的数量是：");
            scanf("%d", &num);
            lobo_weight += num;
            break;
        case 0:
            printf("开始结账：\n");
            break;
        default:
            printf("输入错误，请重新输入！\n");
            break;
        }
        Menu();
        scanf("%d", &type);
    }
    float total_weight = Total_Weight(yangji_weight, tiancai_weight, lobo_weight); // 总重量
    float stockmoney = Stock_Money(yangji_weight, tiancai_weight, lobo_weight);    // 货物总价
    float fee = Fee(total_weight);                                                 // 服务费
    float totalprice = Total_Price(stockmoney, fee);                               // 订单总价
    float discount = Discount(stockmoney);                                         // 折扣
    float payment = Payment(totalprice, discount);                                 // 实付款
    Counter(yangji_weight, tiancai_weight, lobo_weight, total_weight, stockmoney, totalprice, payment, discount, fee);
    return 0;
}

void Menu() // 显示菜单
{
    printf("******************订购菜单************************\n");
    printf("1.洋蓟：2.05美元/磅\n");
    printf("2.甜菜：1.15美元/磅\n");
    printf("3.萝卜：1.09美元/磅\n");
    printf("输入订购的类型(0:结账)：\n");
    printf("*************************************************\n");
}

void Counter(float yangji, float tiancai, float lobo, float total_weight, float stock_money, float total_price, float payment, float discount, float fee) // 计算数量
{

    printf("1.洋蓟****************%.2f美元/磅\n", TYPEA);
    printf("2.甜菜****************%.2f美元/磅\n", TYPEB);
    printf("3.萝卜****************%.2f美元/磅\n", TYPEC);
    printf("*************************************************\n");
    printf("洋蓟重量：%.2f磅\n", yangji);
    printf("甜菜重量：%.2f磅\n", tiancai);
    printf("萝卜重量：%.2f磅\n", lobo);
    printf("货物总重量：%.2f磅\n", total_weight);
    printf("货物总价：%.2f美元\n", stock_money);
    printf("订单金额：%.2f美元\n", total_price);
    printf("折扣：%.2f美元\n", discount);
    printf("服务费：%.2f美元\n", fee);
    printf("*************************************************\n");
    printf("实付款：%.2f美元\n", payment);
}

// int choose(choice) // 选择菜单项
// {
//     int num = 0;
//     switch (choice)
//     {
//     case 1:
//         printf("您选择了洋蓟\n");
//         printf("您需要的数量是：");
//         scanf("%d", &num);
//         return num;
//         break;
//     case 2:
//         printf("您选择了甜菜\n");
//         printf("您需要的数量是：");
//         scanf("%d", &num);
//         return num;
//         break;
//     case 3:
//         printf("您选择了萝卜\n");
//         printf("您需要的数量是：");
//         scanf("%d", &num);
//         return num;
//         break;
//     case 0:
//         printf("欢迎下次光临！\n");
//         exit(0);
//         break;
//     default:
//         printf("输入错误，请重新输入！\n");
//         break;
//     }
// }

float Total_Weight(float yangji, float tiancai, float lobo) // 总重量
{
    float total = yangji + tiancai + lobo;
    return total;
}

float Stock_Money(float yangji, float tiancai, float lobo) // 货物总价
{
    float total = yangji * TYPEA + tiancai * TYPEB + lobo * TYPEC;
    return total;
}

float Total_Price(float stockmoney, float fee) // 订单总价
{
    float total = stockmoney + fee;

    return total;
}

float Payment(float total, float discount) // 实付款 = 总价  - 折扣
{
    float payments = total - discount;
    return payments;
}

float Discount(float total) // 折扣
{
    if (total >= 100)
    {
        total *= SELLOFF;
        return total;
    }
    return 0;
}

float Fee(float weight) // 服务费
{
    float sum = 0;
    if (weight < 5)
        sum = FEE;
    else if (weight >= 5 && weight <= 20)
        sum = FEE2;
    else
        sum = FEE2 + FEE3 * (weight - 20);
    return sum;
}
