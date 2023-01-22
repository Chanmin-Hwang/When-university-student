#include <stdio.h>
int main(void)
{
	int x,y,w,h,min;
	w = (1<=w) && (w<=1000);
	h = (1<=h) && (h<=1000);
	x = (1<=x) && (x<=w-1);
	y = (1<=y) && (y<=h-1);
	scanf("%d%d%d%d",&x,&y,&w,&h);
	min = x;
	if (min > y)
		min = y;
	if (min > w-x)
		min = w-x;
	if (min > h-y)
		min = h-y;
	printf("%d\n",min);
	return 0;
}
