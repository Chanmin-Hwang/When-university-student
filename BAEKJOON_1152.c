#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char s[1000000];
	int count=0;
	scanf("%[^\n]",s);
	for (int i=0;i<strlen(s)+1;i++)
		if (s[i] == ' ')
			count += 1;
	if (s[0] == ' ')
		count -= 1;
	if (s[strlen(s)-1] == ' ')
		count -= 1;
	printf("%d\n",count+1);
	return 0;
}
