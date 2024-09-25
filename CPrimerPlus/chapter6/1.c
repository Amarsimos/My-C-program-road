#include <stdio.h>
#define SIZE 26

int main(void)
{
    char letters[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        letters[i] = 'a' + i;
    }
    printf("The letters are: ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%c ", letters[i]);
    }
    return 0;
}