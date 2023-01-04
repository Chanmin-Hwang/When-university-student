#include <stdio.h>
enum day {SUN,MON,TUE,WED,THU,FRI,SAT};
enum name {kim,lee,park,jung,hong = 266};
int main(void)
{
	printf("sizeof(enum day) = %ld\n",sizeof(enum day));
	printf("sizeof(enum name) = %ld\n",sizeof(enum name));
	return 0;
}
