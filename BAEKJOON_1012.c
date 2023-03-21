#include <stdio.h>
#include <stdlib.h>

void dfs(int **arr,int **visited,int o,int j,int N,int M);

int main(void){
    int T,M,N,K,p,q,answer;
    scanf("%d",&T);
    
    int **arr = (int **)calloc(50,sizeof(int *));
    int **visited = (int **)calloc(50,sizeof(int *));
        
    for (int o=0;o<50;o++){
        arr[o] = (int *)calloc(50,sizeof(int));
        visited[o] = (int *)calloc(50,sizeof(int));
    }

    for (int i=0;i<T;i++){
        answer = 0;
        scanf("%d%d%d",&M,&N,&K);

        for (int o=0;o<N;o++){
            for (int j=0;j<M;j++){
                arr[o][j] = 0;
                visited[o][j] = 0;
            }
        }
                
        for (int o=0;o<K;o++){
            scanf("%d%d",&p,&q);
            arr[q][p]++;
        }
        
        for (int o=0;o<N;o++){
            for (int j=0;j<M;j++){
                if ((arr[o][j] == 1)&&(visited[o][j] == 0)){
                    dfs(arr,visited,o,j,N,M);
                    answer++;
                }
            }
        }
        
        printf("%d\n",answer);
    }
    for (int o=0;o<50;o++){
        free(arr[o]);
        free(visited[o]);
    }
    free(arr);
    free(visited);
    return 0;
}

void dfs(int **arr,int **visited,int o,int j,int N,int M){
    visited[o][j] = 1;
    
    if (o >= 1)
        if ((arr[o-1][j] == 1) && (visited[o-1][j] == 0)){
            dfs(arr,visited,o-1,j,N,M);
        }
        
    if (j >= 1)
        if ((arr[o][j-1] == 1) && (visited[o][j-1] == 0)){
            dfs(arr,visited,o,j-1,N,M);
        }
    if (o <= N-2)
        if ((arr[o+1][j] == 1) && (visited[o+1][j] == 0)){
            dfs(arr,visited,o+1,j,N,M);
        }
    if (j <= M-2)       
        if ((arr[o][j+1] == 1) && (visited[o][j+1] == 0)){
            dfs(arr,visited,o,j+1,N,M);
        }
}