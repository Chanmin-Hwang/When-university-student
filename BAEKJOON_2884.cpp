#include <iostream>
using namespace std;

int main(){
    int H,M;
    cin >> H >> M;
    if ((M < 45)){
        if (H == 0){
            H = 23;
            M = M+15;
        }
        else {
            H -= 1;
            M = M+15;
        }
    }
    else {
        M -= 45;
    }
    cout << H << " " << M << endl;
    return 0;
}