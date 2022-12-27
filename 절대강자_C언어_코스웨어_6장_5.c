#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));

	int grade[10],place[10],gradecpy[10],t;

	for (int i=0;i<10;i++)
	{
		grade[i] = rand()%101;
		gradecpy[i] = grade[i];
	}

	for (int i=0;i<10;i++)
		for (int k=0;k<10;k++)
			if (gradecpy[k] < gradecpy [k+1])
			{
				t = gradecpy[k+1];
				gradecpy[k+1] = gradecpy[k];
				gradecpy[k] = t;
			}

	for (int i=0;i<10;i++)
		for (int k=0;k<10;k++)
			if (grade[i] == gradecpy[k])
				place[i]=k+1;

	for (int i=0;i<10;i++)
		printf("%d번 학생 : %d점 - %d등\n",i,grade[i],place[i]);

	return 0;
}
