#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef struct student
{
	char name[10];
	int num;
	char grade[3];
} student;
int main(void)
{
	struct student student[5] = {{"vini",rand()%1000000,"B-"},{"karim",rand()%1000000,"B-"},{"luka",rand()%1000000,"B+"},{"toni",rand()%1000000,"A+"},{"antonio",rand()%1000000,"A0"}};
	char t[100];
	int r;
	for (int k=0;k<4;k++)
		for (int i=0;i<4;i++)
		{
			if (student[i].grade[0] > student[i+1].grade[0])
			{
				strcpy(t,student[i].grade);
				strcpy(student[i].grade,student[i+1].grade);
				strcpy(student[i+1].grade,t);

				strcpy(t,student[i].name);
				strcpy(student[i].name,student[i+1].name);
				strcpy(student[i+1].name,t);

				r = student[i].num;
				student[i].num = student[i+1].num;
				student[i+1].num = r;
			}

			else if (student[i].grade[0] == student[i+1].grade[0])
			{
				if (student[i].grade[1] > student[i+1].grade[1])
				{
					strcpy(t,student[i].grade);
					strcpy(student[i].grade,student[i+1].grade);
					strcpy(student[i+1].grade,t);

					strcpy(t,student[i].name);
					strcpy(student[i].name,student[i+1].name);
					strcpy(student[i+1].name,t);

					r = student[i].num;
					student[i].num = student[i+1].num;
					student[i+1].num = r;
				}
				else if (student[i].grade[1] == student[i+1].grade[1])
					if (strcmp(student[i].name,student[i+1].name) > 0)
					{
						strcpy(t,student[i].grade);
						strcpy(student[i].grade,student[i+1].grade);
						strcpy(student[i+1].grade,t);

						strcpy(t,student[i].name);
						strcpy(student[i].name,student[i+1].name);
						strcpy(student[i+1].name,t);

						r = student[i].num;
						student[i].num = student[i+1].num;
						student[i+1].num = r;
					}
			}
		}
	for (int i=0;i<5;i++)
		printf("%d %s : %s\n",student[i].num,student[i].name,student[i].grade);
	return 0;
}
