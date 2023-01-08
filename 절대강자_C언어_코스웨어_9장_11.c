#include <stdio.h>
typedef struct{
	int a : 8, b : 8, c : 8, d : 8;
} pack;
pack packing(char a,char b,char c,char d);
void unpacking(struct pack n);
int main(void)
{
}
pack packing(char a,char b,char c,char d)
{
	pack n;
	n.a = a, n.b = b, n.c = c, n.d = d;
	return n;
}
void unpacking(pack n)
{
}
