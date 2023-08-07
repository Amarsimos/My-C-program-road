#include <stdio.h>
int main()
{
	float f, c;
	int upper,lower,step;
	upper = 300;
	lower = 0;
	step = 10;
	f = lower;
	printf("\tC to F Table\n\n");
	while (f<=upper){
		c = (5.0 / 9.0) * (f - 32.0);
		printf("%3.2f%6.0f\n",c,f);
		f = f+step;
		printf("ok\n");
	}
}
