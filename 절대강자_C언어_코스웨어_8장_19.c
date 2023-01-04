#include <stdio.h>
enum day {SUN,MON,TUE,WED,THU,FRI,SAT};
enum name {kim,lee,park,jung,hong = 266};
int main(void)
{
	enum day d = SUN;
	switch (d) 
	{
		case (0) :
			printf("오늘은 SUN입니다.\n");
			break;
		case (1) :
			printf("오늘은 MON입니다.\n");
			break;
		case (2) :
			printf("오늘은 TUE입니다.\n");
			break;
		case (3) :
			printf("오늘은 WED입니다.\n");
			break;
		case (4) :
			printf("오늘은 THU입니다.\n");
			break;
		case (5) :
			printf("오늘은 FRI입니다.\n");
			break;
		case (6) :
			printf("오늘은 SAT입니다.\n");
			break;
	}
	return 0;
}
