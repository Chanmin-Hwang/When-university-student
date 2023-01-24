#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	unsigned L,r = 31,i,M=1234567891;
	unsigned long long a,k=1,sum = 0;
	scanf("%d",&L);
	char *s = (char *)calloc(L+1,1);
	getchar();
	scanf("%[^\n]",s);
	for (i=0;i<L;i++)
	{
		if (i != 0)
			k *= r;
		a = *(s+i)-'a'+1;
		a *= k%M; 
		sum += a % M;
	}
	free(s);
	printf("%llu\n",sum);
	return 0;
}
