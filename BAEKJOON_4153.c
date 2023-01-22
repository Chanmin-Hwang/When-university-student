#include <stdio.h>
int main(void)
{
	int a = 1,b = 1,c = 1,t;
	while ((a != 0) && (b != 0) && (c != 0))
	{
		scanf("%d%d%d",&a,&b,&c);
		if (a>b)
		{
			t = a;
			a = b;
			b = t;
		}
		if (b>c)
		{
			t = b;
			b = c;
			c = t;
		}
		if (c*c == a*a + b*b)
		{
			if ((a == 0) && (b == 0) && (c == 0))
				break;
			printf("right\n");
		}
		else
			printf("wrong\n");
	}
	return 0;
}
