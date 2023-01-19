#include <stdio.h>
int main(void)
{
	int max = -1000000,min = 1000000,N;
	N = (1<=N) && (N<=1000000);
	scanf("%d",&N);
	int n[N];
	for (int i=0;i<N;i++)
	{
		n[i] = (-1000000 <= n[i]) && (n[i] <= 1000000);
		scanf("%d",n+i);
		if (max < n[i])
			max = n[i];
		if (min > n[i])
			min = n[i];
	}
	printf("%d %d\n",min,max);
   return 0;
}   
