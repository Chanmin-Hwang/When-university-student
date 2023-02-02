#include <stdio.h>
#include <stdlib.h>
int compare(const void *p,const void *q)
{
	if (*(int *)p > *(int *)q)
		return 1;
	else if (*(int *)p < *(int *)q)
		return -1;
	else
		return 0;
}
int search(int min,int max,int *arr,int k)
{
	while (min <= max)
	{
		if (k == arr[(min+max)/2])
			return 1;
		else
		{
			if (k < arr[(min+max)/2])
				max = (min+max)/2 -1;
			else if (k > arr[(min+max)/2])
				min = (min+max)/2 +1;
		}
	}
	return 0;
}
int main(void)
{
	int N,min,max,k,M;
	scanf("%d",&N);
	int *A = (int *)calloc(N+1,4);
	for (register int i=1;i<=N;i++)
		scanf("%d",A+i);
	qsort(A+1,N,4,compare);
	scanf("%d",&M);

	for (int i=0;i<M;i++)
	{
		scanf("%d",&k);
		printf("%d\n",search(1,N,A,k));
	}
	return 0;
}
