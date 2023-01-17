#include <stdio.h>
int main(void)
{
	int N;
	N = (0<=N) && (N<=100);
	scanf("%d",&N);
	(N/10 >= 9) ? printf("A\n") : (N/10 >= 8) ? printf("B\n") : (N/10 >= 7) ? printf("C\n") : (N/10 >= 6) ? printf("D\n") : printf("F\n");
	return 0;
}
