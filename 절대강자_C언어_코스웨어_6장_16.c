#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tgmath.h>
double stddev(int n,int x[]);
int main(void)
{
	srand(time(NULL));

	int n;

	n = 20;

	int x[n];

	for (register int i=1;i<=n;i++)
	{
		x[i]=rand()%100;
		printf("%d\t",x[i]);
	}

	printf("\n표준편차 : %.2lf\n",stddev(n,x));

	return 0;
}
double stddev(int n,int x[])
{
	double del, t1 = 0.0, t2 = 0.0, t3 = 0.0, xavg = 0.0;

	for (register int i=1;i<=n;i++)
	{
		t1 += x[i]*x[i];
		xavg += x[i]; 
	}

	xavg/=n;

	for (register int i=1;i<=n;i++)
	{
		t2 += x[i] * xavg;
		t3 += xavg*xavg;
	}

	del = sqrt((1/(double)n) * (t1 - 2*t2 + t3));
}
