#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
	char word[51];
	int len;
} info;
int compare(const void *p,const void *q)
{
	info *a = (info *)p;
	info *b = (info *)q;

	if (a->len > b->len)
		return 1;
	else if (a->len < b->len)
		return -1;
	else
		return strcmp(a->word,b->word);
}
int main(void)
{
	int N;
	scanf("%d",&N);
	getchar();
	info list[N];
	for (register short i=0;i<N;i++)
	{
		scanf("%[^\n]",list[i].word);
		getchar();
		list[i].len = strlen(list[i].word);
	}
	qsort(list,N,sizeof(info),compare);
	for (register short i=0;i<N;i++)
	{
		if ((strcmp(list[i-1].word,list[i].word) == 0) && (i > 0))
			continue;
		else
			printf("%s\n",list[i].word);
	}
	return 0;
}
