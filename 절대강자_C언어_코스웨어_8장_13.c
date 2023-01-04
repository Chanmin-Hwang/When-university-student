#include <stdio.h>
int main(void)
{
	union ch_int{
		_Alignas (sizeof(long long)) char ch;
		_Alignas (sizeof(long)) int in;
	};

	printf("sizeof(union ch_int) : %ld\n",sizeof(union ch_int));
	return 0;
}
