#include <stdio.h>
long long power(int,int);
int main(void)
{
	int i;
	printf("1) power(4,5) : %lld\n",power(4,5));
	printf("2) power(5,4) : %lld\n",power(5,4));
	i=4;
	printf("1-2) power(i,++i) : %lld\n",power(i,++i));
	printf("2-1) power(i,--i) : %lld\n",power(i,--i));
	return 0;
}
long long power(int m,int n)
{
	long long k=1;
	for (int i=1;i<=n;i++)
		k*=m;
	return k;
}
