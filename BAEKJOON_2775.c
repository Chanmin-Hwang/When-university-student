#include <stdio.h>
int main(void)
{
	int T,i,k,r;
	unsigned long long apt[15][15] = {0};
	for (r=1;r<=14;r++)
		apt[0][r] = r;
	for (k=1;k<15;k++)
		for (i=1;i<15;i++)
			for (r=1;r<=i;r++)
				apt[k][i] += apt[k-1][r];
	scanf("%d",&T);
	for (int r=0;r<T;r++)
	{
		scanf("%d%d",&i,&k);
		printf("%lld\n",apt[i][k]);
	}
	return 0;
}
