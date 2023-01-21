#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,r=0,R;
	char S[20],P[160];
	scanf("%d",&T);
	for (int i=0;i<T;i++)
	{
		scanf("%d",&R);
		getchar();
		scanf("%[^\n]",S);
		for (int t=0;t<strlen(S)+1;t++)
			for (int k=0;k<R;k++,r++)
				P[r] = S[t];
		printf("%s\n",P);
		r=0;
	}
	return 0;
}
