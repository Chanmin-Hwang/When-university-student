#include <stdio.h>
int main(void)
{
	int N,M=0;
	N = N<=1000;
	scanf("%d",&N);
	int grade[N];
	double avg = 0.0;
	for (int i=0;i<N;i++)
	{
		grade[i] = (0<=grade[i]) && (grade[i]<=100);
		scanf("%d",(grade+i));
		if (grade[i]>M)
			M = grade[i];
	}
	for (int i=0;i<N;i++)
			avg += (double)grade[i]/M*100;
	printf("%f\n",avg/N);
	return 0;
}
