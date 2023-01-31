#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int x,y;
} pos;
int compare(const void *p,const void *q)
{
	pos *a = (pos *)p;
	pos *b = (pos *)q;

	if (a->y > b->y)
		return 1;
	else if (a->y < b->y)
		return -1;
	else
		if (a->x > b->x)
			return 1;
		else if (a->x < b->x)
			return -1;
}
int main(void)
{
	int N;
	scanf("%d",&N);
	pos xy[N];
	for (int i=0;i<N;i++)
		scanf("%d%d",&(xy[i].x),&(xy[i].y));
	qsort(xy,N,sizeof(pos),compare);
	for (int i=0;i<N;i++)
		printf("%d %d\n",(xy[i].x),(xy[i].y));
	return 0;
}
