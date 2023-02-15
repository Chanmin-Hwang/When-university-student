#include <stdio.h>
#include <stdlib.h>
int compare(const void *,const void *);
int main(void)
{
	int K,N,count;
	scanf("%d%d",&K,&N);
	long long *num = (long long *)calloc(K,sizeof(long long));
	for (int i=0;i<K;i++)
		scanf("%lld",num+i);
	qsort(num,K,sizeof(long long),compare);
	long long min = 1,max = num[K-1],mid,len = 0;
	while (min <= max)
	{
		count = 0;
		mid = (min+max)/2;
		for (int i=0;i<K;i++)
			count += num[i]/mid;
		if ((count >= N) && (len < mid))
			len = mid;
		if (count >= N)
			min = mid+1;
		else
			max = mid-1;
	}
	printf("%lld\n",len);
	return 0;
}
int compare(const void *p,const void *q)
{
	if (*(long long *)p > *(long long *)q)
		return 1;
	else if (*(long long *)p < *(long long *)q)
		return -1;
	else
		return 0;
}
