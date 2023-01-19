#include <stdio.h>
int main(void)
{
	int H,M;
	H = (0<=H) && (H<=23);
	M = (0<=M) && (M<=59);
	scanf("%d%d",&H,&M);
	if (M<45)
	{
		if (H==0)
		{
			H = 23;
			M = M + 60 -45;
		}
		else
		{
			H--;
			M = M + 60 -45;
		}
	}
	else
		M -= 45;
	printf("%d %d\n",H,M);
	return 0;
}
