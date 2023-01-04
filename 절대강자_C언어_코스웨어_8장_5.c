#include <stdio.h>
#include <complex.h>
struct cmplx
{
	double dc;
	double real_num;
} cmplx;
struct cmplx multiple_1(struct cmplx,struct cmplx);
void multiple_2(struct cmplx *,struct cmplx *);
int main(void)
{
	double _Complex k = 1-1i;
	double _Complex r = 1+1i;
	struct cmplx a = {cimag(r),1},b = {cimag(k),1};
	printf("%.2lfi + %.2lf",multiple_1(a,b).dc,multiple_1(a,b).real_num);
	multiple_2(&a,&b);
	printf("%.2lfi + %.2lf",a.dc,a.real_num);
	return 0;
}
struct cmplx multiple_1(struct cmplx a,struct cmplx b)
{
	a.dc *= b.dc;
	a.real_num *= b.real_num;
	return a;
}
void multiple_2(struct cmplx *a,struct cmplx *b)
{
	(*a).dc = (*b).dc;
	(*a).real_num = (*b).real_num;
}
