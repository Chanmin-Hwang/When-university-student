#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *next;
}node;
typedef struct queue{
    node *front;
    node *rear;
    int cnt;
}queue;
void push(queue *q,int data);
int pop(queue *q);

int main(void){
    char tmp[10];
    int N,len;
    queue *q;
    q->cnt = 0;
    q->front = q->rear = NULL;
    scanf("%d",&N);
    getchar();
    for (int i=0;i<N;i++){
        scanf("%[^\n ]",tmp);
        getchar();
        if (strcmp(tmp,"push") == 0){
            int k;
            scanf("%d",&k);
            getchar();
            push(q,k);
        }
        else if (strcmp(tmp,"pop") == 0){
            if (q->cnt == 0){
                printf("-1\n");
            }
            else{
                printf("%d\n",pop(q));
            }
        }
        else if (strcmp(tmp,"size") == 0){
            printf("%d\n",q->cnt);
        }
        else if (strcmp(tmp,"empty") == 0){
            printf("%d\n",q->cnt == 0 ? 1 : 0);
        }
        else if (strcmp(tmp,"back") == 0){
            printf("%d\n",q->cnt == 0 ? -1 : q->rear->data);
        }
        else if (strcmp(tmp,"front") == 0){
            printf("%d\n",q->cnt == 0 ? -1 : q->front->data);
        }

    }
    return 0;
}

void push(queue *q,int data){
    node *new = (node *)malloc(sizeof(node));
    new->next = NULL;
    new->data = data;
    
    if (q->cnt == 0){
        q->front = new;
        q->rear = new;
    }
    
    else {
        q->rear->next = new;
        q->rear = new;
    }
    q->cnt++;
}

int pop(queue *q){
    node *n = (node *)calloc(1,sizeof(node));
    n = q->front;
    int data;
    data = n->data;
    q->front = n->next;
    free(n);
    q->cnt--;
    return data;
}