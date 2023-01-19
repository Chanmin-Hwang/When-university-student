#include <stdio.h>
int main(void)
{
	int N,i=0,grade=0,score=0;
	char ch;
	scanf("%d",&N);
	getchar();
	while (i<N)
	{
		while (1)
		{
			scanf("%1c",&ch);
			if (ch == 'O')
			{
				score++;
				grade += score;
			}
			else if (ch == 'X')
				score = 0;
			else if (ch == '\n')
				break;
		}
		printf("%d\n",grade);
		grade = 0;
		score = 0;
		i++;
	}
	return 0;
}
