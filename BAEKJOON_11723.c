#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int *arr = (int *)calloc(21,sizeof(int));
    char tmp[10];
    int M,k;
    scanf("%d",&M);
    getchar();
    for (int i=0;i<M;i++){
        scanf("%[^ \n]",tmp);
        getchar();
        if (strcmp("add",tmp) == 0){
            scanf("%d",&k);
            getchar();
            if (!(arr[k])){
                arr[k]++;
            }
        }
        else if (strcmp("remove",tmp) == 0){
            scanf("%d",&k);
            getchar();
            if (arr[k]){
                arr[k]--;
            }
        }
        else if (strcmp("check",tmp) == 0){
            scanf("%d",&k);
            getchar();
            printf("%d\n",arr[k]);
        }
        else if (strcmp("toggle",tmp) == 0){
            scanf("%d",&k);
            getchar();
            arr[k] == 0 ? arr[k]++ : arr[k]--;
        }
        else if (strcmp("all",tmp) == 0){
            for (int o=1;o<=20;o++){
                arr[o] = 1;
            }
        }
        else if (strcmp("empty",tmp) == 0){
            for (int o=1;o<=20;o++){
                arr[o] = 0;
            }
        }
    }
    free(arr);
    return 0;
}