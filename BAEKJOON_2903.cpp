#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long *arr = new long long[16];
    arr[1] = 3;
    for (int i=2;i<=15;i++){
        arr[i] = arr[i-1]+arr[i-1]-1;
    }
    cout << arr[N]*arr[N];
    return 0;
}