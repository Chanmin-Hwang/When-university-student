#include <stdio.h>
void hailstone(int h);
int main(void)
{
	int h;
	printf("자연수를 하나 입력하세요 : ");
	scanf("%d",&h);
	printf("%d hailstone 수열:\n",h);
	hailstone(h);
	printf("\n");
	return 0;
}
void hailstone(int h)
{
	static int i;
	i+=1;
	printf("%3d ",h);
	if (i%5==0)
		printf("\n");
	if (h%2==0)
		h/=2;
	else
		h=3*h+1;
	if (h==1)
	{
		printf("%3d\n",h);
		printf("수열 개수 : %d",i+1);
		return;
	}
	hailstone(h);
}
