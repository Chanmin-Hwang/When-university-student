#include <stdio.h>
int main(void)
{
	int i=0,t,grade[10];
	for (int i=0;i<10;i++)
	{
		printf("%d번 학생 : ",i);
		scanf("%d",&grade[i]);
	}
	while (i<9)
	{
	for (int i=0;i<9;i++)
	{
		if (grade[i]<grade[i+1])
		{
			t=grade[i];
			grade[i]=grade[i+1];
			grade[i+1]=t;
		}
	}
	i++;
	}
	printf("성적순 :");
	for (int i=0;i<9;i++)
		printf(" %d,",grade[i]);

	printf(" %d\n",grade[9]);
	return 0;
}
