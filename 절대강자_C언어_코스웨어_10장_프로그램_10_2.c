#include <stdio.h>

#define PI 3.14
#define circumference(x) (2.0*(x)*PI)
#define area(x) ((x)*(x)*PI)
#define volume(x) (4.0/3.0*(x)*(x)*(x)*PI)
#define surface_area(x) (4.0*(x)*(x)*PI)

int main(void)
{
	double r;

	printf("반지름을 입력하세요 : ");
	scanf("%lf",&r);
	printf("반지름이 %.3f인\n",r);
	printf("	원의 원둘레 길이 : %.3f\n",circumference(r));
	printf("	원의 면적 : %.3f\n",area(r));
	printf("	구의 부피 : %.3f\n",volume(r));
	printf("	구의 표면적 : %.3f\n",surface_area(r));
	
	return 0;
}
