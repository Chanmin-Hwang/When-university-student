#include <iostream>
using namespace std;

int main(){
    int N,M,k;
    cin.tie(NULL);
    ios_base :: sync_with_stdio(false);
    cin >> N >> M;
    int **matrix = new int*[N];

    for (int i=0;i<N;i++){
        matrix[i] = new int[M];
    }
    for (int i=0;i<N;i++){
        for (int o=0;o<M;o++){
            cin >> matrix[i][o];
        }
    }
    
    for (int i=0;i<N;i++){
        for (int o=0;o<M;o++){
            cin >> k;
            cout << matrix[i][o]+k << ' ';
        }
        cout << '\n';
    }
    
    for (int i=0;i<N;i++){
        delete matrix[i];
    }
    delete matrix;
    
    return 0;
}