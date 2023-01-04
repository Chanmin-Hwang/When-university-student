#include <stdio.h>
#include <time.h>
int main(void)
{
	struct tm *t;
	time_t now;
	now = time(NULL);
	t = localtime(&now);

	char *day[7] = {"일요일","월요일","화요일","수요일","목요일","금요일","토요일"};

	int k = (*t).tm_mday+1, r =  (*t).tm_wday+1;

	if (&r==NULL)
		r = 1;

	if (&k==NULL)
		k = 1;

	printf("내일은 %d년 %d월 %d일 %s입니다.\n",(*t).tm_year+1900,(*t).tm_mon+1,k,day[r]);
	return 0;
}
