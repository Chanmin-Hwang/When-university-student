#include <stdio.h>
#define max(a,b) a>b?a:b
int arr[301];
int stair[301];
int main() 
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) 
        scanf("%d", &stair[i]);
    arr[0] = 0;
    arr[1] = stair[1];
    arr[2] = stair[1] + stair[2];
    for (int i = 3; i <= N; i++) 
        arr[i] = stair[i] + (max(arr[i - 2], stair[i - 1] + arr[i - 3]));
    printf("%d\n", arr[N]);
    return 0;
}
