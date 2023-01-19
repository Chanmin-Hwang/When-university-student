#include <stdio.h>
int main(void)
{
	int num[9],max = 0,max_num = 0;
	for (int i=0;i<9;i++)
	{
		num[i] = (1<=num[i]) && (num[i]<100);
		scanf("%d",num+i);
		if (num[i] > max)
		{
			max = num[i];
			max_num = i+1;
		}
	}
	printf("%d\n%d\n",max,max_num);
	return 0;
}
