#include <iostream>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;
    int *arr = new int[N+1];
    for (int i = 1; i <= N; i++) {
        arr[i] = i;
    }
    int i, j, k;
    for (int p = 0; p < M; p++) {

        cin >> i >> j>> k;
        int start = i;  
        int brr[101] = { 0 };
        for (int q = i;q<k;q++) {
            brr[q] = arr[q];    
        }
        int cnt = 0;
        for (int q = k; q <= j; q++) {
            arr[start] = arr[q];    
            start++;    
        }
       
        for (int q = i; q < k; q++) {
            arr[start] = brr[q];
            start++;
        }
        
    }

    for (int i = 1; i <= N; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
    return 0;

}