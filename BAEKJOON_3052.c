#include <stdio.h>
int main(void)
{
	int n,p[10],cmp[42]={0},pc=0;
	for (int i=0;i<10;i++)
	{
		scanf("%d",&n);
		p[i] = n % 42;
		for (int k=0;k<42;k++)
			if (p[i] == k)
				cmp[k] += 1;
	}
	for (int i=0;i<42;i++)
		if (cmp[i] >= 1)
			pc++;
	printf("%d\n",pc);
	return 0;
}
