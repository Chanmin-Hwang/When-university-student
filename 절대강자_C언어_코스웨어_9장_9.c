#include <stdio.h>
void bit_print(int a)
{
	int n = sizeof(int)*8;
	unsigned mask = 1 << (n-1);
	for (int i=1;i<=n;i++)
	{
		putchar(((a&mask) == 0) ? '0' : '1');
		mask >>= 1;
		if (i%4 == 0 && i < n)
			putchar(' ');
	}
}
int main(void)
{
	printf("n         2^n         	 2^n-1\n");
	for (int n = 1,i=0;i < 32;i++)
	{
		printf("%d : ",i);
		bit_print(n<<i);
		printf("\t");
		if (i-1 < 0)
		{
			bit_print(0);
			printf("\n");
			continue;
		}
		bit_print(n<<(i-1));
		printf("\n");
	}
	return 0;
}
