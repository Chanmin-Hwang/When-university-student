#include <stdio.h>
int main(void)
{
	int A,B;
	A = (-10000<=A) && (A<=10000);
	B = (-10000<=B) && (B<=10000);
	scanf("%d%d",&A,&B);
	if (A>B)
		printf(">\n");
	else if (A<B)
		printf("<\n");
	else if (A==B)
		printf("==\n");
	return 0;
}
