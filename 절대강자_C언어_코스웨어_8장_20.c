#include <stdio.h>
enum month {Jan = 1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
typedef enum month month;
month previous_month(month);
void print_month(month);
int main(void)
{
	month mon;
	printf("현재 : ");
	scanf("%u",&mon);
	mon = previous_month(mon);
	print_month(mon);
	return 0;
}
month previous_month(month mon)
{
	switch (mon)
	{
		case (Jan) :
			return Dec;
			break;
		case (Feb) :
			return Jan;
			break;
		case (Mar) :
			return Feb;
			break;
		case (Apr) :
			return Mar;
			break;
		case (May) :
			return Apr;
			break;
		case (Jun) :
			return May;
			break;
		case (Jul) :
			return Jun;
			break;
		case (Aug) :
			return Jul;
			break;
		case (Sep) :
			return Aug;
			break;
		case (Oct) :
			return Sep;
			break;
		case (Nov) :
			return Oct;
			break;
		case (Dec) :
			return Nov;
			break;
	}
}
void print_month(month mon)
{
	switch (mon)
	{
		case (Jan) :
			printf("January\n");
			break;
		case (Feb) :
			printf("February\n");
			break;
		case (Mar) :
			printf("March\n");
			break;
		case (Apr) :
			printf("April\n");
			break;
		case (May) :
			printf("May\n");
			break;
		case (Jun) :
			printf("June\n");
			break;
		case (Jul) :
			printf("July\n");
			break;
		case (Aug) :
			printf("August\n");
			break;
		case (Sep) :
			printf("September\n");
			break;
		case (Oct) :
			printf("October\n");
			break;
		case (Nov) :
			printf("November\n");
			break;
		case (Dec) :
			printf("December\n");
			break;
	}
}
