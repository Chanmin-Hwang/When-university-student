#include <stdio.h>
int main(void)
{
	int data[3][3];

	for (int i = 0; i<9;i++)
		data[0][i]=i;
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
			printf("%3d",data[i][j]);
		printf("\n");
	}
	return 0;
}
