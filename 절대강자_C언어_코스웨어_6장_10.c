#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void create_func(int,double []);
void add(int,double [],double [],double []);
double sum_func(int,double []);
int main(void)
{
	int n;
	printf("최고차항의 차수 : ");
	scanf("%d",&n);
	double f[n+1],g[n+1],h[n+1],F,G,H;
	create_func(n,g);
	create_func(n,h);
	add(n,f,g,h);
	F = sum_func(n,f);
	G = sum_func(n,g);
	H = sum_func(n,h);
	printf("%.2lf = %.2lf + %.2lf\n",F,G,H);
	return 0;
}
void create_func(int n,double func[n+1])
{
	double x;
	x = rand()/(double)rand();
	func[0] = rand()/(double)rand();
	srand(time(NULL));
	for (int i=1;i<=n;i++)
	{
		func[i] = rand()/(double)rand();
		for (int k=1;k<=i;k++)
			func[i] *=x;
	}
	return;
}
void add(int n,double f[],double g[],double h[])
{
	for (int i=0;i<=n;i++)
		f[i] = g[i] + h[i];
	return;
}
double sum_func(int n,double func[])
{
	double sum = 0;
	for (int i=0;i<=n;i++)
		sum += func[i];
	return sum;
}
