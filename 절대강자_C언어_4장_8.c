#include <stdio.h>
int main(void)
{
	int max_days,day_num;
	printf("최대 일 수를 입력 하세요 :");
	scanf("%d",&max_days);
	printf("1일의 요일을 입력 하세요(0:일요일, 1:월요일, . . .) :");
	scanf("%d",&day_num);
	printf("Su Mo Tu We Th Fr Sa\n");
	switch (day_num)
	{
		case (0) :
			for (int i=1;i<=max_days;i++)
			{
				printf("%2d ",i);
				if ((i==7) || (i==14) || (i==21) || (i==28))
					printf("\n");
			}
			break;
		case (1) :
			for (int i=1;i<=max_days;i++)
			{
				if (i==1)
					printf("%5d ",i);
				else
					printf("%2d ",i);
				if ((i==6) || (i==13) || (i==20) || (i==27))
					printf("\n");
			}
			break;
		case (2) :
			for (int i=1;i<=max_days;i++)
			{
				if (i==1)
					printf("%8d ",i);
				else
					printf("%2d ",i);
				if ((i==5) || (i==12) || (i==19) || (i==26))
					printf("\n");
			}
			break;
		case (3) :
			for (int i=1;i<=max_days;i++)
			{
				if (i==1)
					printf("%11d ",i);
				else
					printf("%2d ",i);
				if ((i==4) || (i==11) || (i==18) || (i==25))
					printf("\n");
			}
			break;
		case (4) :
			for (int i=1;i<=max_days;i++)
			{
				if (i==1)
					printf("%14d ",i);
				else
					printf("%2d ",i);
				if ((i==3) || (i==10) || (i==17) || (i==24) || (i==31))
					printf("\n");
			}
			break;
		case (5) :
			for (int i=1;i<=max_days;i++)
			{
				if (i==1)
					printf("%17d ",i);
				else
					printf("%2d ",i);
				if ((i==2) || (i==9) || (i==16) || (i==23) || (i==30))
					printf("\n");
			}
			break;
		case (6) :
			for (int i=1;i<=max_days;i++)
			{
				if (i==1)
					printf("%20d ",i);
				else
					printf("%2d ",i);
				if ((i==1) || (i==8) || (i==15) || (i==22) || (i==29))
					printf("\n");
			}
			break;
	}
	printf("\n");
	return 0;
}
