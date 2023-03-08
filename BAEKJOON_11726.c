#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned long long *arr = (unsigned long long *)calloc(1000,sizeof(unsigned long long));
	int n;
	*(arr) = 1;
	*(arr+1) = 2;
	for (int i=2;i<1000;i++)
		*(arr+i) = (*(arr+i-1) + *(arr+i-2))%10007;
	scanf("%d",&n);
	printf("%llu\n",*(arr+n-1));
	free(arr);
	return 0;
}
