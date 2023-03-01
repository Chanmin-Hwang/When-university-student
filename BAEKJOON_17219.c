#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *,const void *);
typedef struct node
{
	char add[21];
	char pw[21];
} node;
int main(void)
{
	int N,M,min,max,mid,func;
	char tmp[21];
	scanf("%d%d",&N,&M);
	node *arr = (node *)calloc(N,sizeof(node));
	getchar();
	for (int i=0;i<N;i++)
	{
		scanf("%s",arr[i].add);
		getchar();
		scanf("%s",arr[i].pw);
		getchar();
	}
	qsort(arr,N,sizeof(node),compare);
	for (int i=0;i<M;i++)
	{
		min = 0,max = N-1;
		scanf("%[^\n]",tmp);
		getchar();
		while (min <= max)
		{
			mid = (min+max)/2;
			func = strcmp(tmp,arr[mid].add);
			if (func == 0)
			{
				printf("%s\n",arr[mid].pw);
				break;
			}
			else if (func < 0)
				max = mid-1;
			else if (func > 0)
				min = mid+1;
		}
	}
	return 0;
}
int compare(const void *p,const void *q)
{
	node *a = (node *)p;
	node *b = (node *)q;
	return strcmp(a->add,b->add);
}
