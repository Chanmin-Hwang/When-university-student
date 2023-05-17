#include <iostream>
using namespace std;

int main(){
    string str;
    while (!cin.eof()){
        getline(cin,str,'\0');
        cout << str;

    }
    return 0;
}