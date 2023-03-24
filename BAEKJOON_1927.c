#include <stdio.h>
#include <stdlib.h>

int size;

void insert(long long *heap,int key);
long long pop(long long *heap);

int main(void){
    int N;
    long long key;
    scanf("%d",&N);
    long long *heap = (long long *)calloc(N+1,sizeof(long long));

    for (int i=0;i<N;i++){
        scanf("%lld",&key);
        
        if (key == 0){
            if (size == 0){
                printf("0\n");
            }
            
            else {
                printf("%lld\n",pop(heap));
            }
        }
        
        else {
            insert(heap,key);
        }
    }
    
    return 0;
}

void insert(long long *heap,int key){
    int i;
    i = ++(size);

    while ((i != 1) && (key < heap[i/2])){
        heap[i] = heap[i/2];
        i /= 2;
    }

    heap[i] = key;
}

long long pop(long long *heap){
    int parent,child;
    long long tmp,key;

    key = heap[1];
    tmp = heap[(size)--];
    parent = 1;
    child = 2;

    while (child <= size){
        if ((child < size) && (heap[child] > heap[child+1])){
            child++;
        }

        if (tmp <= heap[child]){
            break;
        }

        heap[parent] = heap[child];
        parent = child;
        child *= 2;
    }

    heap[parent] = tmp;
    return key;
}