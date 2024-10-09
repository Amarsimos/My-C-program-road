#include <stdio.h>

void printCharAndASCII(int c);
int main(void)
{
    int space_num = 0;
    int next_num = 0;
    int other_num = 0;
    int c = 0;
    int count = 1;
    while ((c = getchar()) != '#')
    {
        if (((count - 1) % 8) == 0 && count != 0)
            printf("\n");
        if (c == '\n')
            count = 0; // count在这里赋值会导致下面多计数一次,不想赋值负数,于是把判断条件减了1,初值赋值1
        else
            printCharAndASCII(c);
        count++;
    }
    printf("\n");

    return 0;
}
void printCharAndASCII(int c)
{
    printf("%c:%d\t", c, c);
}