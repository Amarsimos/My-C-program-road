#include <stdio.h>
 /* copy input to output; 2nd version */
 //验证表达式getchar（）！=EoF的值是O还是l。
main()
{
int c;
c = getchar() != EOF;
printf("%d",c);
}
//当不等于EOF值为1 ,输入ctrl+z,值为0 
