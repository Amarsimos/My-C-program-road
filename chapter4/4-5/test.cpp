#include <stdio.h>
void swap(int *px, int *py)  /* WRONG */
{
        int temp;
        temp = *px;
        *px = *py;
        *py = temp;
}
main()
{
        int a = 10;
        int b = 20;
        swap(&a, &b);
        printf("a = %d\nb = %d", a, b);
}
