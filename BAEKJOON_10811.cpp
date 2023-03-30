#include <iostream>
using namespace std;

int main(){
    int N,M,i,j;
    cin >> N >> M;
    int *arr = new int[N+1];
    for (int o=1;o<=N;o++){
        arr[o] = o;
    }
    for (int o=0;o<M;o++){
        cin >> i >> j;
        while (i < j){
            swap(arr[i++],arr[j--]);
        }
    }
    for (int o=1;o<=N;o++){
        cout << arr[o] << ' ';
    }
    cout << '\n';
    return 0;
}