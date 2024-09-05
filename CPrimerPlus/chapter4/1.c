#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float weight, volume;
    int size, letters;
    char fname[40]; // name是一个可容纳40个字符的数组
    char lname[40]; // name是一个可容纳40个字符的数组
    printf("Hi! What's your first name?\n");
    scanf("%s", fname);
    printf("what's your last name?\n");
    scanf("%s", lname);
    printf("Well,%s,your name is%s.%s\n", fname, fname, lname);
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}