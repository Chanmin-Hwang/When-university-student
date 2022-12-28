#include <stdio.h>
int main(void)
{
	float x = 1.0;
	printf("%p\n",&x);
	int *p = (int *) &x;
	*p = 1077936128;
	printf("x = %f, *p = %d\n",x,*p);
	printf("%p\n",p);
	printf("%li\n",0x7fff4680b1bc);
	return 0;
}
