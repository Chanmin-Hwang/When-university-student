#include <stdio.h>
typedef struct data
{
	int in;
	float f;
} data;
void print(data);
int main(void)
{
	print((data){10,3.14});
	return 0;
}
void print(data d)
{
	printf("in : %d, f : %.2f\n",d.in,d.f);
	return;
}
