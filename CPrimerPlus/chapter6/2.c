#include <stdio.h>
#define SIZE 26

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}