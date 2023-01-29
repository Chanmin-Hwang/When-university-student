#include <stdio.h>
int main(void)
{
	int N,count = 0;
	scanf("%d",&N);
	int h[N],w[N];
	for (int i=0;i<N;i++)
		scanf("%d%d",w+i,h+i);
	for (int i=0;i<N;i++)
	{
		for (int r=0;r<N;r++)
			if ((*(w+i) < *(w+r)) && (*(h+i) < *(h+r)))
				count++;
		printf("%d ",count+1);
		count = 0;
	}
	printf("\n");
	return 0;
}
