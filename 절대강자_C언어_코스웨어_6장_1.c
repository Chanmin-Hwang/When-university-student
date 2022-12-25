#include <stdio.h>
int main(void)
{
	int t,d0,d1,d2,d3;
	printf("d0 : ");
	scanf("%d",&d0);
	printf("d1 : ");
	scanf("%d",&d1);
	printf("d2 : ");
	scanf("%d",&d2);
	printf("d3 : ");
	scanf("%d",&d3);
	if (d0 > d1)
	{
		t=d1;
		d1=d0;
		d0=t;
	}
	if (d1 > d2)
	{
		t=d1;
		d1=d2;
		d2=t;
	}
	if (d2 > d3)
	{
		t=d3;
		d3=d2;
		d2=t;
	}
	printf("%d %d %d %d\n",d0,d1,d2,d3);
	return 0;
}
