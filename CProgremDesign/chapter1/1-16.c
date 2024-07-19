// 练习1-16. 对longest-line程序的main函数进行修改，使之能够处理任意长度的输入行，以及尽可能多的输入文本。
//只计数，不存字符
#define MAXLINE 1000 /* 最大输入行长度 */
#include <stdio.h>

int getline(char line[]);
void copy(char to[], char from[]);
/* 打印最长的输入行 */
main()
{
    int len;               /* 当前行的长度 */
    int max;               /* 已读入的最长行的长度 */
    char line[MAXLINE];    /* 当前输入行 */
    char longest[MAXLINE]; /* 当前最长的文本行 */
    max = 0;
    while ((len = getline(line)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* 如果存在一行 */
        printf("%s", longest);
    return 0;
}

/* getline:  将一行文本读取到s 中, 并返回其长度  */
int getline(char s[])
{
    int c, i, j;//i为计数变量
    j = 0;//j为数组下标
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i <= MAXLINE - 2)//即将超出数组长度，停止保存字符，继续计数
        s[j++] = c;
    }
    if (c == '\n')
    {
        s[j++] = c;
        ++i;
    }
    s[j] = '\0';//数组最后两位固定保存\n\0,
    return i;
}

/* copy:  将 'from' 拷贝到 'to'，假定to 足够大 */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}