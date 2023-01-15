#include <stdio.h>
int main(void)
{
    int T,a,b;
    scanf("%d",&T);
    int p[T];
    for (int i=0;i<T;i++)
    {   
        scanf("%d%d",&a,&b);
        int r = 1;
        for (int k=1;k<=b;k++)
        {
            r *= a;
            while (r > 10)
                r -= 10;
        }
        if (r % 10 == 0)
            *(p+i) = 10; 
        else
            *(p+i) = r%10;
    }   
    for (int i=0;i<T;i++)
        printf("%d\n",*(p+i));
    return 0;
}
