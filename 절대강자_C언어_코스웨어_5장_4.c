#include <stdio.h>
int is_prime(int);
int main(void)
{
	int i=2;
	unsigned long long m=0,n=0,k;
	do
	{
		printf("짝수를 입력하세요 : ");
		scanf("%llu",&k);
		if (k%2==1)
			printf("홀수를 입력했습니다.\n");
		else
			break;
	}
	while (1);
	while (1)
	{
		while (1)
		{
			if (is_prime(i)==1)
				m=i;
			if (m>0)
				break;
			i++;
		}
		if (m+n==k)
			break;
		else
			n=0;
		while (1)
		{
			if(n>0)
				break;
			if (is_prime(i)==1)
				n=i;
			i++;
		}
		if (m+n==k)
			break;
		else
			m=0;
	}
	if (m>n)
	{
		int t;
		t=n;
		n=m;
		m=t;
	}
	printf("%llu = %llu + %llu\n",k,m,n);
	return 0;
}
int is_prime(int n)
{
	for (int i=2;i<=n;i++)
	{
		if ((n%i==0) && (i!=n))
			return 0;
		else if ((n%i==0) && (i==n))
			return 1;
	}
}
