#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	long long *arr = (long long *)calloc(100,sizeof(long long));
	*(arr) = 1;
	*(arr+1) = 1;
	*(arr+2) = 1;
	*(arr+3) = 2;
	*(arr+4) = 2;
	for (int i=5,o=0;i<100;i++,o++)
		*(arr+i) = *(arr+o)+*(arr+i-1);
	int T,N;
	scanf("%d",&T);
	for (int i=0;i<T;i++)
	{
		scanf("%d",&N);
		printf("%lld\n",*(arr+N-1));
	}
	free(arr);
	return 0;
}
