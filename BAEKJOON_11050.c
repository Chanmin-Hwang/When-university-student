#include <stdio.h>
int main(void)
{
	int N,K;
	unsigned long long p=1,q=1;
	scanf("%d%d",&N,&K);
	if (K==0)
		printf("%llu\n",p/q);
	else if (N==K)
		printf("%llu\n",p/q);
	else
	{
		for (int i=0;i<K;i++)
			p *= N-i;
		for (int i=1;i<=K;i++)
			q *= i;
		printf("%llu\n",p/q);
	}
	return 0;
}
