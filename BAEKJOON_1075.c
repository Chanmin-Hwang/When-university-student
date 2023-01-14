#include <stdio.h>
int main(void)
{
	int N,F;
	scanf("%d",&N);
	scanf("%d",&F);
	N-=N%100;
	while ((N%F)!=0)
		N++;
	printf("%02d",N%100);
	return 0;
}
