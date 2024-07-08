// 编写一个程序，打印出所有长度超过80 个字符的输入行。
// 
#define MAXLINE 1000 /* 最大输入行长度 */
#define MAXLEN 80    /* 最大行长度 */
#include <stdio.h>

int getline(char line[]);
void copy(char to[], char from[]);
/* 打印最长的输入行 */
main()
{
    int len;               /* 当前行的长度 */
    int max;               /* 已读入的最长行的长度 */
    char line[MAXLINE];    /* 当前输入行 */
    char above80[MAXLINE]; /* 当前大于80的文本行 */
    while ((len = getline(line)) > 0)
        if (len > MAXLEN)
        {
          //  copy(above80, line);
            printf("%s", above80);// 打印大于80的文本行
        }
    return 0;
}

/* getline:  将一行文本读取到s 中, 并返回其长度  */
int getline(char s[])
{
    int c, i, j; // i为计数变量
    j = 0;       // j为数组下标
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i <= MAXLINE - 2) // 即将超出数组长度，停止保存字符，继续计数
            s[j++] = c;
    }
    if (c == '\n')
    {
        s[j++] = c;
        ++i;
    }
    s[j] = '\0'; // 数组最后两位固定保存\n\0,
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