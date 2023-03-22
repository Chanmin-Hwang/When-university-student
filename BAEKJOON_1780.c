#include <stdio.h>
#include <stdlib.h>

int answer[3];

void func(int end,int startx,int starty,int **arr);

int main(void){
    
    int N;
    scanf("%d",&N);
    int **arr = (int **)calloc(N,sizeof(int *));
    
    for (int i=0;i<N;i++){
        arr[i] = (int *)calloc(N,sizeof(int));
    }
    
    for (int i=0;i<N;i++){
        for (int o=0;o<N;o++){
            scanf("%d",&arr[i][o]);
        }
    }
    
    func(N,0,0,arr);
    
    for (int i=0;i<N;i++){
        free(arr[i]);
    }
    free(arr);

    for(int i=0;i<3;i++){
        printf("%d\n",answer[i]);
    }

    return 0;
}

void func(int end,int startx,int starty,int **arr){
    int target = arr[starty][startx];
 
    for (int i=starty;i<starty+end;i++){
        for (int o=startx;o<startx+end;o++){
            if (target != arr[i][o]){
                
                func(end/3,startx,starty,arr);
                func(end/3,startx+end/3,starty,arr);
                func(end/3,startx+end/3*2,starty,arr);
                
                func(end/3,startx,starty+end/3,arr);
                func(end/3,startx+end/3,starty+end/3,arr);
                func(end/3,startx+end/3*2,starty+end/3,arr);

                func(end/3,startx,starty+end/3*2,arr);
                func(end/3,startx+end/3,starty+end/3*2,arr);
                func(end/3,startx+end/3*2,starty+end/3*2,arr);

                return;
            }
        }
    }

    answer[target+1]++;
}