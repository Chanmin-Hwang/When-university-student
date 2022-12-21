#include <stdio.h>
int main(void)
{
	int i = 1,k;
	while (i<=5)
	{
		k = 1;
		while (k<=i)
		{
			printf("*");
			k++;
		}
		i++;
		printf("\n");
	}
}
