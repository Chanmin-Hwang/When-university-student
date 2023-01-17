#include <stdio.h>
int main(void)
{
	int a,b,c,d,e;
	scanf("%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e);
	printf("%d\n",(a*a+b*b+c*c+d*d+e*e)%10);
	return 0;
}
