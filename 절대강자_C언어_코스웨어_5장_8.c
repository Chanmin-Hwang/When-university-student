#include <stdio.h>
int main(void)
{
	int a=1,b=2,c=3;
	printf("%d %d %d\n",a,b,c);
	{
		int b=4,c=5;
		printf("%d %d %d\n",a,b,c);
		a=b;
		{
			int c=6;
			c = b;
			printf("%d %d %d\n",a,b,c);
		}
		printf("%d %d %d\n",a,b,c);
		{
			printf("%d %d %d\n",a,b,c);
		}
		printf("%d %d %d\n",a,b,c);
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
