#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	unsigned a1 : 1,a2 : 1,a3 : 1,a4 : 1,a5 : 1,a6 : 1,a7 : 1,a8 : 1;
} ibt;
typedef struct
{
	unsigned short a1 : 1,a2 : 1,a3 : 1,a4 : 1;
} sbt;
int main(void)
{
	ibt a;
	sbt b;
	a.a1 = 0,a.a2 = 0,a.a3 = 0,a.a4 = 0,a.a5 = 0,a.a6 = 0,a.a7 = 0,a.a8 = 0;
	a.a1 = rand()%2,a.a2 = rand()%2,a.a3 = rand()%2,a.a4 = rand()%2,a.a5 = rand()%2,a.a6 = rand()%2,a.a7 = rand()%2,a.a8 = rand()%2;
	b.a1 = a.a2,b.a2 = a.a4,b.a3 = a.a6,b.a4 = a.a8;
	printf("%d%d%d%d %d%d%d%d\n",a.a1,a.a2,a.a3,a.a4,a.a5,a.a6,a.a7,a.a8);
	printf("%d%d%d%d\n",b.a1,b.a2,b.a3,b.a4);
	return 0;
}
