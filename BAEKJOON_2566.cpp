#include <iostream>
using namespace std;

int main(){
    int max = -1,midx,nidx,k;
    for (int i=1;i<=9;i++){
        for (int o=1;o<=9;o++){
            cin >> k;
            if (k > max){
                max = k;
                midx = i;
                nidx = o;
            }
        }
    }
    cout << max << '\n' << midx << ' ' << nidx << '\n';
    return 0;
}