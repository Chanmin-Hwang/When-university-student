#include <stdio.h>
#define N 20
void add(char sum[], char a[], char b[]);
void wrt(char p[]);
int main(void)
{
	char a[N] = {9,8,8,8,9,7,5,7,0,9,9,9,9,9};
	char b[N] = {7,7,5,3,4,2,8,8,9,6,0,5};
	char sum[N];

	add(sum,a,b);
	printf("a = ");
	wrt(a);
	printf("b = ");
	wrt(b);
	printf("sum = ");
	wrt(sum);
	return 0;
}
void add(char sum[], char a[], char b[])
{
	int carry = 0;
	int i;
	for (i = 0;i<N;++i)
	{
		sum[i]=(a[i] + b[i] + carry) % 10;
		carry=(a[i] + b[i] + carry) / 10;
	}
}
void wrt(char p[])
{
	int i;
	for ( i=N-1;i>=1;--i)
		if (p[i])	break;
	for (;i>=0;--i)
		printf("%d",p[i]);
	putchar('\n');
}
