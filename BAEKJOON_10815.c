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
void func(int k,int *arr,int N)
{
	int min = 0,max = N-1,mid;
	while (min <= max)
	{
		mid = (min+max)/2;
		if (arr[mid] == k)
			break;
		else if (arr[mid] < k)
			min = mid + 1;
		else if (arr[mid] > k)
			max = mid - 1;
	}
	if (arr[mid] == k)
		printf("1 ");
	else
		printf("0 ");
	return;
}
int main(void)
{
	int N,M,k;
	scanf("%d",&N);
	int *num = (int *)calloc(N,4);
	for (int i=0;i<N;i++)
		scanf("%d",num+i);
	qsort(num,N,4,compare);
	scanf("%d",&M);
	for (int i=0;i<M;i++)
	{
		scanf("%d",&k);
		if ((num[0] > k) || (num[N-1] < k))
		{
			printf("0 ");
			continue;
		}
		func(k,num,N);
	}
	printf("\n");
	return 0;
}
