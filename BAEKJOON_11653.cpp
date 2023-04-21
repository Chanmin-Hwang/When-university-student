#include <iostream>
using namespace std;

int main(){
    int N,i=2;
    cin >> N;
    if (N==1){
        return 0;
    }
    else {
        while (N > 0){
            if (N%i == 0){
                N /= i;
                cout << i << '\n';
            }
            else {
                i++;
            }
            if (N < i){
                break;
            }
        }
    }
    return 0;
}