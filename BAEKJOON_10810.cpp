#include <iostream>
using namespace std;

int main(){
    int N,M,i,j,k;
    cin >> N >> M;
    int *arr = new int[N+1]{0};

    for (int o=0;o<M;o++){
        cin >> i >> j >> k;
        for (;i<=j;i++){
            arr[i] = k;
        }
    }
    for (i=1;i<=N;i++){
        cout << arr[i] << ' ';
    }
    delete arr;
    cout << '\n';
    return 0;
}