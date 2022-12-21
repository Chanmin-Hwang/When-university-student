#include <stdio.h>
int main(void)
{
	int i;
	printf("i의 값 : ");
	scanf("%d",&i);
	if (i==1)
	{
		printf("cat\n");
		printf("dog\n");
	}
	else if (i==2)
	{
		printf("cat\n");
		printf("dog\n");
	}
	else if (i==3)
	{
		printf("dog\n");
		printf("fox\n");
	}
	return 0;
}
