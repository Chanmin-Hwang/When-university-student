#include <stdio.h>
#include <stdlib.h>
int compare(const void *,const void *);
int main(void)
{
	int N,sum_1 = 0,sum_2 = 0;
	scanf("%d",&N);
	int *arr = (int *)calloc(N,4);
	for (int i=0;i<N;i++)
		scanf("%d",arr+i);
	qsort(arr,N,4,compare);
	for (int i=0;i<N;i++)
	{
		sum_1 += *(arr+i);
		sum_2 += sum_1;
	}
	free(arr);
	printf("%d\n",sum_2);
	return 0;
}
int compare(const void *p,const void *q)
{
	if (*(int *)p < *(int *)q)
		return -1;
	else if (*(int *)p > *(int *)q)
		return 1;
	else
		return 0;
}
