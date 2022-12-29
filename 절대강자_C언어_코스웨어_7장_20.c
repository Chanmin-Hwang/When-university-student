#include <stdio.h>
void f(void);
void g(void);
void h(void);
int main(void)
{
	(*f)();
	return 0;
}
void f(void)
{
	printf("f()가 호출되었습니다.\n");
	(((*g)))();
}
void g(void)
{
	printf("g()가 호출되었습니다.\n");
	(*(*(*h)))();
}
void h(void)
{
	printf("h()가 호출되었습니다.\n");
}
