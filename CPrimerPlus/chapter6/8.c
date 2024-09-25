#include <stdio.h>
#include <string.h>
#define ROW 6
#define COL 6

int main(void)
{
    // int rows;
    float fst;
    float snd;
    printf("Enter the float : \n");
    int a = scanf("%f", &fst);
    printf("Enter the other float : \n");
    int b = scanf("%f", &snd);
    for (; a == 1 && b == 1;) // 打印行数
    {

        float diff = fst - snd;
        float product = fst * snd;
        float quotient = diff / product;
        printf("result is : %f\n", quotient);
        printf("Enter the float : \n");
        a = scanf("%f", &fst);
        printf("Enter the other float : \n");
        b = scanf("%f", &snd);
    }
    return 0;
}