#include <stdio.h>
long long power(int,int);
int main(void)
{
	printf("n   2^n   3^n   4^n   5^n\n");
	printf("--------------------------\n");
	for (int i=0;i<=10;i++)
		printf("%d   %lld   %lld   %lld   %lld\n",i,power(2,i),power(3,i),power(4,i),power(5,i));
	return 0;
}
long long power(int m,int n)
{
	long long k=1;
	for (int i=1;i<=n;i++)
		k*=m;
	return k;
}
