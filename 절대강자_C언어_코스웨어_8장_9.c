#include <stdio.h>
struct a
{
	int k;
};
int main(void)
{
	struct a m;
	m.k = 0;
	struct a n;
	n.k = 0;
	if (m==n)
		printf("성공\n");
	printf("fail\n");
	return 0;
}
