#include <stdio.h>
int is_prime(int);
int main(void)
{
	int i=2,k=0,s;
	while (k<20)
	{
		s=is_prime(i);
		if (s==1)
		{
			k++;
			printf("%d\n",i);
		}
		i++;
	}
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
