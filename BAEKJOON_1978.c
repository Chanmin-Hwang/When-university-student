#include <stdio.h>
int main(void)
{
	int N,c_n = 0,num;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d",&num);
		if (num == 2)
			c_n++;
		for (int r=2;r<num;r++)
		{
			if (num % r == 0)
				break;
			else if ((num % r != 0) && (r == num-1))
				c_n++;
		}
	}
	printf("%d\n",c_n);
	return 0;
}
