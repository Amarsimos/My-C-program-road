//练习1-2. 在printf 函数的参数字符串中包含 \c （c 为某个先前未曾列出的字符，可变），请试验并找出会产生的情况。

#include <stdio.h>

main()
{
printf("hello,");
printf("world");
printf("\n c");
}
