#include <stdio.h>
#include <stdlib.h>
int hex2dec(char h[]);
int main(void)
{
	printf("%d\n",hex2dec("FF"));
	return 0;
}

int hex2dec(char h[])
{
	int x;
	x = strtol(h,NULL,16);
	return x;
}
