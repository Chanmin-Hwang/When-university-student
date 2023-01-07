#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define type(x) _Generic ((x),unsigned short : "unsigned short int",\
						  int : "signed int",\
						  unsigned : "unsigned int",\
						  long : "signed long int",\
						  unsigned long : "unsigned long int",\
						  float : "float",\
						  double : "double",\
						  default : "other")

int main(void)
{
	size_t st;
	wchar_t wt;
	float_t ft;

	printf("size_t : %s\n",type(st));
	printf("wchar_t : %s\n",type(wt));
	printf("float_t : %s\n",type(ft));

	return 0;
}
