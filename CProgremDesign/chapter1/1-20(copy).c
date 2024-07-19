#include <stdio.h>

#define NUMTAB 8

int main()
{
    int c, listNum = 0, spNum, i;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            spNum = NUMTAB - (listNum % NUMTAB);
            for (i = 0; i < spNum; i++)
            {
                putchar(' ');
            }
            listNum += spNum;
        }
        else if (c == '\n')
        {
            listNum = 0;
            putchar(c);
        }
        else
        {
            putchar(c);
            listNum++;
        }
    }
    return 0;
}