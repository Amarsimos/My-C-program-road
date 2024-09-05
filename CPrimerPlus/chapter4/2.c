#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float weight, volume;
    int width;

    char fname[40]; // name是一个可容纳40个字符的数组
    char lname[40]; // name是一个可容纳40个字符的数组
    printf("Hi! What's your first name?\n");
    scanf("%s", fname);
    printf("what's your last name?\n");
    scanf("%s", lname);
    printf("Enter width\n");
    scanf("%d", &width);
    printf("\"%s.%s\"\n", fname, lname);
    printf("\"%20s,%20s\"\n", fname, lname);
    printf("\"%-20s.%-20s\"\n", fname, lname);
    printf("\"%*s.%*s\"\n", width, fname, width, lname); //*号代表占位符，其后跟两个数字，第一个数字表示左对齐的空格数，第二个数字表示右对齐的空格数*/
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}