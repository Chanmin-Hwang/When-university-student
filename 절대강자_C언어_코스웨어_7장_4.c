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
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",&a,&b,&c,p,q,r,&d,&e,s);
	return 0;
}
