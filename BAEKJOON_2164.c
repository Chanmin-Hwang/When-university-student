#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef int data;

typedef struct node{
    data d;
    struct node *next;
} node;

typedef struct queue{
    node *front;
    node *rear;
    int count;
} queue;

bool empty(queue *); 
void enqueue(data,queue *); 
int dequeue(queue *); 
void reset(queue *); 

int main(void)
{
    int N;
    queue *q; 
	q = (queue *)malloc(sizeof(queue));
    reset(q);
    scanf("%d",&N);
    for (int i=1;i<=N;i++)
        enqueue(i,q);
    while (q->count > 1)
    {   
        dequeue(q);
        enqueue(q->front->d,q);
        dequeue(q);
    }   
    printf("%d\n",q->front->d);
    return 0;
}

bool empty(queue *q) 
{
    return ((bool) (q->front == NULL));
}

void enqueue(data d,queue *q) 
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->d = d;
    new_node->next = NULL;

    if (empty(q))
        q->front = new_node;
    else
        q->rear->next = new_node;

    q->rear = new_node;
    q->count++;
}

int dequeue(queue *q) 
{
    data d;
    node *p; 

    if (empty(q) == 1)
    {   
        printf("Error : Queue is empty!\n");
        return 0;
    }   

    p = q->front;
    d = q->front->d;
    q->front = p->next;
    free(p);
    q->count--;

    return d;
}

void reset(queue *q) 
{
    q->count = 0;
    q->front = NULL;
    q->rear = NULL;
}
