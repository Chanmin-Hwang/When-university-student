#include <stdio.h>
int main(void)
{
	float one = 1.0, zero = 0.0, r1, r2;

	r1 = one / zero;
	r2 = -one / zero;
	printf("무한대 * 무한대 = %f\n", r1*r1);
	printf("무한대 * -무한대 = %f\n", r1*r2);
	printf("무한대 * 0 = %f\n", r1*zero);
	printf("-무한대 * 0 = %f\n", r2*zero);
	printf("1/무한대 =  %f\n", one / r1);
	printf("1/-무한대 =  %f\n", one / r2);
	printf("무한대 / 무한대 = %f\n", r1/r1);
	printf("무한대 / -무한대 = %f\n", r1/r2);
	printf("무한대 - 무한대 = %f\n", r1-r1);
	printf("무한대 + 1 = %f\n", r1+one);
	return 0;
}
