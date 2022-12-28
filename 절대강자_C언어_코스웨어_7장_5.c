#include <stdio.h>
int main(void)
{
	char a, b,c,*p,*q,*r,d,e,*s;
	a='1';
	b='1';
	c='1';
	d='1';
	e='1';
	p=&a;
	q=&a;
	r=&a;
	s=&a;
	printf("%lu\n%lu\n%lu\n%lu\n%lu\n%lu\n%lu\n%lu\n%lu\n",(unsigned long)&a,(unsigned long)&b,(unsigned long)&c,(unsigned long)p,(unsigned long)q,(unsigned long)r,(unsigned long)&d,(unsigned long)&e,(unsigned long)s);
	return 0;
}
