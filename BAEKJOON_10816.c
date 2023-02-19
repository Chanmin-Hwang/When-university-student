#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *num = (int *)calloc(20000001,4);
	int N,M,k;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d",&k);
		if (k >= 0)
			num[k]++;
		else
			num[10000000-k]++;
	}
	scanf("%d",&M);
	for (int i=0;i<M;i++)
	{
		scanf("%d",&k);
		if (k >= 0)
			printf("%d ",num[k]);
		else
			printf("%d ",num[10000000-k]);
	}
	free(num);
	printf("\n");
	return 0;
}
