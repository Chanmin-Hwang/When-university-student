#include <iostream>
using namespace std;

int main(){
    int arr[100][100] = {0};
    int N,x,y,sum = 0;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> x >> y;
        for (int p=x;p<x+10;p++){
            for (int q=y;q<y+10;q++){
                arr[p][q]++;
            }
        }
    }
    for (int p=1;p<100;p++){
        for (int q=1;q<100;q++){
            if (arr[p][q] > 0){
                sum++;
            }
        }
    }
    cout << sum << '\n';
    return 0;
}