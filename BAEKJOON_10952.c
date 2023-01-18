#include <stdio.h>
int main(void)
{
	int A,B;
	A = (0<A) && (A<10);
	B = (0<B) && (B<10);
	while (1)
	{
        scanf("%d%d",&A,&B); 
		if ((A==0) && (B==0))
			break;
		printf("%d\n",A+B);
	}
	return 0;
}
