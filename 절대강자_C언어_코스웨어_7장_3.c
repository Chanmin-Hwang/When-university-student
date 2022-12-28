#include <stdio.h>
int main(void)
{
	char *cp;
	int *ip;
	long long *llp;
	float *fp;
	double *dp;
	printf("char * : %ld\n",sizeof(cp));
	printf("int * : %ld\n",sizeof(ip));
	printf("long long * : %ld\n",sizeof(llp));
	printf("float * : %ld\n",sizeof(fp));
	printf("double * : %ld\n",sizeof(dp));
	return 0;
}
