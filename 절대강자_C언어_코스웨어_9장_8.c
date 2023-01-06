#include <stdio.h>
void bit_print(int a)
{
	int n = sizeof(int)*8;
	int mask = 1 << (n-1);
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
	int a = 0xff,b = 0xff00,c = 0xff0000,d = 0xff000000;
	bit_print(a);
	printf("\n");
	bit_print(b);
	printf("\n");
	bit_print(c);
	printf("\n");
	bit_print(d);
	printf("\n");
	return 0;
}
