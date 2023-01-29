#include <stdio.h>
int main(void)
{
	short N,count=10000;
	scanf("%hd",&N);
	if (N%3==0)
		count = N/3;
	if (N%5==0)
		count = N/5;
	for (register short i=1;i<=(N/5);i++)
		for (register short r=1;r<=(N/3);r++)
		{
			if (5*i + 3*r == N)
				if (count > i+r)
					count = i+r;
		}
	if (count == 10000)
		printf("-1\n");
	else
		printf("%hd\n",count);
	return 0;
}
