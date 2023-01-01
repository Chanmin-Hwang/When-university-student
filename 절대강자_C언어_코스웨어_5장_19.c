#include <stdio.h>
void print_star(int,int);
int main(void)
{
	int m,n,t;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d",&m,&n);
	if (m>n)
	{
		t = m;
		m = n;
		n = t;
	}
	print_star(m,n);
	return 0;
}
void print_star(int m,int n)
{
	static int p,q,r;
	if (m>=n)
	{
		if (q>=(2*p+1))
			return;
		else
		{
			for (int i=0;i<m-r;i++)
				printf("*");
			printf("\n");
			r+=2;
			q++;
			print_star(m+1,n);
		}
	}
	else
	{
		for (int i=0;i<m;i++)
			printf("*");
		printf("\n");
		q++;
		p++;
		print_star(m+1,n);
	}
}
