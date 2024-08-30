#include <stdio.h>

int br(void);
int ic(void);
int main()
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    return 0;
}
int br(void)
{
    printf("brazil,russia");
}
int ic(void)
{
    printf("india,china");
}