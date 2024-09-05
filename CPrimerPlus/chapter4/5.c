#include <stdio.h>
#include <string.h>
#define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)
int main()
{
    float speed, filesize;
    char name[40];

    char fname[40]; // name是一个可容纳40个字符的数组
    char lname[40]; // name是一个可容纳40个字符的数组

    printf("Enter download speed in Mbps\n");
    scanf("%f", &speed);
    printf("Enter filesize\n");
    scanf("%f", &filesize);
    printf("downloadspeed: %f Mbps\nfilesize: %f MB\ntime: %f seconds\n", speed, filesize, filesize / (speed / 8));
    // printf("Also,your first name has %d letters,\n", letters);
    return 0;
}