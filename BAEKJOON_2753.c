#include <stdio.h>
int main(void)
{
	int N;
	N = (1<=N) && (N<=4000);
	scanf("%d",&N);
	if ((N%4==0) && ((N%100 != 0) || (N%400 == 0)))
		printf("%d\n",1);
	else
		printf("%d\n",0);
	return 0;
}
