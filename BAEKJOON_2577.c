#include <stdio.h>
int main(void)
{
	int A,B,C,i=0,x[10],num[10]={0};
	int n;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	n = A*B*C;
	while (n/10 > 0)
	{
		*(x+i) = n % 10;
		n /= 10;
		i++;
	}
	*(x+i) = n;
	for (int r=0;r<i+1;r++)
		for (int k=0;k<10;k++)
			if (x[r] == k)
			{
				num[k] +=1;
				break;
			}
	for (int r=0;r<10;r++)
		printf("%d\n",num[r]);
	return 0;
}
