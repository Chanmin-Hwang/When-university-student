#include <stdio.h>
int main(void)
{
	char *pc = NULL;
	int *pi = NULL;
	double *pd = NULL;
	long double *pld = NULL;
	printf("%5lu%5lu\n%5lu%5lu\n%5lu%5lu\n",(unsigned long)(pc+1),(unsigned long)(pi+1),(unsigned long)(pd+1),(unsigned long)(pld+1),(unsigned long)(pc+3),(unsigned long)(pld+3));
	printf("%ld\n",sizeof(long double));
	return 0;
}
