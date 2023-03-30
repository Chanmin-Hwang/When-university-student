#include <iostream>
using namespace std;

int main(){
    int *cnt = new int[200]{0};
    int N,v;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> v;
        cnt[v+100]++;
    }
    cin >> v;
    cout << cnt[v+100] << '\n';
    return 0;
}