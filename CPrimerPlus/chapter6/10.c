#include <stdio.h>
#include <string.h>
#define ROW 6
#define COL 6
int result(int up, int down);

int main(void)
{
    // int rows;
    int up;
    int down;
    printf("Enter the uplimit int : \n");
    int a = scanf("%d", &up);
    printf("Enter the downlimit int : \n");
    int b = scanf("%d", &down);
    for (; a == 1 && b == 1 && up > down;) // 打印行数
    {
        int results = result(up, down);
        printf("result is : %d\n", results);
        printf("Enter the uplimit int : \n");
        a = scanf("%d", &up);
        printf("Enter the downlimit int : \n");
        b = scanf("%d", &down);
    }
    printf("End of program.\n");
    return 0;
}

int result(int up, int down)
{
    int pow_all = 0;
    for (int i = down; i <= up; i++)
    {
        int pow = i * i;
        pow_all += pow;
    }

    return pow_all;
}