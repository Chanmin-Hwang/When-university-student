#include <stdio.h>
int main(void)
{
	int i;
	printf("i의 값 : ");
	scanf("%d",&i);
	if (i==1)
		printf("cat\n");
	else if (i==2)
		printf("dog\n");
	else  if (i==3)
		printf("fox\n");
	return 0;
}
