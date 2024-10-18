#include <stdio.h>
#define FIRESTGUESS 50
#define MAX_NUM 100
#define MIN_NUM 0

int binary_search(int *plower, int *pupper, int iguess, int input);
int Is_Odd(int num);

int main()
{
    int inum;
    int iguess = FIRESTGUESS;
    int iupper = MAX_NUM;
    int ilower = MIN_NUM;
    int *pupper = &iupper;
    int *plower = &ilower;
    printf("Guess your number under 100,tell me big(2) or small(1) or right(0),q to quit: \n");
    printf("I iguess the number is %d\n", FIRESTGUESS);
    while ((inum = getchar()) != 'q')
    {
        if (inum == '\n') // 忽略换行符
            continue;
        if ('0' == inum) // 答对后跳出循环
        {
            printf("I am smart!\n");
            break;
        }
        iguess = binary_search(plower, pupper, iguess, inum);
        printf("I Guess the number: %d\n", iguess);
    }
    printf("ok ,bye!");
    return 0;
}
int binary_search(int *plower, int *pupper, int iguess, int input)
{
    if ('1' == input) // a<number
    {
        if (Is_Odd(iguess))
        {
            *plower = iguess;
            iguess += (*pupper - iguess + 1) / 2;
        }
        else
        {
            *plower = iguess;
            iguess += (*pupper - iguess) / 2;
        }
    }
    else if ('2' == input) // a>number
    {
        if (Is_Odd(iguess))
        {
            *pupper = iguess;
            iguess -= (iguess + 1 - *plower) / 2;
        }
        else
        {
            *pupper = iguess;
            iguess -= (iguess - *plower) / 2;
        }
    }
    else if ('0' == input) // a=number
    {
        return iguess;
    }
    return iguess;
}
int Is_Odd(int num)
{
    if (num % 2 == 0)
        return 0;
    else
        return 1;
}