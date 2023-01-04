#include <stdio.h>
#define N 5
typedef int el;
typedef el el1[N];
typedef el1 el2[N];
int main(void)
{
	el x;
	el1 y;
	el2 z;

	printf("sizeof(x) = %ld\n",sizeof(x));
	printf("sizeof(y) = %ld\n",sizeof(y));
	printf("sizeof(z) = %ld\n",sizeof(z));
	return 0;
}
