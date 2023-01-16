#include <stdio.h>
int main(void)
{
	int N;
	N = (1<=N) && (N<=100);
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		for (int k=0;k<=i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
