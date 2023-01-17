#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[100];
	scanf("%[^\n]",s);
	for (char i=97;i<=122;i++)
		for (int k=0;k<=strlen(s);k++)
		{
			if (i == s[k]){
				printf("%d ",k);
				break;
			}
			else if (k==strlen(s))
				printf("%d ",-1);
		}
	return 0;
}
