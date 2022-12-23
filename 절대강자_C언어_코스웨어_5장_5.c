#include <stdio.h>
int is_fib_prime(int);
int F(int);
int main(void)
{
	int n=0,i=2;
	printf("n     F(n)\n");
	printf("-----------\n");
	while (n<10)
	{
		if (is_fib_prime(i)>0)
		{
			printf("%d     %d\n",i,F(i));
			n++;
		}
		i++;
	}
	return 0;
}
int is_fib_prime(int n)
{
	int k=F(n);
	for (int i=2;i<=n;i++)
	{
		if ((n%i==0) && (i!=n))
			return 0;
	}
	for (int i=2;i<=k;i++)
	{
		if ((k%i==0) && (i!=k))
			return 0;
	}
	return k;
}
int F(int n)
{
	int t,f1=1,f2=1,f3;
	for (int i=3;i<=n;i++)
	{
		f3=f1+f2;
		t=f2;
		f2=f3;
		f1=t;
	}
	return f3;
}
