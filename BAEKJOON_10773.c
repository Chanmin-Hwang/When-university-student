#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int K,top = -1,n;
	long long sum = 0;
	scanf("%d",&K);
	int *stack = (int *)calloc(K,4);
	for (int i=0;i<K;i++)
	{
		scanf("%d",&n);
		if (n == 0)
		{
			*(stack+top) = 0;
			top--;
		}
		else
		{
			top++;
			*(stack+top) = n;
		}
	}
	for (int i=0;i<K;i++)
		sum += *(stack+i);
	printf("%lld\n",sum);
	return 0;
}
