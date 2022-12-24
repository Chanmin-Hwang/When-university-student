#include <stdio.h>
int main(void)
{
	static int i;
	i+=1;
	if (i==11)
		return 0;
	printf("Never ending...\n");
	main();
	return 0;
}
