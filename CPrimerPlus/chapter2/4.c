#include <stdio.h>

int jolly(void);
int deny(void);
int main()
{
    for (int i = 0; i < 3; i++)
    jolly();
    deny();
    return 0;
}
int jolly(void)
{
    printf("For he is a jolly good fellow!\n");
}
int deny(void)
{
    printf("which nobody can deny!\n");
}