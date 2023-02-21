#include <stdio.h>
#include <string.h>
int main(void)
{
	char tmp[101],stack[101];
	int top,len;
	while (1)
	{
		top = -1;
		scanf("%[^\n]",tmp);
		getchar();
		len = strlen(tmp);
		if (strcmp(".",tmp) == 0)
			break;
		for (int i=0;i<=len;i++)
		{
			if ((tmp[i] == '(') || (tmp[i] == '['))
			{
				top++;
				stack[top] = tmp[i];
			}
			else if (tmp[i] == ')')
			{
				if (stack[top] == '(')
					top--;
				else
				{
					printf("no\n");
					break;
				}
			}
			else if (tmp[i] == ']')
			{
				if (stack[top] == '[')
					top--;
				else
				{
					printf("no\n");
					break;
				}
			}
			if (tmp[i] == '.')
			{
				if (top == -1)
				{
					printf("yes\n");
					break;
				}
				else
				{
					printf("no\n");
					break;
				}
			}
		}
	}
	return 0;
}
