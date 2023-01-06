#include <stdio.h>
void bit_print(unsigned c);
int main(void)
{
	unsigned int c = 0xf0000000;
	c >>= 8;
	bit_print(c);
	printf("\n");
	return 0;
}
void bit_print(unsigned c)
{
	int n = sizeof(int) * 8;
	unsigned mask = 1 << (n-1);
	for (int i=1;i<=n;i++)
	{
		putchar(((c&mask)==0)?'0':'1');
		mask >>= 1;
		if (i%8 == 0 && i <n)
			putchar(' ');
	}
}
