#include <stdio.h>
int main(void)
{
	char string[] = "abc";
	char *p;
	int i;
	p=string;
	for (i = 0; i<3; ++i)
		printf("%c\n",*p++);
	printf("string = %s\n",string);
	p = string;
	for (i = 0; i<3; ++i)
		printf("%c\n",(*p)++);
	printf("string = %s\n",string);

	return 0;
}
