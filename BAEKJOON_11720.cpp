#include <iostream>
#include <string>
using namespace std;

int main(){
    int N,sum = 0;
    string str;
    cin >> N;
    cin.ignore();
    getline(cin,str);

    for (int i=0;i<N;i++){
        sum += str[i]-48;
    }
    cout << sum << '\n';
}