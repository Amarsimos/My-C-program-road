// 编写一个程序，它将每个输入行*末尾的*所有空格和制表符去掉，并将全空白的行删除掉
//
#define MAXLINE 1000 /* 最大输入行长度 */
#define MAXLEN 80    /* 最大行长度 */
#include <stdio.h>

int getline(char line[]);
void copy(char to[], char from[]);
/* 打印最长的输入行 */
main()
{
    int len;            /* 当前行的长度 */
    int max;            /* 已读入的最长行的长度 */
    char line[MAXLINE]; /* 当前输入行 */
    char last[MAXLINE];
    while ((len = getline(line)) > 0)
    {
        copy(last, line);
    }
    printf("%s", last);
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

/* copy:  将 'from' 拷贝到 'to'，假定to 足够大,跳过空格和制表符 */
void copy(char to[], char from[])
{
    int i, j;
    i = 0;
    j = 0;
    while (from[i] != '\0')
    {
        if (from[i] != ' ' && from[i] != '\t')// 遇到非空白符,制表符，复制
        {
            to[j] = from[i];
            ++i;
            ++j;
        }
        else if (from[i] == '\n') // 遇到换行符，停止复制
            ;
        else     // 遇到空白符,制表符，跳过
            ++i; //下一个字符
    }
}