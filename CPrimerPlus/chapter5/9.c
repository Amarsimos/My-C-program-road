#include <stdio.h>
#define INCH 2.54
#define FEET 36.4

void Temperatures(double fhar);
int main(void)
{
    double f;
    f = 0.0;
    printf("Enter fhar temperature:\n");

    while (scanf("%lf", &f) == 1) // 注意scanf的读取格式，%的转义符号不正确导致输入未被正确读取
    {
        Temperatures(f);
        // scanf("%double", &f);
    }

    return 0;
}
void Temperatures(double fhar)
{
    double fhars = fhar;
    double celsius = (5.0 / 9.0) * (fhar - 32.0);
    double kelvin = celsius + 273.15;
    printf("fhar temperature: %0.2f\n", fhars);
    printf("Celsius temperature: %0.2f\n", celsius);
    printf("Kelvin temperature: %0.2f\n", kelvin);
    printf("Enter fhar temperature:\n");
    // return 0;
}