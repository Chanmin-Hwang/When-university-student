#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[101];
	int count = 0;
	scanf("%[^\n]",word);
	for (int i=0;i<=strlen(word);i++)
	{
		if (word[i] == 'c')
		{
			if (word[i+1] == '-')
			{
				i++;
				count++;
			}
			else if (word[i+1] == '=')
			{
				i++;
				count++;
			}
			else
				count++;
		}
		else if (word[i] == 'd')
		{
			if ((word[i+1] == 'z') && (word[i+2] == '='))
			{
				i += 2;
				count++;
			}
			else if (word[i+1] == '-')
			{
				i++;
				count++;
			}
			else
				count++;
		}
		else if ((word[i] == 'l') && (word[i+1] == 'j'))
		{
			i++;
			count++;
		}
		else if ((word[i] == 'n') && (word[i+1] == 'j'))
		{
			i++;
			count++;
		}
		else if ((word[i] == 's') && (word[i+1] == '='))
		{
			i++;
			count++;
		}
		else if ((word[i] == 'z') && (word[i+1] == '='))
		{
			i++;
			count++;
		}
		else
			count++;
	}
	printf("%d\n",count-1);
	return 0;
}
