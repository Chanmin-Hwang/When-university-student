#include <stdio.h>
int main(void)
{
	int N;
	N = (1<=N) && (N<=100000);
	scanf("%d",&N);
	for (;N>=1;N--)
		printf("%d\n",N);
	return 0;
}
