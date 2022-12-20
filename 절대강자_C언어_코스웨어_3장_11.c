#include <stdio.h>
int main(void)
{
	char c = 'A';
	printf("sizeof(c)	= %lu\n",sizeof(c));
	printf("sizeof('A')	= %lu\n",sizeof('A'));
	printf("sizeof(c+c)	= %lu\n",sizeof(c+c));
	printf("sizeof(c = 'A')	= %lu\n",sizeof(c = 'A'));
	return 0;
}
