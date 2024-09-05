#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float height;
    char name[40];

    char fname[40]; // name是一个可容纳40个字符的数组
    char lname[40]; // name是一个可容纳40个字符的数组

    printf("Enter your name\n");
    scanf("%s", name);
    printf("Enter your height in cm\n");
    scanf("%f", &height);
    printf("%s,you are %.3f m at all\n", name, height / 100);
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}