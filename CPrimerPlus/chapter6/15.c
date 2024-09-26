#include <stdio.h>
#include <string.h>
#define INDEX 8
#define COL 6

float plus_plus(int i);
float plus_minus(int i);
int power(int base, int exp);

int main(void)
{
    char str[255];
    for (int i = 0; i < 255; i++)
    {
        str[i] = 0;
    }
    printf("Enter the text:\n");
    int j = 0;
    for (int i = 0; i < 255 && str[i - 1] != '\n'; i++, j++) // 重点在于数组的序号,以"123"为例,实际存入的是"123\n"共四个字符,存入的编号为0123,执行完for一行后i已经+1了,所以i-1才是"123"的最后一个字符
    {
        int c = str[j] != '\n';
        char ch = str[i - 1];
        scanf("%c", &str[i]); // scanf函数参数需要了取地址符号
    }

    int index = 0;
    for (int i = 255; i > 0 && str[i] != '\n'; i--)
    {
        index = i - 1;//i在执行完for循环后已经-1了,所以i-1才是"123"的最后一个字符
    }
    for (int i = index; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
