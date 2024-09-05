#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float weight, volume;
    int size, letters;
    char name[40]; // name是一个可容纳40个字符的数组
    int rv = printf("Hi! What's your first name?\n");
    printf("Hi! What's your first name?%d\n",rv);
    scanf("%s", name);
    printf("%s,what's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well,%s,your volume is%2.2f cubic feet.\n", name, volume);
    printf("Also,your first name has %d letters,\n", letters);
}