#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	unsigned a1 : 1,a2 : 1,a3 : 1,a4 : 1,a5 : 1,a6 : 1,a7 : 1,a8 : 1;
} ibt;
int main(void)
{
	ibt a,b;
	a.a1 = 0,a.a2 = 0,a.a3 = 0,a.a4 = 0,a.a5 = 0,a.a6 = 0,a.a7 = 0,a.a8 = 0;
	a.a1 = 1,a.a2 = 0,a.a3 = 0,a.a4 = 1,a.a5 = 1,a.a6 = 0,a.a7 = 1,a.a8 = 1;
	b.a1 = 0,b.a2 = 0,b.a3 = 0,b.a4 = 0,b.a5 = 0,b.a6 = 0,b.a7 = 0,b.a8 = 0;
	printf("%d%d%d%d %d%d%d%d\n",a.a1,a.a2,a.a3,a.a4,a.a5,a.a6,a.a7,a.a8);
	b.a1 = a.a8,b.a2 = a.a7,b.a3 = a.a6,b.a4 = a.a5,b.a5 = a.a4,b.a6 = a.a3,b.a7 = a.a2,b.a8 = a.a1;
	printf("%d%d%d%d %d%d%d%d\n",b.a1,b.a2,b.a3,b.a4,b.a5,b.a6,b.a7,b.a8);
	return 0;
}
