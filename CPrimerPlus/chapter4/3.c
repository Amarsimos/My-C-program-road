#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float number, volume;
    int width;

    char fname[40]; // name是一个可容纳40个字符的数组
    char lname[40]; // name是一个可容纳40个字符的数组

    printf("Enter a number\n");
    scanf("%f", &number);
    printf("%f\n", number);
    printf("%e\n", number);
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}