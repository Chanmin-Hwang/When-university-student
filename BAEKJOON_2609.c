#include <stdio.h>
int main(void)
{
	int a,b,i,answer;
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		i = a;
		a = b;
		b = i;
	}
	for (i=1;i<=b;i++)
	{
		if ((a%i == 0) && (b%i==0))
			answer = i;
	}
	printf("%d\n",answer);
	i = a;
	while (1)
	{
		if ((i%a == 0) && (i%b==0))
		{
			printf("%d\n",i);
			break;
		}
		i++;
	}
	return 0;
}
