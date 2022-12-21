#include <stdio.h>
int main(void)
{
	int i = 1;
	for (putchar('1');putchar('2');putchar('3'))
	{
		if (++i ==5)
			break;
		putchar('4');
		continue;
		putchar('5');
	}
	return 0;
}
