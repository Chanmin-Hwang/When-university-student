#include <stdio.h>
int main(void)
{
	int N;
	N = (1<=N) && (N<=100);
	scanf("%d",&N);
	int m = 1;

	for (int i=1;i<=N;i++)
	{
		for (int r=0;r<N-m;r++)
			printf(" ");
		for (int k = 1;k<=i;k++)
			printf("%c",'*');
		printf("\n");
		m++;
	}
	return 0;
}
