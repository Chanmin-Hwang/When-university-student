#include <stdio.h>
int main(void)
{
	int i;
	printf("i의 값 : ");
	scanf("%d",&i);
	if (i==1)
		printf("dog\n");
	else if (i==2)
	{
		printf("cat\n");
		printf("fox\n");
	}
	else  if (i==3)
		printf("cat\n");
	return 0;
}
