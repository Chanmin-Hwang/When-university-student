#include <iostream>
using namespace std;

int main(){
    int N,x,max = -1000001,min = 1000001;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> x;
        if (max < x){
            max = x;
        }
        if (min > x){
            min = x;
        }
    }
    cout << min << ' ' << max << '\n';
    return 0;
}