// 练习1-19. 编写一个函数 reverse(s),将字符串 s 翻转过来。使用这个函数写一个程序，
// 把所有输入行进行翻转，每次翻转一行
// 待解决:保存输入的每一行，翻转后打印出来。
#define MAXLEN 10  /* 最大输入行长度 */
#define MAXLINE 10 /* 最大行数 */
#include <stdio.h>
#include <stdlib.h>

void reverse(char to[], char from[]);
int getline(char line[]);
// void copy(char to[], char from[]);
/* 打印最长的输入行 */
main()
{
    int len = 0;               /* 当前行的长度 */
    int line_count = 0;        /* 已读入的行数 */
    char line[MAXLEN];         /* 当前输入行 */
    char out[MAXLEN];          /* 翻转后的行 */
    char all[MAXLEN][MAXLINE]; /* 所有输入行 */
    while (getline(line) > 0)  /* 读取输入行 */
    {
        reverse(out, line); /* 翻转当前输入行 */
        for (int i = 0; out[i] != '\0'; ++i)
        {
            char all[line_count][i] = out[i]; // 保存所有输入行
        }
        line_count++; // 已读入的行数加1
    }
    for (int j = 0; j <= line_count; ++j)
        printf("%s", all); /* 打印翻转后的行 */
    return 0;
}
void reverse(char to[], char from[])
{
    int i, j;
    char c = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        from[i] = c; // 读取一行到temp中
    }
    from[i] = '\0'; // 末尾添加结束符
    j = i - 1;      //
    for (i = 0; i <= j; ++i)
    {
        to[i] = from[j - i];
    }
    to[i] = '\0'; // 末尾添加结束符
}

/* getline:  将一行文本读取到s 中, 并返回其长度  */
int getline(char s[])
{
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}