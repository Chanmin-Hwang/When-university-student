#include <stdio.h>
int main(void)
{
    for (int i=1;i<=10000;i++)
        for (int r=1;r<=i;r++)
        {
            if (r/10000 + r%10000/1000 + r%1000/100 + r%100/10 + r%10 + r == i)
                break;
            else if (r == i)
                printf("%d\n",i);
        }
    return 0;
}
