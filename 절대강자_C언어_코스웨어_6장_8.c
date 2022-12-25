#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double eval_f(int,double [],double);
int main(void)
{
	srand(time(NULL));

	int n;
	double a[n+1],x;

	printf("최대 차수 : ");
	scanf("%d",&n);

	for (register int i=0;i<n+1;i++)
		a[i]=rand()/(double)rand();

	printf("X의 값 : ");
	scanf("%lf",&x);

	printf("%.2lf\n",eval_f(n,a,x));
	return 0;
}
double eval_f(int n,double a[],double x)
{
	double X[n+1],sum = a[0];

	for (int i=0;i<n+1;i++)
		X[i]=1;

	for (int i=1;i<n+1;i++)
		for (register int k=1;k<=i;k++)
			X[i]*=x;

	for (register int i=1;i<n+1;i++)
	{
		a[i]*=X[i];
		sum+=a[i];
	}

	return sum;
}
