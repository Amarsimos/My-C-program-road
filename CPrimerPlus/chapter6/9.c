#include <stdio.h>
#include <string.h>
#define ROW 6
#define COL 6
float result(float fst, float snd, float quotient);

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
        float results = result(fst, snd, results);
        printf("result is : %f\n", results);
        printf("Enter the float : \n");
        a = scanf("%f", &fst);
        printf("Enter the other float : \n");
        b = scanf("%f", &snd);
    }
    return 0;
}

float result(float fst, float snd, float quotient)
{
    float diff = fst - snd;
    float product = fst * snd;
    quotient = diff / product;
    return quotient;
}