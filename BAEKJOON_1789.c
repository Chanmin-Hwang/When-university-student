#include <stdio.h>
int main(void)
{
	long long S,N=0,i=1;
	scanf("%lld",&S);
	while (S != 0)
	{
		S -= i;
		i++;
		N++;
		if (S-i < 0)
			break;
	}
	printf("%lld\n",N);
	return 0;
}
