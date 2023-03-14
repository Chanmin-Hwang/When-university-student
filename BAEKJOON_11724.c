#include <stdio.h>
#include <stdlib.h>

void check(int N,int i,int **arr,int *connect);

int main(void)
{
	int N,M,p,q,cnt = 0;
	scanf("%d%d",&N,&M);
	int **arr = (int **)calloc(N+1,sizeof(int *));
	int *connect = (int *)calloc(N+1,sizeof(int));

	for (int i=0;i<=N;i++)
		arr[i] = (int *)calloc(N+1,sizeof(int));
	
	for (int i=0;i<M;i++)
	{
		scanf("%d%d",&p,&q);
		arr[p][q] = 1;
		arr[q][p] = 1;
	}
	
	for (int i=1;i<=N;i++)
		if (connect[i] == 0)
		{
			connect[i] = 1;
			check(N,i,arr,connect);
			cnt++;
		}
	
	free(connect);
	for(int i=0;i<=N;i++)
		free(arr[i]);
	free(arr);
	
	printf("%d\n",cnt);
	return 0;
}

void check(int N,int i,int **arr,int *connect)
{
	for (int o=1;o<=N;o++)
		if ((arr[i][o] == 1) && (connect[o] == 0))
		{
			connect[o] = 1;
			check(N,o,arr,connect);
		}
}
