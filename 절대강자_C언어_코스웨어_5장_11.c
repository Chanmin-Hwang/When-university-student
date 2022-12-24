#include <stdio.h>
double pow(double,double);
int main(void)
{
	int i;
	printf("i		i^i\n");
	for (i = 1;i<=10;i++)
		printf("%2d %15.2f\n",i,pow(i,i));
	return 0;
}
