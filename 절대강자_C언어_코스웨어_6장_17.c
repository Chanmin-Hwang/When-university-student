#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tgmath.h>
double stddev(int n,double x[]);
int main(void)
{
	int n = 10000;

	double num0=0,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0;

	int x[n+1];

	double num[10];
	
	for (int i=1;i<=n;i++)
	{
		x[i] = rand()%10;
		
		switch (x[i])
		{
			case (0) :
				num0++;
				break;
			case (1) :
				num1++;
				break;
			case (2) :
				num2++;
				break;
			case (3) :
				num3++;
				break;
			case (4) :
				num4++;
				break;
			case (5) :
				num5++;
				break;
			case (6) :
				num6++;
				break;
			case (7) :
				num7++;
				break;
			case (8) :
				num8++;
				break;
			case (9) :
				num9++;
				break;
		}
	}

	num[0] = num0;
	num[1] = num1;
	num[2] = num2;
	num[3] = num3;
	num[4] = num4;
	num[5] = num5;
	num[6] = num6;
	num[7] = num7;
	num[8] = num8;
	num[9] = num9;
	
	for (int i = 1;i<10;i++)
		printf("%.2lf\n",num[i]);

	printf("표준편차 : %.2lf\n",stddev(10,num));

	return 0;
}
double stddev(int n,double x[])
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
