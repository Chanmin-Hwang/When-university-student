#include <stdio.h>
int main(void)
{
    int count[10]={0},N,max,s_n;
    scanf("%d",&N);
    while (N >= 10) 
    {   
        count[N%10]++;
        N /= 10; 
    }   
    count[N]++;
    s_n = count[6] + count[9];
    if (s_n % 2 == 0)
        max = s_n / 2;
    else
        max = s_n / 2 + 1;
    for (int i=0;i<10;i++)
        if ((max < count[i]) && (i != 6) && (i != 9)) 
            max = count[i];
    printf("%d\n",max);
    return 0;
}
