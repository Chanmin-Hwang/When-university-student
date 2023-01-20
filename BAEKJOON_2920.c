#include <stdio.h>
int main(void)
{
    int code[8],ascending[8],descending[8];
    for (int i=0;i<8;i++)
    {
        scanf("%d",code+i);
        ascending[i] = i+1;
        descending[i] = 8-i;
    }
    if (code[0] == 1)
    {
        for (int i=0;i<8;i++)
        {
            if (code[i] != ascending[i])
            {
                printf("mixed\n");
                break;
            }
            else
                if (code[i] == 8)
                    printf("ascending\n");
        }
    }
    else if (code[0] == 8)
    {
        for (int i=0;i<8;i++)
        {
            if (code[i] != descending[i])
            {
                printf("mixed\n");
                break;
            }
            else
                if (code[i] == 1)
                    printf("descending\n");
        }
    }
    else
        printf("mixed\n");
    return 0;
}
