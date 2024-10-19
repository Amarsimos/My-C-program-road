#include <stdio.h>
#define FIRESTGUESS 50
#define MAX_NUM 100
#define MIN_NUM 0

int binary_search(int *plower, int *pupper, int iguess, int input);
int Is_Odd(int num);
char get_first_noblank(void);

int main()
{
    int cnum;
    cnum = get_first_noblank();
    printf("%c", cnum);

    return 0;
}
char get_first_noblank(void)
{
    int ich;
    int iback;

    ich = getchar();
    // if (getchar() != '\n') // 忽略换行符
    //     continue;

    while ((ich = getchar()) == ' ') // while的测试条件为真执行循环,ich!=' '时,当ich为space时,表达式假,,循环不执行
        ;
    return ich;
}
