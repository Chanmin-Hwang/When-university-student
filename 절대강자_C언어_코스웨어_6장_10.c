#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double eval_f(int,double [],double);
void add(int,double [],double [],double []);
int main(void)
{
	srand(time(NULL));

	int n;
	double x,f[n+1],g[n+1],h[n+1];

	printf("최대 차수 : ");
	scanf("%d",&n);

	for (register int i=0;i<n+1;i++)
		g[i]=rand()/(double)rand();

	for (register int i=0;i<n+1;i++)
		h[i]=rand()/(double)rand();

	printf("X의 값 : ");
	scanf("%lf",&x);

	printf("%.2lf\n",eval_f(n,h,x));
	printf("%.2lf\n",eval_f(n,g,x));
	add(n,f,g,h);
	printf("%.2lf\n",eval_f(n,f,x));
	return 0;
}
double eval_f(int n,double a[],double x)
{
	double I[n+1],X[n+1],sum = a[0];

	for (int i=0;i<n+1;i++)
		X[i]=1;

	for (int i=1;i<n+1;i++)
		for (register int k=1;k<=i;k++)
			X[i]*=x;

	for (register int i=1;i<n+1;i++)
	{
		I[i]=a[i]*X[i];
		sum+=I[i];
	}

	return sum;
}
void add(int n,double f[],double g[],double h[])
{
	for (register int i=0;i<n+1;i++)
		f[i]=g[i]+h[i];
}
