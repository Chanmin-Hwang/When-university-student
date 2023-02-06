#include <stdio.h>
#include <stdlib.h>
int compare(const void *p,const void *q)
{
	if (*(int *)p < *(int *)q)
		return 1;
	else if (*(int *)p > *(int *)q)
		return -1;
	else
		return 0;
}
int main(void)
{
	int num[10],N,i=0;
	scanf("%d",&N);
	while (N/10 != 0)
	{
		num[i] = N%10;
		N /= 10;
		i++;
	}
	num[i] = N%10;
	qsort(num,i+1,4,compare);
	for (int k=0;k<=i;k++)
		printf("%d",num[k]);
	printf("\n");
	return 0;
}
