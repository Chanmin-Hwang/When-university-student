#include <iostream>
using namespace std;

int main(){
    int *arr = new int[42]{0};
    int k,cnt = 0;
    for (int i=0;i<10;i++){
        cin >> k;
        arr[k%42]++;
    }
    for (int i=0;i<42;i++){
        if (arr[i] != 0){
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}