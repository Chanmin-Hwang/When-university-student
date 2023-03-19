#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *before;
}node;

typedef struct deque{
    node *front;
    node *back;
    int cnt;
}deque;

void push_front(deque *d,int x);
void push_back(deque *d,int x);
int pop_front(deque *d);
int pop_back(deque *d);

int main(void){
    deque q;
    q.cnt = 0;
    int N;
    scanf("%d",&N);
    getchar();
    char tmp[20];
    for (int i=0;i<N;i++){
        scanf("%[^ \n]",tmp);
        getchar();
        if (strcmp(tmp,"push_front") == 0){
            int k;
            scanf("%d",&k);
            getchar();
            push_front(&q,k);
        }
        else if (strcmp(tmp,"push_back") == 0){
            int k;
            scanf("%d",&k);
            getchar();
            push_back(&q,k);
        }
        else if (strcmp(tmp,"pop_front") == 0){
            if (q.cnt == 0){
                printf("-1\n");
            }
            else {
                printf("%d\n",q.cnt == 0 ? -1 : pop_front(&q));
            }
        }
        else if (strcmp(tmp,"pop_back") == 0){
            if (q.cnt == 0){
                printf("-1\n");
            }
            else {
                printf("%d\n",q.cnt == 0 ? -1 : pop_back(&q));
            }
        }
        else if (strcmp(tmp,"size") == 0){
            printf("%d\n",q.cnt);
        }
        else if (strcmp(tmp,"empty") == 0){
            printf("%d\n",q.cnt == 0 ? 1 : 0);
        }
        else if (strcmp(tmp,"front") == 0){
            printf("%d\n",q.cnt == 0 ? -1 : q.front->data);
        }
        else if (strcmp(tmp,"back") == 0){
            printf("%d\n",q.cnt == 0 ? -1 : q.back->data);
        }
    }
    return 0;
}

void push_front(deque *d,int x){
    node *new = (node *)calloc(1,sizeof(node));
    new->data = x;
    new->before = NULL;
    if (d->cnt == 0){
        d->back = new;
        new->next = NULL;
    }
    else {
        new->next = d->front;
        d->front->before = new;
    }
    d->front = new;
    d->cnt++;
}

void push_back(deque *d,int x){
    node *new = (node *)calloc(1,sizeof(node));
    new->data = x;
    if (d->cnt == 0){
        d->front = new;
    }
    else {
        d->back->next = new;
        new->before = d->back;
    }
    d->back = new;
    new->next = NULL;
    d->cnt++;
}

int pop_front(deque *d){
    int data;
    node *n = d->front;
    data = d->front->data;   
    d->front = n->next;
    free(n);
    d->cnt--;
    return data;
}

int pop_back(deque *d){
    int data;
    node *n = d->back;
    data = d->back->data;
    d->back = n->before;
    free(n);
    d->cnt--;
    return data;
}