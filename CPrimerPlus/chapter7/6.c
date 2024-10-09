#include <stdio.h>
#define MAX_SIZE 100

int find_ei();

int main(void)
{
    int count = 0;
    int ei[3] = {0};
    printf("Enter something :\n");
    count = find_ei();

    printf("\n");
    printf("%d times 'ei' found.\n", count);
    return 0;
}
int find_ei()
{
    int c = 0;
    int count = 0;
    int flag = 0;

    while ((c = getchar()) != '#')
    {

        switch (c)
        {
        case 'e':
            flag = 1; // 使用flag来标记是否找到ei
            break;
        case 'i':
            if (1 == flag)
                count++;
            flag = 0;
            break;
        default:
            flag = 0;
            break;
        }
    }
    return count;
}