#include <stdio.h>


int N;
int arr[129][129];
int w;
int b;

void check(int size, int startX, int startY)
{
    int target = arr[startX][startY];
    
    for(int x = startX; x < startX + size; x++)
    {
        for(int y = startY; y < startY + size; y++)
        {
            if(arr[x][y] != target)
            {
                check(size/2, startX, startY);
                check(size/2, startX + size/2, startY);
                check(size/2, startX, startY + size/2);
                check(size/2, startX + size/2, startY + size/2);
                
                return;
            }
        }
    }
    
    if(target == 0) w++;
    else b++;
}

int main()
{
    scanf("%d",&N);
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N ; j++)
            scanf("%d",&arr[i][j]);
    
    check(N, 0, 0);
    
    printf("%d\n%d\n",w,b);
}