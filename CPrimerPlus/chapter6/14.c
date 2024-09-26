#include <stdio.h>
#include <string.h>
#define INDEX 8
#define COL 6

float plus_plus(int i);
float plus_minus(int i);
int power(int base, int exp);

int main(void)
{
    float row1[8];
    float row2[8];
    printf("Enter the first row:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Enter number for row 1, column %d: ", i + 1);
        scanf("%f", &row1[i]);
    }

    row2[0] = row1[0];
    for (int i = 1; i < 8; i++)
    {
        row2[i] = row2[i - 1] + row1[i];
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%*.2f ", 8, row1[i]);
    }
    printf("\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%*.2f ", 8, row2[i]); //*号为宽度控制符，控制的是整个打印字符的宽度，确保足够宽
    }

    return 0;
}
int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}
