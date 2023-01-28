#include <stdio.h>
#include <stdlib.h>
int sort(const void *p,const void *q)
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
	int *array = (int *)calloc(N,4);
	for (int i=0;i<N;i++)
		scanf("%d",array+i);
	qsort(array,N,4,sort);
	for (int i=0;i<N;i++)
		printf("%d\n",*(array+i));
	free(array);
	return 0;
}
