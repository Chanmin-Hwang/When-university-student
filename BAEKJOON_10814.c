#include <stdio.h>
typedef struct user_info{
	int age;
	char name[101];
} user_info;
int main(void)
{
	int N,num[201] = {0};
	scanf("%d",&N);
	user_info user[N];
	for (int i=0;i<N;i++)
	{
		scanf("%d",&(user[i].age));
		num[user[i].age]++;
		getchar();
		scanf("%[^\n]",user[i].name);
	}
	for (int i=1;i<201;i++)
		if (num[i] > 0)
			for (int r=0;r<N;r++)
				if (i == user[r].age)
					printf("%d %s\n",user[r].age,user[r].name);
	return 0;
}
