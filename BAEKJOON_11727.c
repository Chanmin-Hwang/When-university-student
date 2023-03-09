#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n;
	long long *arr = (long long *)calloc(1000,sizeof(long long));
	*(arr) = 1;
	for (int i=1;i<1000;i++)
	{
		if (i%2 != 0)
			*(arr+i) = ((*(arr+i-1))*2+1)%10007;
		else
			*(arr+i) = ((*(arr+i-1))*2-1)%10007;
	}
	scanf("%d",&n);
	printf("%lld\n",*(arr+n-1));
	free(arr);
	return 0;
}
