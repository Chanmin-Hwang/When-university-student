#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100],grade[27]=" abcdefghijklmnopqrstuvwxyz";
	int sum,n;
	while (1)
	{
		sum=0;
		printf("단어를 입력하세요 : ");
		scanf("%[^\n]",str);
		n=strlen(str);
		getchar();
		if (strcmp(str,".end")==0)
			break;
		for (int i=0;i<=n;i++)
		{
			for (int k=1;k<27;k++)
			{
				if (str[i]==grade[k])
					sum+=k;
			}
		}
		printf("%s : %d점\n",str,sum);
	}
	return 0;
}
