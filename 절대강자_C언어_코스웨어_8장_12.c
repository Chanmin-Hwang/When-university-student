#include <stdio.h>
typedef struct data
{
	int in;
	float f;
} data;
void change(data *);
int main(void)
{
	data *p = &(data){10,3.14};
	change(p);
	printf("in : %d, f : %.2f\n",p -> in,p -> f);
	return 0;
}
void change(data *p)
{
	p -> in = 30;
	p -> f = 6.6;
	return;
}
