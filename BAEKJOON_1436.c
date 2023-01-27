#include <stdio.h>
int main(void)
{
	int N,off = 1;
	unsigned long long p = 666,c_n;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		while (off)
		{
			c_n = p;
			while (c_n > 10)
			{
				if (c_n % 10 == 6)
				{
					c_n /= 10;
					if (c_n % 10 == 6)
					{
						c_n /= 10;
					   	if (c_n % 10 == 6)
						{
							off = 0;
							break;
						}
					}
				}
				c_n /= 10;
			}
			p++;
		}
		off = 1;
	}
	printf("%llu\n",p-1);
	return 0;
}
