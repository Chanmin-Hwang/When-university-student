#include <iostream>
using namespace std;

int main(){
    int N,cnt = 0,idx = 0;
    int *arr = new int[4];
    cin >> N;
    for (int i=1;i<=N;i++){
        if (N < 100){
            cnt = N;
        }
        else if(N == 1000){
            cnt = 144;
        }
        else{
            cnt = 99;
            for (int i=100;i<=N;i++){
                if (i/100-i%100/10 == i%100/10-i%10){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << '\n';
}