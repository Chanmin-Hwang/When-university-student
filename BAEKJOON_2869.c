#include <stdio.h>
int main(void)
{
	int A,B,V;
	scanf("%d%d%d",&A,&B,&V);
	if (A-B==1)
		printf("%d\n",V-B);
	else
	{
		if ((V-B)%(A-B) == 0)
			printf("%d\n",(V-B)/(A-B));
		else
			printf("%d\n",(V-B)/(A-B)+1);
	}
	return 0;
}
