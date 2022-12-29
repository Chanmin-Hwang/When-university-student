#include <stdio.h>
void func(int [][3]);
int main(void)
{
	int a[4][3] = {{0,1,2},{10,11,12},{20,21,22},{30,31,32}};
	func(a);
	return 0;
}
void func(int *a[3])
{
	printf("func() : %d %d %d\n",a[0][0],a[1][1],a[2][2]);
}
