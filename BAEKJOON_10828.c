#include <stdio.h>
#include <string.h>

int top = -1;
int stack[10000];
void push(int k);
int pop(void);


int main(void){
    char tmp[10];
    int N,len;
    scanf("%d",&N);
    getchar();
    for (int i=0;i<N;i++){
        scanf("%[^\n ]",tmp);
        getchar();
        if (strcmp(tmp,"push") == 0){
            int k;
            scanf("%d",&k);
            getchar();
            push(k);
        }
        else if (strcmp(tmp,"pop") == 0){
            if (top == -1){
                printf("%d\n",top);
            }
            else{
                printf("%d\n",pop());
            }
        }
        else if (strcmp(tmp,"size") == 0){
            printf("%d\n",top+1);
        }
        else if (strcmp(tmp,"empty") == 0){
            printf("%d\n",top == -1 ? 1 : 0);
        }
        else if (strcmp(tmp,"top") == 0){
            printf("%d\n",top == -1 ? -1 : stack[top]);
        }
    }
    return 0;
}

void push(int k){
    top++;
    stack[top] = k;
}

int pop(void){
   int k;
   k = stack[top];
   top--;
   return k;
}