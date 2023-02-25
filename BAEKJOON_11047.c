#include <stdio.h>
int main(void) 
{
    int N, K, i, count = 0;
    int coin[10];
    scanf("%d %d ", &N, &K);
    for (i = 0; i < N; i++) 
        scanf("%d",coin+i);
    i = N - 1;
    while (K > 0) 
	{
        if (coin[i] > K) 
            i--;
        else
	   	{
            K = K - coin[i];
            count++;
        }
    }
    printf("%d", count);
}
