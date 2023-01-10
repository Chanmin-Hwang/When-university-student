#include <stdio.h>
#include <string.h>
typedef struct {
	char name[50];
	int num;
	char grade[3];
} student;
int main(void)
{
	student list[5] = {{"vini",20220020,"A0"},{"toni",20220008,"A+"},{"luka",20220010,"A+"},{"karim",20220009,"B-"},{"antonio",20220022,"A-"}};
	char t[50];
	int n;
	for (int i = 0;i<5;i++)
		for (int k = 0;k<4;k++)
		{
			if (list[k].grade[0] > list[k+1].grade[0])
			{
				strcpy(t,list[k].grade);
				strcpy(list[k].grade,list[k+1].grade);
				strcpy(list[k+1].grade,t);

				strcpy(t,list[k].name);
				strcpy(list[k].name,list[k+1].name);
				strcpy(list[k+1].name,t);

				n = list[k].num;
				list[k].num = list[k+1].num;
			    list[k+1].num = n;
			}
			else if (list[k].grade[0] == list[k+1].grade[0])	
			{
				if ((list[k].grade[1] == '0') || (list[k+1].grade[1] == '0'))
				{
					if ((list[k].grade[1] == '-') && (list[k+1].grade[1] == '0'))
					{
						strcpy(t,list[k].grade);
						strcpy(list[k].grade,list[k+1].grade);
						strcpy(list[k+1].grade,t);

						strcpy(t,list[k].name);
						strcpy(list[k].name,list[k+1].name);
						strcpy(list[k+1].name,t);

						n = list[k].num;
						list[k].num = list[k+1].num;
						list[k+1].num = n;
					}
					else if ((list[k].grade[1] == '0') && (list[k+1].grade[1] == '+'))
					{
						strcpy(t,list[k].grade);
						strcpy(list[k].grade,list[k+1].grade);
						strcpy(list[k+1].grade,t);

						strcpy(t,list[k].name);
						strcpy(list[k].name,list[k+1].name);
						strcpy(list[k+1].name,t);

						n = list[k].num;
						list[k].num = list[k+1].num;
						list[k+1].num = n;
					}
				}
				else if (list[k].grade[1] > list[k+1].grade[1])
				{
					strcpy(t,list[k].grade);
					strcpy(list[k].grade,list[k+1].grade);
					strcpy(list[k+1].grade,t);

					strcpy(t,list[k].name);
					strcpy(list[k].name,list[k+1].name);
					strcpy(list[k+1].name,t);

					n = list[k].num;
					list[k].num = list[k+1].num;
			    	list[k+1].num = n;
				}
				else if (list[k].grade[1] == list[k+1].grade[1])
					if (strcmp(list[k].name,list[k+1].name) > 0)
					{
						strcpy(t,list[k].grade);
						strcpy(list[k].grade,list[k+1].grade);
						strcpy(list[k+1].grade,t);
	
						strcpy(t,list[k].name);
						strcpy(list[k].name,list[k+1].name);
						strcpy(list[k+1].name,t);

						n = list[k].num;
						list[k].num = list[k+1].num;
			    		list[k+1].num = n;
					}
			 }
		}
	for (int k = 0;k<5;k++)
		printf("%s %d %s\n",list[k].name,list[k].num,list[k].grade);
	return 0;
}
