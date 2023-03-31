#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string :: size_type len = str.length();
    for (int i=0;i<26;i++){
        for (int o=0;o<len;o++){
            if (i+97 == str[o]){
                cout << o << ' ';
                break;
            }
            else if ((o == len-1) && (i+97 != str[o])){
                cout << -1 << ' ';
            }
        }
    }
    cout << '\n';
    return 0;
}