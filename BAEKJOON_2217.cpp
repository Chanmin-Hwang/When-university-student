#include <iostream>
#include <cstdlib>
using namespace std;


int compare(const void *p,const void *q){return *(int *)p-*(int *)q;}
int main(){
    int N;
    cin >> N;
    int *arr = new int[N];
    for (int i=0;i<N;i++){cin >> arr[i];}

    qsort(arr,N,4,compare);
    int max=0;
    for (int i=0;i<N;i++){if (max < arr[i]*(N-i)) max = arr[i]*(N-i);}
    cout << max << '\n';
    return 0;
}