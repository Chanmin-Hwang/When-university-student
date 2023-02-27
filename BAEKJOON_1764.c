#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(const void *,const void *);

int main(void)
{
	int N,M,count = 0;
	char **arr = (char **)malloc(500000*sizeof(char *));
	scanf("%d%d",&N,&M);
	getchar();
	char **arr_1 = (char **)malloc(N*sizeof(char *));
	char **arr_2 = (char **)malloc(M*sizeof(char *));

	for (int i=0;i<N;i++)
	{
		arr_1[i] = (char *)calloc(21,1);
		scanf("%[^\n]",arr_1[i]);
		getchar();
	}
	
	for (int i=0;i<M;i++)
	{
		arr_2[i] = (char *)calloc(21,1);
		scanf("%[^\n]",arr_2[i]);
		getchar();
	}
	qsort(arr_1,N,sizeof(char *),compare);
	qsort(arr_2,M,sizeof(char *),compare);
	
	for (int i=0;i<N;i++)
	{
		int mid,min = 0,max = M-1;
		while (min <= max)
		{
			mid = (min+max)/2;
			if (strcmp(arr_1[i],arr_2[mid]) == 0)
			{
				arr[count] = (char *)calloc(strlen(arr_1[i])+1,1);
				strcpy(arr[count],arr_1[i]);
				count++;
				break;
			}
			else if (strcmp(arr_1[i],arr_2[mid]) < 0)
				max = mid-1;
			else if (strcmp(arr_1[i],arr_2[mid]) > 0)
				min = mid+1;
		}
		free(arr_1[i]);
	}
	for (int i=0;i<M;i++)
		free(arr_2[i]);
	
	printf("%d\n",count);
	qsort(arr,count,sizeof(char *),compare);
	for (int i=0;i<count;i++)
	{
		printf("%s\n",arr[i]);
		free(arr[i]);
	}
	for (int i=count;i<500000;i++)
		free(arr[i]);
	return 0;
}
int compare(const void *p,const void *q)
{
	return (strcmp(*(char **)p,*(char **)q));
}
