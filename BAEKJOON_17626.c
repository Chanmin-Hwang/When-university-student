#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,cnt = 1,off = 0;
	scanf("%d",&n);
	int *arr = (int *)calloc(224,4);
	for (int i=1;i<224;i++)
		*(arr+i) = i*i;
	for (int o=0;o<224;o++)
	{
		for (int p=0;p<224;p++)
		{
			for (int q=1;q<224;q++)
			{
				if (*(arr+o)+*(arr+p)+*(arr+q) == n)
					off = 1;
				if ((cnt == 1) && (q == 223))
					cnt++;
				if (off)
					break;
			}
			if ((cnt == 2)&&(p == 223))
				cnt++;
			if (off)
				break;
		}
		if ((cnt == 3) && (o == 223))
			cnt++;
		if (off)
			break;
	}
	free(arr);
	printf("%d\n",cnt);
	return 0;
}
