#include <stdio.h>
#include <stdlib.h>
typedef struct pos{
	int x;
	int y;
} pos;
int compare(const void *p, const void *q)
{
	pos *a = (pos*) p;
	pos *b = (pos*) q;
	if (a->x > b->x)
		return 1;
	else if (a->x < b->x)
		return -1;
	else
	{
		if (a->y < b->y)
			return -1;
		else
			return 1;
	}
}
int main(void)
{
	int N;
	scanf("%d",&N);
	pos	*cd = calloc(N,sizeof(pos));

	for (int i=0;i<N;i++)
		scanf("%d%d", &cd[i].x, &cd[i].y);

	qsort(cd,N,sizeof(pos),compare);

	for (int i=0;i<N;i++)
		printf("%d %d\n",cd[i].x,cd[i].y);
	free(cd);
}
