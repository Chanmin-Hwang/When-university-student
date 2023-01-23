#include <stdio.h>
int main(void)
{
	int N,i=1,b_s = 1,n_s = 7;
	N = (1<=N) && (N<=1000000000);
	scanf("%d",&N);
	while (1)
	{
		if (N==1)
			break;
		if (( b_s+1 <= N) && (N <= n_s))
			break;
		b_s = n_s;
		i++;
		n_s = n_s + 6*i;
	}
	if (N==1)
		printf("%d\n",i);
	else
		printf("%d\n",i+1);
	return 0;
}
