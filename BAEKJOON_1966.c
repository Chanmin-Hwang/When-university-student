#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    int idx;
    struct node *next;
}node;
typedef struct queue{
    node *front;
    node *rear;
    int cnt;
}queue;

void enqueue(queue *q,int *arr,int data,int idx);
int dequeue (queue *q,int *arr);

int main(void){
    int T,N,M,data,max;
    scanf("%d",&T);
    for (int i=0;i<T;i++){
        queue q;
        int *arr = (int *)calloc(10,4);
        q.cnt = 0;
        int answer = 0;
        scanf("%d%d",&N,&M);
        for (int o=0;o<N;o++){
            scanf("%d",&data);
            enqueue(&q,arr,data,o);
        }
        while (M != -1){
            max = 0;
            for (int o=0;o<=9;o++){
                if ((max < o)&&(arr[o] > 0)){
                    max = o;
                }
            }
            if (q.front->data >= max){
                if (q.front->idx == M){
                    M = -1;
                }
                dequeue(&q,arr);
                answer++;
            }
            else {
                enqueue(&q,arr,q.front->data,q.front->idx);
                dequeue(&q,arr);
            }
        }
        free(arr);
        printf("%d\n",answer);
    }
    return 0;
}

void enqueue(queue *q,int *arr,int data,int idx){
    node *new = (node *)calloc(1,sizeof(node));
    new->next = NULL;
    new->data = data;
    new->idx = idx;
    arr[data]++;

    if (q->cnt == 0){
        q->front = new;
    }
    else {
        q->rear->next = new;
    }
    q->cnt++;
    q->rear = new;
}

int dequeue (queue *q,int *arr){
    node *n = q->front;
    int data = n->data;
    q->front = n->next;
    arr[data]--;
    q->cnt--;
    free(n);
    return data;
}