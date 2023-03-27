#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int func(int N,int r,int c);

int main(void){
    int N,r,c;
    scanf("%d%d%d",&N,&r,&c);
    printf("%d\n",func(N,r,c));
    return 0;
}

int func(int N,int r,int c){
    int mid = pow(2,N-1),q;

    if (N == 0){
        return 0;
    }

    if ((r < mid) && (c < mid)){
        return func(N-1,r,c);
    }

    else if ((r < mid) && (c >= mid)){
        return mid*mid+func(N-1,r,c-mid);
    }
    
    else if ((r >= mid) && (c < mid)){
        return mid*mid*2+func(N-1,r-mid,c);
    }

    else if ((r >= mid) && (c >= mid)){
        return mid*mid*3+func(N-1,r-mid,c-mid);
    }
}