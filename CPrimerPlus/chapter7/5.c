#include <stdio.h>
#define MAX_SIZE 100

void alter(int c);

int main(void)
{
    int c = 0;
    int count = 0;
    printf("Enter something :\n");

    while ((c = getchar()) != '#')
    {
        if (c != '\n') // 换行时不计数
        {
            alter(c);
            count++;
        }
    }
    printf("\n");
    printf("\ntranslated %d characters.\n", count);
    return 0;
}
void alter(int c)
{
    switch (c)
    {
    case '.':
        putchar('!');
        break;
    case '!':
        putchar('!');
        putchar('!');
        break;
    default:
        putchar(c);
        break;
    }
}