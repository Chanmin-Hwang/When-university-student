#include <stdio.h>
int main(void)
{
	int N,K;
	scanf("%d%d",&N,&K);
	int num[N],index = K-1;
	for (int i=1 ; i<=N ; i++)
		num[i-1] = i;
	printf("<");
	for (int i=0;i<N;i++)
	{
		if (num[index] != -1)
		{
			if (i == N-1)
			{
				printf("%d>\n",num[index]);
			  	break;
			}
			else 
				printf("%d, ",num[index]);
			num[index] = -1;
			int r=0;
			index++;
			if (index >= N)
				index -= N;
			while (r < K)
			{
				if (num[index] != -1)
				{
					if (r == K-1)
						break;
					index++;
					r++;
				}
				else
					index++;
				if (index >= N)
					index -= N;
			}
		}
	}
	return 0;
}
