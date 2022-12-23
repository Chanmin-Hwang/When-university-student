#include <stdio.h>
double bmi(double,double);
int main(void)
{
	double con,w,h;
	
	printf("몸무게 : ");
	scanf("%lf",&w);
	
	printf("신장 : ");
	scanf("%lf",&h);
	
	con = bmi(w,h);
	printf("당신의 BMI지수 : %.2lf\n",con);
	if (con<=18.5)
		printf("저체중입니다.\n");
	else if ((18.5<con) && (con<25.0))
		printf("정상입니다.\n");
	else if ((25.0<=con) && (con<30.0))
		printf("과체중입니다.\n");
	else if (con>=30.0)
		printf("비만입니다.\n");
	return 0;
}
double bmi(double w,double h)
{
	return w/(h/100*h/100);
}
