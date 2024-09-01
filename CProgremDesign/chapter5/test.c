#include <stdio.h>
#define ARR_SIZW 10
int strlen(char *s)
{
        int n;

        for (n = 0; *s != '\0'; s++)
                n++;
        return n;
}
int main()
{
        int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        int *pa;
        pa = &a;
        int x = *(pa + 9);
        int y = *(pa + 5);
        int z = *(pa + 1);
        printf("x = %d, y = %d, z = %d\n", x, y, z);
        return 0;       

}