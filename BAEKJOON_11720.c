#include <stdio.h>
int main(void)
{
	int sum = 0,N,x;
	scanf("%d",&N);
	for (int i=1;i<=N;i++)
	{
		scanf("%1d",&x);
		sum += x;
	}
	printf("%d\n",sum);
	return 0;
}
