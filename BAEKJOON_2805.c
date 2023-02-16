#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N;
	long long M,max = 0,min = 0,mid,h = 0,len;
	scanf("%d%lld",&N,&M);
	long long *num = (long long *)calloc(N,sizeof(long long));
	for (int i=0;i<N;i++)
	{
		scanf("%lld",num+i);
		if (max < *(num+i))
			max = *(num+i);
	}
	while (min <= max)
	{
		len = 0;
		mid = (min+max)/2;
		for (int i=0;i<N;i++)
			if (*(num+i)-mid > 0)
				len += *(num+i)-mid;
		if ((h < mid) && (len >= M))
			h = mid;
		if (len < M)
			max = mid-1;
		else
			min = mid+1;
	}
	free(num);
	printf("%lld\n",h);
	return 0;
}
