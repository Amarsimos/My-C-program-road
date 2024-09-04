#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platium? \n");
    printf("Lets checki it out!\n");
    printf("Please enter your weight in pounds: ");

    // scanf("%f", &weight);
    getchar(); // consume the newline character
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platium is: %.2f\n", value);
    return 0;
}