#include <ctype.h>
#include <stdio.h>
#include <conio.h>
// #include <string.h>
// int getch(void);
// void ungetch(int);

/* getint：取得输入中整数并放到 *pn 中 */
int getint(int *pn)
{
    int c, sign;
    while (isspace(c = getch())) /* 略过空白符 */
        ;
    if (isdigit(c) && c != EOF && c != '*' && c != '-')
    {
        ungetch(c); /* 它不是数字 */
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
int main()
{
    int a = 10;
    int b = 20;
}

