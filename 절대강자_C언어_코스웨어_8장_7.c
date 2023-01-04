#include <stdio.h>
#include <time.h>
int main(void)
{
	struct tm *t;
	time_t now;
	now = time(NULL);
	t = localtime(&now);

	char *day[7] = {"일요일","월요일","화요일","수요일","목요일","금요일","토요일"};

	if ((*t).tm_hour > 12)
	{
		int k = (*t).tm_hour-12;
		printf("오늘은 %d년 %d월 %d일 %s입니다.\n현재 시간은 오후 %d시 %d분 %d초입니다.",(*t).tm_year+1900,(*t).tm_mon+1,(*t).tm_mday,day[(*t).tm_wday],k,(*t).tm_min,(*t).tm_sec);
	}
	else if ((*t).tm_hour < 12)
	{
		printf("오늘은 %d년 %d월 %d일 %s입니다.\n현재 시간은 오전 %d시 %d분 %d초입니다.",(*t).tm_year+1900,(*t).tm_mon+1,(*t).tm_mday,day[(*t).tm_wday],(*t).tm_hour,(*t).tm_min,(*t).tm_sec);
	}
	else if ((*t).tm_hour == 12)
	{
		printf("오늘은 %d년 %d월 %d일 %s입니다.\n현재 시간은 오후 %d시 %d분 %d초입니다.",(*t).tm_year+1900,(*t).tm_mon+1,(*t).tm_mday,day[(*t).tm_wday],(*t).tm_hour,(*t).tm_min,(*t).tm_sec);
	}
	return 0;
}
