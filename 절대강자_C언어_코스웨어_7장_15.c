#include <stdio.h>
#define N 5
void change_it(int []);
int main(void)
{
	int a[N] = {1,2,3,4,5},i;

	printf("change_it() 호출 전\n");
	for (i=0;i<N;i++)
		printf("a[%d] = %d\n",i,a[i]);
	change_it(a);
	printf("change_it() 호출 후\n");
	for (i=0;i<N;i++)
		printf("a[%d] = %d\n",i,a[i]);
	return 0;
}
void change_it(int a[])
{
	int b[N] = {6,7,8,9,10};
	a=b;
}
