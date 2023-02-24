#include <stdio.h>
int main(void)
{
    int N, M, B, arr[257] = {0, }, tmp, max = 0;
    scanf("%d %d %d", &N, &M, &B);
    for (int i = 0; i < N*M; i++)
	{
        scanf("%d", &tmp);
        arr[tmp]++;
        max < tmp && (max = tmp);
	}
    
	int result = 128000000, height;
    
	for (int fl = max; fl >= 0; fl--)
	{
        int set = 0, remove = 0;
        
		for (int i = 0; i < 257; i++)
            if (arr[i])
                if (i < fl)
                    set += arr[i]*(fl-i);
                else if (i > fl)
                    remove += arr[i]*(i-fl);
                
        int time = set + remove*2;
        int I = B + remove - set;
        if (time < result && I >= 0)
		{
            height = fl;
            result = time;	
        }
    }
    printf("%d %d\n", result, height);
	return 0;
}
