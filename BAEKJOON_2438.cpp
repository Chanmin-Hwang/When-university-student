#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i=1;i<=N;i++){
        for (int o=1;o<=i;o++){
            cout << '*';
        }
        cout << '\n';
    }
    return 0;
}