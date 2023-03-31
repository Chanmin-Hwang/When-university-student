#include <iostream>
#include <string>
using namespace std;

int main(){
    int T,R;
    string S;
    string :: size_type len;
    cin >> T;
    for (int i=0;i<T;i++){
        string P;
        cin >> R;
        cin.ignore();
        getline(cin,S);
        len = S.length();

        for (int o=0;o<len;o++){
            P.append(R,S[o]);
        }
        cout << P << '\n';
    }
    return 0;
}