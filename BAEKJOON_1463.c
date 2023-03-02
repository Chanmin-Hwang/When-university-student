#include <stdio.h>
#include <stdlib.h>
int ccl_min(int a, int b);
int main(void){
    int N;
    scanf("%d", &N);
	int *arr = (int *)calloc(N+1,4);
    arr[0]=0, arr[1]=0;
    for(int i=2; i<=N; i++){
        int min = arr[i-1] + 1;
        if(i%3==0){
            min = ccl_min(min, arr[i/3]+1);
        }
        if(i%2==0){
            min = ccl_min(min, arr[i/2]+1);
        }
        arr[i] = min;
    }
    printf("%d\n", arr[N]);
	free(arr);
}
int ccl_min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}
