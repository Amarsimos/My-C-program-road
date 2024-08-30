#include <stdio.h>

int y2d(int year);
int main() 
{
    int year;
    scanf("%d",&year);
    printf("%dyears is %d days.\n",year,y2d(year));
    return 0;
}
int y2d(int year) 
{
    int day;
    day = year * 365 + day;
    return day;
}