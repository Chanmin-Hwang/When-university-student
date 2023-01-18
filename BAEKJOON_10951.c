#include <stdio.h>
int main(void)
{
	int A,B;
	A = (0<A) && (A<10);
	B = (0<B) && (B<10);
	while (scanf("%d%d",&A,&B) != EOF)
		printf("%d\n",A+B);
	return 0;
}
