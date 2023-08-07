#include <stdio.h>
 /*打印华氏温度一提氏温度对照表*/
main()
{
int f;
printf("华氏温度一提氏温度对照表\n");
for (f = 300; f >= 0; f = f  - 10)
printf("%3d %6.1f\n", f, (5.0/9.0)*(f-32));
} 
