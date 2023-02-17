#include <stdio.h>
#include <stdlib.h>
int compare(const void *,const void *);
int main(void)
{
	int N,sum = 0;
	scanf("%d",&N);
	int *A = (int *)calloc(N,4);
	int *B = (int *)calloc(N,4);
	for (int i=0;i<N;i++)
		scanf("%d",A+i);
	for (int i=0;i<N;i++)
		scanf("%d",B+i);
	qsort(A,N,4,compare);
	qsort(B,N,4,compare);
	for (int i=0;i<N;i++)
		sum += *(A+i)*(*(B+N-1-i));
	printf("%d\n",sum);
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
