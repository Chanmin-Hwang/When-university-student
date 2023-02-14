#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	int M,N;
	scanf("%d%d",&M,&N);
	int *num = (int *)calloc(N+1,4);
	*(num+1) = 1;
	for (int i=2;i<=sqrt(N);i++)
		if (*(num+i) == 0)
			for (int r=2;r*i<=N;r++)
				*(num+r*i) = 1;
	for (int i=M;i<=N;i++)
		if (*(num+i) == 0)
			printf("%d\n",i);
	return 0;
}
