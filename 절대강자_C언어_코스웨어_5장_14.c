#include <stdio.h>
#include <tgmath.h>
#include <float.h>
int main(void)
{
	double x=1.0;
	while (1)
	{
		x+=1;
		if (pow(x,x)==pow(100000,1000000))
			break;
	}
	x-=1.0;
	printf("pow(%.1f,%.1f) = %.7e\n",x,x,pow(x,x));
	return 0;
}
