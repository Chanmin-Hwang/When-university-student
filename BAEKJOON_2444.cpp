#include <iostream>
using namespace std;

int main(){
    int N,star = 1,space;
    cin >> N;
    space = N-1;
    for (int i=1;i<=2*N-1;i++){
        for (int o=0;o<space;o++){
            cout << ' ';
        }
        for (int o=0;o<star;o++){
            cout << '*';
        }
        cout << '\n';
        if (i < N){
            space--;
            star += 2;
        }
        else {
            space++;
            star -= 2;
        }
    }
    return 0;
}