#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	int n;
	while (1)
	{
		printf("문자열 입력 : ");
		scanf("%[^\n]",str);
		getchar();
		n = strlen(str);		
		if (strcmp(str,".end")==0)
			break;
		for (int i=0,k=0;i<=n;i++)
		{
			if (str[i]==str[n-k])
			{
				k++;
				if (i>=n-k)
				{
					printf("%s는 회문입니다.\n",str);
				}
			}
			else if ((str[i]!=str[n-k]) && (i==n))
				printf("%s는 회문이 아닙니다.\n",str);
		}
	}
	return 0;
}
