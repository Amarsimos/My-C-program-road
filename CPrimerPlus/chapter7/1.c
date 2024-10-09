#include <stdio.h>

void reportnum(int space_num, int next_num, int other_num);
int main(void)
{
    int space_num = 0;
    int next_num = 0;
    int other_num = 0;
    int c = 0;
    while ((c = getchar()) != '#')
    {

        if (c == ' ')
            space_num++;
        else if (c == '\n')
            next_num++;
        else
            other_num++;
    }
    reportnum(space_num, next_num, other_num);
    return 0;
}
void reportnum(int space_num, int next_num, int other_num)
{
    printf("space num is %d,\nnext num is %d,\nother num is %d.\n", space_num, next_num, other_num);
}