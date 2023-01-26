#include <stdio.h>
int main(void)
{
    int num[10001]={0},N,k;
    scanf("%d",&N);
    for (register int i=0;i<N;i++)
    {   
        scanf("%d",&k);
        num[k]++;
    }   
    for (register int r=1;r<=10000;r++)
        for (register int i=0;i<num[r];i++)
            printf("%d\n",r);
    return 0;
}
