#include <stdio.h>
int main(void)
{
	int E,S,M;
	scanf("%d%d%d",&E,&S,&M);
	if ((E == S) && (S == M))
		printf("%d\n",E);
	else
	{
		register int i = 0;
		while ((i%15+1 != E) || (i%28+1 != S) || (i%19+1 != M))
			i++;
		printf("%d\n",i+1);
	}
	return 0;
}
