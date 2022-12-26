#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 4
void matrix_multiply(int [N][M],int [N][M],int [N][M]);
int main(void)
{
	int a[N][M],b[N][M],result[N][M];

	srand(time(NULL));

	for (int i=0;i<=N;i++)
		for (register int k=0;k<=M;k++)
		{
			a[i][k] = rand()%10;
	 		b[i][k] = rand()%10;
		}

	for (int i=0;i<=N;i++)
		for (register int k=0;k<=M;k++)
			printf("a[%d][%d] = %d      b[%d][%d] = %d\n",i,k,a[i][k],i,k,b[i][k]);
	
	printf("\n");

	matrix_multiply(a,b,result);

	for (int i=0;i<=N;i++)
		for (register int k=0;k<=M;k++)
			printf("result[%d][%d] = %d\n",i,k,result[i][k]);

	return 0;
}
void matrix_multiply(int a[N][M],int b[N][M],int result[N][M])
{
	for (int i=0;i<=N;i++)
		for (int k=0;k<=M;k++)
			result[i][k] = a[i][k] * b[i][k];
}
