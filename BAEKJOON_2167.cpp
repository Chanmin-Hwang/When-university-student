#include <iostream>
using namespace std;

int main(){
    int N,M,i,j,x,y,k;
    cin >> N >> M;
    int arr[N][M];
    int Sum[N][M];
    for (i=0;i<N;i++){
        for (j=0;j<M;j++){
            cin >> k;
            arr[i][j] = k;
        }
    }
    Sum[0][0] = arr[0][0];
    for (i=0;i<N;i++){
        for (j=1;j<M;j++){
            Sum[i][j] += Sum[i][j-1];
        }
    }
    
    cin >> k;
    for (int o=0;o<k;o++){
        cin >> i >> j >> x >> y;
        cout << arr[x][y]-arr[i][j];       
    }
    return 0;
}