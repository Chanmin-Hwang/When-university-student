#include <stdio.h>
#include <string.h>
int main(void)
{
	char tmp[51];
	int T,count;
	scanf("%d",&T);
	getchar();
	for (int i=0;i<T;i++)
	{
		count = 0;
		scanf("%[^\n]",tmp);
		getchar();
		for (int r=0;r<=strlen(tmp);r++)
		{
			if (tmp[r] == '(')
				count++;
			else if (tmp[r] == ')')
				count--;
			if (count < 0)
			{
				printf("NO\n");
				break;
			}
			if ((r == strlen(tmp)) && (count == 0))
				printf("YES\n");
			else if ((r == strlen(tmp)) && (count != 0))
				printf("NO\n");
		}
	}
	return 0;
}
