#include <stdio.h>

int CountLower(char ch);
int CountUpper(char ch);
int main(void)
{
    char ch = 0;
    int i = 0;
    int j = 0;
    printf("Enter a string: \n");
    ch = getchar(); // goto 进行流程控制有太多不确定性,使用goto无法控制条件,还是使用while循环
    while (ch != EOF)
    {
        i += CountLower(ch);
        j += CountUpper(ch);
        ch = getchar();
    }
    printf("Lower case count: %d\n", i);
    printf("Upper case count: %d\n", j);
    return 0;
}

int CountLower(char str)
{
    int count = 0;
    if (str >= 'a' && str <= 'z')
    {
        count++;
    }
    return count;
}
int CountUpper(char str)
{
    int count = 0;
    if (str >= 'A' && str <= 'Z')
    {
        count++;
    }
    return count;
}
