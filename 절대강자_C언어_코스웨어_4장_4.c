#include <stdio.h>
int main(void)
{
	int x,y,z,w;
	printf("정수 4개 입력 : ");
	scanf("%d %d %d %d",&x,&y,&z,&w);
	printf("%d\n",((x<y) && (x<z)) ? x : ((y<z) && (y<x)) ? y : ((z<x) && (z<y)) ? z : 0); 
	printf("%d\n",((x<y) && (x<z) && (x<w)) ? x : ((y<z) && (y<x) && (y<w)) ? y : ((z<x) && (z<y) && (z<w)) ? z : ((w<x) && (w<y) && (w<z)) ? w : 0); 
	return 0;
}
