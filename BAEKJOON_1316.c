#include <stdio.h>
#include <string.h>
int main(void)
{
	int N,non_group = 0,off = 0;
	char word[101];
	scanf("%d",&N);
	getchar();
	for (int i=0;i<N;i++)
	{
		scanf("%[^\n]",word);
		getchar();
		for (int r=0;r<=strlen(word);r++)
			if (word[r] != word[r+1])
			{
				for (int k=r+2;k<=strlen(word);k++)
				{
					if (word[r] == word[k])
					{
						off++;
						break;
					}
				}
				if (off > 0)
				{
					off=0;
					non_group++;
					break;
				}
			}
	}
	printf("%d\n",N-non_group);
	return 0;
}
