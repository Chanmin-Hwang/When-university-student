#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,sum;
    while (1){
        string s;
        sum = 0;
        cin >> n;
        if (n == -1){
            break;
        }
        s += to_string(n)+" = "; 
        for (int i=1;i<n;i++){
            if (n%i == 0){
                sum += i;
                s += to_string(i)+" + ";
            }
        }
        if (sum == n){
            s.replace(s.length()-3,3,"");
            cout << s << '\n';
        }
        else{
            cout << n << " is NOT perfect.\n";
        }
    }
    return 0;
}