#include <iostream>
#include <string>
using namespace std;

int main(){
    int T;
    string str;
    cin >> T;
    cin.ignore();
    for (int i=0;i<T;i++){
        getline(cin,str);
        cout << str[0] << str[str.length()-1] << '\n';
    }
    return 0;
}