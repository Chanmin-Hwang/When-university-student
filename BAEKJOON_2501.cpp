#include <iostream>
using namespace std;

int main(){
    int N,K,answer = 0;
    cin >> N >> K;
    for (int i=1;i<=N;i++){
        if (N%i == 0){
            if (!(--K)){
                answer = i;
                break;
            }
            
        }
    }
    cout << answer << '\n';
    return 0;
}