#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	int n,top = -1,num = 1,index = 0,s_index = 0;
	scanf("%d",&n);
	int *arr = (int *)calloc(n,4);
	int *stack = (int *)calloc(100000,4);
	char *string = (char *)calloc(200000,1);
	for (int i=0;i<n;i++)
		scanf("%d",arr+i);
	while (1)
	{
		if (top == -1 || (stack[top] < arr[index]))
		{
			stack[++top] = num++;
			string[s_index++] = '+';
		}
		else if (stack[top] == arr[index])
		{
			top--;
			string[s_index++] = '-';
			index++;
		}
		else
		{
			printf("NO\n");
			return 0;
		}
		if (s_index == n*2)
			break;
	}
	for (int i=0;i<s_index;i++)
		printf("%c\n",string[i]);
	return 0;
}
