#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[1000000],ch;
	int count[26] = {0},c=0;
	scanf("%[^\n]",s);
	for (int i=0;i<strlen(s)+1;i++)
		for (int k=65;k<91;k++)
			if ((*(s+i) == k) || (*(s+i) == k+32))
				*(count+k-65) += 1;
	for (int i=0;i<26;i++)
	{
		if (c < *(count+i))
		{
			c = *(count+i);
			ch = i+65;
		}
		else if (c == *(count+i))
			ch = '?';
	}
	printf("%c\n",ch);
	return 0;
}
