#include <stdio.h>
int main(void)
{
	int a,b;
	a=b=0;
	printf("a+++b = %d\n", a+++b);
	printf("a = %d, b = %d\n", a, b);
	a=b=0;
	printf("a+ ++b = %d\n", a+ ++b);
	printf("a = %d, b = %d\n", a, b);
	a=b=0;
	printf("a++ +b = %d\n", a++ +b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
