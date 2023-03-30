#include <iostream>
using namespace std;

int main(){
    int k;
    int *cnt = new int[31]{0};
    for (int i=1;i<=28;i++){
        cin >> k;
        cnt[k]++;
    }
    for (int i=1;i<=30;i++){
        if (cnt[i] == 0){
            cout << i << '\n';
        }
    }
    return 0;
}