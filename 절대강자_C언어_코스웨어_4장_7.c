#include <stdio.h>
int main(void)
{
	int a,b;
	printf("정수 2개를 입력하세요 :");
	scanf("%d %d",&a,&b);
	if (a<=b)
	{
		for (;a<=b;a++)
		{
			for (int n=1;n<=a;n++)
				printf("*");
			printf("\n");
		}
	}
	else
	{
		for (int n=1;n<=a;n++)
			printf("*");
		printf("\n");
		for (int n=1;n<=b;n++)
			printf("*");
		printf("\n");
	}
	return 0;
}
