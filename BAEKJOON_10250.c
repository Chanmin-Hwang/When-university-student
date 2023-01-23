#include <stdio.h>
int main(void)
{
	int T,H,W,N,i;
	H = (1<=H) && (H<=99);
	W = (1<=W) && (W<=99);
	N = (1<=N) && (N<=H*W);
	scanf("%d",&T);
	for (i=0;i<T;i++)
	{
		scanf("%d%d%d",&H,&W,&N);
		if (N%H==0)
			printf("%d\n",H*100+N/H);
		else
			printf("%d\n",N%H*100+N/H+1);
	}
	return 0;
}
