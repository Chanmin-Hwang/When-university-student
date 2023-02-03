#include <stdio.h>
int main(void)
{
	int M,N,min = 10001,sum = 0;
	scanf("%d%d",&M,&N);
	for (; M <= N; M++)
		for (int i=2;i<=M;i++)
		{
			if ((M%i == 0) && (i != M))
				break;
			else if (i == M)
			{
				sum += M;
				if (min > M)
					min = M;
			}
		}
	if (sum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n",sum,min);
	return 0;
}	
