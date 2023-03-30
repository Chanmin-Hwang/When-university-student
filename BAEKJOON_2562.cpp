#include <iostream>
using namespace std;

int main(){
    int max = 0,idx,k;
    for (int i=1;i<=9;i++){
        cin >> k;
        if (max < k){
            max = k;
            idx = i;
        }
    }
    cout << max << '\n' << idx << '\n';
    return 0;
}