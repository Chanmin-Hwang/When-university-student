#include <stdio.h>

#define f(x) _Generic((x),int : func,\
						  float : funcf,\
						  default : funcld)(x)

int func(int a){return a+1;}
float funcf(float a){return a+2;}
float funcld(long double a){return a+3;}

int main(void)
{
	int x = 100;
	float y = 100.0;
	unsigned z = 100.0;
	long double value;

	value = f(x);
	printf("f(x) = %.2Lf\n",value);
	value = f(y);
	printf("f(y) = %.2Lf\n",value);
	value = f(z);
	printf("f(z) = %.2Lf\n",value);

	return 0;
}
