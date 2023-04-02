#include <iostream>
using namespace std;

int main(){
    int C,n;
    double avg,cnt;
    cin.tie(NULL);
    ios_base :: sync_with_stdio(false);
    cout<<fixed;
    cout.precision(3);
    cin >> C;
    for (int i=0;i<C;i++){
        cin >> n;
        avg = 0;
        int *arr = new int[n];
        for (int i=0;i<n;i++){
            cin >> arr[i];
            avg += arr[i];
        }
        avg /= n;
        cnt = 0;
        for (int i=0;i<n;i++){
            if (arr[i] > avg){
                cnt++;
            }
        }
        cnt /= n;
        cout << cnt*100 << "%\n";
    }
    return 0;
}