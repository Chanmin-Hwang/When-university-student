#include <stdio.h>
int main(void)
{
	int num = 1004;

	printf("12345678901234567890\n");
	printf("===%d===\n", num);
	printf("===%8d===\n", num);
	printf("===%08d===\n", num);
	printf("===%-8d===\n", num);
	return 0;
}
