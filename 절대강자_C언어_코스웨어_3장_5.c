#include <stdio.h>
int main(void)
{
	int a = 2, b = -3,c = 5, d = -7, e = 11;
	printf("%d\n",7+c*--d/e);
	printf("%d\n",2*a%-b+c+1);
	printf("%d\n",39/-++e-+29%c);
	printf("%d\n",a+=b+=c+=1+2);
	printf("%d\n",7-+(++a)%(3+b));
	return 0;
}
