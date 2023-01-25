#include <stdio.h>
int main(void)
{
	int N,i=0,c_n=0;
	scanf("%d",&N);
	while (1)
	{
		if (i + i/1000000 + i%1000000/100000 + i%100000/10000 + i%10000/1000 + i%1000/100 + i%100/10 + i%10 == N)
		{
			c_n = i;
			break;
		}
		else if (i>1000000)
			break;
		i++;
	}
	printf("%d\n",c_n);
	return 0;
}
