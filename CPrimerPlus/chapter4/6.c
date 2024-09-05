#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float speed, filesize;
    char name[40];

    char fname[40]; // name是一个可容纳40个字符的数组
    char lname[40]; // name是一个可容纳40个字符的数组

    printf("Enter fname\n");
    scanf("%s", fname);
    printf("Enter lname\n");
    scanf("%s", lname);
    int a = printf("%s", fname);
    printf(" ");
    int b = printf("%s", lname);
    printf("\n%*d %*d", a, a, b, b);
    printf("\n%-*d %-*d", a, a, b, b);

    // printf("%*s %*s", a, a, b, b);
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}