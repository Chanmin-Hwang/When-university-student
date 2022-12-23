#include <stdio.h>
#include <math.h>
void fun(double,double,double);
int main(void)
{
	double a,b,c;
	while (1)
	{
		printf("a, b, c를 입력하세요 : ");
		scanf("%lf %lf %lf",&a,&b,&c);
		if (a==0)
			printf("a가 0입니다. 다시 입력하세요.\n");
		else
			break;
	}
	printf("(%.0lf)*x^2 + (%.0lf)*x + (%.0lf)\n",a,b,c);
	fun(a,b,c);
	return 0;
}
void fun(double a,double b,double c)
{
	double k=b*b-4*a*c;
	if (b*b-4*a*c>0)
	{
		printf("x1 = %.3lf\n",(1/(2*a))*(-b+sqrt(k)));
		printf("x2 = %.3lf\n",(1/(2*a))*(-b-sqrt(k)));
	}
	else if (b*b-4*a*c==0)
		printf("x = %.2lf\n",(1/(2*a))*(-b+sqrt(k)));
	else if (b*b-4*a*c<0)
		printf("두 허근을 가집니다.\n");
}
