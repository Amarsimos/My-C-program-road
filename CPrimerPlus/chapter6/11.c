#include <stdio.h>
#include <string.h>
#define INDEX 8
#define COL 6
int result(int up, int down);

int main(void)
{
    // int rows;
    int row[INDEX];
    for (int i = 0; i < INDEX; i++)
    {
        printf("Enter the %d row : ", i + 1);
        scanf("%d", &row[i]);
    }
    printf("result is : \n");
    for (int i = INDEX - 1; i >= 0; i--) // 打印行数
    {
        printf("%d ", row[i]);
    }
    printf("result is : \n");
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