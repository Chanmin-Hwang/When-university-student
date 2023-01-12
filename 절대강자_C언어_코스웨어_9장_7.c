#include <stdio.h>
void ttt(void);
void bit_print(int);
int main(void)
{
	ttt();
	return 0;
}
void ttt(void)
{
	int n,t[10],i = 0;
	printf("10진수 입력 : ");
	scanf("%d",&n);
	printf("%d = ",n);
	while (n / 10 != 0)
	{
		t[i] = n%10;
		n -= t[i];
		n /= 10;
		i++;
	}
	bit_print(n);
	printf("\t");
	for (i-=1;i>=0;i--)
	{
		bit_print(*(t+i));
		printf("\t");
	}
	printf("\n");
}
void bit_print(int a)
{
	int n = sizeof(int);
	unsigned mask = 1 << (n-1);
	for (int i = 1;i<=n;++i)
	{
		putchar(((a&mask) == 0) ? '0' : '1');
		mask >>= 1;
	}
}
