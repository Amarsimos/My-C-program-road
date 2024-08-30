#include <stdio.h>

int smile();
int main()
{
    int k = 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < k; j++)
        {
            smile();
        }
        printf("\n");
        k--;
    }
    return 0;
}
int smile()
{
    printf("Smile!");
}