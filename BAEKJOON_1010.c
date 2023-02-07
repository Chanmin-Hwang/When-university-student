#include <stdio.h>
int main(void)
{
	unsigned T,N,M;
	scanf("%u",&T);
	for (unsigned i=0;i<T;i++)
	{
		scanf("%u%u",&N,&M);
		unsigned long long p = 1,q = 1;
		if (M-N >= N)
			for (unsigned i = M,r = N ; (i >= M-N+1) || (r >= 1) ; i--,r--)
			{
				p *= i;
				q *= r;
				(q > 0) && (p%q == 0) && (p /= q) && (q = 1);
			}
		else
			for (unsigned i = M,r = M-N ; (i >= N+1) || (r >= 1) ; i--,r--)
			{
				p *= i;
				q *= r;
				(q > 0) && (p%q == 0) && (p /= q) && (q = 1);
			}
			printf("%llu\n",p);
	}
	return 0;
}
