#include <stdio.h>
#define N 10
int main(void)
{
	int a[N];
	int b[N][N];

	printf("sizeof(a[N]) : %ld\n",sizeof(a[N]));
	printf("sizeof(a) : %ld\n",sizeof(a));
	printf("sizeof(b[N][N]) : %ld\n",sizeof(b[N][N]));
	printf("sizeof(b) : %ld\n",sizeof(b));
	return 0;
}
