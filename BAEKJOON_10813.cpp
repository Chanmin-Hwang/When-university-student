#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,M,i,j;
    cin >> N >> M;
    int *arr = new int[N+1];
    
    for (i=1;i<=N;i++){
        arr[i] = i;
    }

    for (int o=0;o<M;o++){
        cin >> i >> j;
        swap(arr[i],arr[j]);
    }

    for (i=1;i<=N;i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;
}