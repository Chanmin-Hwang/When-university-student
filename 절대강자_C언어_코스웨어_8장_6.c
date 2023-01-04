#include <stdio.h>
struct length
{
	int feet,inch;
} length;
int main(void)
{
	struct length fl,sl,sum_len;
	printf("input first length (feet,inch) : ");
	scanf("%d %d",&fl.feet,&fl.inch);
	printf("input second length (feet,inch) : ");
	scanf("%d %d",&sl.feet,&sl.inch);
	sum_len.feet = fl.feet + sl.feet;
	sum_len.inch = fl.inch + sl.inch;
	sum_len.feet += sum_len.inch / 12;
	sum_len.inch %= 12;
	printf("%dft %din + %dft %din = %dft %dini\n",fl.feet,fl.inch,sl.feet,sl.inch,sum_len.feet,sum_len.inch);
	return 0;
}
