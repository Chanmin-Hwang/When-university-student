#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, num;
	for (i = 0; i<10; i++)
	{
		num = rand() % 2;
		if (num == 1)
		   printf("홀수\n");
		else
			printf("짝수\n");
	}
	return 0;
}	
