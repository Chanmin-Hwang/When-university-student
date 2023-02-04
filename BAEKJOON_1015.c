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
int main(void)
{
	int N;
	scanf("%d",&N);
	int *A = (int *)calloc(N,4);
	int *B = (int *)calloc(N,4);
	int *P = (int *)calloc(N,4);
	for (int i=0;i<N;i++)
	{
		scanf("%d",A+i);
		*(B+i) = *(A+i);
		*(P+i) = 51;
	}
	qsort(B,N,4,compare);
	for (int i=0;i<N;i++)
		for (int r=0;r<N;r++)
			if (B[r] == A[i])
			{
				if (*(P+i) > r)
					*(P+i) = r;
			}
	for (int i=0;i<N;i++)
		for (int r=0;r<N;r++)
			if ((P[i] == P[r]) && (i != r))
				P[r]++;
	for (int i=0;i<N;i++)
		printf("%d ",*(P+i));
	printf("\n");
	return 0;
}
