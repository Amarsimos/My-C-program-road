#include <stdio.h>
#include <string.h>
#define INDEX 8
#define COL 6

float plus_plus(int i);
float plus_minus(int i);
int power(int base, int exp);

int main(void)
{
    int row[8];
    for (int i = 1; i <= 8; i++)
    {
        row[i - 1] = power(2, i);
    }
    int i = 0;
    do
    {
        printf("Number is %d\n", row[i++]);
    } while (i < 8);
    return 0;
}
int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
        result *= base;
    return result;
}
