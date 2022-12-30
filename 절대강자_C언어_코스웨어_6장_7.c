#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int t,grade[10],student[10];
	srand(time(NULL));
	for (int i=0;i<10;i++)
	{
		grade[i] = rand()%101;
		student[i]=i;
	}
	for (int i=0;i<10;i++)
		for (int k=0;k<9;k++)
			if (grade[k]<grade[k+1])
			{
				t = grade[k];
				grade[k] = grade[k+1];
				grade[k+1] = t;
				
				t = student[k];
				student[k] = student[k+1];
				student[k+1] = t;
			}
	printf("성적순 : ");
	for (int i=0;i<10;i++)
	{
		if (i==9)
			printf("%d(%d)\n",student[i],grade[i]);
		else
			printf("%d(%d), ",student[i],grade[i]);
	}
	return 0;
}
