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
        alter(c);
        count++;
    }
    printf("\ntranslated %d characters.\n", count - 1);
    return 0;
}
void alter(int c)
{
    if (c == '.')
        putchar('!');
    else if (c == '!')
    {
        putchar('!');
        putchar('!');
    }
    else
        putchar(c);
}