#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int T,N;
	scanf("%d",&T);
	for (int i=0;i<T;i++)
	{
		scanf("%d",&N);
		int *zfib = (int *)calloc(N+1,4);
		int *ofib = (int *)calloc(N+1,4);
		zfib[0] = 1;
		if (N >= 1)
			ofib[1] = 1;
		for (int o=2;o<=N;o++)
		{
			zfib[o] = zfib[o-1] + zfib[o-2];
			ofib[o] = ofib[o-1] + ofib[o-2];
		}
		printf("%d %d\n",zfib[N],ofib[N]);
		free(zfib);
		free(ofib);
	}
	return 0;
}
