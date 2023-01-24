#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N,M,i,o,p,u,answer = -1;
	scanf("%d%d",&N,&M);
	int all = N*(N-1)*(N-2)/6;
	int *card = (int *)calloc(N,sizeof(int));
	int *all_case = (int *)calloc(all,sizeof(int));
	for (i=0 ; i<N ; i++)
		scanf("%d",card+i);
	for (i=0 ; i<N ; i++)
		for (o=i+1;o<N;o++)
			for (p=o+1 ; p<N ; p++)
			{
				*(all_case + u) = *(card + i) + *(card + o) + *(card + p);
				u++;
			}
	free(card);
	for (i=0;i < all;i++)
	{
		if (*(all_case + i) == M)
		{
			answer = M;
			break;
		}
		else if (*(all_case + i) < M)
			if (*(all_case + i) > answer)
				answer = *(all_case + i);
	}
	printf("%d\n",answer);
	return 0;
}
