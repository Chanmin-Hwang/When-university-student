#include <stdio.h>
int main(void)
{
	float F;
	printf("화씨온도를 입력하세요 : ");
	scanf("%f", &F);
	printf("%.1f F= %.1f C\n", F, (F-32)*5/9);
	return 0;
}
