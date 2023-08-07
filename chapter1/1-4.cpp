#include <stdio.h>
int main()
{
	float f, c;
	int upper,lower,step;
	upper = 300;
	lower = 0;
	step = 10;
	c = lower;
	while (c<=upper){
		f = c * 9.0 / 5.0 + 32.0;
		printf("c %6.2f is f %6.2f\n",c,f);
		c = c+step;
	}
}
