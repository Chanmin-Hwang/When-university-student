#include <stdio.h>
int main(void)
{
	float num = 1004.8282;

	printf("12345678901234567890\n");
	printf("===%f===\n", num);
	printf("===%10.2f===\n", num);
	printf("===%010.2f===\n", num);
	printf("===%-10.2f===\n", num);
	return 0;
}
