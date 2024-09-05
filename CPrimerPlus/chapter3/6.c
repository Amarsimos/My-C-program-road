#include <stdio.h>

int main()
{
    int i;
    printf("Enter kurt:\n");
    scanf("%d", &i);
    double W_ATOM = 3.0e-23;
    double j = 950.0 / W_ATOM; // 数据类型注意，隐式转换会出问题
    printf("Water Atoms is %.2e\n", j * i);
    return 0;
}