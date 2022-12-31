#include <stdio.h>
void factorize(int);
int main(void)
{
	int n;
	printf("자연수를 입력하세요 : ");
	scanf("%d",&n);
	if (n<0)
	{
		printf("양수를 입력하세요.\n");
		return 0;
	}
	factorize(n);
	return 0;
}
void factorize(int n)
{
	int k;
	printf("%d = ",n);
	for (int i = 2;i<=n;i++)
		if (n%i==0)
			k++;
	if (k==1)
		printf("%d\n",n);
	else
		while (n!=1)
		{
			int i = 2;
			for (;i<=n;i++)
				if (n%i==0)
				{
					n/=i;
					if (n==1)
					{
						printf("%d\n",i);
						break;
					}
					printf("%d * ",i);
					break;
				}
		}
}
