#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) 
{
	char clnm[21];
	int tcn, clothNum, i, j, arrn = 0, k, flag = 0, sum = 1;
	int narr[30] = { 0, };
	char *cltp;
	char *clarr[30];
	scanf("%d", &tcn);
	for (i = 0; i < tcn; i++) 
	{
		arrn = 0;
		sum = 1;
		flag = 0;
		scanf("%d", &clothNum);
		for (j = 0; j < clothNum; j++) 
		{
			scanf("%s", clnm);
			cltp = (char*)malloc(sizeof(char) * 21);
			scanf("%s", cltp);
			for (k = 0; k < arrn; k++) 
			{
				if (!strcmp(clarr[k], cltp)) 
				{
					narr[k]++;
					flag = 1;
					break;
				}
			}
			if (!flag) 
			{
				narr[arrn] = 1;
				clarr[arrn] = cltp;
				arrn++;
			}
			flag = 0;
		}
		for (j = 0; j < arrn; j++) 
			sum *= (narr[j] + 1);
		sum--;
		printf("%d\n", sum);
	}
	return 0;
}
